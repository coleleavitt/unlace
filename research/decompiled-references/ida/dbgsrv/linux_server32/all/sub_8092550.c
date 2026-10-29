/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8092550
// Address: 0x08092550

//----- (08092550) --------------------------------------------------------
char *__cdecl sub_8092550(int *a1, int a2, int *a3)
{
  int v3; // edx
  char *v4; // eax
  char *result; // eax
  int v6; // edx
  int v7; // edx
  __int64 v8; // xmm0_8

  v3 = a1[8];
  v4 = (char *)a1[7];
  if ( a1[9] < (unsigned int)(v3 + 1) )
  {
    v4 = (char *)sub_80CF920((int)(a1 + 7), v4, v3 + 1, 0x1Cu);
    v3 = a1[8];
    a1[7] = (int)v4;
  }
  result = &v4[28 * v3];
  *(_DWORD *)result = 0;
  *((_DWORD *)result + 1) = 0;
  *((_DWORD *)result + 2) = 0;
  v6 = *a1;
  ++a1[8];
  *((_DWORD *)result + 3) = v6;
  *((_DWORD *)result + 4) = a1[1];
  *((_DWORD *)result + 6) = a1[10];
  *((_DWORD *)result + 5) = a2;
  if ( a3 )
  {
    v7 = *a3;
    v8 = *(_QWORD *)(a3 + 1);
    *a3 = *(_DWORD *)result;
    a3[1] = *((_DWORD *)result + 1);
    a3[2] = *((_DWORD *)result + 2);
    *(_DWORD *)result = v7;
    *(_QWORD *)(result + 4) = v8;
  }
  return result;
}
