unsigned __int64 __fastcall sub_3E45F0(
        __int64 *a1,
        __int64 a2,
        const void **a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rdx
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // r9
  _DWORD v19[4]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v20[72]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  copy_argloc(a1 + 13, a2);
  copy_tinfo_t(a1 + 9, a4, v14);
  sub_3E3770(a1 + 15, *a3, 1, a5);
  sub_3DFD50(v19, a1, a5, a6, a7, a8, v15, v16, a11, a12);
  if ( v19[0] )
  {
    if ( !((__int64 (__fastcall *)(_BYTE *, __int64, _DWORD *, _QWORD, _QWORD, __int64))print_argloc)(
            v20,
            64,
            v19,
            0,
            0,
            v17) )
      v20[0] = 0;
    sub_3E3770(a1 + 27, v20, 1, a5);
    sub_3E3E20((__int64)a1, (__int64)v19, 1u);
  }
  else
  {
    sub_3E3770(a1 + 27, "Unknown location", 0, a5);
  }
  cleanup_argloc(v19);
  return v21 - __readfsqword(0x28u);
}
