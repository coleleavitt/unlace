/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808B590
// Address: 0x0808B590

//----- (0808B590) --------------------------------------------------------
int __cdecl sub_808B590(int a1, unsigned __int8 *a2)
{
  int v2; // edx
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned __int8 v8[4]; // [esp+0h] [ebp-24h] BYREF
  __int128 v9; // [esp+4h] [ebp-20h]
  unsigned int v10; // [esp+14h] [ebp-10h]

  v10 = __readgsdword(0x14u);
  v2 = sub_808A290(a2, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20));
  result = 0;
  if ( !v2 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    v8[0] = 2;
    v9 = 0;
    sub_8089810(v8, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 20 * v4 - 20));
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 12);
      v7 = v5 - 1;
      *(_DWORD *)(a1 + 16) = v7;
      sub_8089430(v6 + 20 * v7);
    }
    sub_8089430((int)v8);
    result = 1;
  }
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
