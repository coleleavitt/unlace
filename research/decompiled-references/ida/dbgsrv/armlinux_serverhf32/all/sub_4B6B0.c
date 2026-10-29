/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B6B0
// Address: 0x0004B6B0

//----- (0004B6B0) --------------------------------------------------------
int __fastcall sub_4B6B0(int *a1, int a2, __int64 *a3)
{
  int v4; // r3
  char *v7; // r1
  char *v8; // r0
  int v9; // r3
  char *v10; // r2
  int v11; // r7
  int result; // r0
  __int64 v13; // kr00_8

  v4 = a1[8];
  v7 = (char *)a1[7];
  if ( v4 + 1 > (unsigned int)a1[9] )
  {
    v8 = (char *)sub_77EB0((int)(a1 + 7), v7, v4 + 1, 0x1Cu);
    v4 = a1[8];
    v7 = v8;
    a1[7] = (int)v8;
  }
  v9 = 28 * v4;
  v10 = &v7[v9];
  *(_DWORD *)&v7[v9] = 0;
  *((_DWORD *)v10 + 1) = 0;
  *((_DWORD *)v10 + 2) = 0;
  v11 = *a1;
  ++a1[8];
  *((_DWORD *)v10 + 3) = v11;
  *((_DWORD *)v10 + 4) = a1[1];
  result = a1[10];
  *((_DWORD *)v10 + 5) = a2;
  *((_DWORD *)v10 + 6) = result;
  if ( a3 )
  {
    v13 = *a3;
    *(_DWORD *)a3 = *(_DWORD *)&v7[v9];
    result = *((_DWORD *)a3 + 2);
    *((_DWORD *)a3 + 1) = *((_DWORD *)v10 + 1);
    *((_DWORD *)a3 + 2) = *((_DWORD *)v10 + 2);
    *(_DWORD *)&v7[v9] = v13;
    *((_DWORD *)v10 + 1) = HIDWORD(v13);
    *((_DWORD *)v10 + 2) = result;
  }
  return result;
}
