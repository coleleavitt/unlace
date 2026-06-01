/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D878
// Address: 0x0003D878

//----- (0003D878) --------------------------------------------------------
int __fastcall sub_3D878(int a1)
{
  pthread_mutex_t *v2; // r6
  int v3; // r3
  int v4; // r4
  int v5; // t1

  v2 = (pthread_mutex_t *)dword_D4A20;
  sub_7A268((pthread_mutex_t *)dword_D4A20);
  if ( !dword_D4A18 )
  {
LABEL_6:
    sub_7A290(v2);
    return 0;
  }
  v3 = dword_D4A14;
  v4 = 0;
  if ( a1 != *(_DWORD *)dword_D4A14 )
  {
    while ( ++v4 != dword_D4A18 )
    {
      v5 = *(_DWORD *)(v3 + 4);
      v3 += 4;
      if ( v5 == a1 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( dword_D4A10 == v4 )
    sub_3D744(nullptr);
  if ( *(_DWORD *)(a1 + 8) && !byte_D6C15 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1442);
  }
  *(_DWORD *)(dword_D4A14 + 4 * v4) = 0;
  nullsub_11(1, a1, v4);
  sub_7A290(v2);
  return 1;
}
// 6AEA8: using guessed type int __fastcall nullsub_11(_DWORD, _DWORD, _DWORD);
// D4A10: using guessed type int dword_D4A10;
// D4A14: using guessed type int dword_D4A14;
// D4A18: using guessed type int dword_D4A18;
// D4A20: using guessed type int dword_D4A20;
// D6C15: using guessed type char byte_D6C15;
// D6C20: using guessed type char under_debugger;
