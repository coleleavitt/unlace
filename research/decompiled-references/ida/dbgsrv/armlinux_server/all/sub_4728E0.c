/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4728E0
// Address: 0x00000000004728E0

//----- (00000000004728E0) ----------------------------------------------------
__int64 __fastcall sub_4728E0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v5; // w26
  _BYTE *v6; // x0
  size_t v7; // x22
  unsigned __int64 i; // x20
  __int64 v9; // x23
  _BYTE *v10; // x0
  size_t v11; // x5
  _BYTE *v12; // x0
  size_t v13; // x5
  unsigned __int64 v15; // x4
  unsigned __int64 v16; // x6
  _BYTE *v17; // x0
  size_t v18; // x5
  size_t v19; // x4
  unsigned __int64 v20; // x5
  const void *v21; // x6
  unsigned __int64 v22; // x23
  unsigned __int64 v23; // x4
  unsigned __int64 v24; // x6
  __int64 v25; // x3
  char *v26; // x0
  __int64 v27; // x3
  char *v28; // x0
  unsigned __int64 v29; // x4
  unsigned __int64 v30; // x6
  unsigned __int64 v31; // x20
  unsigned __int64 v32; // x23
  __int64 v33; // x3
  char *v34; // x0
  __int64 v35; // x3
  char *v36; // x0
  __int64 v37; // x3
  char *v38; // x0
  unsigned __int64 v39; // [xsp+68h] [xbp-38h]
  unsigned __int64 v40; // [xsp+68h] [xbp-38h]
  unsigned __int64 v41; // [xsp+68h] [xbp-38h]
  unsigned __int64 v42; // [xsp+68h] [xbp-38h]
  unsigned __int64 v43; // [xsp+68h] [xbp-38h]
  size_t v44; // [xsp+68h] [xbp-38h]
  unsigned __int64 v45; // [xsp+68h] [xbp-38h]
  size_t v46; // [xsp+68h] [xbp-38h]
  size_t v47; // [xsp+70h] [xbp-30h]
  size_t v48; // [xsp+70h] [xbp-30h]
  size_t v49; // [xsp+70h] [xbp-30h]
  size_t v50; // [xsp+70h] [xbp-30h]
  size_t v51; // [xsp+70h] [xbp-30h]
  const void *v52; // [xsp+70h] [xbp-30h]
  size_t v53; // [xsp+70h] [xbp-30h]
  const void *v54; // [xsp+70h] [xbp-30h]
  unsigned __int64 v55; // [xsp+78h] [xbp-28h]
  unsigned __int64 v56; // [xsp+78h] [xbp-28h]
  unsigned __int64 v57; // [xsp+78h] [xbp-28h]
  unsigned __int64 v58; // [xsp+78h] [xbp-28h]
  unsigned __int64 v59; // [xsp+78h] [xbp-28h]
  unsigned __int64 v60; // [xsp+78h] [xbp-28h]
  unsigned __int64 v61; // [xsp+78h] [xbp-28h]
  unsigned __int64 v62; // [xsp+78h] [xbp-28h]
  _BYTE v63[5]; // [xsp+88h] [xbp-18h] BYREF
  _BYTE v64[3]; // [xsp+8Dh] [xbp-13h] BYREF
  _BYTE v65[5]; // [xsp+90h] [xbp-10h] BYREF
  _BYTE v66[11]; // [xsp+95h] [xbp-Bh] BYREF

  v5 = a3;
  v6 = sub_48E2D8(v65, (unsigned __int64)v66, *(_DWORD *)(a2 + 8));
  v7 = v6 - v65;
  if ( v6 != v65 )
  {
    v31 = *(_QWORD *)(a1 + 8);
    v32 = v7 + v31;
    if ( v31 <= v7 + v31 )
    {
      if ( v31 >= v7 + v31 )
      {
LABEL_59:
        memcpy((void *)(*(_QWORD *)a1 + v31), v65, v7);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v31 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_59;
      }
      v32 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v37 = *(_QWORD *)(a1 + 8);
    v38 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v32 )
    {
      v38 = (char *)sub_491288(a1, *(void **)a1, v32, 1u);
      *(_QWORD *)a1 = v38;
      v37 = *(_QWORD *)(a1 + 8);
    }
    memset(&v38[v37], 0, v32 - v37);
    *(_QWORD *)(a1 + 8) = v32;
    goto LABEL_59;
  }
LABEL_2:
  if ( *(_QWORD *)(a2 + 8) )
  {
    for ( i = 0; i < *(_QWORD *)(a2 + 8); ++i )
    {
      v9 = *(_QWORD *)a2 + 32 * i;
      v10 = sub_48E2D8(v65, (unsigned __int64)v66, *(_DWORD *)v9);
      v11 = v10 - v65;
      if ( v10 == v65 )
        goto LABEL_5;
      v23 = *(_QWORD *)(a1 + 8);
      v24 = v11 + v23;
      if ( v23 <= v11 + v23 )
      {
        if ( v23 >= v11 + v23 )
          goto LABEL_25;
        v25 = *(_QWORD *)(a1 + 8);
        v26 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v24 )
          goto LABEL_41;
      }
      else
      {
        if ( v23 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v23 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_25:
          memcpy((void *)(*(_QWORD *)a1 + v23), v65, v11);
          goto LABEL_5;
        }
        v24 = 0x7FFFFFFFFFFFFFFFLL;
        v25 = *(_QWORD *)(a1 + 8);
        v26 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_41:
          v42 = v24;
          v50 = v11;
          v58 = *(_QWORD *)(a1 + 8);
          v26 = (char *)sub_491288(a1, v26, v24, 1u);
          *(_QWORD *)a1 = v26;
          v25 = *(_QWORD *)(a1 + 8);
          v24 = v42;
          v11 = v50;
          v23 = v58;
        }
      }
      v39 = v24;
      v47 = v11;
      v55 = v23;
      memset(&v26[v25], 0, v24 - v25);
      *(_QWORD *)(a1 + 8) = v39;
      memcpy((void *)(*(_QWORD *)a1 + v55), v65, v47);
