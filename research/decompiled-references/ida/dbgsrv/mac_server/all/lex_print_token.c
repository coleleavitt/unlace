/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_print_token
// Address: 0x000000010004C820

//----- (000000010004C820) ----------------------------------------------------
const char *__fastcall lex_print_token(__int64 a1, __int64 a2)
{
  int v3; // eax
  _BYTE *v4; // rax
  __int64 v5; // rax
  bool v6; // zf
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  __int128 *v9; // rdx
  int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rax
  const char *v14; // rsi
  const char *v15; // rdx
  size_t v16; // rax
  size_t v17; // r14
  unsigned __int64 v18; // r15
  void *v19; // rax
  __int64 v20; // rax
  bool v21; // cf
  size_t v22; // rax
  int v23; // edx
  int v24; // eax
  const char *v25; // rcx
  _BYTE *v26; // rax
  const char *v27; // rdx
  char *v28; // r15
  void *v29; // rax
  void *v30; // rdi
  char *v31; // rsi
  _DWORD *v32; // rax
  char *p_s; // rcx
  char *v35; // rcx
  size_t v36; // rax
  __int128 v37; // [rsp+0h] [rbp-450h] BYREF
  __int64 v38; // [rsp+10h] [rbp-440h]
  char __s; // [rsp+20h] [rbp-430h] BYREF
  char v40; // [rsp+21h] [rbp-42Fh] BYREF
  char v41; // [rsp+41Fh] [rbp-31h] BYREF
  char v42; // [rsp+420h] [rbp-30h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 24);
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 1:
      v4 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) <= 5u )
      {
        v4 = qvector_reserve(a1, *(void **)a1, 6u, 1u);
        *(_QWORD *)a1 = v4;
      }
      *(_QWORD *)(a1 + 8) = 6;
      v4[4] = 62;
      *(_DWORD *)v4 = 1145980220;
      *(_BYTE *)(*(_QWORD *)a1 + 5LL) = 0;
      if ( *(_QWORD *)(a1 + 8) )
        return *(const char **)a1;
      return _s1;
    case 2:
      goto LABEL_23;
    case 3:
      sub_100002D00(a1, "0x%a", *(_QWORD *)(a2 + 32), (unsigned int)(v3 - 1));
      goto LABEL_54;
    case 4:
      v37 = 0;
      v38 = 0;
      v12 = *(_QWORD *)(a2 + 8);
      if ( v12 )
        v14 = *(const char **)a2;
      else
        v14 = _s1;
      v23 = 0;
      v21 = v12 == 0;
      v24 = v12 - 1;
      if ( !v21 )
        v23 = v24;
      qstr2user((__int64)&v37, v14, v23);
      if ( *((_QWORD *)&v37 + 1) )
        v25 = (const char *)v37;
      else
        v25 = _s1;
      v27 = &_s;
      if ( *(_BYTE *)(a2 + 40) )
        v27 = "L";
      sub_100002D00(a1, "%s\"%s\"", v27, v25);
      if ( (_QWORD)v37 )
      {
        *((_QWORD *)&v37 + 1) = 0;
        qfree((void *)v37);
      }
      goto LABEL_54;
    case 5:
      v5 = *(_QWORD *)(a2 + 32);
      if ( v5 )
      {
        v6 = (char)v5 == v5;
        LOBYTE(v7) = 1;
        v8 = 8;
        if ( v6 )
          v8 = 1;
        v9 = &v37;
        v10 = 2;
        do
        {
          v11 = *(_QWORD *)(a2 + 32) >> (8 * ((unsigned __int8)v8 - (unsigned __int8)v7));
          if ( (_BYTE)v11 )
          {
            *(_BYTE *)v9 = v11;
            v9 = (__int128 *)((char *)v9 + 1);
          }
          v7 = v10++;
        }
        while ( v8 >= v7 );
        *(_BYTE *)v9 = 0;
        str2user(&__s, (const char *)&v37, 1024);
        sub_100002D00(a1, "'%s'", &__s);
        goto LABEL_54;
      }
      v32 = *(_DWORD **)a1;
      if ( *(_QWORD *)(a1 + 16) <= 4u )
      {
        v32 = qvector_reserve(a1, *(void **)a1, 5u, 1u);
        *(_QWORD *)a1 = v32;
      }
      *(_QWORD *)(a1 + 8) = 5;
      *v32 = 657480743;
      *(_BYTE *)(*(_QWORD *)a1 + 4LL) = 0;
      if ( !*(_QWORD *)(a1 + 8) )
        return _s1;
      return *(const char **)a1;
    case 6:
      if ( *(_QWORD *)(a2 + 8) )
        v15 = *(const char **)a2;
      else
        v15 = _s1;
      sub_100002D00(a1, "@type %s", v15);
      goto LABEL_54;
    case 7:
      realtoasc(&__s, 1024, a2 + 48, 50);
      v16 = strlen(&__s);
      if ( !v16 )
        goto LABEL_27;
      v17 = v16;
      v18 = v16 + 1;
      v19 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v18 )
        goto LABEL_63;
      goto LABEL_64;
    case 8:
      sub_100002D00(a1, "0x%llxi64", *(_QWORD *)(a2 + 48));
      goto LABEL_54;
    default:
      if ( (unsigned __int16)(v3 - 128) >= 0x380u )
      {
        if ( (unsigned __int16)v3 == 11868 )
        {
          v26 = *(_BYTE **)a1;
          if ( *(_QWORD *)(a1 + 16) <= 3u )
          {
            v26 = qvector_reserve(a1, *(void **)a1, 4u, 1u);
            *(_QWORD *)a1 = v26;
          }
          *(_QWORD *)(a1 + 8) = 4;
          v26[2] = 46;
          *(_WORD *)v26 = 11822;
          *(_BYTE *)(*(_QWORD *)a1 + 3LL) = 0;
          if ( !*(_QWORD *)(a1 + 8) )
            return _s1;
          return *(const char **)a1;
        }
        if ( (unsigned __int16)v3 >= 0x100u )
        {
          p_s = &v40;
          __s = HIBYTE(*(_WORD *)(a2 + 24));
        }
        else
        {
          p_s = &__s;
        }
        *p_s = v3;
        v35 = p_s + 1;
        if ( v35 >= &v42 )
        {
          v35 = &v41;
          v41 = 0;
        }
        *v35 = 0;
        v36 = strlen(&__s);
        if ( !v36 )
        {
LABEL_27:
          *(_QWORD *)(a1 + 8) = 0;
          if ( !*(_QWORD *)(a1 + 8) )
            return _s1;
          return *(const char **)a1;
        }
        v17 = v36;
        v18 = v36 + 1;
        v19 = *(void **)a1;
        if ( *(_QWORD *)(a1 + 16) < v18 )
        {
LABEL_63:
          v19 = qvector_reserve(a1, *(void **)a1, v18, 1u);
          *(_QWORD *)a1 = v19;
        }
LABEL_64:
        *(_QWORD *)(a1 + 8) = v18;
        v31 = &__s;
        v30 = v19;
        goto LABEL_65;
      }
LABEL_23:
      if ( a1 != a2 )
      {
        v20 = *(_QWORD *)(a2 + 8);
        v17 = 0;
        v21 = v20 == 0;
        v22 = v20 - 1;
        if ( !v21 )
          v17 = v22;
        if ( v21 || v22 == 0 )
          goto LABEL_27;
        v28 = *(char **)a2;
        v29 = *(void **)a1;
        if ( *(_QWORD *)(a1 + 16) <= v17 )
        {
          v29 = qvector_reserve(a1, *(void **)a1, v17 + 1, 1u);
          *(_QWORD *)a1 = v29;
        }
        *(_QWORD *)(a1 + 8) = v17 + 1;
        v30 = v29;
        v31 = v28;
LABEL_65:
        memmove(v30, v31, v17);
        *(_BYTE *)(*(_QWORD *)a1 + v17) = 0;
        if ( *(_QWORD *)(a1 + 8) )
          return *(const char **)a1;
        return _s1;
      }
LABEL_54:
      if ( *(_QWORD *)(a1 + 8) )
        return *(const char **)a1;
      return _s1;
  }
}
