/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DB24
// Address: 0x0004DB24

//----- (0004DB24) --------------------------------------------------------
int __fastcall sub_4DB24(int result, int **a2, unsigned int *a3, int a4, int **a5)
{
  void **v6; // r7
  void **v7; // r4
  unsigned int v8; // r2
  void *v9; // r1
  void **v10; // r1
  _BYTE *v11; // r6
  char v12; // r1
  int v13; // r0
  int *v14; // r0
  int *v15; // r1
  int v16; // [sp+Ch] [bp-4h]

  v6 = (void **)a2[1];
  v7 = (void **)(a2 + 1);
  if ( v6 )
  {
    v8 = *a3;
    v7 = (void **)(a2 + 1);
    while ( 1 )
    {
      v9 = v6[4];
      if ( v8 >= (unsigned int)v9 )
      {
        if ( (unsigned int)v9 >= v8 )
          goto LABEL_11;
        v10 = (void **)v6[1];
        v7 = v6 + 1;
        if ( !v10 )
          goto LABEL_11;
        ++v6;
      }
      else
      {
        v10 = (void **)*v6;
        if ( !*v6 )
        {
          v7 = v6;
          goto LABEL_11;
        }
      }
      v7 = v6;
      v6 = v10;
    }
  }
  v6 = (void **)(a2 + 1);
LABEL_11:
  v11 = *v7;
  v12 = 0;
  if ( !*v7 )
  {
    v16 = result;
    v11 = operator new(0x30u);
    v13 = **a5;
    v11[24] = 2;
    *((_DWORD *)v11 + 4) = v13;
    *((_DWORD *)v11 + 8) = 0;
    *((_DWORD *)v11 + 9) = 0;
    *((_DWORD *)v11 + 10) = 0;
    *((_DWORD *)v11 + 11) = 0;
    *(_DWORD *)v11 = 0;
    *((_DWORD *)v11 + 1) = 0;
    *((_DWORD *)v11 + 2) = v6;
    *v7 = v11;
    v14 = (int *)**a2;
    if ( v14 )
    {
      *a2 = v14;
      v15 = (int *)*v7;
    }
    else
    {
      v15 = (int *)v11;
    }
    sub_261FA(a2[1], v15);
    a2[2] = (int *)((char *)a2[2] + 1);
    v12 = 1;
    result = v16;
  }
  *(_BYTE *)(result + 4) = v12;
  *(_DWORD *)result = v11;
  return result;
}
