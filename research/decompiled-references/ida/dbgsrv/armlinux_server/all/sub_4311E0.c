/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4311E0
// Address: 0x00000000004311E0

//----- (00000000004311E0) ----------------------------------------------------
__int64 __fastcall sub_4311E0(__int64 a1, __int64 a2)
{
  char *v3; // x2
  bool v4; // zf
  __int64 result; // x0
  __int64 v6; // x1

  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(char **)(a1 + 40);
  else
    v3 = (char *)&qword_4B2D48;
  v4 = (unsigned int)sub_44DA00(nullptr, a1, v3, 0) == 0;
  result = 0;
  v6 = v4;
  *(_QWORD *)(a2 + 8) = v6;
  return result;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
