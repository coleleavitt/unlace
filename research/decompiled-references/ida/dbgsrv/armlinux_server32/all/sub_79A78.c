/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79A78
// Address: 0x00079A78

//----- (00079A78) --------------------------------------------------------
int __fastcall sub_79A78(int a1, int a2, __int64 *a3)
{
  void **v3; // r4
  __int64 v4; // kr00_8
  char *v5; // r7
  char *v6; // r6
  void *v7; // r1

  v3 = *(void ***)(a1 + 4 * (a2 + 4));
  v4 = *a3;
  v5 = (char *)v3[1];
  v6 = *((char **)a3 + 1);
  if ( v5 )
  {
    --v5;
    v6 = &v5[HIDWORD(v4)];
  }
  v7 = *v3;
  if ( v6 + 1 > v3[2] )
  {
    v7 = sub_78018((int)v3, v7, (unsigned int)(v6 + 1), 1u);
    *v3 = v7;
  }
  v3[1] = v6 + 1;
  v6[(_DWORD)v7] = 0;
  memmove(&v5[(_DWORD)*v3], (const void *)v4, HIDWORD(v4));
  return 1;
}
