/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63134
// Address: 0x00063134

//----- (00063134) --------------------------------------------------------
_BYTE *__fastcall sub_63134(int a1, _DWORD *a2, int a3)
{
  _BYTE *result; // r0
  size_t v6; // r4
  int v7; // r6
  size_t v8; // r9
  unsigned int *v9; // r4
  _BYTE *v10; // r0
  size_t v11; // r9
  int v12; // r10
  unsigned int v13; // r11
  int v14; // r10
  unsigned int v15; // r11
  size_t v16; // r9
  size_t v17; // r9
  int v18; // r10
  const void *v19; // r11
  unsigned int v20; // r4
  char *v21; // r0
  int v22; // r2
  char *v23; // r0
  int v24; // r2
  int v25; // r10
  unsigned int v26; // r11
  int v27; // r6
  unsigned int v28; // r9
  char *v29; // r0
  int v30; // r2
  char *v31; // r0
  int v32; // r2
  char *v33; // r0
  int v34; // r2
  int v35; // [sp+4h] [bp-38h]
  _BYTE v37[5]; // [sp+24h] [bp-18h] BYREF
  _BYTE v38[3]; // [sp+29h] [bp-13h] BYREF
  _BYTE v39[5]; // [sp+2Ch] [bp-10h] BYREF
  _BYTE v40[3]; // [sp+31h] [bp-Bh] BYREF

  result = sub_76118(v39, (unsigned int)v40, a2[1]);
  v6 = result - v39;
  if ( result != v39 )
  {
    v27 = *(_DWORD *)(a1 + 4);
    v28 = v6 + v27;
    if ( __CFADD__(v6, v27) )
    {
      if ( (unsigned int)v27 > 0x7FFFFFFE )
      {
        if ( v27 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_74;
      }
      v28 = 0x7FFFFFFF;
    }
    else if ( v27 >= v28 )
    {
LABEL_74:
      result = memcpy((void *)(*(_DWORD *)a1 + v27), v39, v6);
      goto LABEL_2;
    }
    v33 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v28 )
    {
      v33 = (char *)sub_78018(a1, *(void **)a1, v28, 1u);
      v34 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v33;
    }
    else
    {
      v34 = *(_DWORD *)(a1 + 4);
    }
    memset(&v33[v34], 0, v28 - v34);
    *(_DWORD *)(a1 + 4) = v28;
    goto LABEL_74;
  }
LABEL_2:
  if ( a2[1] )
  {
    v7 = 0;
    v35 = 0;
    while ( 1 )
    {
      v9 = (unsigned int *)(*a2 + v7);
      v10 = sub_76118(v39, (unsigned int)v40, *v9);
      v11 = v10 - v39;
      if ( v10 == v39 )
        goto LABEL_4;
      v12 = *(_DWORD *)(a1 + 4);
      v13 = v11 + v12;
      if ( __CFADD__(v11, v12) )
        break;
      if ( v12 < v13 )
      {
        v21 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) >= v13 )
        {
          v22 = *(_DWORD *)(a1 + 4);
LABEL_32:
          memset(&v21[v22], 0, v13 - v22);
          *(_DWORD *)(a1 + 4) = v13;
          goto LABEL_13;
        }
LABEL_49:
        v21 = (char *)sub_78018(a1, v21, v13, 1u);
        v22 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v21;
        goto LABEL_32;
      }
LABEL_13:
      memcpy((void *)(*(_DWORD *)a1 + v12), v39, v11);
LABEL_4:
      result = sub_76118(v37, (unsigned int)v38, v9[3]);
      v8 = result - v37;
      if ( result != v37 )
      {
        v14 = *(_DWORD *)(a1 + 4);
        v15 = v8 + v14;
        if ( __CFADD__(v8, v14) )
        {
          if ( (unsigned int)v14 <= 0x7FFFFFFE )
          {
            v15 = 0x7FFFFFFF;
            v23 = *(char **)a1;
            if ( *(_DWORD *)(a1 + 8) < 0x7FFFFFFFu )
              goto LABEL_50;
            v24 = *(_DWORD *)(a1 + 4);
LABEL_37:
            memset(&v23[v24], 0, v15 - v24);
            *(_DWORD *)(a1 + 4) = v15;
          }
          else if ( v14 < 0 )
          {
            *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
          }
        }
        else if ( v14 < v15 )
        {
          v23 = *(char **)a1;
          if ( *(_DWORD *)(a1 + 8) >= v15 )
          {
            v24 = *(_DWORD *)(a1 + 4);
            goto LABEL_37;
          }
LABEL_50:
          v23 = (char *)sub_78018(a1, v23, v15, 1u);
          v24 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v23;
          goto LABEL_37;
        }
        result = memcpy((void *)(*(_DWORD *)a1 + v14), v37, v8);
        if ( !a3 )
          goto LABEL_6;
        goto LABEL_20;
      }
      if ( !a3 )
        goto LABEL_6;
LABEL_20:
      result = sub_76118(v39, (unsigned int)v40, v9[1]);
      v16 = result - v39;
      if ( result == v39 )
        goto LABEL_21;
      v25 = *(_DWORD *)(a1 + 4);
      v26 = v16 + v25;
      if ( __CFADD__(v16, v25) )
      {
        if ( (unsigned int)v25 > 0x7FFFFFFE )
        {
          if ( v25 < 0 )
            *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
          goto LABEL_46;
        }
        v26 = 0x7FFFFFFF;
LABEL_64:
        v29 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v26 )
        {
          v29 = (char *)sub_78018(a1, *(void **)a1, v26, 1u);
          v30 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v29;
        }
        else
        {
          v30 = *(_DWORD *)(a1 + 4);
        }
        memset(&v29[v30], 0, v26 - v30);
        *(_DWORD *)(a1 + 4) = v26;
        goto LABEL_46;
      }
      if ( v25 < v26 )
        goto LABEL_64;
LABEL_46:
      result = memcpy((void *)(*(_DWORD *)a1 + v25), v39, v16);
LABEL_21:
      v17 = v9[3];
      if ( v17 )
      {
        v18 = *(_DWORD *)(a1 + 4);
        v19 = (const void *)v9[2];
        v20 = v17 + v18;
        if ( __CFADD__(v17, v18) )
        {
          if ( (unsigned int)v18 > 0x7FFFFFFE )
          {
            if ( v18 < 0 )
              *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
            goto LABEL_48;
          }
          v20 = 0x7FFFFFFF;
        }
        else if ( v18 >= v20 )
        {
LABEL_48:
          result = memcpy((void *)(*(_DWORD *)a1 + v18), v19, v17);
          goto LABEL_6;
        }
        v31 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v20 )
        {
          v31 = (char *)sub_78018(a1, *(void **)a1, v20, 1u);
          v32 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v31;
        }
        else
        {
          v32 = *(_DWORD *)(a1 + 4);
        }
        memset(&v31[v32], 0, v20 - v32);
        *(_DWORD *)(a1 + 4) = v20;
        goto LABEL_48;
      }
LABEL_6:
      v7 += 20;
      if ( (unsigned int)++v35 >= a2[1] )
        return result;
    }
    if ( (unsigned int)v12 > 0x7FFFFFFE )
    {
      if ( v12 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_13;
    }
    v13 = 0x7FFFFFFF;
    v21 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) >= 0x7FFFFFFFu )
    {
      v22 = *(_DWORD *)(a1 + 4);
      goto LABEL_32;
    }
    goto LABEL_49;
  }
  return result;
}
