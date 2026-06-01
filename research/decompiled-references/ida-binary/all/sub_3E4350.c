__int64 __fastcall sub_3E4350(
        __int64 *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rbp
  int tinfo_size; // eax
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v19; // rdx
  __int64 *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-60h] BYREF
  _DWORD v22[4]; // [rsp+8h] [rbp-58h] BYREF
  const void *v23; // [rsp+18h] [rbp-48h] BYREF
  __int128 v24; // [rsp+20h] [rbp-40h]
  unsigned __int64 v25; // [rsp+30h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v24 = 0;
  v23 = nullptr;
  v21 = 0;
  v10 = a1[14];
  if ( (unsigned __int8)get_stock_tinfo(&v21, 7)
    && (tinfo_size = get_tinfo_size(0, v21, 0),
        (unsigned __int8)sub_3E2540((__int64 *)&v23, *(unsigned int *)(v10 + 8), tinfo_size, 0)) )
  {
    v19 = 43;
    if ( *(__int64 *)v10 < 0 )
      v19 = 45;
    sub_16FAA0((__int64 *)&v23, (__int64)"%c%a", v19, 0.0);
    v20 = a1 + 27;
    if ( (_QWORD)v24 )
      sub_3E3770(v20, v23, 1, 0.0);
    else
      sub_3E3770(v20, &s1, 1, 0.0);
  }
  else
  {
    sub_3E3770(a1 + 27, "Cannot format reg-rel location", 0, 0.0);
  }
  sub_3DFD50(v22, a1, 0.0, a3, a4, a5, v12, v13, a8, a9);
  v17 = sub_3E4010((__int64)a1, (const char *)v22, 1u, v14, v15, v16);
  cleanup_argloc(v22);
  clear_tinfo_t(&v21);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, (const char *)v22);
  }
  return v17;
}
