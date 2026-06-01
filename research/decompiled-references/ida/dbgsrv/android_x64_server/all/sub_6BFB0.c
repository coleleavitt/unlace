/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BFB0
// Address: 0x000000000006BFB0

//----- (000000000006BFB0) ----------------------------------------------------
__int64 __fastcall sub_6BFB0(_QWORD *a1, __int64 a2)
{
  if ( a1[3] - a2 <= 1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(276);
    BUG();
  }
  return *(unsigned __int16 *)(*a1 + a2);
}
// 158B40: using guessed type __int64 under_debugger;
