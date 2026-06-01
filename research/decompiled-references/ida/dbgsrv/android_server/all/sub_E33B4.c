/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E33B4
// Address: 0x00000000000E33B4

//----- (00000000000E33B4) ----------------------------------------------------
char *__fastcall sub_E33B4(__int64 a1)
{
  unsigned __int8 *v1; // x8
  unsigned __int8 *v2; // x9
  unsigned __int64 v4; // x10
  int v5; // w23
  int v6; // w10
  __int64 v7; // x0
  __int64 v8; // x20
  char *v9; // x0
  _QWORD *v10; // x22
  char *v11; // x21
  _QWORD *v12; // x8
  __int64 v13; // x9
  _QWORD *v14; // x0
  __int64 v15; // x10
  char *v16; // x9
  __int64 v17; // x10
  char *v18; // x8
  unsigned __int8 *v19; // x8
  __int64 v20; // x0
  __int64 v21; // x21
  __int64 v22; // x22
  _QWORD *v23; // x27
  __int64 v24; // x8
  _QWORD *v25; // x9
  _QWORD *v26; // x0
  __int64 v27; // x10
  char *v28; // x8
  __int64 v29; // x8
  _QWORD *v30; // x22
  __int64 v31; // x8
  _QWORD *v32; // x9
  _QWORD *v33; // x0
  unsigned __int8 *v34; // x8
  __int64 v35; // x0
  __int64 v36; // x21
  _QWORD *v37; // x25
  __int64 v38; // x8
  _QWORD *v39; // x9
  _QWORD *v40; // x0
  __int64 v41; // x10
  __int64 v42; // x8
  _QWORD *v43; // x22
  __int64 v44; // x8
  _QWORD *v45; // x9
  _QWORD *v46; // x0
  __int64 v47; // x10
  char *v48; // x8
  __int64 v49; // x8
  __int64 *v50; // x9
  _QWORD *v51; // x20
  __int64 v52; // x8
  _QWORD *v53; // x9
  _QWORD *v54; // x0
  char *v55; // x8
  unsigned __int8 *v56; // x8
  _QWORD *v57; // x20
  _QWORD *v58; // x8
  __int64 v59; // x9
  _QWORD *v60; // x0
  __int64 v61; // x10
  char *v62; // x9
  __int64 v63; // x0
  char *v64; // x0
  _QWORD *v65; // x22
  char *v66; // x21
  _QWORD *v67; // x8
  __int64 v68; // x9
  _QWORD *v69; // x0
  __int64 v70; // x10
  char *v71; // x9
  __int64 v72; // x0
  _QWORD *v73; // x22
  __int64 v74; // x21
  _QWORD *v75; // x8
  __int64 v76; // x9
  _QWORD *v77; // x0
  char *v78; // x22
  __int64 v79; // x0
  _QWORD *v80; // x22
  _QWORD *v81; // x8
  __int64 v82; // x9
  _QWORD *v83; // x0
  char *v84; // x22

  v1 = *(unsigned __int8 **)a1;
  v2 = *(unsigned __int8 **)(a1 + 8);
  v4 = (unsigned __int64)&v2[-*(_QWORD *)a1];
  if ( v4 < 3 )
  {
    if ( v4 != 2 )
    {
      v5 = 0;
      goto LABEL_59;
    }
LABEL_28:
    v6 = *v1;
    goto LABEL_29;
  }
  v6 = *v1;
  if ( v6 == 115 )
  {
    if ( v1[1] == 114 && v1[2] == 78 )
    {
      *(_QWORD *)a1 = v1 + 3;
      v7 = sub_E5E64((unsigned __int8 **)a1);
      if ( !v7 )
        return nullptr;
      v8 = v7;
      if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 || **(_BYTE **)a1 != 73 )
        goto LABEL_16;
      v9 = sub_DE644(a1, 0);
      if ( !v9 )
        return nullptr;
      v10 = *(_QWORD **)(a1 + 4832);
      v11 = v9;
      v12 = v10 + 1;
      v13 = v10[1];
      if ( (unsigned __int64)(v13 + 32) >= 0xFF0 )
      {
        v14 = (_QWORD *)operator new[](0x1000u);
        v13 = 0;
        *v14 = v10;
        v14[1] = 0;
        v12 = v14 + 1;
        v10 = v14;
        *(_QWORD *)(a1 + 4832) = v14;
      }
      v15 = v13 + 32;
      v16 = (char *)v10 + v13;
      *v12 = v15;
      *((_QWORD *)v16 + 2) = off_162C08;
      v16 += 16;
      *((_QWORD *)v16 + 2) = v8;
      *((_QWORD *)v16 + 3) = v11;
      v8 = (__int64)v16;
      *((_DWORD *)v16 + 2) = 16843040;
LABEL_16:
      while ( 1 )
      {
        v19 = *(unsigned __int8 **)a1;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v19 == 69 )
          break;
        v20 = sub_E61F4(a1);
        if ( !v20 )
          return nullptr;
        v21 = v20;
        if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && **(_BYTE **)a1 == 73 )
        {
          v22 = (__int64)sub_DE644(a1, 0);
          if ( !v22 )
            return (char *)v22;
          v23 = *(_QWORD **)(a1 + 4832);
          v25 = v23 + 1;
          v24 = v23[1];
          if ( (unsigned __int64)(v24 + 32) >= 0xFF0 )
          {
            v26 = (_QWORD *)operator new[](0x1000u);
            v24 = 0;
            *v26 = v23;
            v26[1] = 0;
            v25 = v26 + 1;
            v23 = v26;
            *(_QWORD *)(a1 + 4832) = v26;
          }
          v27 = v24 + 32;
          v28 = (char *)v23 + v24;
          *v25 = v27;
          *((_QWORD *)v28 + 2) = off_162C08;
          v29 = (__int64)(v28 + 16);
          *(_DWORD *)(v29 + 8) = 16843040;
          *(_QWORD *)(v29 + 16) = v21;
          *(_QWORD *)(v29 + 24) = v22;
          if ( !v29 )
            return nullptr;
          v21 = v29;
        }
        v30 = *(_QWORD **)(a1 + 4832);
        v32 = v30 + 1;
        v31 = v30[1];
        if ( (unsigned __int64)(v31 + 32) >= 0xFF0 )
        {
          v33 = (_QWORD *)operator new[](0x1000u);
          v31 = 0;
          *v33 = v30;
          v33[1] = 0;
          v32 = v33 + 1;
          v30 = v33;
          *(_QWORD *)(a1 + 4832) = v33;
        }
        v17 = v31 + 32;
        v18 = (char *)v30 + v31;
        *v32 = v17;
        *((_QWORD *)v18 + 2) = off_162038;
        v18 += 16;
        *((_DWORD *)v18 + 2) = 16843031;
        *((_QWORD *)v18 + 2) = v8;
        *((_QWORD *)v18 + 3) = v21;
        v8 = (__int64)v18;
      }
      *(_QWORD *)a1 = v19 + 1;
      v72 = sub_E5F78(a1);
      if ( !v72 )
        return nullptr;
      v73 = *(_QWORD **)(a1 + 4832);
      v74 = v72;
      v75 = v73 + 1;
      v76 = v73[1];
      if ( (unsigned __int64)(v76 + 32) >= 0xFF0 )
      {
        v77 = (_QWORD *)operator new[](0x1000u);
        v76 = 0;
        *v77 = v73;
        v77[1] = 0;
        v75 = v77 + 1;
        v73 = v77;
        *(_QWORD *)(a1 + 4832) = v77;
      }
      v78 = (char *)v73 + v76;
      *v75 = v76 + 32;
      *((_QWORD *)v78 + 2) = off_162038;
      v22 = (__int64)(v78 + 16);
      *(_DWORD *)(v22 + 8) = 16843031;
      goto LABEL_80;
    }
    goto LABEL_28;
  }
