/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BCAD0
// Address: 0x080BCAD0

//----- (080BCAD0) --------------------------------------------------------
int __cdecl sub_80BCAD0(int a1, _BYTE *a2, char *a3, int a4)
{
  if ( a2 && !a2[36] )
    return (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)a2 + 16))(a2, a1);
  else
    return sub_80BF8E0(a1, a3, a4);
}
