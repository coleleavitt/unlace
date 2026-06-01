char *__fastcall num2str_uint64(char *s, unsigned __int64 a2, int a3, char a4)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rsi
  char *result; // rax
  int v8; // r8d
  unsigned int v9; // r9d
  char *v10; // rdx
  char v11; // si
  unsigned __int8 v12; // si
  char v13; // cl
  char *v14; // rax
  char v15; // dl
  char *v16; // rdx
  int v17; // eax
  size_t v18; // rdx
  size_t v19; // rbp
  char *v20; // rax
  char v21; // cl
  unsigned __int8 v22; // cl
  char v23; // dl
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  char *v26; // rdx
  char v27; // cl
  char *v28; // rcx
  char *v29; // rcx
  char v30; // dl
  unsigned __int64 v31; // rsi
  char *v32; // rax
  unsigned int v33; // ecx
  char *v34; // rax
  char v35; // dl
  char *v36; // rdx
  char *v37; // rax
  char v38; // dl

  if ( a2 )
  {
    v5 = a2;
    if ( a4 )
    {
      if ( a3 == 10 )
      {
        v29 = s + 19;
        do
        {
          v30 = v5;
          v31 = 10 * (v5 / 0xA);
          v5 /= 0xAu;
          v32 = v29--;
          v29[1] = v30 - v31 + 48;
        }
        while ( v32 != s );
        result = s + 20;
        goto LABEL_21;
      }
      if ( a3 > 10 )
      {
        v20 = s + 15;
        if ( a3 == 16 )
        {
          while ( 1 )
          {
            v21 = v5;
            v5 >>= 4;
            v22 = v21 & 0xF;
            v23 = v22 + 48;
            if ( v22 >= 0xAu )
              v23 = v22 + 55;
            *v20 = v23;
            if ( s == v20 )
              break;
            --v20;
          }
          result = s + 16;
          goto LABEL_21;
        }
      }
      else
      {
        if ( a3 == 2 )
        {
          v33 = HIDWORD(a2);
          v34 = s + 31;
          do
          {
            v35 = v33;
            v33 >>= 1;
            *v34 = (v35 & 1) + 48;
            v36 = v34--;
          }
          while ( v36 != s );
          v37 = s + 63;
          do
          {
            v38 = v5;
            --v37;
            LODWORD(v5) = (unsigned int)v5 >> 1;
            v37[1] = (v38 & 1) + 48;
          }
          while ( v37 != s + 31 );
          result = s + 64;
          goto LABEL_21;
        }
        v14 = s + 21;
        if ( a3 == 8 )
        {
          do
          {
            v15 = v5;
            v5 >>= 3;
            *v14 = (v15 & 7) + 48;
            v16 = v14--;
          }
          while ( v16 != s );
          result = s + 22;
          goto LABEL_21;
        }
      }
      goto LABEL_37;
    }
    v6 = HIDWORD(a2);
    if ( v6 )
    {
      if ( a3 == 8 )
      {
        result = sub_839A90(s, v5);
        goto LABEL_21;
      }
      if ( a3 <= 8 )
      {
        if ( a3 == 2 )
        {
          result = sub_839BD0(s, v6);
          if ( s == result )
          {
            if ( v24 )
              result = sub_839BD0(result, v24);
          }
          else
          {
            v26 = result + 31;
            do
            {
              v27 = v25;
              v25 >>= 1;
              *v26 = (v27 & 1) + 48;
              v28 = v26--;
            }
            while ( v28 != result );
            result += 32;
          }
          goto LABEL_21;
        }
      }
      else
      {
        if ( a3 == 10 )
        {
          result = sub_839B10(s, v5);
          goto LABEL_21;
        }
        if ( a3 == 16 )
        {
          result = sub_839E80(s, v6);
          v10 = result + 7;
          if ( s == result )
          {
            if ( v8 )
              result = sub_839E80(result, v9);
          }
          else
          {
            while ( 1 )
            {
              v11 = v9;
              v9 >>= 4;
              v12 = v11 & 0xF;
              v13 = v12 + 48;
              if ( v12 >= 0xAu )
                v13 = v12 + 55;
              *v10 = v13;
              if ( v10 == result )
                break;
              --v10;
            }
            result += 8;
          }
          goto LABEL_21;
        }
      }
LABEL_37:
      result = s;
LABEL_21:
      *result = 0;
      return result;
    }
    return (char *)num2str_uint32(s);
  }
  else
  {
    v17 = b2a_width(8, (unsigned int)a3);
    v18 = 1;
    if ( a4 )
      v18 = v17;
    v19 = v18;
    memset(s, 48, v18);
    s[v19] = 0;
    return &s[v19];
  }
}
