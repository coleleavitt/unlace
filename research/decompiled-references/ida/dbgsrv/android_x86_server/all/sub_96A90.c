/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96A90
// Address: 0x00096A90

//----- (00096A90) --------------------------------------------------------
int __cdecl sub_96A90(int a1, _BYTE *a2, char *a3, void *a4)
{
  if ( a2 && !a2[36] )
    return (*(int (__cdecl **)(_BYTE *, int, char *, void *))(*(_DWORD *)a2 + 16))(a2, a1, a3, a4);
  else
    return sub_99010(a1, a3, a4);
}
