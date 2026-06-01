/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62AAC
// Address: 0x00062AAC

//----- (00062AAC) --------------------------------------------------------
_BYTE *__fastcall sub_62AAC(int a1, _DWORD *a2)
{
  _BYTE *result; // r0
  size_t v4; // r4
  int v5; // r6
  unsigned int v6; // r0
  __int64 v7; // r2
  size_t v8; // r9
  unsigned int v9; // r0
  __int64 v10; // r2
  _BYTE *v11; // r0
  size_t v12; // r9
  size_t v13; // r4
  __int64 v14; // r0
  int v15; // r4
  __int64 v16; // r2
  _BYTE *v17; // r0
  size_t v18; // r9
  int v19; // r10
  unsigned int v20; // r11
  int v21; // r9
  unsigned int v22; // r10
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
  int v35; // r6
  unsigned int v36; // r8
  char *v37; // r0
  int v38; // r2
  signed int v39; // [sp+8h] [bp-40h]
  _BYTE v41[5]; // [sp+28h] [bp-20h] BYREF
  _BYTE v42[3]; // [sp+2Dh] [bp-1Bh] BYREF
  _BYTE v43[10]; // [sp+30h] [bp-18h] BYREF
  _BYTE v44[2]; // [sp+3Ah] [bp-Eh] BYREF
  _BYTE v45[10]; // [sp+3Ch] [bp-Ch] BYREF
  _BYTE v46[2]; // [sp+46h] [bp-2h] BYREF
  _BYTE v47[5]; // [sp+48h] [bp+0h] BYREF
  _BYTE v48[5]; // [sp+4Dh] [bp+5h] BYREF
  _BYTE v49[2]; // [sp+52h] [bp+Ah] BYREF

  v39 = a2[1];
  result = sub_76118(v47, (unsigned int)v48, v39);
  v4 = result - v47;
  if ( result != v47 )
  {
    v35 = *(_DWORD *)(a1 + 4);
    v36 = v4 + v35;
    if ( __CFADD__(v4, v35) )
    {
      if ( (unsigned int)v35 > 0x7FFFFFFE )
      {
        if ( v35 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_86;
      }
      v36 = 0x7FFFFFFF;
    }
    else if ( v35 >= v36 )
    {
LABEL_86:
      result = memcpy((void *)(*(_DWORD *)a1 + v35), v47, v4);
      goto LABEL_2;
    }
    v37 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v36 )
    {
      v37 = (char *)sub_78018(a1, *(void **)a1, v36, 1u);
      v38 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v37;
    }
    else
    {
      v38 = *(_DWORD *)(a1 + 4);
    }
    memset(&v37[v38], 0, v36 - v38);
    *(_DWORD *)(a1 + 4) = v36;
    goto LABEL_86;
  }
LABEL_2:
  if ( v39 > 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v14 = *(unsigned int *)(*a2 + 16 * v5);
      v15 = *a2 + 16 * v5;
      v16 = (_DWORD)v14 == -1 ? 0LL : v14 + 1;
      v17 = sub_76264(v43, (unsigned int)v44, v16, HIDWORD(v16));
      v18 = v17 - v43;
      if ( v17 != v43 )
        break;
LABEL_4:
      v6 = *(_DWORD *)(v15 + 4);
      if ( v6 == -1 )
        v7 = 0;
      else
        v7 = v6 + 1LL;
      v8 = sub_76264(v45, (unsigned int)v46, v7, HIDWORD(v7)) - v45;
      if ( v8 )
      {
        v25 = *(_DWORD *)(a1 + 4);
        v26 = v8 + v25;
        if ( __CFADD__(v8, v25) )
        {
          if ( (unsigned int)v25 <= 0x7FFFFFFE )
          {
            v26 = 0x7FFFFFFF;
            v31 = *(char **)a1;
            if ( *(_DWORD *)(a1 + 8) < 0x7FFFFFFFu )
              goto LABEL_64;
            v32 = *(_DWORD *)(a1 + 4);
LABEL_57:
            memset(&v31[v32], 0, v26 - v32);
            *(_DWORD *)(a1 + 4) = v26;
          }
          else if ( v25 < 0 )
          {
            *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
          }
        }
        else if ( v25 < v26 )
        {
          v31 = *(char **)a1;
          if ( *(_DWORD *)(a1 + 8) >= v26 )
          {
            v32 = *(_DWORD *)(a1 + 4);
            goto LABEL_57;
          }
LABEL_64:
          v31 = (char *)sub_78018(a1, v31, v26, 1u);
          v32 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v31;
          goto LABEL_57;
        }
        memcpy((void *)(*(_DWORD *)a1 + v25), v45, v8);
      }
      v9 = *(_DWORD *)(v15 + 8);
      if ( v9 == -1 )
        v10 = 0;
      else
        v10 = v9 + 1LL;
      v11 = sub_76264(v47, (unsigned int)v49, v10, HIDWORD(v10));
      v12 = v11 - v47;
      if ( v11 == v47 )
        goto LABEL_10;
      v23 = *(_DWORD *)(a1 + 4);
      v24 = v12 + v23;
      if ( __CFADD__(v12, v23) )
      {
        if ( (unsigned int)v23 > 0x7FFFFFFE )
        {
          if ( v23 < 0 )
            *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
          goto LABEL_33;
        }
        v24 = 0x7FFFFFFF;
        v27 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) >= 0x7FFFFFFFu )
        {
          v28 = *(_DWORD *)(a1 + 4);
          goto LABEL_47;
        }
LABEL_66:
        v27 = (char *)sub_78018(a1, v27, v24, 1u);
        v28 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v27;
LABEL_47:
        memset(&v27[v28], 0, v24 - v28);
        *(_DWORD *)(a1 + 4) = v24;
        goto LABEL_33;
      }
      if ( v23 < v24 )
      {
        v27 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v24 )
          goto LABEL_66;
        v28 = *(_DWORD *)(a1 + 4);
        goto LABEL_47;
      }
