/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A780
// Address: 0x0002A780

//----- (0002A780) --------------------------------------------------------
int __cdecl sub_2A780(int a1, int *a2, int a3)
{
  __int64 *v3; // edx
  int result; // eax
  __int64 v5; // xmm0_8
  __int64 v6; // xmm0_8

  if ( *a2 < -1 )
    v3 = (__int64 *)(a2 + 1);
  else
    v3 = (__int64 *)a2[1];
  result = 16 * a3;
  v5 = *v3;
  *(_QWORD *)(a1 + result + 904) = v3[1];
  *(_QWORD *)(a1 + result + 896) = v5;
  v6 = v3[2];
  *(_QWORD *)(a1 + result + 1320) = v3[3];
  *(_QWORD *)(a1 + result + 1312) = v6;
  *(_BYTE *)(a1 + 1248) |= 6u;
  return result;
}
