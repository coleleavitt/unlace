/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6209C
// Address: 0x0006209C

//----- (0006209C) --------------------------------------------------------
_BYTE *__fastcall sub_6209C(int a1, int a2)
{
  _BYTE *v4; // r0
  size_t v5; // r9
  _BYTE *v6; // r0
  size_t v7; // r9
  _BYTE *v8; // r0
  size_t v9; // r9
  unsigned int v10; // r0
  __int64 v11; // r2
  _BYTE *v12; // r0
  size_t v13; // r9
  _BYTE *result; // r0
  size_t v15; // r9
  unsigned int v16; // r3
  unsigned int v17; // r0
  __int64 v18; // r2
  _BYTE *v19; // r0
  size_t v20; // r7
  unsigned int v21; // r0
  __int64 v22; // r2
  size_t v23; // r6
  int v24; // r7
  unsigned int v25; // r8
  int v26; // r10
  int v27; // r10
  unsigned int v28; // r11
  int v29; // r10
  int v30; // r10
  unsigned int v31; // r11
  int v32; // r10
  unsigned int v33; // r11
  bool v34; // zf
  char v35; // r2
  int v36; // r3
  bool v37; // cc
  const char *v38; // r8
  size_t v39; // r6
  int v40; // r4
  unsigned int v41; // r7
  char *v42; // r0
  int v43; // r2
  char *v44; // r0
  int v45; // r2
  char *v46; // r0
  int v47; // r2
  char *v48; // r0
  int v49; // r2
  char *v50; // r0
  int v51; // r2
  char *v52; // r0
  int v53; // r2
  char *v54; // r0
  int v55; // r2
  int v56; // r8
  unsigned int v57; // r9
  char *v58; // r0
  int v59; // r2
  unsigned int v60; // [sp+4h] [bp-9h]
  unsigned int v61; // [sp+4h] [bp-9h]
  _BYTE v62[5]; // [sp+8h] [bp-5h] BYREF
  _BYTE v63[5]; // [sp+Dh] [bp+0h] BYREF
  _BYTE v64[2]; // [sp+12h] [bp+5h] BYREF

  v4 = sub_76118(v62, (unsigned int)v63, *(_DWORD *)(a2 + 16) & 0xFFFFFFF);
  v5 = v4 - v62;
  if ( v4 != v62 )
  {
    v27 = *(_DWORD *)(a1 + 4);
    v28 = v5 + v27;
    if ( __CFADD__(v5, v27) )
    {
      if ( (unsigned int)v27 > 0x7FFFFFFE )
      {
        if ( v27 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_61;
      }
      v28 = 0x7FFFFFFF;
    }
    else if ( v27 >= v28 )
    {
LABEL_61:
      memcpy((void *)(*(_DWORD *)a1 + v27), v62, v5);
      goto LABEL_2;
    }
    v42 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v28 )
    {
      v42 = (char *)sub_78018(a1, *(void **)a1, v28, 1u);
      v43 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v42;
    }
    else
    {
      v43 = *(_DWORD *)(a1 + 4);
    }
    memset(&v42[v43], 0, v28 - v43);
    *(_DWORD *)(a1 + 4) = v28;
    goto LABEL_61;
  }
LABEL_2:
  v6 = sub_76118(v62, (unsigned int)v63, *(_DWORD *)a2);
  v7 = v6 - v62;
  if ( v6 == v62 )
    goto LABEL_3;
  v32 = *(_DWORD *)(a1 + 4);
  v33 = v7 + v32;
  if ( __CFADD__(v7, v32) )
  {
    if ( (unsigned int)v32 > 0x7FFFFFFE )
    {
      if ( v32 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_55;
    }
    v33 = 0x7FFFFFFF;
    goto LABEL_106;
  }
  if ( v32 < v33 )
  {
LABEL_106:
    v48 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v33 )
    {
      v48 = (char *)sub_78018(a1, *(void **)a1, v33, 1u);
      v49 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v48;
    }
    else
    {
      v49 = *(_DWORD *)(a1 + 4);
    }
    memset(&v48[v49], 0, v33 - v49);
    *(_DWORD *)(a1 + 4) = v33;
  }
LABEL_55:
  memcpy((void *)(*(_DWORD *)a1 + v32), v62, v7);
LABEL_3:
  v8 = sub_76118(v62, (unsigned int)v63, *(_DWORD *)(a2 + 4));
  v9 = v8 - v62;
  if ( v8 == v62 )
    goto LABEL_4;
  v30 = *(_DWORD *)(a1 + 4);
  v31 = v9 + v30;
  if ( __CFADD__(v9, v30) )
  {
    if ( (unsigned int)v30 > 0x7FFFFFFE )
    {
      if ( v30 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_57;
    }
    v31 = 0x7FFFFFFF;
    goto LABEL_101;
  }
  if ( v30 < v31 )
  {
LABEL_101:
    v46 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v31 )
    {
      v46 = (char *)sub_78018(a1, *(void **)a1, v31, 1u);
      v47 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v46;
    }
    else
    {
      v47 = *(_DWORD *)(a1 + 4);
    }
    memset(&v46[v47], 0, v31 - v47);
    *(_DWORD *)(a1 + 4) = v31;
  }
LABEL_57:
  memcpy((void *)(*(_DWORD *)a1 + v30), v62, v9);
LABEL_4:
  v10 = *(_DWORD *)(a2 + 8);
  if ( v10 == -1 )
    v11 = 0;
  else
    v11 = v10 + 1LL;
  v12 = sub_76264(v62, (unsigned int)v64, v11, HIDWORD(v11));
  v13 = v12 - v62;
  if ( v12 != v62 )
  {
    v29 = *(_DWORD *)(a1 + 4);
    v61 = v13 + v29;
    if ( __CFADD__(v13, v29) )
    {
      if ( (unsigned int)v29 > 0x7FFFFFFE )
      {
        if ( v29 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_59;
      }
      v61 = 0x7FFFFFFF;
    }
    else if ( v29 >= v61 )
    {
LABEL_59:
      memcpy((void *)(*(_DWORD *)a1 + v29), v62, v13);
      goto LABEL_7;
    }
    v44 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v61 )
    {
      v44 = (char *)sub_78018(a1, *(void **)a1, v61, 1u);
      v45 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v44;
    }
    else
    {
      v45 = *(_DWORD *)(a1 + 4);
    }
    memset(&v44[v45], 0, v61 - v45);
    *(_DWORD *)(a1 + 4) = v61;
    goto LABEL_59;
  }
LABEL_7:
  result = sub_76118(v62, (unsigned int)v63, *(unsigned __int8 *)(a2 + 12));
  v15 = result - v62;
  if ( result != v62 )
  {
    v26 = *(_DWORD *)(a1 + 4);
    v60 = v15 + v26;
    if ( __CFADD__(v15, v26) )
    {
      if ( (unsigned int)v26 > 0x7FFFFFFE )
      {
        if ( v26 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_63;
      }
      v60 = 0x7FFFFFFF;
    }
    else if ( v26 >= v60 )
    {
LABEL_63:
      result = memcpy((void *)(*(_DWORD *)a1 + v26), v62, v15);
      goto LABEL_8;
    }
    v50 = *(char **)a1;
    if ( v60 > *(_DWORD *)(a1 + 8) )
    {
      v50 = (char *)sub_78018(a1, *(void **)a1, v60, 1u);
      v51 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v50;
    }
    else
    {
      v51 = *(_DWORD *)(a1 + 4);
    }
    memset(&v50[v51], 0, v60 - v51);
    *(_DWORD *)(a1 + 4) = v60;
    goto LABEL_63;
  }
LABEL_8:
  v16 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
  switch ( v16 )
  {
    case 1u:
    case 8u:
    case 0xBu:
      v34 = v16 == 11;
      if ( v16 != 11 )
        v34 = v16 == 1;
      v35 = !v34;
      if ( v16 == 8 )
        v36 = 0;
      else
        v36 = v35 & 1;
      if ( !v36 )
        return sub_61908(a1, a2 + 20);
      if ( !under_debugger )
        sub_78C64(3295);
      goto LABEL_89;
    case 2u:
    case 4u:
      if ( ((v16 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !under_debugger )
          sub_78C64(3296);
        goto LABEL_89;
      }
      result = sub_76118(v62, (unsigned int)v63, *(_DWORD *)(a2 + 20));
      v23 = result - v62;
      if ( result != v62 )
        goto LABEL_16;
      return result;
    case 3u:
    case 9u:
    case 0xAu:
      v37 = v16 > 3;
      if ( v16 != 3 )
        v37 = v16 - 9 > 1;
      if ( v37 )
      {
        if ( !under_debugger )
          sub_78C64(3297);
LABEL_89:
        __und(0xFFu);
      }
      if ( *(_DWORD *)(a2 + 24) )
        v38 = *(const char **)(a2 + 20);
      else
        v38 = (const char *)&dword_8DB98;
      if ( v38 )
      {
        v39 = strlen(v38) + 1;
      }
      else
      {
        v39 = 1;
        v38 = &byte_8DFE8;
      }
      v40 = *(_DWORD *)(a1 + 4);
      v41 = v40 + v39;
      if ( !__CFADD__(v40, v39) )
      {
        if ( v40 >= v41 )
          return memcpy((void *)(*(_DWORD *)a1 + v40), v38, v39);
        goto LABEL_123;
      }
      if ( (unsigned int)v40 <= 0x7FFFFFFE )
      {
        v41 = 0x7FFFFFFF;
LABEL_123:
        v52 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v41 )
        {
          v52 = (char *)sub_78018(a1, *(void **)a1, v41, 1u);
          v53 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v52;
        }
        else
        {
          v53 = *(_DWORD *)(a1 + 4);
        }
        memset(&v52[v53], 0, v41 - v53);
        *(_DWORD *)(a1 + 4) = v41;
        return memcpy((void *)(*(_DWORD *)a1 + v40), v38, v39);
      }
      if ( v40 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      return memcpy((void *)(*(_DWORD *)a1 + v40), v38, v39);
    case 5u:
      v17 = *(_DWORD *)(a2 + 20);
      if ( v17 == -1 )
        v18 = 0;
      else
        v18 = v17 + 1LL;
      v19 = sub_76264(v62, (unsigned int)v64, v18, HIDWORD(v18));
      v20 = v19 - v62;
      if ( v19 == v62 )
        goto LABEL_12;
      v56 = *(_DWORD *)(a1 + 4);
      v57 = v20 + v56;
      if ( !__CFADD__(v20, v56) )
      {
        if ( v56 >= v57 )
          goto LABEL_141;
        goto LABEL_145;
      }
      if ( (unsigned int)v56 <= 0x7FFFFFFE )
      {
        v57 = 0x7FFFFFFF;
LABEL_145:
        v58 = *(char **)a1;
        if ( v57 > *(_DWORD *)(a1 + 8) )
        {
          v58 = (char *)sub_78018(a1, *(void **)a1, v57, 1u);
          v59 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v58;
        }
        else
        {
          v59 = *(_DWORD *)(a1 + 4);
        }
        memset(&v58[v59], 0, v57 - v59);
        *(_DWORD *)(a1 + 4) = v57;
        goto LABEL_141;
      }
      if ( v56 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
LABEL_141:
      memcpy((void *)(*(_DWORD *)a1 + v56), v62, v20);
LABEL_12:
      v21 = *(_DWORD *)(a2 + 24);
      if ( v21 == -1 )
        v22 = 0;
      else
        v22 = v21 + 1LL;
      result = sub_76264(v62, (unsigned int)v64, v22, HIDWORD(v22));
      v23 = result - v62;
      if ( result == v62 )
        return result;
LABEL_16:
      v24 = *(_DWORD *)(a1 + 4);
      v25 = v23 + v24;
      if ( !__CFADD__(v23, v24) )
      {
        if ( v24 >= v25 )
          return memcpy((void *)(*(_DWORD *)a1 + v24), v62, v23);
        goto LABEL_132;
      }
      if ( (unsigned int)v24 <= 0x7FFFFFFE )
      {
        v25 = 0x7FFFFFFF;
LABEL_132:
        v54 = *(char **)a1;
        if ( v25 > *(_DWORD *)(a1 + 8) )
        {
          v54 = (char *)sub_78018(a1, *(void **)a1, v25, 1u);
          v55 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v54;
        }
        else
        {
          v55 = *(_DWORD *)(a1 + 4);
        }
        memset(&v54[v55], 0, v25 - v55);
        *(_DWORD *)(a1 + 4) = v25;
        return memcpy((void *)(*(_DWORD *)a1 + v24), v62, v23);
      }
      if ( v24 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      return memcpy((void *)(*(_DWORD *)a1 + v24), v62, v23);
    case 7u:
      return sub_61C30(a1, a2 + 20);
    default:
      return result;
  }
}
// 8DB98: using guessed type int dword_8DB98;
// 8DFE8: using guessed type char byte_8DFE8;
// D6C20: using guessed type char under_debugger;
