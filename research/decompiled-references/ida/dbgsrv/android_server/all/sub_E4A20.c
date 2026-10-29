/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4A20
// Address: 0x00000000000E4A20

//----- (00000000000E4A20) ----------------------------------------------------
char *__fastcall sub_E4A20(__int64 a1, __int64 a2)
{
  __int64 v4; // x8
  size_t *v5; // x24
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x9
  char *v8; // x0
  char *v9; // x0
  size_t v10; // x1
  _BYTE *v11; // x21
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  unsigned __int64 v14; // x9
  char *v15; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  unsigned __int64 v18; // x9
  char *v19; // x0
  char *v20; // x0
  size_t v21; // x1
  _BYTE *v22; // x9
  _BYTE *v23; // x22
  size_t v24; // x8
  size_t v25; // x21
  size_t v26; // x10
  char *v27; // x0
  char *v28; // x0
  size_t v29; // x1
  _BYTE *v30; // x9
  _BYTE *v31; // x22
  size_t v32; // x8
  size_t v33; // x21
  size_t v34; // x10
  char *v35; // x0
  char *v36; // x0
  size_t v37; // x1
  unsigned __int64 v38; // x10
  unsigned __int64 v39; // x9
  char *v40; // x0
  char *v41; // x0
  size_t v42; // x1
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  char *v45; // x0
  char *v46; // x0
  size_t v47; // x1
  __int64 v48; // x8
  _BYTE *v49; // x9
  _BYTE *v50; // x21
  size_t v51; // x20
  size_t v52; // x10
  char *v53; // x0
  char *v54; // x0
  size_t v55; // x1
  unsigned __int64 v56; // x10
  unsigned __int64 v57; // x9
  char *v58; // x0
  char *v59; // x0
  size_t v60; // x1
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  unsigned __int64 v63; // x9
  char *result; // x0
  char *v65; // x0
  size_t v66; // x1
  char *v67; // x0
  size_t v68; // x1
  unsigned __int64 v69; // x10
  char *v70; // x0
  char *v71; // x0
  size_t v72; // x1
  size_t v73; // x9
  __int64 v74; // x8
  unsigned __int64 v75; // x10
  unsigned __int64 v76; // x9
  char *v77; // x0
  char *v78; // x0
  size_t v79; // x1
  _BYTE *v80; // x9
  _BYTE *v81; // x22
  size_t v82; // x8
  size_t v83; // x21
  size_t v84; // x10
  char *v85; // x0
  char *v86; // x0
  size_t v87; // x1
  unsigned __int64 v88; // x10
  unsigned __int64 v89; // x9
  char *v90; // x0
  char *v91; // x0
  size_t v92; // x1
  _BYTE *v93; // x20
  char **v94[3]; // [xsp+8h] [xbp-48h] BYREF

  v94[2] = *(char ***)(_ReadStatusReg(TPIDR_EL0) + 40);
  v94[0] = (char **)a2;
  v94[1] = (char **)a1;
  v5 = (size_t *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = v4 + 1;
  if ( v4 + 1 >= v6 )
  {
    v9 = *(char **)a2;
    if ( 2 * v6 >= v7 )
      v10 = 2 * v6;
    else
      v10 = v4 + 1;
    *(_QWORD *)(a2 + 16) = v10;
    v8 = (char *)realloc(v9, v10);
    v4 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v8;
    v7 = v4 + 1;
  }
  else
  {
    v8 = *(char **)a2;
  }
  *v5 = v7;
  v8[v4] = 40;
  if ( *(_BYTE *)(a1 + 48) )
  {
    v11 = *(_BYTE **)(a1 + 24);
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v11 + 24LL))(*(_QWORD *)(a1 + 24), a2);
      if ( v11[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 32LL))(v11, a2);
      v12 = *(_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(a2 + 16);
      v14 = v12 + 1;
      if ( v12 + 1 >= v13 )
      {
        v20 = *(char **)a2;
        if ( 2 * v13 >= v14 )
          v21 = 2 * v13;
        else
          v21 = v12 + 1;
        *(_QWORD *)(a2 + 16) = v21;
        v15 = (char *)realloc(v20, v21);
        v12 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v15;
        v14 = v12 + 1;
      }
      else
      {
        v15 = *(char **)a2;
      }
      *v5 = v14;
      v15[v12] = 32;
      v23 = *(_BYTE **)(a1 + 32);
      v22 = *(_BYTE **)(a1 + 40);
      v24 = *v5;
      v25 = v22 - v23;
      if ( v22 != v23 )
      {
        v26 = *(_QWORD *)(a2 + 16);
        if ( v24 + v25 >= v26 )
        {
          v36 = *(char **)a2;
          if ( 2 * v26 >= v24 + v25 )
            v37 = 2 * v26;
          else
            v37 = v24 + v25;
          *(_QWORD *)(a2 + 16) = v37;
          v27 = (char *)realloc(v36, v37);
          v24 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v27;
        }
        else
        {
          v27 = *(char **)a2;
        }
        memmove(&v27[v24], v23, v25);
        v24 = *v5 + v25;
        *v5 = v24;
      }
      v38 = *(_QWORD *)(a2 + 16);
      v39 = v24 + 1;
      if ( v24 + 1 >= v38 )
      {
        v41 = *(char **)a2;
        if ( 2 * v38 >= v39 )
          v42 = 2 * v38;
        else
          v42 = v24 + 1;
        *(_QWORD *)(a2 + 16) = v42;
        v40 = (char *)realloc(v41, v42);
        v24 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v40;
        v39 = v24 + 1;
      }
      else
      {
        v40 = *(char **)a2;
      }
      *v5 = v39;
      v40[v24] = 32;
    }
    v43 = *(_QWORD *)(a2 + 8);
    v44 = *(_QWORD *)(a2 + 16);
    if ( v43 + 4 >= v44 )
    {
      v46 = *(char **)a2;
      if ( 2 * v44 >= v43 + 4 )
        v47 = 2 * v44;
      else
        v47 = v43 + 4;
      *(_QWORD *)(a2 + 16) = v47;
      v45 = (char *)realloc(v46, v47);
      v43 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v45;
    }
    else
    {
      v45 = *(char **)a2;
    }
    *(_DWORD *)&v45[v43] = 539897390;
    v48 = *v5 + 4;
    *v5 = v48;
    v50 = *(_BYTE **)(a1 + 32);
    v49 = *(_BYTE **)(a1 + 40);
    v51 = v49 - v50;
    if ( v49 != v50 )
    {
      v52 = *(_QWORD *)(a2 + 16);
      if ( v48 + v51 >= v52 )
      {
        v54 = *(char **)a2;
        if ( 2 * v52 >= v48 + v51 )
          v55 = 2 * v52;
        else
          v55 = v48 + v51;
        *(_QWORD *)(a2 + 16) = v55;
        v53 = (char *)realloc(v54, v55);
        v48 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v53;
      }
      else
      {
        v53 = *(char **)a2;
      }
      memmove(&v53[v48], v50, v51);
      v48 = *v5 + v51;
      *v5 = v48;
    }
    v56 = *(_QWORD *)(a2 + 16);
    v57 = v48 + 1;
    if ( v48 + 1 >= v56 )
    {
      v59 = *(char **)a2;
      if ( 2 * v56 >= v57 )
        v60 = 2 * v56;
      else
        v60 = v48 + 1;
      *(_QWORD *)(a2 + 16) = v60;
      v58 = (char *)realloc(v59, v60);
      v48 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v58;
      v57 = v48 + 1;
    }
    else
    {
      v58 = *(char **)a2;
    }
    *v5 = v57;
    v58[v48] = 32;
    sub_E4F8C(v94);
  }
  else
  {
    sub_E4F8C(v94);
    v16 = *(_QWORD *)(a2 + 8);
    v17 = *(_QWORD *)(a2 + 16);
    v18 = v16 + 1;
    if ( v16 + 1 >= v17 )
    {
      v28 = *(char **)a2;
      if ( 2 * v17 >= v18 )
        v29 = 2 * v17;
      else
        v29 = v16 + 1;
      *(_QWORD *)(a2 + 16) = v29;
      v19 = (char *)realloc(v28, v29);
      v16 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v19;
      v18 = v16 + 1;
    }
    else
    {
      v19 = *(char **)a2;
    }
    *v5 = v18;
    v19[v16] = 32;
    v31 = *(_BYTE **)(a1 + 32);
    v30 = *(_BYTE **)(a1 + 40);
    v32 = *v5;
    v33 = v30 - v31;
    if ( v30 != v31 )
    {
      v34 = *(_QWORD *)(a2 + 16);
      if ( v32 + v33 >= v34 )
      {
        v67 = *(char **)a2;
        if ( 2 * v34 >= v32 + v33 )
          v68 = 2 * v34;
        else
          v68 = v32 + v33;
        *(_QWORD *)(a2 + 16) = v68;
        v35 = (char *)realloc(v67, v68);
        v32 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v35;
      }
      else
      {
        v35 = *(char **)a2;
      }
      memmove(&v35[v32], v31, v33);
      v32 = *v5 + v33;
      *v5 = v32;
    }
    v69 = *(_QWORD *)(a2 + 16);
    if ( v32 + 4 >= v69 )
    {
      v71 = *(char **)a2;
      if ( 2 * v69 >= v32 + 4 )
        v72 = 2 * v69;
      else
        v72 = v32 + 4;
      *(_QWORD *)(a2 + 16) = v72;
      v70 = (char *)realloc(v71, v72);
      v32 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v70;
    }
    else
    {
      v70 = *(char **)a2;
    }
    *(_DWORD *)&v70[v32] = 774778400;
    v73 = *v5;
    v74 = *v5 + 4;
    *v5 = v74;
    if ( *(_QWORD *)(a1 + 24) )
    {
      v75 = *(_QWORD *)(a2 + 16);
      v76 = v73 + 5;
      if ( v76 >= v75 )
      {
        v78 = *(char **)a2;
        if ( 2 * v75 >= v76 )
          v79 = 2 * v75;
        else
          v79 = v76;
        *(_QWORD *)(a2 + 16) = v79;
        v77 = (char *)realloc(v78, v79);
        v74 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v77;
        v76 = v74 + 1;
      }
      else
      {
        v77 = *(char **)a2;
      }
      *v5 = v76;
      v77[v74] = 32;
      v81 = *(_BYTE **)(a1 + 32);
      v80 = *(_BYTE **)(a1 + 40);
      v82 = *v5;
      v83 = v80 - v81;
      if ( v80 != v81 )
      {
        v84 = *(_QWORD *)(a2 + 16);
        if ( v82 + v83 >= v84 )
        {
          v86 = *(char **)a2;
          if ( 2 * v84 >= v82 + v83 )
            v87 = 2 * v84;
          else
            v87 = v82 + v83;
          *(_QWORD *)(a2 + 16) = v87;
          v85 = (char *)realloc(v86, v87);
          v82 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v85;
        }
        else
        {
          v85 = *(char **)a2;
        }
        memmove(&v85[v82], v81, v83);
        v82 = *v5 + v83;
        *v5 = v82;
      }
      v88 = *(_QWORD *)(a2 + 16);
      v89 = v82 + 1;
      if ( v82 + 1 >= v88 )
      {
        v91 = *(char **)a2;
        if ( 2 * v88 >= v89 )
          v92 = 2 * v88;
        else
          v92 = v82 + 1;
        *(_QWORD *)(a2 + 16) = v92;
        v90 = (char *)realloc(v91, v92);
        v82 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v90;
        v89 = v82 + 1;
      }
      else
      {
        v90 = *(char **)a2;
      }
      *(_QWORD *)(a2 + 8) = v89;
      v90[v82] = 32;
      v93 = *(_BYTE **)(a1 + 24);
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v93 + 24LL))(v93, a2);
      if ( v93[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v93 + 32LL))(v93, a2);
    }
  }
  v61 = *(_QWORD *)(a2 + 8);
  v62 = *(_QWORD *)(a2 + 16);
  v63 = v61 + 1;
  if ( v61 + 1 >= v62 )
  {
    v65 = *(char **)a2;
    if ( 2 * v62 >= v63 )
      v66 = 2 * v62;
    else
      v66 = v61 + 1;
    *(_QWORD *)(a2 + 16) = v66;
    result = (char *)realloc(v65, v66);
    v61 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = result;
    v63 = v61 + 1;
  }
  else
  {
    result = *(char **)a2;
  }
  *v5 = v63;
  result[v61] = 41;
  return result;
}
