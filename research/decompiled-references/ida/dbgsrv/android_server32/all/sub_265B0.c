/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_265B0
// Address: 0x000265B0

//----- (000265B0) --------------------------------------------------------
int __fastcall sub_265B0(int a1, _DWORD *a2)
{
  unsigned int v4; // r0
  char *v5; // r1
  int v6; // r3
  int *v7; // r6
  int v8; // r1
  int v9; // r5
  char *v10; // r0
  int v11; // r3
  char *v12; // r1
  char *v13; // r0
  int result; // r0
  int v15; // [sp+8h] [bp-8h]
  int v16; // [sp+Ch] [bp-4h]

  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(char **)a1;
  if ( *(_DWORD *)a1 > (unsigned int)a2 || *(_DWORD *)a1 + 12 * v4 <= (unsigned int)a2 )
  {
    v7 = (int *)(a1 + 4);
    v11 = *(_DWORD *)(a1 + 4);
    if ( v4 < v11 + 1 )
    {
      v5 = (char *)qvector_reserve(a1, v5, v11 + 1, 0xCu);
      *(_DWORD *)a1 = v5;
      v11 = *(_DWORD *)(a1 + 4);
    }
    *(_DWORD *)&v5[12 * v11] = *a2;
    *a2 = 0;
    v12 = &v5[12 * v11];
    *((_DWORD *)v12 + 1) = a2[1];
    a2[1] = 0;
    *((_DWORD *)v12 + 2) = a2[2];
    a2[2] = 0;
  }
  else
  {
    v6 = *a2;
    *a2 = 0;
    v16 = a2[1];
    a2[1] = 0;
    v15 = a2[2];
    a2[2] = 0;
    v7 = (int *)(a1 + 4);
    v8 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v8 + 1) )
    {
      v10 = *(char **)a1;
    }
    else
    {
      v9 = v6;
      v10 = (char *)qvector_reserve(a1, *(void **)a1, v8 + 1, 0xCu);
      *(_DWORD *)a1 = v10;
      v8 = *(_DWORD *)(a1 + 4);
      v6 = v9;
    }
    *(_DWORD *)&v10[12 * v8] = v6;
    v13 = &v10[12 * v8];
    *((_DWORD *)v13 + 1) = v16;
    *((_DWORD *)v13 + 2) = v15;
  }
  result = *v7 + 1;
  *v7 = result;
  return result;
}
