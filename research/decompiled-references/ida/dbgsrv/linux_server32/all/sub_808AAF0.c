/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808AAF0
// Address: 0x0808AAF0

//----- (0808AAF0) --------------------------------------------------------
int __cdecl sub_808AAF0(int a1, int a2)
{
  _DWORD *v2; // edi
  int v3; // eax

  if ( !a1 )
    return sub_80C7880(1532);
  sub_8089430(a1);
  *(_BYTE *)a1 = 5;
  v2 = (_DWORD *)operator new(0x20u);
  v3 = 0;
  if ( a2 )
    v3 = *(_DWORD *)(a2 + 28);
  sub_807F610(v2, v3);
  *(_DWORD *)(a1 + 4) = v2;
  return 0;
}