LABEL_29:
  if ( v6 == 103 && v1[1] == 115 )
  {
    v1 += 2;
    v5 = 1;
    *(_QWORD *)a1 = v1;
    if ( (unsigned __int64)(v2 - v1) < 2 )
      goto LABEL_59;
  }
  else
  {
    v5 = 0;
  }
  if ( *v1 == 115 && v1[1] == 114 )
  {
    v34 = v1 + 2;
    *(_QWORD *)a1 = v34;
    if ( v2 != v34 && (unsigned int)*v34 - 48 <= 9 )
    {
      v35 = sub_E61F4(a1);
      if ( v35 )
      {
        v36 = v35;
        v8 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && **(_BYTE **)a1 == 73 )
          {
            v22 = (__int64)sub_DE644(a1, 0);
            if ( !v22 )
              return (char *)v22;
            v37 = *(_QWORD **)(a1 + 4832);
            v39 = v37 + 1;
            v38 = v37[1];
            if ( (unsigned __int64)(v38 + 32) >= 0xFF0 )
            {
              v40 = (_QWORD *)operator new[](0x1000u);
              v38 = 0;
              *v40 = v37;
              v40[1] = 0;
              v39 = v40 + 1;
              v37 = v40;
              *(_QWORD *)(a1 + 4832) = v40;
            }
            v41 = v38 + 32;
            v42 = (__int64)v37 + v38;
            *v39 = v41;
            *(_QWORD *)(v42 + 16) = off_162C08;
            v42 += 16;
            *(_QWORD *)(v42 + 16) = v36;
            *(_QWORD *)(v42 + 24) = v22;
            v36 = v42;
            *(_DWORD *)(v42 + 8) = 16843040;
            if ( !v42 )
              return nullptr;
          }
          if ( v8 )
            break;
          v8 = v36;
          if ( v5 )
          {
            v51 = *(_QWORD **)(a1 + 4832);
            v53 = v51 + 1;
            v52 = v51[1];
            if ( (unsigned __int64)(v52 + 32) >= 0xFF0 )
            {
              v54 = (_QWORD *)operator new[](0x1000u);
              v52 = 0;
              *v54 = v51;
              v54[1] = 0;
              v53 = v54 + 1;
              v51 = v54;
              *(_QWORD *)(a1 + 4832) = v54;
            }
            *v53 = v52 + 32;
            v55 = (char *)v51 + v52;
            *((_QWORD *)v55 + 2) = off_1621F8;
            v49 = (__int64)(v55 + 16);
            *(_DWORD *)(v49 + 8) = 16843041;
            v50 = (__int64 *)(v49 + 16);
            goto LABEL_54;
          }
LABEL_55:
          v56 = *(unsigned __int8 **)a1;
          if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v56 == 69 )
          {
            *(_QWORD *)a1 = v56 + 1;
            goto LABEL_76;
          }
          v36 = sub_E61F4(a1);
          v22 = 0;
          if ( !v36 )
            return (char *)v22;
        }
        v43 = *(_QWORD **)(a1 + 4832);
        v45 = v43 + 1;
        v44 = v43[1];
        if ( (unsigned __int64)(v44 + 32) >= 0xFF0 )
        {
          v46 = (_QWORD *)operator new[](0x1000u);
          v44 = 0;
          *v46 = v43;
          v46[1] = 0;
          v45 = v46 + 1;
          v43 = v46;
          *(_QWORD *)(a1 + 4832) = v46;
        }
        v47 = v44 + 32;
        v48 = (char *)v43 + v44;
        *v45 = v47;
        *((_QWORD *)v48 + 2) = off_162038;
        v49 = (__int64)(v48 + 16);
        *(_DWORD *)(v49 + 8) = 16843031;
        *(_QWORD *)(v49 + 16) = v8;
        v50 = (__int64 *)(v49 + 24);
