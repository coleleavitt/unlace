/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4307A8
// Address: 0x00000000004307A8

//----- (00000000004307A8) ----------------------------------------------------
__int64 __fastcall sub_4307A8(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a2 + 8) = strtol(*(const char **)(a1 + 8), nullptr, 10);
  else
    *(_QWORD *)(a2 + 8) = strtol((const char *)&qword_4B2D48, nullptr, 10);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
