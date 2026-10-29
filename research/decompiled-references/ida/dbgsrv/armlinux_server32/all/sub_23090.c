/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23090
// Address: 0x00023090

//----- (00023090) --------------------------------------------------------
int __fastcall sub_23090(int a1, int a2, __int64 a3)
{
  char **v3; // r4
  char *v6; // r0
  char *v7; // r1
  int result; // r0
  char *v9; // r1

  v3 = *(char ***)(a1 + 8);
  v6 = v3[1];
  v7 = *v3;
  if ( v6 + 1 > v3[2] )
  {
    v7 = (char *)sub_78018((int)v3, v7, (unsigned int)(v6 + 1), 0x18u);
    v6 = v3[1];
    *v3 = v7;
  }
  result = 3 * (_DWORD)v6;
  v9 = &v7[8 * result];
  *((_DWORD *)v9 + 2) = 0;
  *((_DWORD *)v9 + 3) = 0;
  *((_DWORD *)v9 + 4) = 0;
  ++v3[1];
  *(_QWORD *)v9 = a3;
  *((_WORD *)v9 + 10) = *(_WORD *)(a2 + 2);
  *((_WORD *)v9 + 11) = *(_WORD *)(a2 + 4);
  return result;
}
