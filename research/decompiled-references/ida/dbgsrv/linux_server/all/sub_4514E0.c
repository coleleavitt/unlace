/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4514E0
// Address: 0x00000000004514E0

//----- (00000000004514E0) ----------------------------------------------------
__int64 __fastcall sub_4514E0(__int64 a1)
{
  __int64 v1; // rbx

  if ( *(_BYTE *)(a1 + 648) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(302);
    BUG();
  }
  v1 = *(_QWORD *)(a1 + 584);
  *(_QWORD *)(a1 + 584) = 0;
  sub_450E00(a1, 0, 0);
  return v1;
}
// 4C94E1: using guessed type char byte_4C94E1;
