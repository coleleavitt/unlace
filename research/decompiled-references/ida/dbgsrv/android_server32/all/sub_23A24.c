/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23A24
// Address: 0x00023A24

//----- (00023A24) --------------------------------------------------------
int __fastcall sub_23A24(int a1, int a2, unsigned int a3, int a4, int a5)
{
  int v6; // r6
  int v7; // r7
  int **v8; // r6
  int **v9; // r4
  unsigned int v10; // r0
  int *v11; // r0
  int *v12; // r1
  int v13; // r0

  v6 = 4;
  if ( a5 != 130 )
    v6 = a5;
  v7 = 0;
  if ( !a4 )
    return v7;
  v7 = 0;
  if ( (*(int (__fastcall **)(int, unsigned int, int, int, _DWORD))(*(_DWORD *)a1 + 148))(a1, a3, a4, v6, 0) != v6 )
    return v7;
  v8 = *(int ***)(a1 + 1004);
  v9 = (int **)(a1 + 1004);
  if ( !v8 )
  {
    v8 = (int **)(a1 + 1004);
    goto LABEL_15;
  }
  v9 = (int **)(a1 + 1004);
  while ( 1 )
  {
    v10 = (unsigned int)v8[4];
    if ( v10 > a3 )
      break;
    if ( v10 >= a3 )
      goto LABEL_15;
    v11 = v8[1];
    v9 = v8 + 1;
    if ( !v11 )
      goto LABEL_15;
    ++v8;
LABEL_7:
    v9 = v8;
    v8 = (int **)v11;
  }
  v11 = *v8;
  if ( *v8 )
    goto LABEL_7;
  v9 = v8;
LABEL_15:
  v7 = 1;
  if ( !*v9 )
  {
    v12 = (int *)operator new(0x14u);
    v12[4] = a3;
    *v12 = 0;
    v12[1] = 0;
    v12[2] = (int)v8;
    *v9 = v12;
    v13 = **(_DWORD **)(a1 + 1000);
    if ( v13 )
    {
      *(_DWORD *)(a1 + 1000) = v13;
      v12 = *v9;
    }
    sub_261FA(*(int **)(a1 + 1004), v12);
    ++*(_DWORD *)(a1 + 1008);
    return 1;
  }
  return v7;
}
