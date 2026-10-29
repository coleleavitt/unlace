/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033960
// Address: 0x0000000100033960

//----- (0000000100033960) ----------------------------------------------------
unsigned __int64 __fastcall sub_100033960(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 112) + a2;
  *(_QWORD *)(a1 + 112) = result;
  if ( result >= *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) )
  {
    sub_100033990("interr: bad idc move_ip");
    return sub_100033990("interr: bad idc move_ip");
  }
  return result;
}
