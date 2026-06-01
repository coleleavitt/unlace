/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BB3B0
// Address: 0x080BB3B0

//----- (080BB3B0) --------------------------------------------------------
int __cdecl sub_80BB3B0(void *a1)
{
  int v1; // ecx

  sub_80D10D0(*((_DWORD *)a1 + 2), -1);
  sub_80BB2A0(v1, *((int **)a1 + 1));
  if ( a1 )
  {
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 1) = 0;
    sub_80D0D50(*((char **)a1 + 2));
    operator delete(a1, 0xCu);
  }
  return 0;
}
// 80BB3D6: variable 'v1' is possibly undefined
