/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D4D0
// Address: 0x000000010001D4D0

//----- (000000010001D4D0) ----------------------------------------------------
__int64 __fastcall sub_10001D4D0(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  __int64 v6; // rdi
  _QWORD v8[2]; // [rsp+0h] [rbp-30h] BYREF

  sub_100005090(*(_QWORD *)(a1 + 16), "shared cache mapping: %a..%a\n", a4, a5);
  v6 = *(_QWORD *)(a1 + 24);
  v8[0] = a2;
  v8[1] = a3;
  rangeset_t_add(v6, (__int64)v8);
  return __stack_chk_guard;
}
