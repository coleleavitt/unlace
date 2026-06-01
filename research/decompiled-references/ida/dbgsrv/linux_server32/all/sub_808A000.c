/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A000
// Address: 0x0808A000

//----- (0808A000) --------------------------------------------------------
unsigned int __cdecl sub_808A000(int a1)
{
  int v1; // eax
  unsigned int result; // eax
  int v3; // edx
  int v4; // eax
  unsigned __int8 v5[4]; // [esp+0h] [ebp-24h] BYREF
  __int128 v6; // [esp+4h] [ebp-20h]
  unsigned int v7; // [esp+14h] [ebp-10h]

  v7 = __readgsdword(0x14u);
  v5[0] = 2;
  v6 = 0;
  sub_8089810(v5, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20));
  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
  {
    v3 = *(_DWORD *)(a1 + 12);
    v4 = v1 - 1;
    *(_DWORD *)(a1 + 16) = v4;
    sub_8089430(v3 + 20 * v4);
  }
  sub_8089430((int)v5);
  result = v7 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
