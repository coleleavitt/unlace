/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C2860
// Address: 0x080C2860

//----- (080C2860) --------------------------------------------------------
int __cdecl sub_80C2860(int a1)
{
  int v1; // eax
  int v2; // edi

  v1 = (*(int (__cdecl **)(_DWORD))(dword_811E820 + 128))(*(_DWORD *)(a1 + 44));
  *(_DWORD *)(a1 + 48) = v1;
  if ( !v1 )
    return 0;
  v2 = (*(int (__cdecl **)(int))(dword_811E820 + 12))(dword_811E824);
  (*(void (__cdecl **)(int, int, int))(*(_DWORD *)dword_811E820 + 84))(dword_811E820, v2, a1);
  (*(void (__cdecl **)(_DWORD, int, int))(dword_811E820 + 144))(*(_DWORD *)(a1 + 48), v2, v2);
  return 1;
}
// 811E820: using guessed type int dword_811E820;
// 811E824: using guessed type int dword_811E824;
