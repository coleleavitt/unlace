/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EAEE8
// Address: 0x00000000000EAEE8

//----- (00000000000EAEE8) ----------------------------------------------------
char *__fastcall sub_EAEE8(__int64 a1)
{
  unsigned __int8 *v1; // x8
  unsigned __int8 *v2; // x9
  int v4; // w25
  _QWORD *v5; // x20
  _QWORD *v6; // x8
  __int64 v7; // x9
  _QWORD *v8; // x0
  __int128 v9; // q0
  __int64 v10; // x26
  char *result; // x0
  unsigned __int8 *v12; // x8
  char *v13; // x20
  _QWORD *v14; // x21
  _QWORD *v15; // x8
  __int64 v16; // x9
  _QWORD *v17; // x0
  __int64 v18; // x10
  __int64 v19; // x11
  unsigned __int8 *v20; // x9
  _BYTE *v21; // x26
  __int64 v22; // x24
  char *v23; // x8
  char *v24; // x20
  _BYTE *v25; // x21
  size_t v26; // x23
  __int64 v27; // x28
  __int64 v28; // x27
  char *v29; // x22
  char *v30; // x0
  unsigned __int8 *v31; // x8
  unsigned __int8 *v32; // x9
  __int64 v33; // x22
  unsigned __int8 *v34; // x8
  __int64 v35; // x9
  int v36; // w9
  char *v37; // x8
  char *v38; // x21
  _BYTE *v39; // x22
  size_t v40; // x24
  __int64 v41; // x20
  __int64 v42; // x28
  char *v43; // x23
  char *v44; // x0
  char v45; // w24
  _QWORD *v46; // x27
  __int64 v47; // x9
  __int64 v48; // x10
  const void *v49; // x22
  __int64 v50; // x8
  _QWORD *v51; // x9
  signed __int64 v52; // x21
  unsigned __int64 v53; // x23
  _QWORD *v54; // x0
  char *v55; // x23
  _QWORD *v56; // x0
  __int64 v57; // x10
  _QWORD *v58; // x8
  __int64 v59; // x9
  __int64 v60; // x21
  _QWORD *v61; // x0
  _QWORD *v62; // x23
  __int64 v63; // x8
  __int64 v64; // x10
  const void *v65; // x21
  __int64 v66; // x8
  _QWORD *v67; // x9
  signed __int64 v68; // x20
  unsigned __int64 v69; // x22
  _QWORD *v70; // x0
  char *v71; // x22
  _QWORD *v72; // x0
  __int64 v73; // x10
  _QWORD *v74; // x8
  __int64 v75; // x9
  __int64 v76; // x20
  _QWORD *v77; // x0
  char *v78; // [xsp+0h] [xbp-60h]
  __int64 v79; // [xsp+8h] [xbp-58h]

  v2 = *(unsigned __int8 **)a1;
  v1 = *(unsigned __int8 **)(a1 + 8);
  if ( *(unsigned __int8 **)a1 == v1 || *v2 != 114 )
  {
    v4 = 0;
    if ( v2 == v1 )
      goto LABEL_11;
  }
  else
  {
    ++v2;
    v4 = 4;
    *(_QWORD *)a1 = v2;
    if ( v2 == v1 )
      goto LABEL_11;
  }
  if ( *v2 == 86 )
  {
    ++v2;
    v4 |= 2u;
    *(_QWORD *)a1 = v2;
  }
  if ( v2 != v1 )
  {
    if ( *v2 == 75 )
    {
      ++v2;
      v4 |= 1u;
      *(_QWORD *)a1 = v2;
    }
    goto LABEL_12;
  }
LABEL_11:
  v2 = v1;
LABEL_12:
  if ( (unsigned __int64)(v1 - v2) < 2 || *v2 != 68 )
    goto LABEL_39;
  if ( v2[1] == 111 )
  {
    v5 = *(_QWORD **)(a1 + 4832);
    *(_QWORD *)a1 = v2 + 2;
    v6 = v5 + 1;
    v7 = v5[1];
    if ( (unsigned __int64)(v7 + 32) > 0xFEF )
    {
      v8 = (_QWORD *)operator new[](0x1000u);
      v7 = 0;
      *v8 = v5;
      v8[1] = 0;
      v6 = v8 + 1;
      v5 = v8;
      *(_QWORD *)(a1 + 4832) = v8;
    }
    *v6 = v7 + 32;
    *(_QWORD *)&v9 = "noexcept";
    *(_QWORD *)((char *)v5 + v7 + 16) = off_161838;
    v10 = (__int64)v5 + v7 + 16;
    *((_QWORD *)&v9 + 1) = "";
    *(_DWORD *)(v10 + 8) = 16843015;
    *(_OWORD *)(v10 + 16) = v9;
    goto LABEL_40;
  }
  if ( *v2 != 68 )
    goto LABEL_39;
  if ( v2[1] != 79 )
  {
    if ( *v2 == 68 && v2[1] == 119 )
    {
      v18 = *(_QWORD *)(a1 + 16);
      v19 = *(_QWORD *)(a1 + 24);
      v20 = v2 + 2;
      v21 = (_BYTE *)(a1 + 40);
      *(_QWORD *)a1 = v20;
      v22 = (v19 - v18) >> 3;
      if ( v20 == v1 )
        goto LABEL_32;
LABEL_29:
      if ( *v20 != 69 )
      {
LABEL_32:
        while ( 1 )
        {
          result = (char *)sub_DB210(a1);
          if ( !result )
            return result;
          v23 = *(char **)(a1 + 24);
          v24 = result;
          if ( v23 == *(char **)(a1 + 32) )
          {
            v25 = *(_BYTE **)(a1 + 16);
            v26 = v23 - v25;
            v27 = (v23 - v25) >> 3;
            v28 = (v23 - v25) >> 2;
            if ( v21 == v25 )
            {
              v30 = (char *)malloc(2 * (v23 - v25));
              v29 = v30;
              if ( v26 )
                memmove(v30, v25, v26);
            }
            else
            {
              v29 = (char *)realloc(*(void **)(a1 + 16), 2 * (v23 - v25));
            }
            v23 = &v29[8 * v27];
            *(_QWORD *)(a1 + 16) = v29;
            *(_QWORD *)(a1 + 24) = v23;
            *(_QWORD *)(a1 + 32) = &v29[8 * v28];
          }
          *(_QWORD *)(a1 + 24) = v23 + 8;
          *(_QWORD *)v23 = v24;
          v20 = *(unsigned __int8 **)a1;
          if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
            goto LABEL_29;
        }
      }
      v62 = *(_QWORD **)(a1 + 4832);
      v63 = *(_QWORD *)(a1 + 16);
      v64 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)a1 = v20 + 1;
      v65 = (const void *)(v63 + 8 * v22);
      v67 = v62 + 1;
      v66 = v62[1];
      v68 = v64 - (_QWORD)v65;
      v69 = ((_DWORD)v64 - (_DWORD)v65 + 15) & 0xFFFFFFF0;
      if ( v69 + v66 >= 0xFF0 )
      {
        if ( v69 >= 0xFF1 )
        {
          v70 = (_QWORD *)operator new[](v69 + 16);
          v71 = (char *)(v70 + 2);
          *v70 = *v62;
          v70[1] = 0;
          *v62 = v70;
          if ( !v68 )
            goto LABEL_91;
          goto LABEL_90;
        }
        v72 = (_QWORD *)operator new[](0x1000u);
        v66 = 0;
        *v72 = v62;
        v72[1] = 0;
        v67 = v72 + 1;
        v62 = v72;
        *(_QWORD *)(a1 + 4832) = v72;
      }
      v73 = v66 + v69;
      v71 = (char *)v62 + v66 + 16;
      *v67 = v73;
      if ( !v68 )
      {
LABEL_91:
        *(_QWORD *)(a1 + 24) = v65;
        v74 = v62 + 1;
        v75 = v62[1];
        v76 = v68 >> 3;
        if ( (unsigned __int64)(v75 + 32) >= 0xFF0 )
        {
          v77 = (_QWORD *)operator new[](0x1000u);
          v75 = 0;
          *v77 = v62;
          v77[1] = 0;
          v74 = v77 + 1;
          v62 = v77;
          *(_QWORD *)(a1 + 4832) = v77;
        }
        *v74 = v75 + 32;
        *(_QWORD *)((char *)v62 + v75 + 16) = off_162F18;
        v10 = (__int64)v62 + v75 + 16;
        *(_DWORD *)(v10 + 8) = 16843026;
        *(_QWORD *)(v10 + 16) = v71;
        *(_QWORD *)(v10 + 24) = v76;
        goto LABEL_40;
      }
LABEL_90:
      memmove(v71, v65, v68);
      v62 = *(_QWORD **)(a1 + 4832);
      v65 = (const void *)(*(_QWORD *)(a1 + 16) + 8 * v22);
      goto LABEL_91;
    }
LABEL_39:
    v10 = 0;
    goto LABEL_40;
  }
  *(_QWORD *)a1 = v2 + 2;
  result = sub_DFE94((unsigned __int8 **)a1);
  if ( !result )
    return result;
  v12 = *(unsigned __int8 **)a1;
  v13 = result;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v12 != 69 )
    return nullptr;
  v14 = *(_QWORD **)(a1 + 4832);
  *(_QWORD *)a1 = v12 + 1;
  v15 = v14 + 1;
  v16 = v14[1];
  if ( (unsigned __int64)(v16 + 32) >= 0xFF0 )
  {
    v17 = (_QWORD *)operator new[](0x1000u);
    v16 = 0;
    *v17 = v14;
    v17[1] = 0;
    v15 = v17 + 1;
    v14 = v17;
    *(_QWORD *)(a1 + 4832) = v17;
  }
  *v15 = v16 + 32;
  *(_QWORD *)((char *)v14 + v16 + 16) = off_162EA8;
  v10 = (__int64)v14 + v16 + 16;
  *(_DWORD *)(v10 + 8) = 16843025;
  *(_QWORD *)(v10 + 16) = v13;
