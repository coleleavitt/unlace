__int64 __fastcall sub_C730(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rdx
  double v16; // xmm4_8
  double v17; // xmm5_8
  int v18; // [rsp+4h] [rbp-34h] BYREF
  __int64 v19; // [rsp+8h] [rbp-30h] BYREF
  char s1[4]; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  qlseek(a2, -8, 2, a12);
  lread(a2, s1, 4);
  if ( strncmp(s1, "NB02", 4u)
    && strncmp(s1, "NB05", 4u)
    && strncmp(s1, "NB08", 4u)
    && strncmp(s1, "NB09", 4u)
    && strncmp(s1, "NB11", 4u) )
  {
    return 0;
  }
  lread(a2, &v18, 4);
  if ( !v18 )
    return 0;
  v14 = qalloc(v18);
  if ( v14 )
  {
    qlseek(a2, -v18, 2, v13);
    lread(a2, v14, v18);
    netnode_check(&v19, "$ NE header", 0, 0);
    v15 = v18;
    *(_QWORD *)(a1 + 136) = v19;
    sub_C290(a1, v14, v15, 0, a3, a4, a5, a6, v16, v17, a9, a10);
    qfree(v14);
  }
  else
  {
    sub_53E0((__int64)"No memory for debug data");
  }
  return 1;
}
