/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E79E8
// Address: 0x00000000000E79E8

//----- (00000000000E79E8) ----------------------------------------------------
void __fastcall sub_E79E8(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( byte_1590B7 != 8 )
    abort();
  *a3 = a2;
  if ( (*(_BYTE *)(a1 + 199) & 0x40) != 0 )
    *(_BYTE *)(a1 + 223) = 0;
  *(_QWORD *)(a1 + 56) = a3;
}
// 1590B7: using guessed type char byte_1590B7;
