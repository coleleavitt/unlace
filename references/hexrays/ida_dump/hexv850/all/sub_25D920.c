unsigned __int64 __fastcall sub_25D920(void **a1, __int64 a2, const char *a3, int a4, unsigned int a5, _QWORD *a6)
{
  unsigned __int64 v7; // r15
  int v8; // r14d
  const char *v9; // rcx
  int v10; // r13d
  int utf8_char; // eax
  int v12; // edx
  size_t v13; // rsi
  size_t v14; // r13
  const char *v15; // rax
  size_t v16; // rdx
  void *v17; // rdi
  __int64 (__fastcall *v18)(_QWORD *, _QWORD, void *, const char *); // r8
  const char *v19; // rcx
  int v20; // edx
  const char *v21; // rdx
  int i; // [rsp+18h] [rbp-68h]
  const char *v29; // [rsp+28h] [rbp-58h]
  size_t v30; // [rsp+28h] [rbp-58h]
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  __int128 v32; // [rsp+38h] [rbp-48h]
  unsigned __int64 v33; // [rsp+48h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  for ( i = 1; ; ++i )
  {
    v31 = (__int64)a3;
    v7 = (unsigned __int64)a3;
    v8 = *(_DWORD *)(a2 + 600) - a5;
    v9 = &a3[strlen(a3)];
    if ( v8 <= 8 )
      v8 = 0x7FFFFFFF;
    v29 = v9;
    v10 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v29 < v7 )
        {
          if ( !under_debugger )
            sub_37CFE0(52646);
LABEL_50:
          BUG();
        }
        utf8_char = get_utf8_char(&v31);
        if ( utf8_char == -1 )
        {
          if ( !under_debugger )
            sub_37CFE0(51226);
          goto LABEL_50;
        }
        v7 = v31;
        if ( !utf8_char )
          goto LABEL_12;
        if ( utf8_char == 92 )
          break;
        if ( ++v10 >= v8 )
          goto LABEL_12;
      }
      if ( (unsigned __int8)back_char(&v31) == 10 )
        break;
      v12 = v31 - v7;
      v7 = v31;
      v10 += v12 + 1;
      if ( v10 >= v8 )
        goto LABEL_12;
    }
    LODWORD(v7) = v31;
LABEL_12:
    v13 = (int)v7 - (int)a3;
    v14 = v13;
    v15 = &a3[v13];
    if ( (int)v7 - (int)a3 > 1 && *(v15 - 1) == 110 && *(v15 - 2) == 92 )
    {
      v31 = 0;
      v16 = v13 + 1;
      v32 = 0;
      goto LABEL_16;
    }
    v21 = v15 + 16;
    while ( *v15 )
    {
      if ( ++v15 == v21 )
        goto LABEL_28;
    }
    v14 = (int)v15 - (int)a3;
LABEL_28:
    v31 = 0;
    v32 = 0;
    if ( !v14 )
      break;
    v16 = v14 + 1;
    if ( v14 == -1 )
    {
      v17 = nullptr;
      v14 = -1;
    }
    else
    {
LABEL_16:
      v30 = v16;
      v31 = qvector_reserve(&v31, 0, v16, 1);
      v16 = v30;
      v17 = (void *)v31;
    }
    *(_QWORD *)&v32 = v16;
    memmove(v17, a3, v14);
    *(_BYTE *)(v31 + v14) = 0;
    if ( i == 1 )
      goto LABEL_34;
    v18 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a6;
    if ( (_QWORD)v32 )
      v19 = (const char *)v31;
    else
      v19 = s1;
LABEL_20:
    v20 = a5 + v18(a6, a5, &unk_3F62C7, v19);
LABEL_21:
    a3 += v14;
    if ( !*a3 )
      goto LABEL_37;
LABEL_22:
    sub_25D380(a1, a2, v20, 0, (char *)&unk_3F5793, a6, 0);
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
  }
  if ( i != 1 )
  {
    v19 = s1;
    v18 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, void *, const char *))*a6;
    goto LABEL_20;
  }
LABEL_34:
  v20 = sub_25A110(a5, (void (__fastcall ***)(_QWORD, _QWORD, void *, const char *))a6, a4, (__int64)&v31, 0);
  if ( a4 == 3 )
  {
    a5 += 6;
    goto LABEL_21;
  }
  if ( a4 == 4 )
  {
    ++a5;
    goto LABEL_21;
  }
  a3 += v14;
  a5 += a4 == 2;
  if ( *a3 )
    goto LABEL_22;
LABEL_37:
  if ( a4 == 3 )
    (*(void (__fastcall **)(_QWORD *, _QWORD, void *))*a6)(a6, 0, &unk_3F6043);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  return v33 - __readfsqword(0x28u);
}
