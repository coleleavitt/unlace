/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439600
// Address: 0x0000000000439600

//----- (0000000000439600) ----------------------------------------------------
__int64 __fastcall sub_439600(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi

  result = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 112) + a2;
  *(_QWORD *)(a1 + 112) = v3;
  if ( v3 >= *(_QWORD *)(result + 8) )
    sub_410DF0("interr: bad idc move_ip");
  return result;
}
