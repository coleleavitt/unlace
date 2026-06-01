/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DDD8
// Address: 0x000000000043DDD8

//----- (000000000043DDD8) ----------------------------------------------------
unsigned __int64 __fastcall sub_43DDD8(__int64 a1, int a2)
{
  __int64 v2; // x3
  unsigned __int64 v3; // x1
  unsigned __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 112) + a2;
  *(_QWORD *)(a1 + 112) = v3;
  result = *(_QWORD *)(v2 + 8);
  if ( v3 >= result )
    sub_40A608("interr: bad idc move_ip");
  return result;
}
