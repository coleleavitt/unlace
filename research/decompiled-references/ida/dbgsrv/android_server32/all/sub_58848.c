/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58848
// Address: 0x00058848

//----- (00058848) --------------------------------------------------------
int __fastcall sub_58848(int a1, __int64 a2, char **a3)
{
  unsigned __int64 v5; // r2
  int result; // r0
  int v7; // r0
  int v8; // r2
  _DWORD *v9; // r1
  char *v10; // r5
  char *v11; // r0
  char *v12; // r2
  char *v13; // r3
  char *v14; // r2

  if ( a2 )
  {
    v5 = a2 - 1;
    result = -1;
    if ( v5 < *(unsigned int *)(a1 + 56) )
    {
      v7 = 104 * v5;
      v8 = *(_DWORD *)(a1 + 52);
      v9 = (_DWORD *)(v8 + v7);
      v10 = *(char **)(v8 + v7 + 4);
      a3[6] = *(char **)(v8 + v7);
      a3[7] = v10;
      a3[10] = *(char **)(v8 + v7 + 8);
      a3[11] = nullptr;
      if ( *(_DWORD *)(v8 + v7 + 16) )
        v11 = *(char **)(v8 + v7 + 12);
      else
        v11 = &byte_B3CBE;
      *a3 = v11;
      v12 = (char *)v9[6];
      a3[13] = nullptr;
      a3[12] = v12;
      a3[18] = (char *)v9[7];
      a3[19] = nullptr;
      v13 = (char *)v9[11];
      a3[2] = (char *)v9[10];
      a3[3] = v13;
      v14 = (char *)v9[12];
      a3[15] = (char *)v9[13];
      a3[14] = v14;
      return 0;
    }
  }
  else
  {
    memset(a3, 0, 0x50u);
    *a3 = &byte_A0742;
    return 0;
  }
  return result;
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
