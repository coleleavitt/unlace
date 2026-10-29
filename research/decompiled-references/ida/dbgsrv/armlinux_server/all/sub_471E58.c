/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471E58
// Address: 0x0000000000471E58

//----- (0000000000471E58) ----------------------------------------------------
__int64 __fastcall sub_471E58(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x26
  _BYTE *v5; // x0
  size_t v6; // x22
  __int64 v7; // x26
  __int64 i; // x20
  _BYTE *v9; // x0
  size_t v10; // x5
  _BYTE *v11; // x0
  size_t v12; // x5
  _BYTE *v13; // x0
  size_t v14; // x4
  __int64 v15; // x24
  _BYTE *v16; // x0
  size_t v17; // x5
  unsigned __int64 v18; // x4
  unsigned __int64 v19; // x6
  _BYTE *v20; // x0
  unsigned __int64 v21; // x4
  unsigned __int64 v22; // x6
  _BYTE *v23; // x0
  unsigned __int64 v24; // x4
  unsigned __int64 v25; // x6
  _BYTE *v26; // x0
  unsigned __int64 v27; // x24
  unsigned __int64 v28; // x5
  __int64 v30; // x3
  char *v31; // x0
  __int64 v32; // x3
  char *v33; // x0
  __int64 v34; // x3
  char *v35; // x0
  __int64 v36; // x3
  char *v37; // x0
  char *v38; // x0
  unsigned __int64 v39; // x21
  unsigned __int64 v40; // x24
  __int64 v41; // x3
  char *v42; // x0
  unsigned __int64 v43; // [xsp+68h] [xbp-58h]
  unsigned __int64 v44; // [xsp+68h] [xbp-58h]
  unsigned __int64 v45; // [xsp+68h] [xbp-58h]
  unsigned __int64 v46; // [xsp+68h] [xbp-58h]
  unsigned __int64 v47; // [xsp+68h] [xbp-58h]
  unsigned __int64 v48; // [xsp+68h] [xbp-58h]
  unsigned __int64 v49; // [xsp+68h] [xbp-58h]
  unsigned __int64 v50; // [xsp+68h] [xbp-58h]
  size_t v51; // [xsp+70h] [xbp-50h]
  size_t v52; // [xsp+70h] [xbp-50h]
  size_t v53; // [xsp+70h] [xbp-50h]
  size_t v54; // [xsp+70h] [xbp-50h]
  size_t v55; // [xsp+70h] [xbp-50h]
  size_t v56; // [xsp+70h] [xbp-50h]
  size_t v57; // [xsp+70h] [xbp-50h]
  size_t v58; // [xsp+70h] [xbp-50h]
  unsigned __int64 v59; // [xsp+78h] [xbp-48h]
  unsigned __int64 v60; // [xsp+78h] [xbp-48h]
  unsigned __int64 v61; // [xsp+78h] [xbp-48h]
  unsigned __int64 v62; // [xsp+78h] [xbp-48h]
  unsigned __int64 v63; // [xsp+78h] [xbp-48h]
  unsigned __int64 v64; // [xsp+78h] [xbp-48h]
  _BYTE v65[5]; // [xsp+80h] [xbp-40h] BYREF
  _BYTE v66[3]; // [xsp+85h] [xbp-3Bh] BYREF
  _BYTE v67[10]; // [xsp+88h] [xbp-38h] BYREF
  _BYTE v68[6]; // [xsp+92h] [xbp-2Eh] BYREF
  _BYTE v69[10]; // [xsp+98h] [xbp-28h] BYREF
  _BYTE v70[6]; // [xsp+A2h] [xbp-1Eh] BYREF
  _BYTE v71[5]; // [xsp+A8h] [xbp-18h] BYREF
  _BYTE v72[3]; // [xsp+ADh] [xbp-13h] BYREF
  _BYTE v73[14]; // [xsp+B2h] [xbp-Eh] BYREF

  v4 = a2[1];
  v5 = sub_48E2D8(v71, (unsigned __int64)v72, v4);
  v6 = v5 - v71;
  if ( v5 != v71 )
  {
    v39 = *(_QWORD *)(a1 + 8);
    v40 = v6 + v39;
    if ( v39 <= v6 + v39 )
    {
      if ( v39 >= v6 + v39 )
      {
LABEL_62:
        memcpy((void *)(*(_QWORD *)a1 + v39), v71, v6);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v39 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v39 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_62;
      }
      v40 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v41 = *(_QWORD *)(a1 + 8);
    v42 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v40 )
    {
      v42 = (char *)sub_491288(a1, *(void **)a1, v40, 1u);
      *(_QWORD *)a1 = v42;
      v41 = *(_QWORD *)(a1 + 8);
    }
    memset(&v42[v41], 0, v40 - v41);
    *(_QWORD *)(a1 + 8) = v40;
    goto LABEL_62;
  }
LABEL_2:
  if ( (int)v4 > 0 )
  {
    v7 = 32 * ((unsigned int)(v4 - 1) + 1LL);
    for ( i = 0; v7 != i; i += 32 )
    {
      while ( 1 )
      {
        v15 = *a2 + i;
        v16 = sub_48E4D8(v71, (unsigned __int64)v73, *(_QWORD *)v15 + 1LL);
        v17 = v16 - v71;
        if ( v16 != v71 )
          break;
        v9 = sub_48E4D8(v69, (unsigned __int64)v70, *(_QWORD *)(v15 + 8) + 1LL);
        v10 = v9 - v69;
        if ( v9 != v69 )
          goto LABEL_15;
LABEL_5:
        v11 = sub_48E4D8(v67, (unsigned __int64)v68, *(_QWORD *)(v15 + 16) + 1LL);
        v12 = v11 - v67;
        if ( v11 != v67 )
          goto LABEL_21;
LABEL_6:
        v13 = sub_48E2D8(v65, (unsigned __int64)v66, *(unsigned __int8 *)(v15 + 24));
        v14 = v13 - v65;
        if ( v13 != v65 )
          goto LABEL_27;
LABEL_7:
        i += 32;
        if ( v7 == i )
          return *(_QWORD *)&v73[6] ^ _stack_chk_guard;
      }
      v18 = *(_QWORD *)(a1 + 8);
      v19 = v17 + v18;
      if ( v18 <= v17 + v18 )
      {
        if ( v18 >= v17 + v18 )
          goto LABEL_13;
        v36 = *(_QWORD *)(a1 + 8);
        v37 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v19 )
          goto LABEL_45;
      }
      else
      {
        if ( v18 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v18 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_13:
          memcpy((void *)(*(_QWORD *)a1 + v18), v71, v17);
          goto LABEL_14;
        }
        v19 = 0x7FFFFFFFFFFFFFFFLL;
        v36 = *(_QWORD *)(a1 + 8);
        v37 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_45:
          v47 = v19;
          v55 = v17;
          v62 = *(_QWORD *)(a1 + 8);
          v37 = (char *)sub_491288(a1, v37, v19, 1u);
          *(_QWORD *)a1 = v37;
          v36 = *(_QWORD *)(a1 + 8);
          v19 = v47;
          v17 = v55;
          v18 = v62;
        }
      }
      v46 = v19;
      v54 = v17;
      v61 = v18;
      memset(&v37[v36], 0, v19 - v36);
      *(_QWORD *)(a1 + 8) = v46;
      memcpy((void *)(*(_QWORD *)a1 + v61), v71, v54);
LABEL_14:
      v20 = sub_48E4D8(v69, (unsigned __int64)v70, *(_QWORD *)(v15 + 8) + 1LL);
      v10 = v20 - v69;
      if ( v20 == v69 )
        goto LABEL_5;
LABEL_15:
      v21 = *(_QWORD *)(a1 + 8);
      v22 = v10 + v21;
      if ( v21 <= v10 + v21 )
      {
        if ( v21 >= v10 + v21 )
          goto LABEL_19;
        v30 = *(_QWORD *)(a1 + 8);
        v31 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v22 )
          goto LABEL_48;
      }
      else
      {
        if ( v21 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v21 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_19:
          memcpy((void *)(*(_QWORD *)a1 + v21), v69, v10);
          goto LABEL_20;
        }
        v22 = 0x7FFFFFFFFFFFFFFFLL;
        v30 = *(_QWORD *)(a1 + 8);
        v31 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_48:
          v50 = v22;
          v58 = v10;
          v64 = *(_QWORD *)(a1 + 8);
          v31 = (char *)sub_491288(a1, v31, v22, 1u);
          *(_QWORD *)a1 = v31;
          v30 = *(_QWORD *)(a1 + 8);
          v22 = v50;
          v10 = v58;
          v21 = v64;
        }
      }
      v43 = v22;
      v51 = v10;
      v59 = v21;
      memset(&v31[v30], 0, v22 - v30);
      *(_QWORD *)(a1 + 8) = v43;
      memcpy((void *)(*(_QWORD *)a1 + v59), v69, v51);
