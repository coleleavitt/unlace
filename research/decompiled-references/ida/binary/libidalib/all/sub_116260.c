__int64 __fastcall sub_116260(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 *a7)
{
  void *v7; // r14
  size_t v9; // r15
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-70h]
  int v15; // [rsp+18h] [rbp-58h]
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+28h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-38h]

  v7 = nullptr;
  v18 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 )
  {
    v14 = a5;
    v7 = (void *)qalloc_or_throw();
    memcpy(v7, *(const void **)a1, v9);
    a5 = v14;
  }
  v16 = 0;
  v17 = 0;
  sub_115FF0((__int64)&v16, a5);
  v15 = process_archive();
  if ( v15 > 0 )
  {
    close_linput();
    if ( v9 > 1 )
      qunlink();
    v11 = open_linput();
    *a2 = v11;
    if ( v11 )
    {
      free_loaders_list();
      *a7 = build_loaders_list();
    }
    else
    {
      v12 = s1;
      if ( *(_QWORD *)(a3 + 8) )
        v12 = *(const char **)a3;
      v13 = s1;
      if ( *(_QWORD *)(a1 + 8) )
        v13 = *(const char **)a1;
      sub_92200((__int64)"ICON ERROR\nAUTOHIDE NONE\nFailed to open %s,\nwhich contains %s", v13, v12);
      v15 = 0;
    }
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v7 )
    qfree();
  return (unsigned int)v15;
}

