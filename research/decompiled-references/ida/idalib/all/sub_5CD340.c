__int64 __fastcall sub_5CD340(__int64 a1, unsigned __int64 *a2, __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __m128i *v8; // r15
  __int64 v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  v6 = calc_thunk_func_target((__int64)a2, (char *)v10);
  if ( (v6 & v10[0]) == 0xFFFFFFFFFFFFFFFFLL )
    return 0;
  v7 = v6;
  v8 = *(__m128i **)(qword_2CCB598 + 1672);
  if ( !(unsigned __int8)sub_5CD040(v8, a2, v6) )
    sub_5CD040(v8, a2, v10[0]);
  if ( !(unsigned __int8)sub_5CA280(a1, (__int64 *)a2, v7, nullptr) )
    sub_5CA280(a1, (__int64 *)a2, v10[0], nullptr);
  if ( a3 )
    *a3 = v7;
  if ( a4 )
    *a4 = v10[0];
  return 1;
}
