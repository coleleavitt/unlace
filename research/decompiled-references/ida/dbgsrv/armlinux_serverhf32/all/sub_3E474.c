/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E474
// Address: 0x0003E474

//----- (0003E474) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_3E474(int a1, char a2)
{
  char v4; // r4
  pthread_mutex_t *v5; // r5
  int v6; // r3
  int v7; // r6
  __int64 v8; // r2

  v4 = 32 - a2;
  v5 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v6 = 1 << (a2 - 32);
  LODWORD(v8) = 1 << a2;
  v7 = *(_DWORD *)(a1 + 36);
  HIDWORD(v8) = v6 | (1u >> v4);
  if ( (*(_QWORD *)(a1 + 32) & v8) == 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(1444);
  }
  *(_DWORD *)(a1 + 32) &= ~(_DWORD)v8;
  *(_DWORD *)(a1 + 36) = v7 & ~HIDWORD(v8);
  return sub_7A128(v5);
}
// D3A90: using guessed type int dword_D3A90;
// D5C00: using guessed type char under_debugger;
