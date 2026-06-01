/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429DB0
// Address: 0x00429DB0

//----- (00429DB0) --------------------------------------------------------
int __stdcall sub_429DB0(_DWORD *a1)
{
  _DWORD *v1; // esi
  const char *v2; // eax
  unsigned __int16 v3; // ax
  _DWORD *v4; // edx
  const char *v5; // eax
  int v7; // ecx

  v1 = a1;
  v2 = MultiByteStr;
  if ( a1[5] )
    v2 = (const char *)a1[4];
  v3 = sub_42D200(a1, v2, (int *)&a1);
  v4 = a1;
  if ( a1 == (_DWORD *)1 || a1 == (_DWORD *)2 || a1 == (_DWORD *)3 )
  {
    v7 = v1[49] + 16 * v1[50];
    *(_DWORD *)(v7 - 4) = v3;
    *(_DWORD *)(v7 - 8) = v4;
    *(_DWORD *)(v7 - 12) = v1[27];
    return 0;
  }
  else
  {
    v5 = MultiByteStr;
    if ( v1[5] )
      v5 = (const char *)v1[4];
    sub_45CB10(0, v5);
    return sub_45CC20(55);
  }
}
