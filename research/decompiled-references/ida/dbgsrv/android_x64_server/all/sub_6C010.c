/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C010
// Address: 0x000000000006C010

//----- (000000000006C010) ----------------------------------------------------
__int64 __fastcall sub_6C010(_QWORD *a1, __int64 a2)
{
  if ( a1[3] - a2 <= 3 || a1[3] - (a2 + 4) <= 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(276);
    BUG();
  }
  return *(_QWORD *)(*a1 + a2);
}
// 158B40: using guessed type __int64 under_debugger;
