/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0D30
// Address: 0x080C0D30

//----- (080C0D30) --------------------------------------------------------
int __cdecl sub_80C0D30(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ebx
  bool v5; // zf
  const char *v6; // eax

  result = (*(int (__cdecl **)(_DWORD, int, int))(dword_811E820 + 156))(*(_DWORD *)(a1 + 48), a2, a3);
  v4 = result;
  if ( result <= 0 )
  {
    v5 = (*(int (__cdecl **)(_DWORD, int))(dword_811E820 + 116))(*(_DWORD *)(a1 + 48), result) == 5;
    v6 = "irs";
    if ( !v5 )
      v6 = "openssl";
    *(_DWORD *)(a1 + 32) = v6;
    return v4;
  }
  return result;
}
// 811E820: using guessed type int dword_811E820;
