/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430830
// Address: 0x0000000000430830

//----- (0000000000430830) ----------------------------------------------------
__int64 __fastcall sub_430830(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    *(_QWORD *)(a2 + 8) = (int)sub_490180(*(const char **)(a1 + 8), *(_DWORD *)(a1 + 40));
  else
    *(_QWORD *)(a2 + 8) = (int)sub_490180((const char *)&qword_4B2D48, *(_DWORD *)(a1 + 40));
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
