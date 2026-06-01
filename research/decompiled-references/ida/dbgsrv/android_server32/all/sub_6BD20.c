/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BD20
// Address: 0x0006BD20

//----- (0006BD20) --------------------------------------------------------
int __fastcall sub_6BD20(int a1, unsigned int a2, int a3)
{
  int v6; // r1
  int v7; // r2
  int **v8; // r5
  int **v9; // r4
  int *v10; // r0
  int *v11; // r0
  int *v12; // r7
  int v13; // r7
  int *v14; // r0
  int v15; // r2
  int v16; // r0
  int *v17; // r1
  int v18; // r4
  int v20; // [sp+4h] [bp-8h]
  int v21; // [sp+8h] [bp-4h]

  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v6 = a1;
  v7 = *(_DWORD *)(a1 + 44);
  v8 = *(int ***)(v7 + 8);
  v9 = (int **)(v7 + 8);
  v21 = a3;
  if ( v8 )
  {
    v9 = (int **)(v7 + 8);
    while ( 1 )
    {
      v10 = v8[4];
      if ( (unsigned int)v10 <= a2 )
      {
        if ( (unsigned int)v10 >= a2 )
          goto LABEL_11;
        v11 = v8[1];
        v9 = v8 + 1;
        if ( !v11 )
          goto LABEL_11;
        ++v8;
      }
      else
      {
        v11 = *v8;
        if ( !*v8 )
        {
          v9 = v8;
          goto LABEL_11;
        }
      }
      v9 = v8;
      v8 = (int **)v11;
    }
  }
  v8 = (int **)(v7 + 8);
LABEL_11:
  v12 = *v9;
  if ( !*v9 )
  {
    v20 = v6;
    v13 = v7;
    v14 = (int *)operator new(0x18u);
    v15 = v13;
    v12 = v14;
    v14[4] = a2;
    v14[5] = 0;
    *v14 = 0;
    v14[1] = 0;
    v14[2] = (int)v8;
    *v9 = v14;
    v16 = **(_DWORD **)(v15 + 4);
    if ( v16 )
    {
      *(_DWORD *)(v15 + 4) = v16;
      v17 = *v9;
    }
    else
    {
      v17 = v12;
    }
    v18 = v15;
    sub_261FA(*(int **)(v15 + 8), v17);
    ++*(_DWORD *)(v18 + 12);
    v6 = v20;
  }
  v12[5] = v21;
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v6 + 44) + 12))(*(_DWORD *)(v6 + 44));
}