LABEL_20:
      v23 = sub_48E4D8(v67, (unsigned __int64)v68, *(_QWORD *)(v15 + 16) + 1LL);
      v12 = v23 - v67;
      if ( v23 == v67 )
        goto LABEL_6;
LABEL_21:
      v24 = *(_QWORD *)(a1 + 8);
      v25 = v12 + v24;
      if ( v24 <= v12 + v24 )
      {
        if ( v24 >= v12 + v24 )
          goto LABEL_25;
        v32 = *(_QWORD *)(a1 + 8);
        v33 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v25 )
          goto LABEL_47;
      }
      else
      {
        if ( v24 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v24 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_25:
          memcpy((void *)(*(_QWORD *)a1 + v24), v67, v12);
          goto LABEL_26;
        }
        v25 = 0x7FFFFFFFFFFFFFFFLL;
        v32 = *(_QWORD *)(a1 + 8);
        v33 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_47:
          v49 = v25;
          v57 = v12;
          v63 = *(_QWORD *)(a1 + 8);
          v33 = (char *)sub_491288(a1, v33, v25, 1u);
          *(_QWORD *)a1 = v33;
          v32 = *(_QWORD *)(a1 + 8);
          v25 = v49;
          v12 = v57;
          v24 = v63;
        }
      }
      v44 = v25;
      v52 = v12;
      v60 = v24;
      memset(&v33[v32], 0, v25 - v32);
      *(_QWORD *)(a1 + 8) = v44;
      memcpy((void *)(*(_QWORD *)a1 + v60), v67, v52);