LABEL_40:
  v31 = *(unsigned __int8 **)a1;
  v32 = *(unsigned __int8 **)(a1 + 8);
  if ( (unsigned __int64)&v32[-*(_QWORD *)a1] >= 2 && *v31 == 68 && v31[1] == 120 )
  {
    v31 += 2;
    *(_QWORD *)a1 = v31;
  }
  if ( v31 == v32 || *v31 != 70 )
    return nullptr;
  *(_QWORD *)a1 = v31 + 1;
  if ( v31 + 1 != v32 && v31[1] == 89 )
    *(_QWORD *)a1 = v31 + 2;
  result = (char *)sub_DB210(a1);
  if ( result )
  {
    v33 = 1;
    v78 = result;
    v79 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = *(unsigned __int8 **)a1;
        v35 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)a1 == v35 )
          break;
        if ( *v34 == 69 )
        {
          v45 = 0;
          goto LABEL_74;
        }
        if ( *v34 != 118 )
          break;
        *(_QWORD *)a1 = v34 + 1;
      }
      if ( (unsigned __int64)(v35 - (_QWORD)v34) >= 2 )
      {
        v36 = *v34;
        if ( v36 == 82 )
        {
          if ( v34[1] == 69 )
          {
            v45 = 1;
            v33 = 2;
            goto LABEL_74;
          }
          v36 = *v34;
        }
        if ( v36 == 79 && v34[1] == 69 )
          break;
      }
      result = (char *)sub_DB210(a1);
      if ( !result )
        return result;
      v37 = *(char **)(a1 + 24);
      v38 = result;
      if ( v37 == *(char **)(a1 + 32) )
      {
        v39 = *(_BYTE **)(a1 + 16);
        v40 = v37 - v39;
        v41 = (v37 - v39) >> 3;
        v42 = (v37 - v39) >> 2;
        if ( (_BYTE *)(a1 + 40) == v39 )
        {
          v44 = (char *)malloc(2 * (v37 - v39));
          v43 = v44;
          if ( v40 )
            memmove(v44, v39, v40);
        }
        else
        {
          v43 = (char *)realloc(*(void **)(a1 + 16), 2 * (v37 - v39));
        }
        v33 = 1;
        v37 = &v43[8 * v41];
        *(_QWORD *)(a1 + 16) = v43;
        *(_QWORD *)(a1 + 24) = v37;
        *(_QWORD *)(a1 + 32) = &v43[8 * v42];
      }
      *(_QWORD *)(a1 + 24) = v37 + 8;
      *(_QWORD *)v37 = v38;
    }
    v33 = 2;
    v45 = 2;
