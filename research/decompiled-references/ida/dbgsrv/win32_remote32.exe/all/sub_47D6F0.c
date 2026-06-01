/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D6F0
// Address: 0x0047D6F0

//----- (0047D6F0) --------------------------------------------------------
int __cdecl sub_47D6F0(int a1)
{
  _BYTE *v1; // esi
  int result; // eax
  int v3; // ecx
  char *v4; // edi
  _BYTE *v5; // ecx
  int v6; // edx

  v1 = (_BYTE *)(a1 + 24);
  sub_464890((__m128i *)(a1 + 24), 0, 0x101u);
  *(_DWORD *)(a1 + 4) = 0;
  result = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 540) = 0;
  v3 = 257;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v4 = (char *)dword_4B62D8 - a1;
  do
  {
    *v1 = v1[(_DWORD)v4];
    ++v1;
    --v3;
  }
  while ( v3 );
  v5 = (_BYTE *)(a1 + 281);
  v6 = 256;
  do
  {
    LOBYTE(result) = v4[(_DWORD)v5];
    *v5++ = result;
    --v6;
  }
  while ( v6 );
  return result;
}
// 4B62D8: using guessed type int dword_4B62D8[22];
