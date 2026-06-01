/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DF48C
// Address: 0x00000000000DF48C

//----- (00000000000DF48C) ----------------------------------------------------
char *__fastcall sub_DF48C(unsigned __int8 **a1, _BYTE *a2)
{
  unsigned __int8 *v2; // x8
  unsigned __int8 *v3; // x21
  unsigned __int64 v5; // x9
  int v6; // w10
  unsigned __int8 *v7; // x9
  unsigned __int8 *v8; // x10
  unsigned __int8 *v9; // x8
  char *v10; // x22
  __int64 v11; // x20
  __int64 v12; // x8
  unsigned __int8 *v13; // x21
  unsigned __int8 *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x20
  __int64 v17; // x24
  __int64 *v18; // x8
  unsigned __int8 **v19; // x21
  size_t v20; // x23
  __int64 v21; // x27
  __int64 v22; // x26
  unsigned __int8 *v23; // x22
  unsigned __int8 *v24; // x0
  unsigned __int8 *v25; // x8
  char v27; // w24
  unsigned __int8 *v28; // x26
  char *v29; // x20
  __int64 v30; // x27
  unsigned __int8 *v31; // x23
  unsigned __int8 *v32; // x21
  __int64 v33; // x8
  _QWORD *v34; // x9
  unsigned __int8 **v35; // x0
  unsigned __int16 v36; // w12
  __int64 v37; // x10
  char *v38; // x8
  __int64 (__fastcall **v39)(); // x11
  unsigned __int8 *v40; // x26
  __int64 v41; // x25
  __int64 v42; // x20
  __int64 *v43; // x8
  unsigned __int8 *v44; // x21
  size_t v45; // x23
  __int64 v46; // x28
  __int64 v47; // x27
  unsigned __int8 *v48; // x22
  unsigned __int8 *v49; // x0
  unsigned __int8 *v50; // x8
  unsigned __int8 *v51; // x20
  unsigned __int8 *v52; // x9
  unsigned __int8 *v53; // x10
  unsigned __int8 *v54; // x21
  __int64 v55; // x8
  _QWORD *v56; // x9
  signed __int64 v57; // x22
  unsigned __int64 v58; // x27
  _QWORD *v59; // x0
  unsigned __int8 *v60; // x23
  unsigned __int8 *v61; // x9
  unsigned __int8 *v62; // x10
  unsigned __int8 *v63; // x21
  __int64 v64; // x8
  _QWORD *v65; // x9
  signed __int64 v66; // x20
  unsigned __int64 v67; // x22
  _QWORD *v68; // x0
  unsigned __int8 **v69; // x0
  unsigned __int8 *v70; // x9
  unsigned __int8 *v71; // x8
  unsigned __int8 *v72; // x22
  unsigned __int8 *v73; // x23
  __int64 v74; // x8
  _QWORD *v75; // x9
  unsigned __int8 **v76; // x0
  __int64 v77; // x10
  unsigned __int8 *v78; // x8
  unsigned __int8 **v79; // x0
  __int64 v80; // x10
  __int64 v81; // x8
  unsigned __int8 **v82; // x0

  v2 = *a1;
  v3 = a1[1];
  v5 = v3 - *a1;
  if ( v3 == *a1 )
    goto LABEL_30;
  v6 = *v2;
  if ( v6 != 85 )
  {
    if ( (unsigned int)(v6 - 49) <= 8 )
    {
      v12 = sub_E61F4((__int64)a1);
      if ( v12 )
        return sub_DF304((__int64)a1, (char *)v12);
      return nullptr;
    }
    if ( v5 >= 2 && *v2 == 68 && v2[1] == 67 )
    {
      v13 = a1[2];
      v14 = a1[3];
      *a1 = v2 + 2;
      v15 = sub_E61F4((__int64)a1);
      if ( !v15 )
        return nullptr;
      v16 = v15;
      v17 = (v14 - v13) >> 3;
      while ( 1 )
      {
        v18 = (__int64 *)a1[3];
        if ( v18 == (__int64 *)a1[4] )
        {
          v19 = (unsigned __int8 **)a1[2];
          v20 = (char *)v18 - (char *)v19;
          v21 = ((char *)v18 - (char *)v19) >> 3;
          v22 = ((char *)v18 - (char *)v19) >> 2;
          if ( a1 + 5 == v19 )
          {
            v24 = (unsigned __int8 *)malloc(2 * ((char *)v18 - (char *)v19));
            v23 = v24;
            if ( v20 )
              memmove(v24, v19, v20);
          }
          else
          {
            v23 = (unsigned __int8 *)realloc(a1[2], 2 * ((char *)v18 - (char *)v19));
          }
          v18 = (__int64 *)&v23[8 * v21];
          a1[2] = v23;
          a1[3] = (unsigned __int8 *)v18;
          a1[4] = &v23[8 * v22];
        }
        a1[3] = (unsigned __int8 *)(v18 + 1);
        *v18 = v16;
        v25 = *a1;
        if ( *a1 != a1[1] && *v25 == 69 )
          break;
        v16 = sub_E61F4((__int64)a1);
        if ( !v16 )
          return nullptr;
      }
      v60 = a1[604];
      v61 = a1[2];
      v62 = a1[3];
      *a1 = v25 + 1;
      v63 = &v61[8 * v17];
      v65 = v60 + 8;
      v64 = *((_QWORD *)v60 + 1);
      v66 = v62 - v63;
      v67 = ((_DWORD)v62 - (_DWORD)v63 + 15) & 0xFFFFFFF0;
      if ( v67 + v64 >= 0xFF0 )
      {
        if ( v67 >= 0xFF1 )
        {
          v68 = (_QWORD *)operator new[](v67 + 16);
          v10 = (char *)(v68 + 2);
          *v68 = *(_QWORD *)v60;
          v68[1] = 0;
          *(_QWORD *)v60 = v68;
          if ( !v66 )
            goto LABEL_87;
          goto LABEL_86;
        }
        v79 = (unsigned __int8 **)operator new[](0x1000u);
        v64 = 0;
        *v79 = v60;
        v79[1] = nullptr;
        v65 = v79 + 1;
        v60 = (unsigned __int8 *)v79;
        a1[604] = (unsigned __int8 *)v79;
      }
      v80 = v64 + v67;
      v10 = (char *)&v60[v64 + 16];
      *v65 = v80;
      if ( !v66 )
      {
LABEL_87:
        a1[3] = v63;
        v34 = v60 + 8;
        v81 = *((_QWORD *)v60 + 1);
        v11 = v66 >> 3;
        if ( (unsigned __int64)(v81 + 32) >= 0xFF0 )
        {
          v82 = (unsigned __int8 **)operator new[](0x1000u);
          v81 = 0;
          *v82 = v60;
          v82[1] = nullptr;
          v34 = v82 + 1;
          v60 = (unsigned __int8 *)v82;
          a1[604] = (unsigned __int8 *)v82;
        }
        v36 = 297;
        v37 = v81 + 32;
        v38 = (char *)&v60[v81];
        v39 = off_1629D8;
LABEL_43:
        *v34 = v37;
        *((_QWORD *)v38 + 2) = v39;
        v12 = (__int64)(v38 + 16);
        *(_DWORD *)(v12 + 8) = v36 | 0x1010000;
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = v11;
        if ( !v12 )
          return nullptr;
        return sub_DF304((__int64)a1, (char *)v12);
      }
LABEL_86:
      memmove(v10, v63, v66);
      v60 = a1[604];
      v63 = &a1[2][8 * v17];
      goto LABEL_87;
    }
LABEL_30:
    v12 = (__int64)sub_E64C0((__int64)a1, a2);
    if ( v12 )
      return sub_DF304((__int64)a1, (char *)v12);
    return nullptr;
  }
  if ( v5 < 2 )
    return nullptr;
  if ( v2[1] != 116 )
  {
    if ( v2[1] != 108 )
      return nullptr;
    v27 = *((_BYTE *)a1 + 722);
    *a1 = v2 + 2;
    *((_BYTE *)a1 + 722) = 1;
    if ( (unsigned __int64)(v3 - (v2 + 2)) >= 2 && v2[2] == 118 && v2[3] == 69 )
    {
      v28 = v2 + 4;
      v29 = nullptr;
      v30 = 0;
      *a1 = v2 + 4;
      v31 = v3;
      if ( v3 != v2 + 4 )
      {
LABEL_68:
        if ( (unsigned int)*v28 - 48 <= 9 )
        {
          v70 = v28 + 1;
          while ( 1 )
          {
            v71 = v70;
            *a1 = v70;
            if ( v3 == v70 )
              break;
            ++v70;
            if ( (unsigned int)*v71 - 48 >= 0xA )
            {
              v72 = v28;
              v3 = v71;
              goto LABEL_76;
            }
          }
          v72 = v28;
LABEL_76:
          v28 = v71;
          if ( v71 == v31 )
            goto LABEL_82;
          goto LABEL_77;
        }
      }
LABEL_73:
      v3 = nullptr;
      v72 = nullptr;
      if ( v28 == v31 )
      {
LABEL_82:
        *((_BYTE *)a1 + 722) = v27;
        return nullptr;
      }
LABEL_77:
      if ( *v28 == 95 )
      {
        v73 = a1[604];
        *a1 = v28 + 1;
        v75 = v73 + 8;
        v74 = *((_QWORD *)v73 + 1);
        if ( (unsigned __int64)(v74 + 48) >= 0xFF0 )
        {
          v76 = (unsigned __int8 **)operator new[](0x1000u);
          v74 = 0;
          *v76 = v73;
          v76[1] = nullptr;
          v75 = v76 + 1;
          v73 = (unsigned __int8 *)v76;
          a1[604] = (unsigned __int8 *)v76;
        }
        v77 = v74 + 48;
        v78 = &v73[v74];
        *v75 = v77;
        *((_QWORD *)v78 + 2) = off_162968;
        v12 = (__int64)(v78 + 16);
        *(_DWORD *)(v12 + 8) = 16843048;
        *(_QWORD *)(v12 + 16) = v29;
        *(_QWORD *)(v12 + 24) = v30;
        *(_QWORD *)(v12 + 32) = v72;
        *(_QWORD *)(v12 + 40) = v3;
        *((_BYTE *)a1 + 722) = v27;
        if ( !v12 )
          return nullptr;
        return sub_DF304((__int64)a1, (char *)v12);
      }
      goto LABEL_82;
    }
    v40 = (unsigned __int8 *)(a1 + 5);
    v41 = (a1[3] - a1[2]) >> 3;
    do
    {
      v42 = sub_DB210((__int64)a1);
      if ( !v42 )
        goto LABEL_82;
      v43 = (__int64 *)a1[3];
      if ( v43 == (__int64 *)a1[4] )
      {
        v44 = a1[2];
        v45 = (char *)v43 - (char *)v44;
        v46 = ((char *)v43 - (char *)v44) >> 3;
        v47 = ((char *)v43 - (char *)v44) >> 2;
        if ( v40 == v44 )
        {
          v49 = (unsigned __int8 *)malloc(2 * ((char *)v43 - (char *)v44));
          v48 = v49;
          if ( v45 )
            memmove(v49, v44, v45);
        }
        else
        {
          v48 = (unsigned __int8 *)realloc(a1[2], 2 * ((char *)v43 - (char *)v44));
        }
        v43 = (__int64 *)&v48[8 * v46];
        a1[2] = v48;
        a1[3] = (unsigned __int8 *)v43;
        a1[4] = &v48[8 * v47];
      }
      a1[3] = (unsigned __int8 *)(v43 + 1);
      *v43 = v42;
      v50 = *a1;
      v31 = a1[1];
    }
    while ( *a1 == v31 || *v50 != 69 );
    v51 = a1[604];
    v52 = a1[2];
    v53 = a1[3];
    v28 = v50 + 1;
    *a1 = v50 + 1;
    v54 = &v52[8 * v41];
    v56 = v51 + 8;
    v55 = *((_QWORD *)v51 + 1);
    v57 = v53 - v54;
    v58 = ((_DWORD)v53 - (_DWORD)v54 + 15) & 0xFFFFFFF0;
    if ( v58 + v55 >= 0xFF0 )
    {
      if ( v58 >= 0xFF1 )
      {
        v59 = (_QWORD *)operator new[](v58 + 16);
        *v59 = *(_QWORD *)v51;
        v59[1] = 0;
        *(_QWORD *)v51 = v59;
        v29 = (char *)(v59 + 2);
        v30 = v57 >> 3;
        if ( !v57 )
        {
LABEL_67:
          a1[3] = v54;
          v3 = v31;
          if ( v31 == v28 )
            goto LABEL_73;
          goto LABEL_68;
        }
LABEL_66:
        memmove(v29, v54, v57);
        v31 = a1[1];
        v28 = *a1;
        v54 = &a1[2][8 * v41];
        goto LABEL_67;
      }
      v69 = (unsigned __int8 **)operator new[](0x1000u);
      v55 = 0;
      *v69 = v51;
      v69[1] = nullptr;
      v56 = v69 + 1;
      v51 = (unsigned __int8 *)v69;
      a1[604] = (unsigned __int8 *)v69;
    }
    v29 = (char *)&v51[v55 + 16];
    *v56 = v55 + v58;
    v30 = v57 >> 3;
    if ( !v57 )
      goto LABEL_67;
    goto LABEL_66;
  }
  v7 = v2 + 2;
  *a1 = v2 + 2;
  if ( v3 != v2 + 2 && (unsigned int)*v7 - 48 <= 9 )
  {
    v8 = v2 + 3;
    while ( 1 )
    {
      v9 = v8;
      *a1 = v8;
      if ( v3 == v8 )
        return nullptr;
      ++v8;
      if ( (unsigned int)*v9 - 48 >= 0xA )
      {
        v10 = (char *)v7;
        v11 = (__int64)v9;
        v7 = v9;
        if ( v9 != v3 )
          goto LABEL_39;
        return nullptr;
      }
    }
  }
  v11 = 0;
  v10 = nullptr;
  if ( v7 != v3 )
  {
LABEL_39:
    if ( *v7 == 95 )
    {
      v32 = a1[604];
      *a1 = v7 + 1;
      v34 = v32 + 8;
      v33 = *((_QWORD *)v32 + 1);
      if ( (unsigned __int64)(v33 + 32) >= 0xFF0 )
      {
        v35 = (unsigned __int8 **)operator new[](0x1000u);
        v33 = 0;
        *v35 = v32;
        v35[1] = nullptr;
        v34 = v35 + 1;
        v32 = (unsigned __int8 *)v35;
        a1[604] = (unsigned __int8 *)v35;
      }
      v36 = 295;
      v37 = v33 + 32;
      v38 = (char *)&v32[v33];
      v39 = off_1628F8;
      goto LABEL_43;
    }
  }
  return nullptr;
}
// 1628F8: using guessed type __int64 (__fastcall *off_1628F8[7])();
// 162968: using guessed type __int64 (__fastcall *off_162968[7])();
// 1629D8: using guessed type __int64 (__fastcall *off_1629D8[7])();
