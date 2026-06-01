/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464D20
// Address: 0x0000000000464D20

//----- (0000000000464D20) ----------------------------------------------------
__int64 __fastcall sub_464D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // x3
  _BYTE *v11; // x0
  __int64 v12; // x0
  _BYTE *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x26
  __int64 i; // x23
  int v17; // w25
  __int64 v18; // x24
  _BYTE *v19; // x0
  size_t v20; // x5
  _BYTE *v21; // x0
  size_t v22; // x5
  _BYTE *v23; // x0
  size_t v24; // x4
  const char *v25; // x25
  size_t v26; // x5
  unsigned __int64 v27; // x24
  unsigned __int64 v28; // x4
  __int64 v30; // x3
  char *v31; // x0
  unsigned __int64 v32; // x25
  unsigned __int64 v33; // x5
  unsigned __int64 v34; // x4
  unsigned __int64 v35; // x6
  _BYTE *v36; // x0
  unsigned __int64 v37; // x4
  unsigned __int64 v38; // x6
  __int64 v39; // x3
  char *v40; // x0
  __int64 v41; // x3
  char *v42; // x0
  __int64 v43; // x3
  char *v44; // x0
  char *v45; // x0
  unsigned __int64 v46; // [xsp+70h] [xbp-50h]
  unsigned __int64 v47; // [xsp+70h] [xbp-50h]
  unsigned __int64 v48; // [xsp+70h] [xbp-50h]
  unsigned __int64 v49; // [xsp+70h] [xbp-50h]
  unsigned __int64 v50; // [xsp+70h] [xbp-50h]
  unsigned __int64 v51; // [xsp+70h] [xbp-50h]
  unsigned __int64 v52; // [xsp+70h] [xbp-50h]
  unsigned __int64 v53; // [xsp+70h] [xbp-50h]
  size_t v54; // [xsp+78h] [xbp-48h]
  size_t v55; // [xsp+78h] [xbp-48h]
  size_t v56; // [xsp+78h] [xbp-48h]
  size_t v57; // [xsp+78h] [xbp-48h]
  size_t v58; // [xsp+78h] [xbp-48h]
  size_t v59; // [xsp+78h] [xbp-48h]
  size_t v60; // [xsp+78h] [xbp-48h]
  size_t v61; // [xsp+78h] [xbp-48h]
  unsigned __int64 v62; // [xsp+88h] [xbp-38h]
  unsigned __int64 v63; // [xsp+88h] [xbp-38h]
  unsigned __int64 v64; // [xsp+88h] [xbp-38h]
  unsigned __int64 v65; // [xsp+88h] [xbp-38h]
  _BYTE v66[3]; // [xsp+90h] [xbp-30h] BYREF
  _BYTE v67[5]; // [xsp+93h] [xbp-2Dh] BYREF
  _BYTE v68[10]; // [xsp+98h] [xbp-28h] BYREF
  _BYTE v69[6]; // [xsp+A2h] [xbp-1Eh] BYREF
  _BYTE v70[10]; // [xsp+A8h] [xbp-18h] BYREF
  _BYTE v71[6]; // [xsp+B2h] [xbp-Eh] BYREF

  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(_BYTE **)a2;
  if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(a2 + 16) )
  {
    v11 = sub_491288(a2, *(void **)a2, v10 + 1, 1u);
    v10 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v11;
  }
  v11[v10] = 1;
  ++*(_QWORD *)(a2 + 8);
  sub_4631C0(a2, *(unsigned __int8 *)(a4 + 168));
  sub_4631C0(a2, *(unsigned __int8 *)(a4 + 169));
  v12 = sub_464BD8(a5);
  v13 = sub_48E4D8(v70, (unsigned __int64)v71, v12);
  if ( v13 != v70 )
    sub_4630F0(a2, v70, v13 - v70);
  sub_4631C0(a2, *(_DWORD *)(a5 + 24));
  sub_4631C0(a2, *(_DWORD *)(a6 + 8));
  v14 = *(_QWORD *)(a6 + 8);
  if ( (int)v14 > 0 )
  {
    v15 = 4 * ((unsigned int)(v14 - 1) + 1LL);
    for ( i = 0; v15 != i; i += 4 )
    {
      v17 = *(_DWORD *)(*(_QWORD *)a6 + i);
      v18 = *(_QWORD *)(a4 + 104) + 120LL * v17;
      v19 = sub_48E4D8(v70, (unsigned __int64)v71, *(_QWORD *)v18);
      v20 = v19 - v70;
      if ( v19 == v70 )
      {
        v21 = sub_48E4D8(v68, (unsigned __int64)v69, *(unsigned int *)(v18 + 8));
        v22 = v21 - v68;
        if ( v21 == v68 )
          goto LABEL_9;
        goto LABEL_35;
      }
      v34 = *(_QWORD *)(a2 + 8);
      v35 = v20 + v34;
      if ( v34 <= v20 + v34 )
      {
        if ( v34 >= v20 + v34 )
          goto LABEL_33;
        v41 = *(_QWORD *)(a2 + 8);
        v42 = *(char **)a2;
        if ( *(_QWORD *)(a2 + 16) < v35 )
          goto LABEL_53;
      }
      else
      {
        if ( v34 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v34 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a2 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_33:
          memcpy((void *)(*(_QWORD *)a2 + v34), v70, v20);
          goto LABEL_34;
        }
        v35 = 0x7FFFFFFFFFFFFFFFLL;
        v41 = *(_QWORD *)(a2 + 8);
        v42 = *(char **)a2;
        if ( *(_QWORD *)(a2 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_53:
          v52 = v35;
          v60 = v20;
          v64 = *(_QWORD *)(a2 + 8);
          v42 = (char *)sub_491288(a2, v42, v35, 1u);
          *(_QWORD *)a2 = v42;
          v41 = *(_QWORD *)(a2 + 8);
          v35 = v52;
          v20 = v60;
          v34 = v64;
        }
      }
      v49 = v35;
      v57 = v20;
      v63 = v34;
      memset(&v42[v41], 0, v35 - v41);
      *(_QWORD *)(a2 + 8) = v49;
      memcpy((void *)(*(_QWORD *)a2 + v63), v70, v57);
LABEL_34:
      v36 = sub_48E4D8(v68, (unsigned __int64)v69, *(unsigned int *)(v18 + 8));
      v22 = v36 - v68;
      if ( v36 == v68 )
        goto LABEL_9;
LABEL_35:
      v37 = *(_QWORD *)(a2 + 8);
      v38 = v22 + v37;
      if ( v37 <= v22 + v37 )
      {
        if ( v37 >= v22 + v37 )
          goto LABEL_39;
        v39 = *(_QWORD *)(a2 + 8);
        v40 = *(char **)a2;
        if ( *(_QWORD *)(a2 + 16) < v38 )
          goto LABEL_54;
      }
      else
      {
        if ( v37 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v37 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a2 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_39:
          memcpy((void *)(*(_QWORD *)a2 + v37), v68, v22);
          goto LABEL_9;
        }
        v38 = 0x7FFFFFFFFFFFFFFFLL;
        v39 = *(_QWORD *)(a2 + 8);
        v40 = *(char **)a2;
        if ( *(_QWORD *)(a2 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
        {
LABEL_54:
          v53 = v38;
          v61 = v22;
          v65 = *(_QWORD *)(a2 + 8);
          v40 = (char *)sub_491288(a2, v40, v38, 1u);
          *(_QWORD *)a2 = v40;
          v39 = *(_QWORD *)(a2 + 8);
          v38 = v53;
          v22 = v61;
          v37 = v65;
        }
      }
      v48 = v38;
      v56 = v22;
      v62 = v37;
      memset(&v40[v39], 0, v38 - v39);
      *(_QWORD *)(a2 + 8) = v48;
      memcpy((void *)(*(_QWORD *)a2 + v62), v68, v56);
LABEL_9:
      v23 = sub_48E208(v66, (unsigned __int64)v67, v17);
      v24 = v23 - v66;
      if ( v23 == v66 )
        goto LABEL_10;
      v32 = *(_QWORD *)(a2 + 8);
      v33 = v24 + v32;
      if ( v32 <= v24 + v32 )
      {
        if ( v32 >= v24 + v32 )
          goto LABEL_50;
        v43 = *(_QWORD *)(a2 + 8);
        v44 = *(char **)a2;
        if ( *(_QWORD *)(a2 + 16) < v33 )
        {
LABEL_52:
          v51 = v33;
          v59 = v24;
          v45 = (char *)sub_491288(a2, v44, v33, 1u);
          *(_QWORD *)a2 = v45;
          memset(&v45[*(_QWORD *)(a2 + 8)], 0, v51 - *(_QWORD *)(a2 + 8));
          v24 = v59;
          *(_QWORD *)(a2 + 8) = v51;
          goto LABEL_50;
        }
      }
      else
      {
        if ( v32 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v32 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a2 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_50;
        }
        v33 = 0x7FFFFFFFFFFFFFFFLL;
        v43 = *(_QWORD *)(a2 + 8);
        v44 = *(char **)a2;
        if ( *(_QWORD *)(a2 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
          goto LABEL_52;
      }
      v50 = v33;
      v58 = v24;
      memset(&v44[v43], 0, v33 - v43);
      v24 = v58;
      *(_QWORD *)(a2 + 8) = v50;
LABEL_50:
      memcpy((void *)(*(_QWORD *)a2 + v32), v66, v24);
LABEL_10:
      v25 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v18 + 24) )
        v25 = *(const char **)(v18 + 16);
      if ( v25 )
      {
        v26 = strlen(v25) + 1;
      }
      else
      {
        v26 = 1;
        v25 = &byte_4B31F0;
      }
      v27 = *(_QWORD *)(a2 + 8);
      v28 = v27 + v26;
      if ( v27 <= v27 + v26 )
      {
        if ( v27 < v27 + v26 )
          goto LABEL_21;
      }
      else
      {
        if ( v27 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v28 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
          v30 = *(_QWORD *)(a2 + 8);
          v31 = *(char **)a2;
          if ( *(_QWORD *)(a2 + 16) < v28 )
          {
            v46 = v28;
            v54 = v26;
            v31 = (char *)sub_491288(a2, *(void **)a2, v28, 1u);
            v30 = *(_QWORD *)(a2 + 8);
            v28 = v46;
            v26 = v54;
            *(_QWORD *)a2 = v31;
          }
          v47 = v28;
          v55 = v26;
          memset(&v31[v30], 0, v28 - v30);
          v26 = v55;
          *(_QWORD *)(a2 + 8) = v47;
          goto LABEL_18;
        }
        if ( (v27 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a2 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      }
LABEL_18:
      memcpy((void *)(*(_QWORD *)a2 + v27), v25, v26);
    }
  }
  return 0;
}
// 464D20: could not find valid save-restore pair for x24
// 464D20: could not find valid save-restore pair for x25
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