LABEL_54:
        v8 = v49;
        *v50 = v36;
        goto LABEL_55;
      }
      return nullptr;
    }
    v63 = sub_E5E64((unsigned __int8 **)a1);
    if ( !v63 )
      return nullptr;
    v8 = v63;
    if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && **(_BYTE **)a1 == 73 )
    {
      v64 = sub_DE644(a1, 0);
      if ( !v64 )
        return nullptr;
      v65 = *(_QWORD **)(a1 + 4832);
      v66 = v64;
      v67 = v65 + 1;
      v68 = v65[1];
      if ( (unsigned __int64)(v68 + 32) >= 0xFF0 )
      {
        v69 = (_QWORD *)operator new[](0x1000u);
        v68 = 0;
        *v69 = v65;
        v69[1] = 0;
        v67 = v69 + 1;
        v65 = v69;
        *(_QWORD *)(a1 + 4832) = v69;
      }
      v70 = v68 + 32;
      v71 = (char *)v65 + v68;
      *v67 = v70;
      *((_QWORD *)v71 + 2) = off_162C08;
      v71 += 16;
      *((_QWORD *)v71 + 2) = v8;
      *((_QWORD *)v71 + 3) = v66;
      v8 = (__int64)v71;
      *((_DWORD *)v71 + 2) = 16843040;
    }
LABEL_76:
    v79 = sub_E5F78(a1);
    if ( !v79 )
      return nullptr;
    v80 = *(_QWORD **)(a1 + 4832);
    v74 = v79;
    v81 = v80 + 1;
    v82 = v80[1];
    if ( (unsigned __int64)(v82 + 32) >= 0xFF0 )
    {
      v83 = (_QWORD *)operator new[](0x1000u);
      v82 = 0;
      *v83 = v80;
      v83[1] = 0;
      v81 = v83 + 1;
      v80 = v83;
      *(_QWORD *)(a1 + 4832) = v83;
    }
    v84 = (char *)v80 + v82;
    *v81 = v82 + 32;
    *((_QWORD *)v84 + 2) = off_162038;
    v22 = (__int64)(v84 + 16);
    *(_DWORD *)(v22 + 8) = 16843031;
LABEL_80:
    *(_QWORD *)(v22 + 16) = v8;
    *(_QWORD *)(v22 + 24) = v74;
    return (char *)v22;
  }
LABEL_59:
  v22 = sub_E5F78(a1);
  if ( v22 && v5 )
  {
    v57 = *(_QWORD **)(a1 + 4832);
    v58 = v57 + 1;
    v59 = v57[1];
    if ( (unsigned __int64)(v59 + 32) >= 0xFF0 )
    {
      v60 = (_QWORD *)operator new[](0x1000u);
      v59 = 0;
      *v60 = v57;
      v60[1] = 0;
      v58 = v60 + 1;
      v57 = v60;
      *(_QWORD *)(a1 + 4832) = v60;
    }
    v61 = v59 + 32;
    v62 = (char *)v57 + v59;
    *v58 = v61;
    *((_QWORD *)v62 + 2) = off_1621F8;
    v62 += 16;
    *((_DWORD *)v62 + 2) = 16843041;
    *((_QWORD *)v62 + 2) = v22;
    return v62;
  }
  return (char *)v22;
}
// 162038: using guessed type __int64 (__fastcall *off_162038[7])();
// 1621F8: using guessed type __int64 (__fastcall *off_1621F8[7])();
// 162C08: using guessed type __int64 (__fastcall *off_162C08[7])();
