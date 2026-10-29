/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458EA0
// Address: 0x00458EA0

//----- (00458EA0) --------------------------------------------------------
int __cdecl sub_458EA0(int a1, const CHAR *a2, int a3, WCHAR *a4, int *a5)
{
  DWORD *v5; // edi
  int v6; // eax
  int v7; // esi

  v5 = (DWORD *)a1;
  v6 = (*(int (__cdecl **)(int, const CHAR *, int))(a1 + 16))(a1, a2, a3);
  v7 = v6;
  if ( v6 != -1 )
  {
    a1 = v6;
    if ( !ConvertINetMultiByteToUnicode(v5 + 6, *v5, a2, &a1, a4, a5) && a1 == v7 )
      return v7;
    *sub_46B984() = 42;
  }
  return -1;
}
