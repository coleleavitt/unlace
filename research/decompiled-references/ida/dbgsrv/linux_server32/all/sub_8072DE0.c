/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072DE0
// Address: 0x08072DE0

//----- (08072DE0) --------------------------------------------------------
int __cdecl sub_8072DE0(int a1, int a2)
{
  unsigned int v2; // eax
  FILE *v3; // eax
  int v4; // eax
  unsigned __int16 dest; // [esp+0h] [ebp-12h] BYREF
  unsigned int v7; // [esp+2h] [ebp-10h]

  v7 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 >= dword_811E624
    || (v3 = *(FILE **)(dword_811E620 + 4 * v2)) == nullptr
    || sub_80CF180(v3, (char *)&dest, 2, *(_DWORD *)(a1 + 24) != 0) )
  {
    v4 = -1;
  }
  else
  {
    v4 = dest;
  }
  *(_DWORD *)(a2 + 4) = v4;
  if ( v7 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
