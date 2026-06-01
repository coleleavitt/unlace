/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AF410
// Address: 0x00000000000AF410

//----- (00000000000AF410) ----------------------------------------------------
bool __fastcall sub_AF410(__int64 a1, int a2)
{
  bool result; // al

  result = 1;
  if ( a2 <= 1 )
    return *(_BYTE *)(*(_QWORD *)(a1 + 8) + 107LL) != 0;
  return result;
}
