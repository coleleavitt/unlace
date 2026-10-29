__int64 __fastcall sub_19CA10(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rbx
  __int64 bpt_kernel_interface; // rax

  v10 = sub_19AFC0(a1, a2);
  if ( !v10 )
    return sub_19C7C0(0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, a3, a4, a5, a6, v11, v12, a9, a10);
  v13 = v10;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 120LL))(
           bpt_kernel_interface,
           v13);
}
