char *__fastcall num2str_uint128(char *s, unsigned __int64 a2, unsigned __int64 a3, int a4, char a5)
{
  unsigned __int64 v6; // rax
  char *v10; // rbp
  unsigned __int64 v11; // rcx
  char *v12; // rax
  char v13; // si
  unsigned __int8 v14; // si
  char v15; // dl
  unsigned __int64 v16; // rcx
  char *v17; // rax
  char v18; // si
  unsigned __int8 v19; // si
  char v20; // dl
  size_t v21; // rdi
  size_t v22; // rax
  size_t v23; // rbp
  unsigned __int64 v25; // rcx
  char *v26; // rax
  char v27; // dl
  char *v28; // rdx
  unsigned __int64 v29; // rcx
  char *v30; // rax
  char v31; // dl
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  char *v34; // rax
  char v35; // cl
  unsigned __int8 v36; // cl
  char v37; // dl
  char *v38; // rax
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r9
  char *v41; // rax
  char v42; // dl
  char *v43; // rdx
  char *v44; // r11
  char *v45; // r11
  char v46; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v47; // [rsp+8h] [rbp-20h]

  v6 = a2;
  v47 = __readfsqword(0x28u);
  if ( __PAIR128__(a3, a2) == 0 )
  {
    v21 = (int)b2a_width(16, (unsigned int)a4);
    v22 = 1;
    if ( a5 )
      v22 = v21;
    v23 = v22;
    memset(s, 48, v22);
    v10 = &s[v23];
    *v10 = 0;
    return v10;
  }
  if ( a5 )
  {
    if ( a4 == 8 )
    {
      do
      {
        v6 = sub_8164A0(&v46, v6, a3, 8u);
        *v45 = v46 + 48;
      }
      while ( v45 != s );
      v10 = s + 43;
      goto LABEL_9;
    }
    if ( a4 <= 8 )
    {
      if ( a4 == 2 )
      {
        v25 = a3;
        v26 = s + 63;
        do
        {
          v27 = v25;
          v25 >>= 1;
          *v26 = (v27 & 1) + 48;
          v28 = v26--;
        }
        while ( v28 != s );
        v29 = a2;
        v30 = s + 127;
        do
        {
          v31 = v29;
          --v30;
          v29 >>= 1;
          v30[1] = (v31 & 1) + 48;
        }
        while ( v30 != s + 63 );
        v10 = s + 128;
        goto LABEL_9;
      }
    }
    else
    {
      if ( a4 == 10 )
      {
        do
        {
          v6 = sub_8164A0(&v46, v6, a3, 0xAu);
          *v44 = v46 + 48;
        }
        while ( v44 != s );
        v10 = s + 39;
        goto LABEL_9;
      }
      v11 = a3;
      v12 = s + 15;
      if ( a4 == 16 )
      {
        while ( 1 )
        {
          v13 = v11;
          v11 >>= 4;
          v14 = v13 & 0xF;
          v15 = v14 + 48;
          if ( v14 >= 0xAu )
            v15 = v14 + 55;
          *v12 = v15;
          if ( v12 == s )
            break;
          --v12;
        }
        v16 = a2;
        v17 = s + 31;
        do
        {
          v18 = v16;
          v16 >>= 4;
          v19 = v18 & 0xF;
          v20 = v19 + 48;
          if ( v19 >= 0xAu )
            v20 = v19 + 55;
          *v17-- = v20;
        }
        while ( v17 != s + 15 );
        v10 = s + 32;
        goto LABEL_9;
      }
    }
    goto LABEL_42;
  }
  if ( a3 )
  {
    if ( a4 == 10 )
    {
      v10 = sub_8169F0(s, a2, a3);
      goto LABEL_9;
    }
    if ( a4 > 10 )
    {
      if ( a4 == 16 )
      {
        v10 = sub_816890(s, a3);
        v34 = v10 + 15;
        if ( s == v10 )
        {
          if ( v33 )
            v10 = sub_816890(v10, v33);
        }
        else
        {
          while ( 1 )
          {
            v35 = v32;
            v32 >>= 4;
            v36 = v35 & 0xF;
            v37 = v36 + 48;
            if ( v36 >= 0xAu )
              v37 = v36 + 55;
            *v34 = v37;
            if ( v10 == v34 )
              break;
            --v34;
          }
          v10 += 16;
        }
        goto LABEL_9;
      }
    }
    else
    {
      if ( a4 == 2 )
      {
        v38 = sub_816520(s, a3);
        v10 = v38;
        if ( s == v38 )
        {
          if ( v40 )
            v10 = sub_816520(v38, v40);
        }
        else
        {
          v41 = v38 + 63;
          do
          {
            v42 = v39;
            v39 >>= 1;
            *v41 = (v42 & 1) + 48;
            v43 = v41--;
          }
          while ( v43 != v10 );
          v10 += 64;
        }
        goto LABEL_9;
      }
      if ( a4 == 8 )
      {
        v10 = sub_816920(s, a2, a3);
LABEL_9:
        *v10 = 0;
        return v10;
      }
    }
LABEL_42:
    v10 = s;
    goto LABEL_9;
  }
  return (char *)num2str_uint64(s);
}

