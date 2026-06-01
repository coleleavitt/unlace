/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5572C
// Address: 0x0005572C

//----- (0005572C) --------------------------------------------------------
int __fastcall sub_5572C(int a1, int a2)
{
  __int16 v4; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r7
  _BYTE *v8; // r0
  unsigned int v9; // r0
  size_t v10; // r2
  int v11; // r1
  int v12; // r7
  unsigned int v13; // r1
  size_t v14; // r3
  _BYTE *v15; // r0
  int v16; // r0
  int v17; // r7
  _BYTE *v18; // r0
  size_t v20; // [sp+8h] [bp-10h]
  size_t v21; // [sp+Ch] [bp-Ch]
  unsigned int v22; // [sp+10h] [bp-8h]

  v4 = *(_WORD *)(a2 + 12);
  v5 = 0;
  switch ( v4 )
  {
    case 2:
    case 6:
      goto LABEL_9;
    case 4:
      v6 = *(_DWORD *)(a1 + 4);
      v7 = v6 - 1;
      if ( !v6 )
        v7 = 0;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v7 + 2) )
      {
        v8 = *(_BYTE **)a1;
      }
      else
      {
        v8 = qvector_reserve(a1, *(void **)a1, v7 + 2, 1u);
        *(_DWORD *)a1 = v8;
      }
      *(_DWORD *)(a1 + 4) = v7 + 2;
      v5 = 34;
      v8[v7] = 34;
      *(_BYTE *)(*(_DWORD *)a1 + v7 + 1) = 0;
LABEL_9:
      v9 = *(_DWORD *)(a2 + 4);
      v10 = v9 - 1;
      if ( v9 >= 2 )
      {
        v11 = *(_DWORD *)(a1 + 4);
        v12 = v11 - 1;
        if ( !v11 )
          v12 = 0;
        v13 = v12 + v9;
        v14 = v12 + v10;
        if ( *(_DWORD *)(a1 + 8) >= v12 + v9 )
        {
          v15 = *(_BYTE **)a1;
        }
        else
        {
          v22 = v12 + v9;
          v20 = v12 + v10;
          v21 = v9 - 1;
          v15 = qvector_reserve(a1, *(void **)a1, v13, 1u);
          v13 = v22;
          v14 = v20;
          v10 = v21;
          *(_DWORD *)a1 = v15;
        }
        *(_DWORD *)(a1 + 4) = v13;
        v15[v14] = 0;
        qmemcpy((void *)(*(_DWORD *)a1 + v12), *(const void **)a2, v10);
      }
      if ( v5 )
        goto LABEL_17;
      goto LABEL_23;
    case 46:
    case 47:
    case 58:
    case 60:
    case 62:
      LOBYTE(v5) = v4;
LABEL_17:
      v16 = *(_DWORD *)(a1 + 4);
      v17 = v16 - 1;
      if ( !v16 )
        v17 = 0;
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v17 + 2) )
      {
        v18 = *(_BYTE **)a1;
      }
      else
      {
        v18 = qvector_reserve(a1, *(void **)a1, v17 + 2, 1u);
        *(_DWORD *)a1 = v18;
      }
      *(_DWORD *)(a1 + 4) = v17 + 2;
      v18[v17] = v5;
      *(_BYTE *)(*(_DWORD *)a1 + v17 + 1) = 0;
LABEL_23:
      v5 = 1;
      break;
    default:
      return v5;
  }
  return v5;
}
