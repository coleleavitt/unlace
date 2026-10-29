/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C89C
// Address: 0x0006C89C

//----- (0006C89C) --------------------------------------------------------
int __fastcall sub_6C89C(int a1, int a2, int a3)
{
  int v3; // r3
  unsigned int v4; // r1
  __int64 v5; // kr08_8
  unsigned int v6; // r1
  __int64 v7; // r0
  unsigned int v8; // r6
  unsigned int v9; // r7
  __int64 v10; // r4
  unsigned __int64 v11; // kr10_8
  unsigned __int64 v12; // r0
  __int64 v13; // r0
  __int64 v14; // r4
  unsigned int v15; // r7
  unsigned __int64 v16; // kr20_8
  __int64 v17; // r2
  unsigned int v18; // r1
  unsigned __int64 v19; // kr28_8
  int v20; // r5
  int v21; // r6
  unsigned int v22; // r7
  unsigned int v23; // r4
  __suseconds_t v24; // r0
  unsigned int v25; // r1
  unsigned __int64 v26; // r0
  int v27; // r1
  int v28; // r6
  int v29; // r0
  int v30; // r6
  unsigned int v31; // r2
  int v32; // r5
  unsigned int v33; // r7
  _BYTE *v34; // r4
  void *v35; // r0
  __suseconds_t v36; // r0
  unsigned int v37; // r1
  unsigned __int64 v38; // r0
  unsigned __int64 v39; // r0
  int v40; // r5
  __int64 v41; // kr40_8
  unsigned int v42; // r1
  __int64 v43; // r0
  int v44; // r5
  __suseconds_t v45; // r0
  unsigned int v46; // r1
  unsigned __int64 v47; // r0
  int v48; // r0
  int v49; // r5
  unsigned int v50; // r0
  _BYTE *v51; // r2
  int v52; // r3
  int v53; // r4
  void *v54; // r0
  unsigned int v56; // r2
  unsigned int v57; // [sp+Ch] [bp-4Ch]
  unsigned int v58; // [sp+10h] [bp-48h]
  int v60; // [sp+1Ch] [bp-3Ch]
  unsigned int v61; // [sp+24h] [bp-34h]
  unsigned int v62; // [sp+24h] [bp-34h]
  unsigned int v63; // [sp+24h] [bp-34h]
  int v65; // [sp+2Ch] [bp-2Ch]
  __int64 v66; // [sp+2Ch] [bp-2Ch]
  unsigned int *v67; // [sp+30h] [bp-28h]
  _BYTE *v68; // [sp+38h] [bp-20h] BYREF
  int v69; // [sp+3Ch] [bp-1Ch]
  int v70; // [sp+40h] [bp-18h]
  unsigned int v71; // [sp+44h] [bp-14h] BYREF
  _BYTE *v72; // [sp+48h] [bp-10h]
  int v73; // [sp+4Ch] [bp-Ch]
  int v74; // [sp+50h] [bp-8h]

  v3 = a1;
  v4 = 0;
  if ( a3 < 0 )
  {
    v67 = &v71;
    v57 = 0;
    v60 = 1;
    v56 = 0;
    v58 = 0;
    goto LABEL_10;
  }
  v5 = (unsigned int)qtime64() + 1000LL * a3;
  v7 = 1000000LL * v6;
  v8 = (unsigned __int64)(v5 + v7) >> 32;
  if ( !(v5 + v7) )
  {
    v67 = &v71;
    v58 = 0;
    v57 = 0;
    v60 = 1;
    v4 = 0;
    v56 = 0;
    goto LABEL_9;
  }
  v9 = v5 + v7;
  v10 = (unsigned int)qtime64();
  v11 = 1000000LL * HIDWORD(v12) + v10;
  v58 = v9;
  v57 = v8;
  v60 = 0;
  LODWORD(v12) = 0;
  if ( v11 >= __PAIR64__(v8, v9) || (v12 = (__PAIR64__(v8, v9) - v11) / 0x3E8, (v12 & 0x80000000) == 0LL) )
  {
    v13 = 1000LL * (int)v12;
    v14 = (unsigned int)v13;
    v15 = HIDWORD(v13);
    v16 = __PAIR64__(v15, qtime64()) + (unsigned int)v13;
    LODWORD(v17) = 1000000;
    HIDWORD(v17) = HIDWORD(v14);
    v19 = v16 + __PAIR64__(HIDWORD(v14), v18) * v17;
    v4 = HIDWORD(v19);
    v56 = v19;
    v67 = &v71;
LABEL_9:
    v3 = a1;
    goto LABEL_10;
  }
  v67 = &v71;
  v60 = 0;
  v4 = 0;
  v56 = 0;
  v3 = a1;
LABEL_10:
  v20 = 4;
  v61 = v4;
  while ( 1 )
  {
    v65 = v20;
    v21 = -1;
    v22 = v56;
    if ( v56 | v4 )
    {
      v23 = v4;
      v24 = qtime64();
      v21 = 0;
      v3 = a1;
      v26 = 1000000LL * v25 + (unsigned int)v24;
      if ( v26 < __PAIR64__(v23, v22) )
      {
        v3 = a1;
        v21 = (__PAIR64__(v23, v22) - v26) / 0x3E8;
      }
    }
    v27 = v21;
    v28 = v3;
    if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 24))(v3, v27) < 1 )
      break;
    v29 = (*(int (__fastcall **)(int, unsigned int *, int))(*(_DWORD *)v28 + 28))(v28, v67, v20);
    if ( v29 < 1 )
      break;
    v67 = (unsigned int *)((char *)v67 + v29);
    v20 -= v29;
    v56 = v22;
    v3 = v28;
    v4 = v61;
    if ( v65 == v29 )
      goto LABEL_19;
  }
  v30 = 0;
  if ( v20 == 4 )
    return v30;