LABEL_74:
    v46 = *(_QWORD **)(a1 + 4832);
    v47 = *(_QWORD *)(a1 + 16);
    v48 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)a1 = &v34[v33];
    v49 = (const void *)(v47 + 8 * v79);
    v51 = v46 + 1;
    v50 = v46[1];
    v52 = v48 - (_QWORD)v49;
    v53 = ((_DWORD)v48 - (_DWORD)v49 + 15) & 0xFFFFFFF0;
    if ( v53 + v50 >= 0xFF0 )
    {
      if ( v53 >= 0xFF1 )
      {
        v54 = (_QWORD *)operator new[](v53 + 16);
        v55 = (char *)(v54 + 2);
        *v54 = *v46;
        v54[1] = 0;
        *v46 = v54;
        if ( !v52 )
          goto LABEL_81;
        goto LABEL_80;
      }
      v56 = (_QWORD *)operator new[](0x1000u);
      v50 = 0;
      *v56 = v46;
      v56[1] = 0;
      v51 = v56 + 1;
      v46 = v56;
      *(_QWORD *)(a1 + 4832) = v56;
    }
    v57 = v50 + v53;
    v55 = (char *)v46 + v50 + 16;
    *v51 = v57;
    if ( !v52 )
    {
LABEL_81:
      *(_QWORD *)(a1 + 24) = v49;
      v58 = v46 + 1;
      v59 = v46[1];
      v60 = v52 >> 3;
      if ( (unsigned __int64)(v59 + 64) >= 0xFF0 )
      {
        v61 = (_QWORD *)operator new[](0x1000u);
        v59 = 0;
        *v61 = v46;
        v61[1] = 0;
        v58 = v61 + 1;
        v46 = v61;
        *(_QWORD *)(a1 + 4832) = v61;
      }
      *v58 = v59 + 64;
      *(_QWORD *)((char *)v46 + v59 + 16) = off_162F88;
      result = (char *)v46 + v59 + 16;
      *((_DWORD *)result + 2) = 65552;
      *((_QWORD *)result + 2) = v78;
      *((_QWORD *)result + 3) = v55;
      *((_QWORD *)result + 4) = v60;
      *((_DWORD *)result + 10) = v4;
      result[44] = v45;
      *((_QWORD *)result + 6) = v10;
      return result;
    }
LABEL_80:
    memmove(v55, v49, v52);
    v46 = *(_QWORD **)(a1 + 4832);
    v49 = (const void *)(*(_QWORD *)(a1 + 16) + 8 * v79);
    goto LABEL_81;
  }
  return result;
}
// 161838: using guessed type __int64 (__fastcall *off_161838[7])();
// 162EA8: using guessed type __int64 (__fastcall *off_162EA8[7])();
// 162F18: using guessed type __int64 (__fastcall *off_162F18[7])();
// 162F88: using guessed type __int64 (__fastcall *off_162F88[7])();
