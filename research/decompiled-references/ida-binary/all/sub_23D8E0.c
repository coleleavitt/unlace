__int64 __fastcall sub_23D8E0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        char a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  unsigned __int8 v17; // r15
  __int64 v18; // rax
  __m128 v19; // xmm0
  __int64 v20; // rbx
  __int64 bpt_kernel_interface; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r12d
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  const char *v29; // rdx

  v17 = sub_23D800(a2, a2);
  v18 = operator new(0x80u);
  v19 = 0;
  *(_QWORD *)(v18 + 8) = 0;
  v20 = v18;
  *(_QWORD *)(v18 + 16) = 0;
  *(_QWORD *)(v18 + 24) = 96;
  *(_QWORD *)(v18 + 32) = 0;
  *(_QWORD *)(v18 + 56) = -1;
  *(_QWORD *)(v18 + 64) = 0;
  *(_OWORD *)(v18 + 40) = 0;
  *(_QWORD *)(v18 + 80) = -1;
  *(_QWORD *)(v18 + 72) = 0xFFFFFFFFLL;
  *(_QWORD *)(v18 + 88) = 4;
  *(_QWORD *)(v18 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v18 + 96) = 9;
  *(_QWORD *)(v18 + 112) = 0;
  *(_QWORD *)v18 = &thread_t::request_runto;
  *(_DWORD *)(v18 + 120) = a3;
  *(_BYTE *)(v18 + 124) = a6;
  bpt_kernel_interface = get_bpt_kernel_interface(128, a2);
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)bpt_kernel_interface + 128LL))(
    bpt_kernel_interface,
    v20 + 24,
    a2,
    v17,
    1);
  *(_DWORD *)(v20 + 96) &= ~1u;
  if ( a5 )
  {
    v22 = get_bpt_kernel_interface(bpt_kernel_interface, v20 + 24);
    *(double *)v19.m128_u64 = (*(double (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 96LL))(
                                v22,
                                v20 + 24,
                                a5);
  }
  v26 = sub_236A00(a1, v20, a3, *(double *)v19.m128_u64);
  if ( !v26 )
  {
    v29 = "software";
    if ( v17 )
      v29 = "hardware";
    v20 = 0;
    sub_169700(
      (int)"%a: failed to set temporary %s breakpoint\n",
      a2,
      (__int64)v29,
      v23,
      v24,
      v25,
      v19,
      a8,
      a9,
      a10,
      v27,
      v28,
      a13,
      a14,
      a1);
  }
  if ( a4 )
    *a4 = v20;
  return v26;
}
