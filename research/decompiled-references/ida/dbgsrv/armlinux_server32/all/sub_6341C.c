/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6341C
// Address: 0x0006341C

//----- (0006341C) --------------------------------------------------------
_BYTE *__fastcall sub_6341C(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  unsigned int v7; // r7
  _BYTE *v8; // r0
  size_t v9; // r10
  unsigned int v10; // r0
  __int64 v11; // r2
  _BYTE *v12; // r0
  size_t v13; // r7
  unsigned int v14; // r7
  const void *v15; // r11
  _BYTE *result; // r0
  size_t v17; // r6
  int v18; // r4
  unsigned int v19; // r6
  int v20; // r8
  unsigned int v21; // r10
  int v22; // r11
  int v23; // r10
  unsigned int v24; // r11
  int v25; // r10
  unsigned int v26; // r11
  char *v27; // r0
  int v28; // r2
  char *v29; // r0
  int v30; // r2
  char *v31; // r0
  int v32; // r2
  char *v33; // r0
  int v34; // r2
  char *v35; // r0
  int v36; // r2
  void *src; // [sp+8h] [bp-1Ch]
  unsigned int v38; // [sp+Ch] [bp-18h]
  _BYTE v39[5]; // [sp+10h] [bp-14h] BYREF
  _BYTE v40[5]; // [sp+15h] [bp-Fh] BYREF
  _BYTE v41[2]; // [sp+1Ah] [bp-Ah] BYREF

  sub_63134(a1, a2, 1);
  v7 = *(_DWORD *)(a3 + 4);
  src = *(void **)a3;
  v8 = sub_76118(v39, (unsigned int)v40, v7);
  v9 = v8 - v39;
  if ( v8 == v39 )
  {
    if ( !v7 )
      goto LABEL_3;
    goto LABEL_31;
  }
  v22 = *(_DWORD *)(a1 + 4);
  v38 = v9 + v22;
  if ( !__CFADD__(v9, v22) )
  {
    if ( v22 >= v38 )
      goto LABEL_30;
    goto LABEL_48;
  }
  if ( (unsigned int)v22 <= 0x7FFFFFFE )
  {
    v38 = 0x7FFFFFFF;
LABEL_48:
    v27 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v38 )
    {
      v27 = (char *)sub_78018(a1, *(void **)a1, v38, 1u);
      v28 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v27;
    }
    else
    {
      v28 = *(_DWORD *)(a1 + 4);
    }
    memset(&v27[v28], 0, v38 - v28);
    *(_DWORD *)(a1 + 4) = v38;
    goto LABEL_30;
  }
  if ( v22 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
LABEL_30:
  memcpy((void *)(*(_DWORD *)a1 + v22), v39, v9);
  if ( !v7 )
    goto LABEL_3;
LABEL_31:
  v23 = *(_DWORD *)(a1 + 4);
  v24 = v7 + v23;
  if ( __CFADD__(v7, v23) )
  {
    if ( (unsigned int)v23 > 0x7FFFFFFE )
    {
      if ( v23 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_44;
    }
    v24 = 0x7FFFFFFF;
    goto LABEL_68;
  }
  if ( v23 < v24 )
  {
LABEL_68:
    v35 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v24 )
    {
      v35 = (char *)sub_78018(a1, *(void **)a1, v24, 1u);
      v36 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v35;
    }
    else
    {
      v36 = *(_DWORD *)(a1 + 4);
    }
    memset(&v35[v36], 0, v24 - v36);
    *(_DWORD *)(a1 + 4) = v24;
  }
LABEL_44:
  memcpy((void *)(*(_DWORD *)a1 + v23), src, v7);
LABEL_3:
  v10 = *(_DWORD *)(a3 + 12);
  if ( v10 == -1 )
    v11 = 0;
  else
    v11 = v10 + 1LL;
  v12 = sub_76264(v39, (unsigned int)v41, v11, HIDWORD(v11));
  v13 = v12 - v39;
  if ( v12 != v39 )
  {
    v25 = *(_DWORD *)(a1 + 4);
    v26 = v13 + v25;
    if ( __CFADD__(v13, v25) )
    {
      if ( (unsigned int)v25 > 0x7FFFFFFE )
      {
        if ( v25 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_46;
      }
      v26 = 0x7FFFFFFF;
    }
    else if ( v25 >= v26 )
    {
LABEL_46:
      memcpy((void *)(*(_DWORD *)a1 + v25), v39, v13);
      goto LABEL_7;
    }
    v33 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v26 )
    {
      v33 = (char *)sub_78018(a1, *(void **)a1, v26, 1u);
      v34 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v33;
    }
    else
    {
      v34 = *(_DWORD *)(a1 + 4);
    }
    memset(&v33[v34], 0, v26 - v34);
    *(_DWORD *)(a1 + 4) = v26;
    goto LABEL_46;
  }
LABEL_7:
  v14 = *(_DWORD *)(a3 + 20);
  v15 = *(const void **)(a3 + 16);
  result = sub_76118(v39, (unsigned int)v40, v14);
  v17 = result - v39;
  if ( result == v39 )
  {
    if ( !v14 )
      goto LABEL_9;
LABEL_12:
    v18 = *(_DWORD *)(a1 + 4);
    v19 = v14 + v18;
    if ( __CFADD__(v14, v18) )
    {
      if ( (unsigned int)v18 > 0x7FFFFFFE )
      {
        if ( v18 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_17;
      }
      v19 = 0x7FFFFFFF;
    }
    else if ( v18 >= v19 )
    {
LABEL_17:
      result = memcpy((void *)(*(_DWORD *)a1 + v18), v15, v14);
      goto LABEL_9;
    }
    v29 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v19 )
    {
      v29 = (char *)sub_78018(a1, *(void **)a1, v19, 1u);
      v30 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v29;
    }
    else
    {
      v30 = *(_DWORD *)(a1 + 4);
    }
    memset(&v29[v30], 0, v19 - v30);
    *(_DWORD *)(a1 + 4) = v19;
    goto LABEL_17;
  }
  v20 = *(_DWORD *)(a1 + 4);
  v21 = v17 + v20;
  if ( !__CFADD__(v17, v20) )
  {
    if ( v20 >= v21 )
      goto LABEL_23;
    goto LABEL_58;
  }
  if ( (unsigned int)v20 <= 0x7FFFFFFE )
  {
    v21 = 0x7FFFFFFF;
LABEL_58:
    v31 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v21 )
    {
      v31 = (char *)sub_78018(a1, *(void **)a1, v21, 1u);
      v32 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v31;
    }
    else
    {
      v32 = *(_DWORD *)(a1 + 4);
    }
    memset(&v31[v32], 0, v21 - v32);
    *(_DWORD *)(a1 + 4) = v21;
    goto LABEL_23;
  }
  if ( v20 < 0 )
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
LABEL_23:
  result = memcpy((void *)(*(_DWORD *)a1 + v20), v39, v17);
  if ( v14 )
    goto LABEL_12;
LABEL_9:
  if ( a4 )
    return sub_63134(a1, a4, 0);
  return result;
}
