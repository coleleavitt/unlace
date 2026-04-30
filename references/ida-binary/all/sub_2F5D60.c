__int64 __fastcall sub_2F5D60(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        _QWORD *a15)
{
  void *v15; // r14
  size_t v19; // r15
  const char *v20; // rsi
  const char *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  const char *v29; // rdx
  __int64 *v30; // [rsp+0h] [rbp-70h]
  int v33; // [rsp+18h] [rbp-58h]
  __int64 v34; // [rsp+20h] [rbp-50h] BYREF
  __int128 v35; // [rsp+28h] [rbp-48h]
  unsigned __int64 v36; // [rsp+38h] [rbp-38h]

  v15 = nullptr;
  v36 = __readfsqword(0x28u);
  v19 = *(_QWORD *)(a1 + 8);
  if ( v19 )
  {
    v30 = a5;
    v15 = (void *)qalloc_or_throw(*(_QWORD *)(a1 + 8));
    memcpy(v15, *(const void **)a1, v19);
    a5 = v30;
  }
  v34 = 0;
  v35 = 0;
  sub_2F5AF0(&v34, a5);
  v20 = (const char *)*a2;
  v33 = process_archive(a1, *a2, a3, a4, v34, a6, 0);
  if ( v33 > 0 )
  {
    close_linput(*a2);
    if ( v19 > 1 )
      qunlink(v15);
    v22 = &s1;
    if ( *(_QWORD *)(a1 + 8) )
      v22 = *(const char **)a1;
    v23 = open_linput(v22, 0);
    *a2 = v23;
    if ( v23 )
    {
      free_loaders_list(*a15);
      v20 = &s1;
      if ( *(_QWORD *)(a3 + 8) )
        v20 = *(const char **)a3;
      *a15 = build_loaders_list(*a2, v20);
    }
    else
    {
      v29 = &s1;
      if ( *(_QWORD *)(a3 + 8) )
        v29 = *(const char **)a3;
      v20 = &s1;
      if ( *(_QWORD *)(a1 + 8) )
        v20 = *(const char **)a1;
      sub_169630(
        (int)"ICON ERROR\nAUTOHIDE NONE\nFailed to open %s,\nwhich contains %s",
        (__int64)v20,
        (__int64)v29,
        v24,
        v25,
        v26,
        (__m128)0LL,
        a8,
        a9,
        a10,
        v27,
        v28,
        a13,
        a14,
        (char)v30);
      v33 = 0;
    }
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v20);
  }
  if ( v15 )
    qfree(v15, v20);
  return (unsigned int)v33;
}
