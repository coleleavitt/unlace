__int64 __fastcall sub_3CE6D0(
        const char *a1,
        __int64 *a2,
        unsigned int a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rsi
  const char **v14; // r12
  const char *v15; // rdx
  __int64 v16; // rsi
  QT::QSplitter *v17; // rax
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // r12
  unsigned int v21; // ebx
  __int64 v23; // rax
  bool v24; // [rsp+Fh] [rbp-49h] BYREF
  const char **v25; // [rsp+10h] [rbp-48h] BYREF
  __int64 v26; // [rsp+18h] [rbp-40h]
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v12 = *(_QWORD *)a1;
  v27 = __readfsqword(0x28u);
  get_tinfo_pdata(&v25, v12, 3);
  v14 = v25;
  if ( v25 )
  {
    sub_3C57E0((__int64)&v25, v25);
    v15 = &s1;
    if ( v26 )
      v15 = (const char *)v25;
    v16 = (__int64)v14;
    v17 = sub_3CD600(&v24, (__int64)v14, v15, a1, a2);
    v20 = (__int64)v17;
    if ( v17 )
    {
      if ( *((_BYTE *)v17 + 112) || (v23 = *((_QWORD *)v17 + 13)) == 0 )
        v16 = 0;
      else
        v16 = (*(unsigned int (__fastcall **)(_QWORD, const char *, _QWORD))(**(_QWORD **)(v23 + 1000) + 48LL))(
                *(_QWORD *)(v23 + 1000),
                a1,
                0);
      sub_3C6B30(v20, v16, a2, a3, a4, a5, a6, a7, v18, v19, a10, a11);
      v21 = 1;
    }
    else
    {
      v21 = 0;
    }
    if ( v25 )
    {
      v26 = 0;
      qfree(v25, (const char *)v16);
    }
  }
  else
  {
    return 0;
  }
  return v21;
}
