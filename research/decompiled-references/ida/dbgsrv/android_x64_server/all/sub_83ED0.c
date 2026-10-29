/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83ED0
// Address: 0x0000000000083ED0

//----- (0000000000083ED0) ----------------------------------------------------
__int64 __fastcall sub_83ED0(__int64 a1)
{
  __int64 v1; // rbx

  if ( *(_BYTE *)(a1 + 504) )
  {
    if ( !(_BYTE)under_debugger )
      interr(302);
    BUG();
  }
  v1 = *(_QWORD *)(a1 + 456);
  *(_QWORD *)(a1 + 456) = 0;
  sub_81940(a1, 0, 0);
  return v1;
}
// 158B40: using guessed type __int64 under_debugger;
