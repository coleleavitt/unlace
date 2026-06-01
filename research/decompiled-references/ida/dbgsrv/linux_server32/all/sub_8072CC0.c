/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072CC0
// Address: 0x08072CC0

//----- (08072CC0) --------------------------------------------------------
int __cdecl sub_8072CC0(_DWORD *a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  FILE *v4; // ecx
  int v5; // edx
  __int16 src; // [esp+0h] [ebp-12h] BYREF
  unsigned int v8; // [esp+2h] [ebp-10h]

  v2 = -1;
  v8 = __readgsdword(0x14u);
  v3 = a1[1];
  if ( v3 < dword_811E624 )
  {
    v4 = *(FILE **)(dword_811E620 + 4 * v3);
    if ( v4 )
    {
      v5 = a1[11];
      src = a1[6];
      v2 = sub_80CF220(v4, (char *)&src, 2u, v5 != 0);
    }
  }
  *(_DWORD *)(a2 + 4) = v2;
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