LABEL_33:
      memcpy((void *)(*(_DWORD *)a1 + v23), v47, v12);
LABEL_10:
      result = sub_76118(v41, (unsigned int)v42, *(unsigned __int8 *)(v15 + 12));
      v13 = result - v41;
      if ( result == v41 )
      {
        if ( v39 == ++v5 )
          return result;
      }
      else
      {
        v21 = *(_DWORD *)(a1 + 4);
        v22 = v13 + v21;
        if ( __CFADD__(v13, v21) )
        {
          if ( (unsigned int)v21 > 0x7FFFFFFE )
          {
            if ( v21 < 0 )
              *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
            goto LABEL_26;
          }
          v22 = 0x7FFFFFFF;
          v33 = *(char **)a1;
          if ( *(_DWORD *)(a1 + 8) >= 0x7FFFFFFFu )
          {
            v34 = *(_DWORD *)(a1 + 4);
            goto LABEL_62;
          }
          goto LABEL_63;
        }
        if ( v21 < v22 )
        {
          v33 = *(char **)a1;
          if ( *(_DWORD *)(a1 + 8) >= v22 )
          {
            v34 = *(_DWORD *)(a1 + 4);
LABEL_62:
            memset(&v33[v34], 0, v22 - v34);
            *(_DWORD *)(a1 + 4) = v22;
            goto LABEL_26;
          }
LABEL_63:
          v33 = (char *)sub_78018(a1, v33, v22, 1u);
          v34 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v33;
          goto LABEL_62;
        }
LABEL_26:
        ++v5;
        result = memcpy((void *)(*(_DWORD *)a1 + v21), v41, v13);
        if ( v39 == v5 )
          return result;
      }
    }
    v19 = *(_DWORD *)(a1 + 4);
    v20 = v18 + v19;
    if ( __CFADD__(v18, v19) )
    {
      if ( (unsigned int)v19 > 0x7FFFFFFE )
      {
        if ( v19 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_20;
      }
      v20 = 0x7FFFFFFF;
      v29 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) >= 0x7FFFFFFFu )
      {
        v30 = *(_DWORD *)(a1 + 4);
        goto LABEL_52;
      }
    }
    else
    {
      if ( v19 >= v20 )
      {
LABEL_20:
        memcpy((void *)(*(_DWORD *)a1 + v19), v43, v18);
        goto LABEL_4;
      }
      v29 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) >= v20 )
      {
        v30 = *(_DWORD *)(a1 + 4);
LABEL_52:
        memset(&v29[v30], 0, v20 - v30);
        *(_DWORD *)(a1 + 4) = v20;
        goto LABEL_20;
      }
    }
    v29 = (char *)sub_78018(a1, v29, v20, 1u);
    v30 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 = v29;
    goto LABEL_52;
  }
  return result;
}
