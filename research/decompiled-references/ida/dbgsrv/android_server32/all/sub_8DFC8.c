/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DFC8
// Address: 0x0008DFC8

//----- (0008DFC8) --------------------------------------------------------
int __fastcall sub_8DFC8(int a1, _DWORD *a2, int *a3, int a4, int a5)
{
  int v6; // r5
  int v7; // r5
  __int64 v8; // r2
  int v9; // r5
  int v10; // r7
  int v11; // r5
  int v12; // r6
  int v13; // r5
  int v14; // r7
  int v15; // r5
  unsigned int v16; // r1
  int v17; // r0
  int v18; // r2
  int v19; // r7
  int v20; // r5
  int v21; // r6
  int v22; // r5
  int v23; // r1
  int v24; // r0
  int v25; // r7
  int v26; // r5
  int v27; // r1
  int v28; // r6
  int v29; // r0
  int v30; // r5
  int v31; // r1
  unsigned __int8 v32; // r3
  int v33; // r7
  int v34; // r0
  int v35; // r5
  int v36; // r1
  int v37; // r2
  int v38; // r0
  int v39; // r5
  int v40; // r3
  int v41; // r0
  __int64 v42; // kr00_8
  _DWORD *v44; // r1
  _DWORD *v45; // r5
  _DWORD *v46; // r6
  void *v47; // r0
  _DWORD *v48; // r7
  _DWORD *v49; // r6
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r2
  _DWORD *v54; // r0
  int v55; // r6
  int v56; // r7
  int v57; // r5
  int v58; // r6
  int v59; // r7
  int v60; // r5
  int v61; // r6
  int v62; // r7
  void *v63; // r1
  void ***v64; // r6
  int v65; // r0
  void *v66; // r1
  void *v67; // r0
  __int64 v68; // r0
  __int64 v69; // r0
  int v70; // [sp+8h] [bp-3Ch]
  int v71; // [sp+14h] [bp-30h]
  int v72; // [sp+14h] [bp-30h]
  _DWORD *v73; // [sp+14h] [bp-30h]
  __int64 *v74; // [sp+18h] [bp-2Ch]
  unsigned __int8 v75; // [sp+20h] [bp-24h]
  int v76; // [sp+20h] [bp-24h]
  _DWORD *v79; // [sp+28h] [bp-1Ch]
  void **v81; // [sp+2Ch] [bp-18h]
  int v82; // [sp+38h] [bp-Ch] BYREF
  unsigned __int8 v83; // [sp+3Ch] [bp-8h] BYREF
  unsigned __int8 v84; // [sp+3Dh] [bp-7h]

  v6 = -102;
  if ( a1 && !a5 && *(_QWORD *)(a1 + 96) )
  {
    v7 = *(_DWORD *)(a1 + 224);
    if ( v7 )
    {
      free(*(void **)v7);
      *(_DWORD *)v7 = 0;
      if ( *(_DWORD *)(v7 + 72) == 8 )
        sub_8A494((_DWORD *)(v7 + 4));
      free((void *)v7);
      *(_DWORD *)(a1 + 224) = 0;
    }
    LODWORD(v8) = *(_DWORD *)(a1 + 216);
    HIDWORD(v8) = *(_DWORD *)(a1 + 76);
    if ( sub_8F128(
           a1,
           *(_DWORD *)(a1 + 48),
           *(_DWORD *)(a1 + 72) + v8,
           (__PAIR64__(*(_DWORD *)(a1 + 220), *(_DWORD *)(a1 + 72)) + v8) >> 32,
           0) )
    {
      return -103;
    }
    v75 = 0;
    v74 = (__int64 *)(a1 + 216);
    v9 = *(_DWORD *)(a1 + 48);
    if ( (*(int (__fastcall **)(_DWORD, int, int *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v9, &v82, 4) == 4 )
    {
      v10 = 0;
      if ( v82 != 67324752 )
        v10 = -103;
    }
    else
    {
      v10 = -103;
      if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v9) )
        v10 = -1;
    }
    v11 = *(_DWORD *)(a1 + 48);
    if ( (*(int (__fastcall **)(_DWORD, int, unsigned __int8 *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v11, &v83, 2) == 2
      || (v12 = -1, !(*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v11)) )
    {
      v12 = v10;
    }
    v13 = *(_DWORD *)(a1 + 48);
    if ( (*(int (__fastcall **)(_DWORD, int, unsigned __int8 *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v13, &v83, 2) == 2 )
    {
      v75 = v83;
    }
    else
    {
      v14 = -1;
      if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v13) )
        goto LABEL_22;
    }
    v14 = v12;
LABEL_22:
    v15 = *(_DWORD *)(a1 + 48);
    if ( (*(int (__fastcall **)(_DWORD, int, unsigned __int8 *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v15, &v83, 2) == 2 )
    {
      v16 = (v84 << 8) + v83;
    }
    else
    {
      v17 = (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v15);
      v18 = -1;
      v16 = 0;
      if ( v17 )
        goto LABEL_30;
    }
    v18 = v14;
    if ( !v14 )
    {
      v18 = -103;
      if ( v16 == *(_DWORD *)(a1 + 140) )
      {
        v18 = 0;
        if ( v16 > 0xC || ((1 << v16) & 0x1101) == 0 )
          v18 = -103;
      }
    }
LABEL_30:
    v19 = v18;
    v20 = *(_DWORD *)(a1 + 48);
    if ( (*(int (__fastcall **)(_DWORD, int, int *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v20, &v82, 4) == 4
      || (v21 = -1, !(*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v20)) )
    {
      v21 = v19;
    }
    v22 = *(_DWORD *)(a1 + 48);
    if ( (*(int (__fastcall **)(_DWORD, int, int *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v22, &v82, 4) == 4 )
    {
      v23 = v82;
    }
    else
    {
      v24 = (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v22);
      v25 = -1;
      v23 = 0;
      if ( v24 )
        goto LABEL_40;
    }
    v25 = v21;
    if ( !v21 )
    {
      v25 = 0;
      if ( v23 != *(_DWORD *)(a1 + 148) )
      {
        v25 = -103;
        if ( (v75 & 8) != 0 )
          v25 = 0;
      }
    }
LABEL_40:
    v26 = *(_DWORD *)(a1 + 48);
    if ( (*(int (__fastcall **)(_DWORD, int, int *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v26, &v82, 4) == 4 )
    {
      v27 = v82;
      if ( v25 )
      {
LABEL_42:
        v28 = v25;
        goto LABEL_49;
      }
    }
    else
    {
      v29 = (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v26);
      v28 = -1;
      v27 = 0;
      if ( v29 )
        goto LABEL_49;
      if ( v25 )
        goto LABEL_42;
    }
    v28 = v25;
    if ( v27 != -1 )
    {
      v28 = 0;
      if ( *(_QWORD *)(a1 + 152) != v27 )
      {
        v28 = -103;
        if ( (v75 & 8) != 0 )
          v28 = 0;
      }
    }
LABEL_49:
    v30 = *(_DWORD *)(a1 + 48);
    if ( (*(int (__fastcall **)(_DWORD, int, int *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v30, &v82, 4) == 4 )
    {
      v31 = v82;
      v32 = v75;
      if ( v28 )
      {
LABEL_51:
        v33 = v28;
        goto LABEL_58;
      }
    }
    else
    {
      v34 = (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v30);
      v33 = -1;
      v31 = 0;
      v32 = v75;
      if ( v34 )
        goto LABEL_58;
      if ( v28 )
        goto LABEL_51;
    }
    v33 = v28;
    if ( v31 != -1 )
    {
      v33 = 0;
      if ( *(_QWORD *)(a1 + 160) != v31 )
      {
        v33 = -103;
        if ( (v32 & 8) != 0 )
          v33 = 0;
      }
    }
LABEL_58:
    v35 = *(_DWORD *)(a1 + 48);
    if ( (*(int (__fastcall **)(_DWORD, int, unsigned __int8 *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v35, &v83, 2) == 2 )
    {
      v36 = (v84 << 8) + v83;
      if ( !v33 )
      {
LABEL_60:
        v37 = 0;
        if ( v36 != *(_DWORD *)(a1 + 168) )
          v37 = -103;
LABEL_65:
        v71 = v37;
        v76 = v36;
        v39 = *(_DWORD *)(a1 + 48);
        if ( (*(int (__fastcall **)(_DWORD, int, unsigned __int8 *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), v39, &v83, 2) == 2 )
        {
          v40 = (v84 << 8) + v83;
        }
        else
        {
          v41 = (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v39);
          v40 = 0;
          if ( v41 )
            return -103;
        }
        v42 = (unsigned int)v76 + *v74 + 30;
        if ( v71 )
          return -103;
        v72 = v40;
        v70 = v40 + v76;
        v44 = malloc(0xD0u);
        v6 = -104;
        if ( !v44 )
          return v6;
        v45 = v44;
        v46 = v44;
        v47 = malloc(0x4000u);
        v45[50] = a4;
        v45[24] = 0;
        v45[25] = 0;
        *v45 = v47;
        *((_QWORD *)v45 + 10) = v42;
        v45[22] = v72;
        v48 = v46;
        v49 = v46 + 50;
        if ( !v47 )
        {
          free(v45);
          return -104;
        }
        v73 = v49;
        v45[18] = 0;
        if ( a2 )
          *a2 = *(_DWORD *)(a1 + 140);
        if ( a3 )
        {
          *a3 = 6;
          v50 = *(_DWORD *)(a1 + 136) & 6;
          switch ( v50 )
          {
            case 2:
              v51 = 9;
              goto LABEL_83;
            case 4:
              v51 = 2;
              goto LABEL_83;
            case 6:
              v51 = 1;
LABEL_83:
              *a3 = v51;
              break;
          }
        }
        v52 = *(_DWORD *)(a1 + 148);
        v45[26] = 0;
        v45[27] = 0;
        v45[28] = 0;
        v45[29] = v52;
        v53 = *(_DWORD *)(a1 + 140);
        v45[46] = v53;
        v45[45] = *(_DWORD *)(a1 + 48);
        v79 = v48 + 1;
        v54 = v48 + 34;
        v81 = (void **)v45;
        v55 = *(_DWORD *)(a1 + 4);
        v56 = *(_DWORD *)(a1 + 8);
        *v54 = *(_DWORD *)a1;
        v54[1] = v55;
        v54[2] = v56;
        v54 += 3;
        v57 = *(_DWORD *)(a1 + 16);
        v58 = *(_DWORD *)(a1 + 20);
        v59 = *(_DWORD *)(a1 + 24);
        *v54 = *(_DWORD *)(a1 + 12);
        v54[1] = v57;
        v54[2] = v58;
        v54[3] = v59;
        v54 += 4;
        v60 = *(_DWORD *)(a1 + 32);
        v61 = *(_DWORD *)(a1 + 36);
        v62 = *(_DWORD *)(a1 + 40);
        *v54 = *(_DWORD *)(a1 + 28);
        v54[1] = v60;
        v54[2] = v61;
        v54[3] = v62;
        v63 = *(void **)(a1 + 72);
        v81[49] = *(void **)(a1 + 76);
        v6 = 0;
        v81[48] = v63;
        v81[6] = nullptr;
        if ( a4 || v53 != 12 )
        {
          v64 = (void ***)(a1 + 224);
          if ( !a4 && v53 == 8 )
          {
            v81[9] = nullptr;
            v81[10] = nullptr;
            v81[11] = nullptr;
            v81[1] = nullptr;
            v81[2] = nullptr;
            v65 = sub_88B78(v79, -15, "1.3.1", 56);
            if ( v65 )
            {
              v6 = v65;
              free(*v81);
              free(v81);
              return v6;
            }
            v81[18] = byte_8;
            v6 = 0;
          }
        }
        else
        {
          *v73 = 1;
          v64 = (void ***)(a1 + 224);
        }
        v66 = *(void **)(a1 + 156);
        v81[30] = *(void **)(a1 + 152);
        v81[31] = v66;
        v67 = *(void **)(a1 + 160);
        v81[33] = *(void **)(a1 + 164);
        v81[32] = v67;
        v68 = *v74;
        v81[2] = nullptr;
        v69 = (unsigned int)v70 + v68;
        v81[16] = (void *)(v69 + 30);
        v81[17] = (void *)(__CFADD__((_DWORD)v69, 30) + HIDWORD(v69));
        *v64 = v81;
        *(_DWORD *)(a1 + 228) = 0;
        return v6;
      }
    }
    else
    {
      v38 = (*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), v35);
      v37 = -1;
      v36 = 0;
      if ( v38 )
        goto LABEL_65;
      if ( !v33 )
        goto LABEL_60;
    }
    v37 = v33;
    goto LABEL_65;
  }
  return v6;
}
