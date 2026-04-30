unsigned __int64 __fastcall sub_24F0B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 *v14; // rax
  __int64 v15; // r13
  __int64 v16; // r13
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 *v19; // rax
  unsigned __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  char *v23; // rcx
  __int64 bpt_kernel_interface; // r12
  void (__fastcall *v25)(__int64, _QWORD); // r13
  __int64 *v26; // rax
  _QWORD v27[7]; // [rsp+0h] [rbp-38h] BYREF

  v27[0] = a1;
  v27[1] = a2;
  v14 = sub_210380((__int64)v27);
  v15 = v14[2];
  if ( v15 != -1 )
  {
    if ( getseg(v14[2]) || (sub_240EA0(1, a5), (unsigned __int8)is_mapped(v15)) )
      sub_233900(v15);
  }
  v16 = sub_210380((__int64)v27)[2];
  if ( (unsigned __int8)is_mapped(v16) )
  {
    a2 = a4;
    sub_24EFB0(v16, (const char *)a4, a5, a6, a7, a8, v17, v18, a11, a12);
  }
  if ( (unsigned __int8)sub_1E2E60() && !(unsigned int)sub_22FC60(0x12u) )
    sub_23F2E0(dword_8CC428, a5, a2, v22, v23);
  v19 = sub_210380((__int64)v27);
  sub_22A640(*((unsigned int *)v19 + 3));
  result = (unsigned __int64)sub_210380((__int64)v27);
  if ( *(_DWORD *)(result + 8) == 4 )
  {
    result = (unsigned __int64)sub_210380((__int64)v27);
    if ( *(_QWORD *)(result + 24) )
    {
      bpt_kernel_interface = get_bpt_kernel_interface(v27, a2);
      v25 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL);
      v26 = sub_210380((__int64)v27);
      v25(bpt_kernel_interface, *(_QWORD *)v26[3]);
      result = (unsigned __int64)sub_19A650();
    }
  }
  if ( a3 )
    result = sub_241220(a3, 0, v21, a5);
  dword_8CC55C |= 1u;
  return result;
}
