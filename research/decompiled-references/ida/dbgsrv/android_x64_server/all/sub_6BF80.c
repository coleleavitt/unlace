/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BF80
// Address: 0x000000000006BF80

//----- (000000000006BF80) ----------------------------------------------------
char __fastcall sub_6BF80(_QWORD *a1, __int64 a2)
{
  if ( a1[3] - a2 <= 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(276);
    BUG();
  }
  return *(_BYTE *)(*a1 + a2);
}
// 158B40: using guessed type __int64 under_debugger;
