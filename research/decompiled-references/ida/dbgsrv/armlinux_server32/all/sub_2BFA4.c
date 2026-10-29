/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BFA4
// Address: 0x0002BFA4

//----- (0002BFA4) --------------------------------------------------------
int __fastcall sub_2BFA4(_DWORD *a1, int a2)
{
  int v3; // r3
  char *v5; // r1
  unsigned int v6; // r2
  char *v7; // r0
  int result; // r0
  char *v9; // r2

  v3 = a1[116];
  v5 = (char *)a1[115];
  v6 = v3 + 1;
  if ( (unsigned int)(v3 + 1) > a1[117] )
  {
    v7 = (char *)sub_78018((int)(a1 + 115), v5, v6, 0x18u);
    v3 = a1[116];
    v5 = v7;
    a1[115] = v7;
    v6 = v3 + 1;
  }
  a1[116] = v6;
  result = *(_DWORD *)(a2 + 12);
  v9 = &v5[24 * v3];
  *(_DWORD *)v9 = *(_DWORD *)(a2 + 8);
  *((_DWORD *)v9 + 1) = result;
  *((_QWORD *)v9 + 1) = *(_QWORD *)(a2 + 32);
  *((_QWORD *)v9 + 2) = *(_QWORD *)(a2 + 16);
  return result;
}
