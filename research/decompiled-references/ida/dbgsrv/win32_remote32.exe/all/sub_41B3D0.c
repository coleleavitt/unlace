/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B3D0
// Address: 0x0041B3D0

//----- (0041B3D0) --------------------------------------------------------
int __userpurge sub_41B3D0@<eax>(int a1@<ebx>, int a2@<edi>, int a3, int a4)
{
  unsigned int v4; // edx
  int v5; // eax

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < dword_4B6B24 && (v5 = *(_DWORD *)(dword_4B6B20 + 4 * v4)) != 0 )
  {
    *(_DWORD *)(a4 + 8) = sub_45CFE0(a1, a2, v5, *(_QWORD *)(a3 + 32), *(_DWORD *)(a3 + 56));
    return 0;
  }
  else
  {
    *(_DWORD *)(a4 + 8) = -1;
    return 0;
  }
}
// 4B6B20: using guessed type int dword_4B6B20;
// 4B6B24: using guessed type int dword_4B6B24;
