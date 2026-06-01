/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_idcvs
// Address: 0x00000000000750F0

//----- (00000000000750F0) ----------------------------------------------------
unsigned __int64 __fastcall swap_idcvs(__int128 *a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+0h] [rbp-28h]
  __int128 v5; // [rsp+10h] [rbp-18h]

  if ( !a1 || !a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(2657);
    BUG();
  }
  v5 = a1[1];
  v4 = *a1;
  v2 = *a2;
  a1[1] = a2[1];
  *a1 = v2;
  a2[1] = v5;
  *a2 = v4;
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
