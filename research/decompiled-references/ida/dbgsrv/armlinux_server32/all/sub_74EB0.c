/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74EB0
// Address: 0x00074EB0

//----- (00074EB0) --------------------------------------------------------
int __fastcall sub_74EB0(int a1, __int64 a2, char *a3, signed int a4)
{
  __int64 v5; // r6
  unsigned int v7; // r1
  __int64 v9; // r2
  char *v10; // r9
  size_t v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r8
  __int64 v15; // r0
  char *v17; // r9
  char *v18; // r1

  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 != a2 )
  {
    sub_70B98(3);
    return -1;
  }
  v7 = *(_DWORD *)(a1 + 32);
  if ( v7 < *(_DWORD *)(a1 + 24) )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v10 = a3;
    while ( 1 )
    {
      v14 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4 * v7);
      LODWORD(v15) = sub_74D98(v14, v9, 0);
      if ( *(_QWORD *)(a1 + 48) != v15 )
        return -1;
      v11 = sub_74B94(v14, v10, a4);
      LODWORD(v9) = 0;
      if ( v11 == -1 )
      {
        v11 = 0;
      }
      else
      {
        a4 -= v11;
        v10 += v11;
      }
      HIDWORD(v9) = 0;
      if ( !a4 )
      {
        v17 = (char *)(v10 - a3);
        *(_QWORD *)(a1 + 48) += v11;
        v18 = v17;
        v5 = *(_QWORD *)(a1 + 40);
        goto LABEL_13;
      }
      v12 = *(_DWORD *)(a1 + 32);
      v13 = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 48) = 0;
      v7 = v12 + 1;
      *(_DWORD *)(a1 + 32) = v7;
      if ( v7 >= v13 )
      {
        v5 = *(_QWORD *)(a1 + 40);
        v17 = (char *)(v10 - a3);
        v18 = v17;
        goto LABEL_13;
      }
    }
  }
  v18 = nullptr;
  v17 = nullptr;
LABEL_13:
  *(_QWORD *)(a1 + 40) = &v18[v5];
  return (int)v17;
}
// 74F26: variable 'v15' is possibly undefined
