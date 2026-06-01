unsigned __int64 __fastcall sub_7A8CC0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char *src,
        __int64 a9)
{
  size_t v9; // r14
  unsigned __int64 v10; // rbp
  char *v11; // r12
  char *i; // rax
  __int64 v13; // rdx

  v9 = 8 * a9;
  v10 = sub_79A610(104, a1, a2, 8 * a9);
  v11 = &src[8 * a9];
  sub_77B010(v10, 0x2Cu, (__int64)a1, a2, a3, a4, 0, a5, a6, a7);
  *(_DWORD *)(v10 + 100) = a9;
  *(_QWORD *)v10 = &off_49F5CE0;
  if ( 8 * a9 <= 8 )
  {
    if ( v9 == 8 )
      *(_QWORD *)(v10 + 104) = *(_QWORD *)src;
  }
  else
  {
    memmove((void *)(v10 + 104), src, v9);
  }
  for ( i = src; v11 != i; *(_QWORD *)(v13 + 56) = v10 )
  {
    v13 = *(_QWORD *)i;
    i += 8;
  }
  return v10;
}

