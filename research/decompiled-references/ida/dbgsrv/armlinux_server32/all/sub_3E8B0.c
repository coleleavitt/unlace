/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E8B0
// Address: 0x0003E8B0

//----- (0003E8B0) --------------------------------------------------------
void *__fastcall sub_3E8B0(int a1, int *a2)
{
  int v3; // r11
  unsigned int v4; // r2
  _BYTE *v6; // r0
  size_t v7; // r4
  unsigned int v8; // r5
  int *v9; // r11
  int v10; // r2
  int v11; // r10
  int v12; // r7
  int v13; // r8
  _DWORD *v14; // r4
  _BYTE *v15; // r0
  _BYTE *v16; // r0
  _BYTE *v17; // r0
  _BYTE *v18; // r0
  int v19; // r5
  unsigned int v20; // r6
  char *v21; // r0
  int v22; // r2
  void **v23; // [sp+4h] [bp-28h]
  __int16 v24; // [sp+Eh] [bp-1Eh] BYREF
  _BYTE v25[5]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v26[15]; // [sp+15h] [bp-17h] BYREF
  int v27; // [sp+24h] [bp-8h] BYREF

  v3 = a1;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 4);
  v4 = a2[1];
  if ( !v4 )
    goto LABEL_2;
  v6 = sub_76118(v25, (unsigned int)v26, v4);
  v7 = v6 - v25;
  if ( v6 != v25 )
  {
    v19 = *(_DWORD *)(v3 + 4);
    v20 = v7 + v19;
    if ( __CFADD__(v7, v19) )
    {
      if ( (unsigned int)v19 > 0x7FFFFFFE )
      {
        if ( v19 < 0 )
          *(_DWORD *)(v3 + 4) = 0x7FFFFFFF;
        goto LABEL_16;
      }
      v20 = 0x7FFFFFFF;
    }
    else if ( v19 >= v20 )
    {
LABEL_16:
      memcpy((void *)(*(_DWORD *)v3 + v19), v25, v7);
      goto LABEL_4;
    }
    v21 = *(char **)v3;
    if ( v20 > *(_DWORD *)(v3 + 8) )
    {
      v21 = (char *)sub_78018(v3, *(void **)v3, v20, 1u);
      v22 = *(_DWORD *)(v3 + 4);
      *(_DWORD *)v3 = v21;
    }
    else
    {
      v22 = *(_DWORD *)(v3 + 4);
    }
    memset(&v21[v22], 0, v20 - v22);
    *(_DWORD *)(v3 + 4) = v20;
    goto LABEL_16;
  }
LABEL_4:
  if ( a2[1] )
  {
    v8 = 0;
    v23 = (void **)v3;
    v9 = a2;
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = *v9;
      v13 = 16 * v8;
      v14 = (_DWORD *)(*v9 + 16 * v8);
      v15 = sub_76118(v25, (unsigned int)&v27, *v14 - v10);
      v16 = sub_76118(v15, (unsigned int)&v27, v14[1] - v11);
      v17 = sub_76118(v16, (unsigned int)&v27, v14[2]);
      v18 = sub_76118(v17, (unsigned int)&v27, v14[3]);
      if ( v18 != v25 )
        sub_3E0F0(v23, v25, v18 - v25);
      ++v8;
      v10 = *(_DWORD *)(v12 + v13);
      v11 = v14[1];
    }
    while ( v8 < v9[1] );
    v3 = (int)v23;
  }
  LOWORD(v4) = *(_DWORD *)(v3 + 4) - *(_DWORD *)(v3 + 12);
LABEL_2:
  v24 = v4;
  return sub_3E0F0((void **)v3, &v24, 2u);
}
