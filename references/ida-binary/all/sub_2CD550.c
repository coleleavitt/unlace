__int64 __fastcall edit_apply_ah_t__::vfunc_4(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const char *a10,
        __int64 a11,
        __int64 a12)
{
  const char *v12; // rbp
  __int64 v14; // rax

  v12 = "Apply changes";
  sub_2CD4E0(a11, a10, a11, a12, a1, a2, a3, a4, a5, a6, a7, a8);
  if ( !*(_BYTE *)(a11 + 1080) )
    v12 = "Edit...";
  v14 = sub_534430("hexview:EditOrApplyChanges");
  if ( v14 )
    sub_537630(v14, 1, v12);
  return 1;
}
