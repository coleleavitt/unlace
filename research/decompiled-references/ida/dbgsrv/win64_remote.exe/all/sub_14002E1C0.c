/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E1C0
// Address: 0x000000014002E1C0

//----- (000000014002E1C0) ----------------------------------------------------
__int64 __fastcall sub_14002E1C0(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 112) += a2;
  result = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a1 + 112) >= *(_QWORD *)(result + 8) )
    sub_140005300("interr: bad idc move_ip");
  return result;
}
