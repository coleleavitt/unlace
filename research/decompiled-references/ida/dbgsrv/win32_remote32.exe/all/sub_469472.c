/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469472
// Address: 0x00469472

//----- (00469472) --------------------------------------------------------
int sub_469472()
{
  unsigned int v0; // eax
  int v2; // edi
  int *v3; // esi
  int v4; // eax

  v0 = dword_4B78C8;
  if ( !dword_4B78C8 )
  {
    v0 = 512;
LABEL_5:
    dword_4B78C8 = v0;
    goto LABEL_6;
  }
  if ( dword_4B78C8 < 3 )
  {
    v0 = 3;
    goto LABEL_5;
  }
LABEL_6:
  lpMem = sub_4791B9(v0, 4u);
  sub_479216(nullptr);
  if ( !lpMem )
  {
    dword_4B78C8 = 3;
    lpMem = sub_4791B9(3u, 4u);
    sub_479216(nullptr);
    if ( !lpMem )
      return -1;
  }
  v2 = 0;
  v3 = dword_4B5E70;
  do
  {
    sub_47901F((LPCRITICAL_SECTION)(v3 + 8), 0xFA0u, 0);
    *((_DWORD *)lpMem + v2) = v3;
    v4 = *((_DWORD *)&(*(&dword_4B7B38 + (v2 >> 6)))[1].DebugInfo + 14 * (v2 & 0x3F));
    if ( v4 == -1 || v4 == -2 || !v4 )
      v3[4] = -2;
    v3 += 14;
    ++v2;
  }
  while ( v3 != &dword_4B5F18 );
  return 0;
}
// 4B5E70: using guessed type int dword_4B5E70[3];
// 4B5F18: using guessed type int dword_4B5F18;
// 4B78C8: using guessed type int dword_4B78C8;
