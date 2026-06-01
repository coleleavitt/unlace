/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D6E0
// Address: 0x0003D6E0

//----- (0003D6E0) --------------------------------------------------------
int __fastcall sub_3D6E0(int a1)
{
  pthread_mutex_t *v2; // r6
  int v3; // r3
  int v4; // r4
  int v5; // t1

  v2 = (pthread_mutex_t *)dword_D3A00;
  sub_7A100((pthread_mutex_t *)dword_D3A00);
  if ( !dword_D39F8 )
  {
LABEL_6:
    sub_7A128(v2);
    return 0;
  }
  v3 = dword_D39F4;
  v4 = 0;
  if ( a1 != *(_DWORD *)dword_D39F4 )
  {
    while ( ++v4 != dword_D39F8 )
    {
      v5 = *(_DWORD *)(v3 + 4);
      v3 += 4;
      if ( v5 == a1 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( dword_D39F0 == v4 )
    sub_3D5AC(nullptr);
  if ( *(_DWORD *)(a1 + 8) && !byte_D5BF5 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(1442);
  }
  *(_DWORD *)(dword_D39F4 + 4 * v4) = 0;
  nullsub_11(1, a1, v4);
  sub_7A128(v2);
  return 1;
}
// 6AD30: using guessed type int __fastcall nullsub_11(_DWORD, _DWORD, _DWORD);
// D39F0: using guessed type int dword_D39F0;
// D39F4: using guessed type int dword_D39F4;
// D39F8: using guessed type int dword_D39F8;
// D3A00: using guessed type int dword_D3A00;
// D5BF5: using guessed type char byte_D5BF5;
// D5C00: using guessed type char under_debugger;
