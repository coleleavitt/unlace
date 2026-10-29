/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431188
// Address: 0x0000000000431188

//----- (0000000000431188) ----------------------------------------------------
__int64 __fastcall sub_431188(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 48) )
    *(_QWORD *)(a2 + 8) = (unsigned int)sub_44A4B8(a1, *(char **)(a1 + 40)) == 0;
  else
    *(_QWORD *)(a2 + 8) = (unsigned int)sub_44A4B8(a1, (char *)&qword_4B2D48) == 0;
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
