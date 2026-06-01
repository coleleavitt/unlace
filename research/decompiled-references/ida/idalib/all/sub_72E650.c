__int64 __fastcall sub_72E650(
        __int64 *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        unsigned __int64 a8,
        _QWORD *a9)
{
  FILE *v13; // rax
  __int64 v14; // r13
  unsigned int v15; // r12d
  void *v17; // r12
  const char *errdesc; // rax
  const char *v19; // rbp
  size_t v20; // rax
  size_t v21; // r12
  void *v22; // rdi
  size_t v23; // r13
  __int64 v24; // rax

  v13 = (FILE *)fopenWB(a2);
  if ( !v13 )
  {
    errdesc = (const char *)get_errdesc(a2);
    v19 = errdesc;
    if ( !errdesc || (v20 = strlen(errdesc), (v21 = v20) == 0) )
    {
      a1[1] = 0;
      return 0;
    }
    v22 = (void *)*a1;
    v23 = v20 + 1;
    if ( a1[2] < v20 + 1 )
    {
      v24 = qvector_reserve(a1, *a1, v20 + 1, 1);
      *a1 = v24;
      v22 = (void *)v24;
    }
    a1[1] = v23;
    memmove(v22, v19, v21);
    *(_BYTE *)(*a1 + v21) = 0;
    return 0;
  }
  v14 = (__int64)v13;
  setvbuf(v13, nullptr, 2, 0x400u);
  v15 = sub_72DE80((__int64)a1, v14, a3, a4, a5, a6, a7, a8, a9);
  qfclose(v14);
  if ( !(_BYTE)v15 )
  {
    qunlink(a2);
    if ( (unsigned __int64)a1[1] > 1 )
    {
      v17 = (void *)*a1;
      *a1 = 0;
      *(_OWORD *)(a1 + 1) = 0;
      sub_35A790((char **)a1);
      if ( v17 )
        qfree(v17);
    }
    return 0;
  }
  return v15;
}
