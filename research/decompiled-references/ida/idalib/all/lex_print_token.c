const char *__fastcall lex_print_token(__int64 *a1, __int64 a2)
{
  unsigned __int16 v3; // dx
  unsigned __int64 v5; // r12
  const char *v6; // rbp
  char *v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // rsi
  unsigned __int64 v12; // rsi
  int v13; // eax
  char *v14; // rdx
  int v15; // ecx
  size_t v16; // rax
  size_t v17; // rbp
  __int64 v18; // rsi
  char *p_s; // rax
  char *v20; // rdi
  size_t v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // rsi
  char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  void *ptr; // [rsp+0h] [rbp-468h] BYREF
  __int128 v30; // [rsp+8h] [rbp-460h]
  char v31[9]; // [rsp+27h] [rbp-441h] BYREF
  char s; // [rsp+30h] [rbp-438h] BYREF
  char v33; // [rsp+31h] [rbp-437h] BYREF
  unsigned __int64 v34; // [rsp+438h] [rbp-30h]

  v3 = *(_WORD *)(a2 + 24);
  v34 = __readfsqword(0x28u);
  switch ( v3 )
  {
    case 1u:
      v18 = *a1;
      if ( (unsigned __int64)a1[2] <= 5 )
      {
        v23 = qvector_reserve(a1, v18, 6, 1);
        *a1 = v23;
        v18 = v23;
      }
      a1[1] = 6;
      *(_DWORD *)v18 = 1145980220;
      *(_BYTE *)(v18 + 4) = 62;
      *(_BYTE *)(*a1 + 5) = 0;
      goto LABEL_8;
    case 2u:
      goto LABEL_2;
    case 3u:
    case 6u:
    case 8u:
      sub_35A790((char **)a1);
      goto LABEL_8;
    case 4u:
      v9 = *(_QWORD *)(a2 + 8);
      ptr = nullptr;
      v10 = 0;
      v30 = 0;
      v11 = haystack;
      if ( v9 )
      {
        v11 = *(const char **)a2;
        v10 = (unsigned int)(v9 - 1);
      }
      qstr2user(&ptr, v11, v10);
      sub_35A790((char **)a1);
      if ( ptr )
      {
        *(_QWORD *)&v30 = 0;
        qfree(ptr);
      }
      goto LABEL_8;
    case 5u:
      v12 = *(_QWORD *)(a2 + 32);
      if ( v12 )
      {
        v13 = 1;
        if ( v12 != (char)v12 )
          v13 = 8;
        v14 = v31;
        v15 = 8 * v13 - 8;
        do
        {
          if ( (unsigned __int8)(v12 >> v15) )
            *v14++ = v12 >> v15;
          v15 -= 8;
        }
        while ( v15 != -8 );
        *v14 = 0;
        str2user(&s, v31, 1024);
        sub_35A790((char **)a1);
      }
      else
      {
        v24 = (char *)*a1;
        if ( (unsigned __int64)a1[2] <= 4 )
        {
          v26 = qvector_reserve(a1, v24, 5, 1);
          *a1 = v26;
          v24 = (char *)v26;
        }
        a1[1] = 5;
        *(_DWORD *)v24 = 657480743;
        *(_BYTE *)(*a1 + 4) = 0;
      }
      goto LABEL_8;
    case 7u:
      realtoasc(&s, 1024, a2 + 48, 50);
      goto LABEL_23;
    default:
      if ( (unsigned __int16)(v3 - 128) <= 0x37Fu )
      {
LABEL_2:
        if ( (__int64 *)a2 != a1 )
        {
          v5 = *(_QWORD *)(a2 + 8);
          if ( v5 < 2 )
          {
LABEL_24:
            a1[1] = 0;
            return haystack;
          }
          v6 = *(const char **)a2;
          v7 = (char *)*a1;
          if ( a1[2] < v5 )
          {
            v27 = qvector_reserve(a1, *a1, v5, 1);
            *a1 = v27;
            v7 = (char *)v27;
          }
          a1[1] = v5;
          memmove(v7, v6, v5 - 1);
          *(_BYTE *)(*a1 + v5 - 1) = 0;
        }
      }
      else if ( v3 == 11868 )
      {
        v25 = (char *)*a1;
        if ( (unsigned __int64)a1[2] <= 3 )
        {
          v28 = qvector_reserve(a1, v25, 4, 1);
          *a1 = v28;
          v25 = (char *)v28;
        }
        a1[1] = 4;
        *(_WORD *)v25 = 11822;
        v25[2] = 46;
        *(_BYTE *)(*a1 + 3) = 0;
      }
      else
      {
        if ( v3 > 0xFFu )
        {
          s = HIBYTE(v3);
          p_s = &v33;
        }
        else
        {
          p_s = &s;
        }
        *p_s = v3;
        p_s[1] = 0;
LABEL_23:
        v16 = strlen(&s);
        v17 = v16;
        if ( !v16 )
          goto LABEL_24;
        v20 = (char *)*a1;
        v21 = v16 + 1;
        if ( a1[2] < v16 + 1 )
        {
          v22 = qvector_reserve(a1, *a1, v16 + 1, 1);
          *a1 = v22;
          v20 = (char *)v22;
        }
        a1[1] = v21;
        memmove(v20, &s, v17);
        *(_BYTE *)(*a1 + v17) = 0;
      }
LABEL_8:
      if ( a1[1] )
        return (const char *)*a1;
      return haystack;
  }
}
