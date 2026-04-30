__int64 __fastcall threads_chooser_t__::vfunc_13(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        void **a10)
{
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rdx
  char *v13; // rcx
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 *v22; // rax
  char v24; // [rsp-18h] [rbp-18h]

  if ( !dword_8CC5F0 )
    return 0;
  v10 = *(_QWORD *)*a10;
  if ( (unsigned int)xmmword_8CC438 <= (unsigned int)v10 )
    return 0;
  v11 = *(_DWORD *)(qword_8CC430 + ((__int64)(int)v10 << 8));
  if ( !v11 )
    return 0;
  if ( !dbg )
    v11 = 0;
  sub_22FC60(0xFu, v11);
  if ( !(unsigned __int8)sub_24F380(v11, 0, *(double *)a1.m128_u64, a2, a3, a4, v14, v15, a7, a8, v12, v13) )
    sub_169630(
      (int)"AUTOHIDE NONE\nCommand \"SelectThread(%ld)\" failed - registers are not available",
      (int)v11,
      v16,
      v17,
      v18,
      v19,
      a1,
      a2,
      a3,
      a4,
      v20,
      v21,
      a7,
      a8,
      v24);
  dword_8CC55C |= 1u;
  sub_22A640(v11);
  v22 = (__int64 *)a10[1];
  if ( v22 == (__int64 *)((char *)&dword_0 + 1) )
    return 0;
  memmove(*a10, (char *)*a10 + 8, 8LL * (_QWORD)v22 - 8);
  a10[1] = (char *)a10[1] - 1;
  return 2;
}
