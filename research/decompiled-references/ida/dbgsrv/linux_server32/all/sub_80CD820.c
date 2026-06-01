/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD820
// Address: 0x080CD820

//----- (080CD820) --------------------------------------------------------
int __cdecl sub_80CD820(int a1, void *a2, int a3, char a4)
{
  size_t v4; // eax

  v4 = sub_80CD690(a1, a2, a3);
  if ( v4 != a3 )
    return -1;
  if ( a4 )
    sub_80D05E0((char *)a2, v4);
  return 0;
}
