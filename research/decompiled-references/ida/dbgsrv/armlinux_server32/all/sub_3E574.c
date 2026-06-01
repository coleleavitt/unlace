/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E574
// Address: 0x0003E574

//----- (0003E574) --------------------------------------------------------
int __fastcall sub_3E574(int a1)
{
  int v2; // r4
  pthread_mutex_t *v3; // r5
  __int64 v4; // r0
  __int64 v5; // r2
  bool v6; // cf

  v2 = 0;
  v3 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  HIDWORD(v4) = *(_DWORD *)(a1 + 32);
  LODWORD(v4) = *(_DWORD *)(a1 + 36);
  if ( (v4 & 0x100000000LL) != 0 )
  {
    v5 = 0x200000000LL;
    v2 = 1;
    while ( (v4 & v5) != 0 )
    {
      v6 = __CFADD__(HIDWORD(v5), HIDWORD(v5));
      HIDWORD(v5) *= 2;
      ++v2;
      LODWORD(v5) = v5 + v6 + (_DWORD)v5;
      if ( v2 == 64 )
      {
        if ( under_debugger )
          __und(0xFFu);
        sub_78C64(1443);
      }
    }
  }
  else
  {
    v5 = 0x100000000LL;
  }
  *(_DWORD *)(a1 + 32) = HIDWORD(v5) | HIDWORD(v4);
  *(_DWORD *)(a1 + 36) = v5 | v4;
  sub_7A290(v3);
  return v2;
}
// D4AB0: using guessed type int dword_D4AB0;
// D6C20: using guessed type char under_debugger;
