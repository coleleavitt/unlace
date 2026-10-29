/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409EF8
// Address: 0x0000000000409EF8

//----- (0000000000409EF8) ----------------------------------------------------
__int64 __fastcall sub_409EF8(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // w0
  __int64 v9; // x26
  __int64 v10; // x23
  char *v11; // x0
  __int64 v12; // x21
  unsigned __int64 v13; // x2
  __int64 v14; // x3
  char *v15; // x1
  char *v16; // x26
  __int64 v17; // x27
  unsigned __int64 v18; // x20
  char *v19; // x0
  __int64 v20; // x3
  char *v21; // x24
  unsigned __int64 v22; // x2
  void **v23; // x25
  void *v24; // x0
  __int64 v25; // x20
  __int64 v26; // x28
  void *v27; // x3
  unsigned __int64 v28; // x9
  unsigned __int64 v29; // x2
  unsigned __int64 v30; // x5
  __int64 v31; // x22
  const void *v32; // x23
  size_t v33; // x0
  size_t v34; // x10
  __int64 *v35; // x0
  __int64 v36; // x20
  size_t v37; // x0
  size_t v38; // x22
  char *v39; // x0
  __int64 v40; // x3
  unsigned __int64 v41; // x2
  char *v42; // x0
  __int64 *v43; // x1
  char *v45; // x1
  unsigned __int64 v46; // x3
  void *v47; // x0
  unsigned __int64 v48; // x11
  void *v49; // x0
  unsigned __int64 v50; // x28
  void *v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  char *v54; // x0
  int v55; // [xsp+68h] [xbp-48h]
  char *s; // [xsp+78h] [xbp-38h]
  int v57; // [xsp+80h] [xbp-30h]
  char v58; // [xsp+84h] [xbp-2Ch]
  __int64 v59; // [xsp+88h] [xbp-28h]
  unsigned __int64 v60; // [xsp+90h] [xbp-20h]
  size_t v61; // [xsp+90h] [xbp-20h]
  size_t v62; // [xsp+98h] [xbp-18h]
  __int64 v63; // [xsp+A0h] [xbp-10h] BYREF

  v8 = *(unsigned __int8 *)(a2 + 13);
  switch ( v8 )
  {
    case 1:
      v9 = 2;
      goto LABEL_7;
    case 2:
      goto LABEL_6;
    case 7:
      v10 = (__int64)(a1 + 2);
      v11 = (char *)a1[2];
      v12 = a1[3];
      v9 = 8;
      v13 = v12 + 1;
      v14 = v12;
      if ( (unsigned __int64)(v12 + 1) > a1[4] )
        goto LABEL_16;
      goto LABEL_8;
  }
  if ( !under_debugger )
    sub_492270(1798);
  while ( 1 )
  {
    __break(0x3E8u);
LABEL_6:
    v9 = 4;
LABEL_7:
    v10 = (__int64)(a1 + 2);
    v11 = (char *)a1[2];
    v12 = a1[3];
    v13 = v12 + 1;
    v14 = v12;
    if ( (unsigned __int64)(v12 + 1) > a1[4] )
    {
LABEL_16:
      v11 = (char *)sub_491288(v10, v11, v13, 0x28u);
      a1[2] = v11;
      v14 = *(_QWORD *)(v10 + 8);
      v13 = v14 + 1;
    }
LABEL_8:
    *(_QWORD *)(v10 + 8) = v13;
    v15 = &v11[40 * v14];
    *(_DWORD *)v15 = 0;
    *((_QWORD *)v15 + 1) = -1;
    *((_QWORD *)v15 + 2) = a3;
    *((_QWORD *)v15 + 3) = a4;
    *((_QWORD *)v15 + 4) = v9;
    s = *(char **)a2;
    v55 = *(_DWORD *)(a2 + 8);
    v57 = *(unsigned __int8 *)(a2 + 13);
    v16 = *(char **)(a2 + 16);
    v58 = *(_BYTE *)(a2 + 12);
    v59 = *(_QWORD *)(a2 + 24);
    v17 = a1[1];
    if ( !v16 )
    {
      v23 = (void **)(v17 + 24);
      v24 = *(void **)(v17 + 24);
      v27 = *(void **)(v17 + 32);
      v28 = *(_QWORD *)(v17 + 40);
      v30 = (unsigned __int64)v27 + 1;
      goto LABEL_32;
    }
    if ( (v55 & 0x100) != 0 )
    {
      v18 = 1;
      goto LABEL_18;
    }
    if ( v57 == 1 )
    {
      v18 = 16;
      goto LABEL_18;
    }
    if ( v57 == 2 )
      break;
    if ( v57 == 7 )
    {
      v18 = 64;
      goto LABEL_18;
    }
    if ( !under_debugger )
      sub_492270(1795);
  }
  v18 = 32;
LABEL_18:
  v19 = *(char **)(v17 + 72);
  v20 = *(_QWORD *)(v17 + 80);
  if ( (unsigned __int64)(v20 + 1) > *(_QWORD *)(v17 + 88) )
  {
    v19 = (char *)sub_491288(v17 + 72, *(void **)(v17 + 72), v20 + 1, 0x18u);
    *(_QWORD *)(v17 + 72) = v19;
    v20 = *(_QWORD *)(v17 + 80);
  }
  v63 = 0;
  v21 = &v19[24 * v20];
  *(_QWORD *)v21 = 0;
  *((_QWORD *)v21 + 1) = 0;
  *((_QWORD *)v21 + 2) = 0;
  ++*(_QWORD *)(v17 + 80);
  v22 = *((_QWORD *)v21 + 1);
  if ( v22 > v18 )
    goto LABEL_48;
  if ( v22 >= v18 )
    goto LABEL_22;
  v45 = *(char **)v21;
  v46 = *((_QWORD *)v21 + 2);
  if ( *(_QWORD *)v21 <= (unsigned __int64)&v63 && &v63 < (__int64 *)&v45[8 * v46] )
  {
    if ( v18 <= v46
      || (v54 = (char *)sub_491288((__int64)v21, v45, v18, 8u),
          v22 = *((_QWORD *)v21 + 1),
          v45 = v54,
          *(_QWORD *)v21 = v54,
          v18 > v22) )
    {
      v53 = 8 * v22;
      while ( 1 )
      {
        *(_QWORD *)&v45[v53] = 0;
        ++v22;
        v53 += 8;
        if ( v18 <= v22 )
          break;
        v45 = *(char **)v21;
      }
      *((_QWORD *)v21 + 1) = v18;
    }
    else
    {
      *((_QWORD *)v21 + 1) = v18;
    }
  }
  else
  {
    if ( v18 > v46 )
    {
      v47 = sub_491288((__int64)v21, v45, v18, 8u);
      v22 = *((_QWORD *)v21 + 1);
      *(_QWORD *)v21 = v47;
      if ( v18 <= v22 )
      {
LABEL_48:
        *((_QWORD *)v21 + 1) = v18;
        goto LABEL_22;
      }
    }
    v52 = 8 * v22;
    do
    {
      ++v22;
      *(_QWORD *)(*(_QWORD *)v21 + v52) = 0;
      v52 += 8;
    }
    while ( v18 > v22 );
    *((_QWORD *)v21 + 1) = v18;
  }
LABEL_22:
  v23 = (void **)(v17 + 24);
  v24 = *(void **)(v17 + 24);
  v25 = 8 * v18;
  v26 = 0;
  v27 = *(void **)(v17 + 32);
  v28 = *(_QWORD *)(v17 + 40);
  v29 = (unsigned __int64)v27 + 1;
  do
  {
    v30 = v29;
    if ( *(_QWORD *)&v16[v26] )
    {
      if ( v29 > v28 )
      {
        v24 = sub_491288(v17 + 24, v24, v29, 0x18u);
        v27 = *(void **)(v17 + 32);
        *v23 = v24;
      }
      v31 = (__int64)v24 + 24 * (_QWORD)v27;
      *(_QWORD *)v31 = 0;
      *(_QWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 16) = 0;
      ++*(_QWORD *)(v17 + 32);
      v32 = *(const void **)&v16[v26];
      if ( v32 && (v33 = strlen(*(const char **)&v16[v26]), (v34 = v33) != 0) )
      {
        v48 = v33 + 1;
        v49 = *(void **)v31;
        if ( v48 > *(_QWORD *)(v31 + 16) )
        {
          v60 = v48;
          v62 = v34;
          v49 = sub_491288(v31, *(void **)v31, v48, 1u);
          v48 = v60;
          v34 = v62;
          *(_QWORD *)v31 = v49;
        }
        *(_QWORD *)(v31 + 8) = v48;
        v61 = v34;
        memmove(v49, v32, v34);
        *(_BYTE *)(*(_QWORD *)v31 + v61) = 0;
        if ( *(_QWORD *)(v31 + 8) )
          v35 = *(__int64 **)v31;
        else
          v35 = &qword_4B2D48;
      }
      else
      {
        v35 = &qword_4B2D48;
        *(_QWORD *)(v31 + 8) = 0;
      }
      *(_QWORD *)(*(_QWORD *)v21 + v26) = v35;
      v24 = *v23;
      v27 = *(void **)(v17 + 32);
      v28 = *(_QWORD *)(v17 + 40);
      v29 = (unsigned __int64)v27 + 1;
      v30 = (unsigned __int64)v27 + 1;
    }
    v26 += 8;
  }
  while ( v25 != v26 );
  v16 = *(char **)v21;
LABEL_32:
  if ( v30 > v28 )
  {
    v24 = sub_491288((__int64)v23, v24, v30, 0x18u);
    *(_QWORD *)(v17 + 24) = v24;
    v27 = v23[1];
  }
  v36 = (__int64)v24 + 24 * (_QWORD)v27;
  *(_QWORD *)v36 = 0;
  *(_QWORD *)(v36 + 8) = 0;
  *(_QWORD *)(v36 + 16) = 0;
  v23[1] = (char *)v23[1] + 1;
  if ( s && (v37 = strlen(s), (v38 = v37) != 0) )
  {
    v50 = v37 + 1;
    v51 = *(void **)v36;
    if ( v50 > *(_QWORD *)(v36 + 16) )
    {
      v51 = sub_491288(v36, *(void **)v36, v50, 1u);
      *(_QWORD *)v36 = v51;
    }
    *(_QWORD *)(v36 + 8) = v50;
    memmove(v51, s, v38);
    *(_BYTE *)(*(_QWORD *)v36 + v38) = 0;
  }
  else
  {
    *(_QWORD *)(v36 + 8) = 0;
  }
  v39 = *(char **)v17;
  v40 = *(_QWORD *)(v17 + 8);
  v41 = v40 + 1;
  if ( (unsigned __int64)(v40 + 1) > *(_QWORD *)(v17 + 16) )
  {
    v39 = (char *)sub_491288(v17, *(void **)v17, v41, 0x20u);
    v40 = *(_QWORD *)(v17 + 8);
    *(_QWORD *)v17 = v39;
    v41 = v40 + 1;
  }
  *(_QWORD *)(v17 + 8) = v41;
  v42 = &v39[32 * v40];
  if ( *(_QWORD *)(v36 + 8) )
    v43 = *(__int64 **)v36;
  else
    v43 = &qword_4B2D48;
  *(_QWORD *)v42 = v43;
  *((_DWORD *)v42 + 2) = v55;
  v42[12] = v58;
  v42[13] = v57;
  *((_QWORD *)v42 + 2) = v16;
  *((_QWORD *)v42 + 3) = v59;
  return v12;
}
// 409EF8: could not find valid save-restore pair for x28
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
