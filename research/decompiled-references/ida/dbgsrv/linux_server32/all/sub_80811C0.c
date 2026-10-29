/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80811C0
// Address: 0x080811C0

//----- (080811C0) --------------------------------------------------------
int __cdecl sub_80811C0(int a1)
{
  int result; // eax
  int v2; // edx
  char *v3; // eax
  char *v4; // edi
  char *v5; // ebx
  int v6; // eax

  result = a1;
  v2 = *(_DWORD *)(a1 + 24);
  if ( dword_811D3A0[0] != v2 )
  {
    v3 = (char *)dword_811D3A0[1];
    v4 = &v3[24 * v2];
    v5 = &v3[24 * dword_811D3A0[0]];
    if ( v4 < v5 )
    {
      do
      {
        v6 = (int)v4;
        v4 += 24;
        sub_807E040(v6);
      }
      while ( v4 < v5 );
      v3 = (char *)dword_811D3A0[1];
    }
    sub_80CF780(v3);
    dword_811D3A0[1] = *(_DWORD *)(a1 + 20);
    result = *(_DWORD *)(a1 + 24);
    dword_811D3A0[0] = result;
  }
  return result;
}
// 811D3A0: using guessed type int dword_811D3A0[3];
