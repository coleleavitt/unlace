/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4329E8
// Address: 0x00000000004329E8

//----- (00000000004329E8) ----------------------------------------------------
__int64 __fastcall sub_4329E8(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 48) )
    *(_QWORD *)(a1 + 184) = sub_43E7F0(*(const char **)(a1 + 40), 0);
  else
    *(_QWORD *)(a1 + 184) = sub_43E7F0((const char *)&qword_4B2D48, 0);
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
