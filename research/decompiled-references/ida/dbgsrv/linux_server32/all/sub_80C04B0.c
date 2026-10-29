/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C04B0
// Address: 0x080C04B0

//----- (080C04B0) --------------------------------------------------------
int __cdecl sub_80C04B0(int a1)
{
  if ( !strcmp(*(const char **)(a1 + 32), "irs") )
    return sub_80BBF40(*(_DWORD *)(a1 + 16));
  else
    return (*(int (__cdecl **)(_DWORD, int))(dword_811E820 + 116))(*(_DWORD *)(a1 + 48), -1);
}
// 811E820: using guessed type int dword_811E820;
