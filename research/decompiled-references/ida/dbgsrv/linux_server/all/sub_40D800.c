/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D800
// Address: 0x000000000040D800

//----- (000000000040D800) ----------------------------------------------------
__int64 __fastcall sub_40D800(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 136) == *(_QWORD *)(a1 + 168) )
  {
    sub_40D760(*(_DWORD *)(a1 + 1340), 0x13u);
    *(_BYTE *)(*(_QWORD *)(a1 + 1232) + 64LL) = 1;
  }
  *(_WORD *)(a1 + 1412) = 256;
  return 1;
}
