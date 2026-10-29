/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431018
// Address: 0x0000000000431018

//----- (0000000000431018) ----------------------------------------------------
__int64 __fastcall sub_431018(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a2 + 8) = (int)sub_49BA58(*(_QWORD *)(a1 + 8));
  else
    *(_QWORD *)(a2 + 8) = (int)sub_49BA58((__int64)&qword_4B2D48);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
