/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_idcvs
// Address: 0x0005BC10

//----- (0005BC10) --------------------------------------------------------
unsigned int __cdecl swap_idcvs(__int64 *a1, __int64 *a2)
{
  __int64 v2; // xmm0_8
  __int64 v4; // [esp+Ch] [ebp-28h]
  __int64 v5; // [esp+14h] [ebp-20h]
  int v6; // [esp+1Ch] [ebp-18h]

  if ( !a1 || !a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(2657);
    BUG();
  }
  v6 = *((_DWORD *)a1 + 4);
  v5 = a1[1];
  v4 = *a1;
  *((_DWORD *)a1 + 4) = *((_DWORD *)a2 + 4);
  v2 = *a2;
  a1[1] = a2[1];
  *a1 = v2;
  *((_DWORD *)a2 + 4) = v6;
  a2[1] = v5;
  *a2 = v4;
  return __readgsdword(0x14u);
}
// 13E34C: using guessed type int under_debugger;