LABEL_26:
      v26 = sub_48E2D8(v65, (unsigned __int64)v66, *(unsigned __int8 *)(v15 + 24));
      v14 = v26 - v65;
      if ( v26 == v65 )
        goto LABEL_7;
LABEL_27:
      v27 = *(_QWORD *)(a1 + 8);
      v28 = v14 + v27;
      if ( v27 > v14 + v27 )
      {
        if ( v27 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v27 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_31;
        }
        v28 = 0x7FFFFFFFFFFFFFFFLL;
        v34 = *(_QWORD *)(a1 + 8);
        v35 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_46:
          v48 = v28;
          v56 = v14;
          v38 = (char *)sub_491288(a1, v35, v28, 1u);
          *(_QWORD *)a1 = v38;
          memset(&v38[*(_QWORD *)(a1 + 8)], 0, v48 - *(_QWORD *)(a1 + 8));
          v14 = v56;
          *(_QWORD *)(a1 + 8) = v48;
          goto LABEL_31;
        }
        goto LABEL_41;
      }
      if ( v27 < v14 + v27 )
      {
        v34 = *(_QWORD *)(a1 + 8);
        v35 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v28 )
          goto LABEL_46;
LABEL_41:
        v45 = v28;
        v53 = v14;
        memset(&v35[v34], 0, v28 - v34);
        v14 = v53;
        *(_QWORD *)(a1 + 8) = v45;
      }
LABEL_31:
      memcpy((void *)(*(_QWORD *)a1 + v27), v65, v14);
    }
  }
  return *(_QWORD *)&v73[6] ^ _stack_chk_guard;
}
