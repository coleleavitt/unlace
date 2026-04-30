__int64 __fastcall appsgn_chooser_t__::vfunc_11(
        __int64 a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  char v19; // [rsp+0h] [rbp-18h]

  if ( (unsigned int)del_idasgn((unsigned int)a2) == 2 )
    sub_169630(
      (int)"Cannot remove an applied signature from the list.",
      a2,
      v10,
      v11,
      v12,
      v13,
      a3,
      a4,
      a5,
      a6,
      v14,
      v15,
      a9,
      a10,
      v19);
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  v17 = v16;
  if ( !v16 )
    return -1;
  result = v16 - 1;
  if ( a2 < v17 )
    return a2;
  return result;
}