LABEL_19:
  v31 = v71;
  v32 = (v71 << 24) + ((v71 << 8) & 0xFF0000) + ((v71 >> 8) & 0xFF00) + HIBYTE(v71);
  v71 = v32;
  if ( v31 )
  {
    v30 = 0;
    v69 = 0;
    v68 = nullptr;
    v70 = 0;
    v68 = qvector_reserve((int)&v68, nullptr, v32 + 1, 1u);
    memset(&v68[v69], 0, v32 + 1 - v69);
    v69 = v32 + 1;
    v68[v32] = 0;
    if ( v60 )
    {
      v33 = v71;
      v34 = v68;
      v66 = 0;
      if ( !v71 )
        goto LABEL_44;
      goto LABEL_31;
    }
    v36 = qtime64();
    v38 = 1000000LL * v37 + (unsigned int)v36;
    if ( v38 >= __PAIR64__(v57, v58) )
    {
      v40 = 0;
      v62 = v71;
      v34 = v68;
    }
    else
    {
      v39 = (__PAIR64__(v57, v58) - v38) / 0x3E8;
      v33 = v71;
      v34 = v68;
      if ( (v39 & 0x80000000) != 0LL )
      {
        v66 = 0;
        if ( !v71 )
        {
LABEL_44:
          if ( v68 )
          {
            v69 = 0;
            qfree(v68);
            v70 = 0;
            v68 = nullptr;
          }
          return v30;
        }
LABEL_31:
        v63 = v33;
        while ( 1 )
        {
          v44 = -1;
          if ( v66 )
          {
            v45 = qtime64();
            v44 = 0;
            v47 = 1000000LL * v46 + (unsigned int)v45;
            if ( v47 < __PAIR64__(v66, HIDWORD(v66)) )
              v44 = (__PAIR64__(v66, HIDWORD(v66)) - v47) / 0x3E8;
          }
          if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 24))(a1, v44) < 1 )
            break;
          v48 = (*(int (__fastcall **)(int, _BYTE *, unsigned int))(*(_DWORD *)a1 + 28))(a1, v34, v33);
          if ( v48 <= 0 )
            break;
          v34 += v48;
          v33 -= v48;
          if ( !v33 )
          {
            v49 = a2;
            v50 = v63;
            goto LABEL_40;
          }
        }
        v50 = v63 - v33;
        v49 = a2;
LABEL_40:
        v30 = 0;
        if ( v50 )
        {
          v51 = v68;
          v72 = v68;
          v68 = nullptr;
          v52 = v69;
          v69 = 0;
          v73 = v52;
          v53 = v70;
          v70 = 0;
          v74 = v53;
          v54 = *(void **)v49;
          if ( *(_DWORD *)v49 )
          {
            *(_DWORD *)(v49 + 4) = 0;
            qfree(v54);
            *(_DWORD *)(v49 + 8) = 0;
            *(_DWORD *)v49 = 0;
            v51 = v72;
            v52 = v73;
            v53 = v74;
          }
          *(_DWORD *)v49 = v51;
          *(_DWORD *)(v49 + 4) = v52;
          *(_DWORD *)(v49 + 8) = v53;
          v30 = 1;
        }
        goto LABEL_44;
      }
      v40 = v39;
      v62 = v71;
    }
    v41 = (unsigned int)qtime64() + 1000LL * v40;
    v43 = 1000000LL * v42;
    HIDWORD(v66) = v41 + v43;
    LODWORD(v66) = (unsigned __int64)(v41 + v43) >> 32;
    v33 = v62;
    if ( !v62 )
      goto LABEL_44;
    goto LABEL_31;
  }
  v35 = *(void **)a2;
  if ( *(_DWORD *)a2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    qfree(v35);
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)a2 = 0;
  }
  return 1;
}
// 6C8EE: variable 'v6' is possibly undefined
// 6C90A: variable 'v12' is possibly undefined
// 6C97A: variable 'v18' is possibly undefined
// 6C9CC: variable 'v25' is possibly undefined
// 6CAD4: variable 'v37' is possibly undefined
// 6CB3E: variable 'v42' is possibly undefined
// 6CB68: variable 'v46' is possibly undefined
