/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0BE0
// Address: 0x080C0BE0

//----- (080C0BE0) --------------------------------------------------------
int __cdecl sub_80C0BE0(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  bool v5; // zf
  const char *v6; // eax

  a1[10] = a2;
  v2 = (*(int (__cdecl **)(_DWORD))(dword_811E820 + 92))(a1[12]);
  a1[10] = -1;
  LOBYTE(v3) = v2 == 1;
  v4 = v3;
  if ( v2 != 1 )
  {
    v5 = (*(int (__cdecl **)(_DWORD, int))(dword_811E820 + 116))(a1[12], v2) == 5;
    v6 = "irs";
    if ( !v5 )
      v6 = "openssl";
    a1[8] = v6;
  }
  return v4;
}
// 80C0C18: variable 'v3' is possibly undefined
// 811E820: using guessed type int dword_811E820;
