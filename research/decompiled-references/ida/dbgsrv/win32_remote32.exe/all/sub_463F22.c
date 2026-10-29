/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463F22
// Address: 0x00463F22

//----- (00463F22) --------------------------------------------------------
_DWORD *__cdecl sub_463F22(_DWORD *a1, int a2, int a3, int a4, int *a5, int a6)
{
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // esi
  int v9; // ebx
  int *v10; // eax
  unsigned int v11; // edx
  unsigned int v13; // [esp+Ch] [ebp-4h]

  v6 = a6;
  v7 = a5[3];
  v8 = v7;
  v9 = a5[4];
  v13 = v7;
  if ( a6 >= 0 )
  {
    v10 = (int *)(v9 + 8 + 20 * v7);
    v9 = a3;
    while ( v7 != -1 )
    {
      v10 -= 5;
      --v7;
      if ( *(v10 - 1) < a3 && a3 <= *v10 || v7 == -1 )
      {
        v8 = v13;
        --v6;
        v13 = v7;
      }
      if ( v6 < 0 )
        goto LABEL_9;
    }
LABEL_12:
    sub_467F38(v9, a5, v8);
  }
LABEL_9:
  v11 = v7 + 1;
  if ( v8 > a5[3] || v11 > v8 )
    goto LABEL_12;
  a1[3] = v8;
  *a1 = a2;
  a1[1] = v11;
  a1[2] = a2;
  return a1;
}
