/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4308F8
// Address: 0x00000000004308F8

//----- (00000000004308F8) ----------------------------------------------------
__int64 __fastcall sub_4308F8(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a2 + 8) = (int)sub_490700(*(const char **)(a1 + 8));
  else
    *(_QWORD *)(a2 + 8) = (int)sub_490700((const char *)&qword_4B2D48);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
