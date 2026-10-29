const char *__fastcall lex_print_token(__int64 *a1, __int64 a2)
{
  unsigned __int16 v3; // dx
  unsigned __int64 v5; // r12
  const char *v6; // rbp
  char *v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // rsi
  unsigned int v12; // edx
  char *v13; // rsi
  int v14; // ecx
  size_t v15; // rax
  size_t v16; // rbp
  __int64 v17; // rsi
  char *p_s; // rax
  char *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rsi
  char *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  void *ptr; // [rsp+0h] [rbp-458h] BYREF
  __int128 v29; // [rsp+8h] [rbp-450h]
  char v30[5]; // [rsp+1Bh] [rbp-43Dh] BYREF
  char s; // [rsp+20h] [rbp-438h] BYREF
  char v32; // [rsp+21h] [rbp-437h] BYREF
  unsigned __int64 v33; // [rsp+428h] [rbp-30h]

  v3 = *(_WORD *)(a2 + 24);
  v33 = __readfsqword(0x28u);
  switch ( v3 )
  {
    case 1u:
      v17 = *a1;
      if ( (unsigned __int64)a1[2] <= 5 )
      {
        v22 = qvector_reserve(a1, v17, 6, 1);
        *a1 = v22;
        v17 = v22;
      }
      a1[1] = 6;
      *(_DWORD *)v17 = 1145980220;
      *(_BYTE *)(v17 + 4) = 62;
      *(_BYTE *)(*a1 + 5) = 0;
      goto LABEL_8;
    case 2u:
      goto LABEL_2;
    case 3u:
    case 6u:
    case 8u:
      sub_3573A0((char **)a1);
      goto LABEL_8;
    case 4u:
      v9 = *(_QWORD *)(a2 + 8);
      ptr = nullptr;
      v10 = 0;
      v29 = 0;
      v11 = haystack;
      if ( v9 )
      {
        v11 = *(const char **)a2;
        v10 = (unsigned int)(v9 - 1);
      }
      qstr2user(&ptr, v11, v10);
      sub_3573A0((char **)a1);
      if ( ptr )
      {
        *(_QWORD *)&v29 = 0;
        qfree(ptr);
      }
      goto LABEL_8;
    case 5u:
      v12 = *(_DWORD *)(a2 + 28);
      if ( v12 )
      {
        v13 = v30;
        v14 = 24 * (v12 != (char)v12);
        do
        {
          if ( (unsigned __int8)(v12 >> v14) )
            *v13++ = v12 >> v14;
          v14 -= 8;
        }
        while ( v14 != -8 );
        *v13 = 0;
        str2user(&s, v30, 1024);
        sub_3573A0((char **)a1);
      }
      else
      {
        v23 = (char *)*a1;
        if ( (unsigned __int64)a1[2] <= 4 )
        {
          v25 = qvector_reserve(a1, v23, 5, 1);
          *a1 = v25;
          v23 = (char *)v25;
        }
        a1[1] = 5;
        *(_DWORD *)v23 = 657480743;
        *(_BYTE *)(*a1 + 4) = 0;
      }
      goto LABEL_8;
    case 7u:
      realtoasc(&s, 1024, a2 + 40, 50);
      goto LABEL_21;
    default:
      if ( (unsigned __int16)(v3 - 128) <= 0x37Fu )
      {
LABEL_2:
        if ( (__int64 *)a2 != a1 )
        {
          v5 = *(_QWORD *)(a2 + 8);
          if ( v5 < 2 )
          {
LABEL_22:
            a1[1] = 0;
            return haystack;
          }
          v6 = *(const char **)a2;
          v7 = (char *)*a1;
          if ( a1[2] < v5 )
          {
            v26 = qvector_reserve(a1, *a1, v5, 1);
            *a1 = v26;
            v7 = (char *)v26;
          }
          a1[1] = v5;
          memmove(v7, v6, v5 - 1);
          *(_BYTE *)(*a1 + v5 - 1) = 0;
        }
      }
      else if ( v3 == 11868 )
      {
        v24 = (char *)*a1;
        if ( (unsigned __int64)a1[2] <= 3 )
        {
          v27 = qvector_reserve(a1, v24, 4, 1);
          *a1 = v27;
          v24 = (char *)v27;
        }
        a1[1] = 4;
        *(_WORD *)v24 = 11822;
        v24[2] = 46;
        *(_BYTE *)(*a1 + 3) = 0;
      }
      else
      {
        if ( v3 > 0xFFu )
        {
          s = HIBYTE(v3);
          p_s = &v32;
        }
        else
        {
          p_s = &s;
        }
        *p_s = v3;
        p_s[1] = 0;
LABEL_21:
        v15 = strlen(&s);
        v16 = v15;
        if ( !v15 )
          goto LABEL_22;
        v19 = (char *)*a1;
        v20 = v15 + 1;
        if ( a1[2] < v15 + 1 )
        {
          v21 = qvector_reserve(a1, *a1, v15 + 1, 1);
          *a1 = v21;
          v19 = (char *)v21;
        }
        a1[1] = v20;
        memmove(v19, &s, v16);
        *(_BYTE *)(*a1 + v16) = 0;
      }
LABEL_8:
      if ( a1[1] )
        return (const char *)*a1;
      return haystack;
  }
}

