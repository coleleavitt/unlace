/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438530
// Address: 0x00438530

//----- (00438530) --------------------------------------------------------
int __stdcall sub_438530(_DWORD *a1, _DWORD *a2, const char **a3, int a4)
{
  const char *v4; // ecx
  int v5; // esi
  int v6; // edi
  int v7; // ecx
  int v9; // eax
  int v10; // ecx

  v4 = MultiByteStr;
  v5 = a1[40];
  if ( a1[42] )
    v4 = (const char *)a1[41];
  v6 = a1[39];
  if ( a4 > 0 )
  {
    v7 = a1[36] - a4;
    if ( v7 < 0 )
      return 0;
    v9 = a1[35];
    v10 = 3 * v7;
    v5 = *(_DWORD *)(v9 + 8 * v10 + 16);
    v6 = *(_DWORD *)(v9 + 8 * v10);
    v4 = "#include ...";
  }
  if ( a2 )
    *a2 = v5;
  if ( a3 )
    *a3 = v4;
  return v6;
}
