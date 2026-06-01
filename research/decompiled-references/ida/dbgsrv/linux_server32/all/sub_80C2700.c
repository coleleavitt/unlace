/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C2700
// Address: 0x080C2700

//----- (080C2700) --------------------------------------------------------
int __cdecl sub_80C2700(int *a1, int a2)
{
  int v2; // eax

  v2 = a1[12];
  if ( v2 )
  {
    if ( a1[13] )
    {
      (*(void (__cdecl **)(int))(dword_811E820 + 172))(a1[13]);
      v2 = a1[12];
    }
    if ( a2 >= 0 )
    {
      (*(void (__cdecl **)(int))(dword_811E820 + 148))(v2);
      v2 = a1[12];
    }
    (*(void (__cdecl **)(int))(dword_811E820 + 112))(v2);
    a1[12] = 0;
  }
  return sub_80BC010(a1 + 4, a2);
}
// 811E820: using guessed type int dword_811E820;