LABEL_5:
      v12 = sub_48E2D8(v63, (unsigned __int64)v64, *(_DWORD *)(v9 + 16));
      v13 = v12 - v63;
      if ( v12 != v63 )
      {
        v15 = *(_QWORD *)(a1 + 8);
        v16 = v13 + v15;
        if ( v15 <= v13 + v15 )
        {
          if ( v15 >= v13 + v15 )
            goto LABEL_13;
          v27 = *(_QWORD *)(a1 + 8);
          v28 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v16 )
            goto LABEL_40;
        }
        else
        {
          if ( v15 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (v15 & 0x8000000000000000LL) != 0 )
              *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_13:
            memcpy((void *)(*(_QWORD *)a1 + v15), v63, v13);
LABEL_14:
            if ( !v5 )
              continue;
            goto LABEL_15;
          }
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          v27 = *(_QWORD *)(a1 + 8);
          v28 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
          {
LABEL_40:
            v41 = v16;
            v49 = v13;
            v57 = *(_QWORD *)(a1 + 8);
            v28 = (char *)sub_491288(a1, v28, v16, 1u);
            *(_QWORD *)a1 = v28;
            v27 = *(_QWORD *)(a1 + 8);
            v16 = v41;
            v13 = v49;
            v15 = v57;
          }
        }
        v40 = v16;
        v48 = v13;
        v56 = v15;
        memset(&v28[v27], 0, v16 - v27);
        *(_QWORD *)(a1 + 8) = v40;
        memcpy((void *)(*(_QWORD *)a1 + v56), v63, v48);
        goto LABEL_14;
      }
      if ( !v5 )
        continue;
LABEL_15:
      v17 = sub_48E2D8(v65, (unsigned __int64)v66, *(_DWORD *)(v9 + 4));
      v18 = v17 - v65;
      if ( v17 == v65 )
        goto LABEL_16;
      v29 = *(_QWORD *)(a1 + 8);
      v30 = v18 + v29;
      if ( v29 <= v18 + v29 )
      {
        if ( v29 < v18 + v29 )
          goto LABEL_51;
      }
      else
      {
        if ( v29 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v30 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_51:
          v33 = *(_QWORD *)(a1 + 8);
          v34 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v30 )
          {
            v45 = v30;
            v53 = v18;
            v61 = *(_QWORD *)(a1 + 8);
            v34 = (char *)sub_491288(a1, *(void **)a1, v30, 1u);
            *(_QWORD *)a1 = v34;
            v33 = *(_QWORD *)(a1 + 8);
            v30 = v45;
            v18 = v53;
            v29 = v61;
          }
          v43 = v30;
          v51 = v18;
          v59 = v29;
          memset(&v34[v33], 0, v30 - v33);
          v18 = v51;
          *(_QWORD *)(a1 + 8) = v43;
          v29 = v59;
          goto LABEL_37;
        }
        if ( (v29 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      }
LABEL_37:
      memcpy((void *)(*(_QWORD *)a1 + v29), v65, v18);
LABEL_16:
      v19 = *(_QWORD *)(v9 + 16);
      if ( v19 )
      {
        v20 = *(_QWORD *)(a1 + 8);
        v21 = *(const void **)(v9 + 8);
        v22 = v19 + v20;
        if ( v20 <= v19 + v20 )
        {
          if ( v20 >= v19 + v20 )
          {
LABEL_39:
            memcpy((void *)(*(_QWORD *)a1 + v20), v21, v19);
            continue;
          }
        }
        else
        {
          if ( v20 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (v20 & 0x8000000000000000LL) != 0 )
              *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_39;
          }
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v35 = *(_QWORD *)(a1 + 8);
        v36 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v22 )
        {
          v46 = v19;
          v54 = v21;
          v62 = *(_QWORD *)(a1 + 8);
          v36 = (char *)sub_491288(a1, *(void **)a1, v22, 1u);
          *(_QWORD *)a1 = v36;
          v35 = *(_QWORD *)(a1 + 8);
          v19 = v46;
          v21 = v54;
          v20 = v62;
        }
        v44 = v19;
        v52 = v21;
        v60 = v20;
        memset(&v36[v35], 0, v22 - v35);
        v19 = v44;
        v21 = v52;
        *(_QWORD *)(a1 + 8) = v22;
        v20 = v60;
        goto LABEL_39;
      }
    }
  }
  return *(_QWORD *)&v66[3] ^ _stack_chk_guard;
}
