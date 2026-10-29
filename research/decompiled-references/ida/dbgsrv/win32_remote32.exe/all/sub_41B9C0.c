/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B9C0
// Address: 0x0041B9C0

//----- (0041B9C0) --------------------------------------------------------
int __userpurge sub_41B9C0@<eax>(__int128 a1@<xmm0>, int a2, int a3)
{
  int v3; // edi
  int v4; // edx
  int v5; // ebx

  v3 = sub_453380(a1);
  v5 = v4;
  sub_423B70(a3);
  *(_DWORD *)(a3 + 8) = v3;
  *(_DWORD *)(a3 + 12) = v5;
  *(_BYTE *)a3 = 9;
  return 0;
}
// 41B9CF: variable 'v4' is possibly undefined
