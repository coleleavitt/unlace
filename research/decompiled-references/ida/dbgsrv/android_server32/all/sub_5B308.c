/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B308
// Address: 0x0005B308

//----- (0005B308) --------------------------------------------------------
unsigned int __fastcall sub_5B308(int a1, void **a2, unsigned int *a3)
{
  int v4; // r4
  int v5; // r6
  unsigned int v6; // r5
  char *v7; // r1
  bool v8; // zf
  unsigned int v9; // r4
  int v10; // r4
  int v11; // r6
  unsigned __int8 *v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r5
  unsigned int v15; // r1
  void **v16; // r0
  char *v17; // r0
  const void *v18; // r2
  unsigned int v19; // r3
  void *v20; // r0
  unsigned int v21; // r2
  char *v22; // r4
  unsigned int v23; // r5
  double v24; // r2
  int v25; // r0
  unsigned int v26; // r5
  unsigned int v27; // r6
  const char *v28; // r0
  _BYTE *v29; // r0
  _BYTE *v30; // r0
  unsigned int v31; // r4
  int v32; // r6
  void *v33; // r1
  _BYTE *v34; // r0
  char v35; // r5
  char *v36; // r2
  _BYTE *v37; // r0
  void *v38; // r1
  unsigned int v39; // r2
  int v40; // r5
  char *v41; // r4
  void *v42; // r1
  _BYTE *v43; // r0
  double v44; // r2
  char v45; // r5
  unsigned int v46; // r0
  unsigned int v47; // r5
  char *v48; // r5
  _BYTE *v49; // r0
  size_t v50; // r0
  char *v51; // r4
  unsigned int v52; // r6
  int i; // r5
  void *v54; // r0
  const char *v56; // [sp+4h] [bp-64h]
  int v57; // [sp+8h] [bp-60h]
  int v58; // [sp+8h] [bp-60h]
  int v59; // [sp+Ch] [bp-5Ch]
  const char *v60; // [sp+Ch] [bp-5Ch]
  unsigned int v61; // [sp+10h] [bp-58h]
  unsigned int v62; // [sp+10h] [bp-58h]
  int v63; // [sp+14h] [bp-54h]
  int v65; // [sp+20h] [bp-48h]
  int v66; // [sp+24h] [bp-44h]
  unsigned int v67; // [sp+24h] [bp-44h]
  unsigned int v68; // [sp+24h] [bp-44h]
  unsigned int v69; // [sp+28h] [bp-40h]
  char *v70; // [sp+28h] [bp-40h]
  char *v71; // [sp+28h] [bp-40h]
  _BYTE *v73; // [sp+30h] [bp-38h]
  int v74; // [sp+38h] [bp-30h]
  int v75; // [sp+3Ch] [bp-2Ch]
  unsigned int v76; // [sp+3Ch] [bp-2Ch]
  char *s; // [sp+40h] [bp-28h] BYREF
  const char *v78; // [sp+44h] [bp-24h]
  int v79; // [sp+48h] [bp-20h]
  unsigned int v80; // [sp+4Ch] [bp-1Ch] BYREF
  char *v81; // [sp+50h] [bp-18h] BYREF
  unsigned int v82; // [sp+54h] [bp-14h]
  int v83; // [sp+58h] [bp-10h]
  _BYTE v84[5]; // [sp+5Ch] [bp-Ch] BYREF
  _BYTE v85[3]; // [sp+61h] [bp-7h] BYREF

  v82 = 0;
  v81 = nullptr;
  v83 = 0;
  v4 = unpack_dd(a3, a3[1]);
  v5 = unpack_dd(a3, a3[1]);
  v66 = v5;
  if ( (v5 | v4) >= 0 && 0x7FFFFFFF - v5 >= v4 )
  {
    sub_5B808((unsigned int *)&v81, v5 + v4);
    v63 = v4;
    v6 = (unsigned int)v81;
    v7 = &v81[36 * v4];
    v75 = 36 * v4;
    v8 = 36 * v4 == 0;
    v9 = (unsigned int)v81;
    if ( !v8 )
    {
      v69 = (unsigned int)v7;
      v10 = 0;
      v74 = 0;
      do
      {
        *(_BYTE *)(v6 + v10 + 24) = 0;
        v74 = v74 + unpack_dq(a3, a3[1]) - 1;
        *(_DWORD *)(v6 + v10) = v74;
        *(_DWORD *)(v6 + v10 + 20) = unpack_dd(a3, a3[1]);
        *(_DWORD *)(v6 + v10 + 16) = unpack_dd(a3, a3[1]);
        *(_DWORD *)(v6 + v10 + 28) = unpack_dd(a3, a3[1]);
        *(_DWORD *)(v6 + v10 + 32) = unpack_dd(a3, a3[1]);
        v10 += 36;
      }
      while ( v75 != v10 );
      v7 = (char *)v69;
      v9 = v69;
    }
    v61 = v6;
    v65 = 36 * v5;
    v70 = &v7[36 * v5];
    if ( (char *)v9 != v70 )
    {
      v11 = 0;
      do
      {
        v11 = v11 + unpack_dq(a3, a3[1]) - 1;
        *(_DWORD *)v9 = v11;
        v12 = (unsigned __int8 *)*a3;
        v13 = a3[1];
        if ( *a3 < v13 )
        {
          v14 = *v12;
          *a3 = (unsigned int)(v12 + 1);
          if ( v14 )
          {
            v15 = *(_DWORD *)(v9 + 8);
            v16 = (void **)(v9 + 4);
            if ( v15 >= v14 )
            {
              if ( v15 != v14 )
              {
                LOBYTE(s) = 0;
                sub_370F6(v16, v14, &s);
              }
            }
            else
            {
              if ( *(_DWORD *)(v9 + 12) >= v14 )
              {
                v17 = *(char **)(v9 + 4);
              }
              else
              {
                v17 = (char *)qvector_reserve((int)v16, *(void **)(v9 + 4), v14, 1u);
                *(_DWORD *)(v9 + 4) = v17;
                v15 = *(_DWORD *)(v9 + 8);
              }
              memset(&v17[v15], 0, v14 - v15);
              *(_DWORD *)(v9 + 8) = v14;
            }
            v18 = (const void *)*a3;
            v13 = a3[1];
            v19 = *a3 + v14;
            if ( v19 >= *a3 && v19 <= v13 )
            {
              v20 = *(void **)(v9 + 4);
              *a3 = v19;
              qmemcpy(v20, v18, v14);
              v13 = a3[1];
            }
          }
        }
        *(_DWORD *)(v9 + 16) = unpack_dd(a3, v13);
        *(_DWORD *)(v9 + 28) = unpack_dd(a3, a3[1]);
        *(_DWORD *)(v9 + 32) = unpack_dd(a3, a3[1]);
        v9 += 36;
      }
      while ( (char *)v9 != v70 );
    }
    v21 = (unsigned int)v81;
    v22 = &v81[v75];
    if ( &v81[v75] != v70 )
    {
      v23 = v61 + v65 - (_DWORD)v81;
      do
      {
        if ( *(_BYTE *)(a1 + 96) )
        {
          LODWORD(v24) = *((_DWORD *)v22 + 4);
          v25 = 0;
          if ( LODWORD(v24) != 4 )
            v25 = *((_DWORD *)v22 + 5);
          HIDWORD(v24) = *((_DWORD *)v22 + 2);
          sub_1BBA0((int)"del_bpt(ea=%a, type=%d orgbytes.size=%zu size=%d)\n", v24, v25, v57, v59);
        }
        v23 -= 36;
        v22 += 36;
      }
      while ( v23 );
      v21 = (unsigned int)v81;
    }
    v78 = nullptr;
    s = nullptr;
    v60 = nullptr;
    v79 = 0;
    v67 = (*(int (__fastcall **)(_DWORD, unsigned int *, unsigned int, int, int, char **))(**(_DWORD **)(a1 + 244) + 164))(
            *(_DWORD *)(a1 + 244),
            &v80,
            v21,
            v63,
            v66,
            &s);
    v62 = (unsigned int)v81;
    v71 = &v81[v75];
    if ( v75 )
    {
      v26 = (unsigned int)v81;
      do
      {
        if ( *(_BYTE *)(a1 + 96) )
        {
          v27 = *(unsigned __int8 *)(v26 + 24);
          v28 = "?";
          if ( v27 <= 0xA )
            v28 = off_DA048[v27];
          sub_1BBA0((int)"add_bpt(ea=%a type=%d len=%d) => %s\n", *(double *)(v26 + 16), v28, v58, v60);
        }
        v26 += 36;
        v75 -= 36;
      }
      while ( v75 );
    }
    v29 = pack_dd(v84, (unsigned int)v85, v67);
    ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(a2, v84, v29 - v84);
    v30 = pack_dd(v84, (unsigned int)v85, v80);
    ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(a2, v84, v30 - v84);
    v31 = (unsigned int)v81;
    v32 = v65;
    if ( v81 != v71 )
    {
      do
      {
        v33 = *a2;
        v34 = a2[1];
        v35 = *(_BYTE *)(v31 + 24);
        if ( a2[2] < v34 + 1 )
        {
          v33 = qvector_reserve((int)a2, v33, (unsigned int)(v34 + 1), 1u);
          *a2 = v33;
          v34 = a2[1];
        }
        v34[(_DWORD)v33] = v35;
        v36 = (char *)a2[1];
        v37 = v36 + 1;
        a2[1] = v36 + 1;
        if ( !*(_BYTE *)(v31 + 24) && *(_DWORD *)(v31 + 16) == 4 )
        {
          v38 = *a2;
          v39 = (unsigned int)(v36 + 2);
          v40 = *(_DWORD *)(v31 + 8);
          if ( (unsigned int)a2[2] < v39 )
          {
            v38 = qvector_reserve((int)a2, v38, v39, 1u);
            *a2 = v38;
            v37 = a2[1];
          }
          v37[(_DWORD)v38] = v40;
          a2[1] = (char *)a2[1] + 1;
          ((void (__fastcall *)(void **, _DWORD, _DWORD))loc_30B84)(a2, *(_DWORD *)(v31 + 4), *(_DWORD *)(v31 + 8));
        }
        v31 += 36;
      }
      while ( v71 != (char *)v31 );
    }
    if ( v65 )
    {
      v41 = (char *)(v62 + 36 * v63 + 24);
      v73 = (_BYTE *)(a1 + 96);
      do
      {
        v42 = *a2;
        v43 = a2[1];
        HIDWORD(v44) = a2[2];
        v45 = *v41;
        if ( HIDWORD(v44) < (unsigned int)(v43 + 1) )
        {
          v42 = qvector_reserve((int)a2, v42, (unsigned int)(v43 + 1), 1u);
          *a2 = v42;
          v43 = a2[1];
        }
        v43[(_DWORD)v42] = v45;
        a2[1] = (char *)a2[1] + 1;
        if ( *v73 )
        {
          v46 = (unsigned __int8)*v41;
          if ( v46 <= 0xA )
            LODWORD(v44) = off_DA048[v46];
          else
            LODWORD(v44) = "?";
          sub_1BBA0((int)"del_bpt(ea=%a) => %s\n", v44, v56);
        }
        v32 -= 36;
        v41 += 36;
      }
      while ( v32 );
    }
    v47 = v67;
    if ( v67 == 1 )
      goto LABEL_65;
    if ( v78 )
    {
      v48 = s;
      if ( s )
        goto LABEL_64;
    }
    else
    {
      v48 = &byte_B3CBE;
      if ( &byte_B3CBE )
      {
LABEL_64:
        v50 = strlen(v48);
        ((void (__fastcall *)(void **, char *, size_t))loc_30B84)(a2, v48, v50 + 1);
        v47 = v67;
LABEL_65:
        if ( s )
        {
          v78 = v60;
          qfree(s);
          v79 = 0;
          s = nullptr;
        }
        goto LABEL_67;
      }
    }
    v48 = &byte_A0742;
    goto LABEL_64;
  }
  v47 = 0;
  v49 = pack_dd(v84, (unsigned int)v85, 0);
  ((void (__fastcall *)(void **, _BYTE *, int))loc_30B84)(a2, v84, v49 - v84);
  if ( *(_BYTE *)(a1 + 96) )
  {
    v47 = 0;
    sub_1BBA0((int)"update_bpts(nadd=%d, ndel=%d) => 0 (incorrect values)\n", v4, v5);
  }
LABEL_67:
  v51 = v81;
  if ( v81 )
  {
    v76 = v82;
    if ( v82 )
    {
      v68 = v47;
      v52 = 1;
      for ( i = 12; ; i += 36 )
      {
        v54 = *(void **)&v51[i - 8];
        if ( v54 )
        {
          *(_DWORD *)&v51[i - 4] = 0;
          qfree(v54);
          *(_DWORD *)&v51[i - 8] = 0;
          *(_DWORD *)&v51[i] = 0;
        }
        if ( v52 >= v76 )
          break;
        ++v52;
        v51 = v81;
      }
      v51 = v81;
      v47 = v68;
    }
    v82 = 0;
    qfree(v51);
    v83 = 0;
    v81 = nullptr;
  }
  return v47;
}
// 5B4B6: variable 'v57' is possibly undefined
// 5B4B6: variable 'v59' is possibly undefined
// 5B530: variable 'v58' is possibly undefined
// 5B530: variable 'v60' is possibly undefined
// 5B640: variable 'v44' is possibly undefined
// 5B640: variable 'v56' is possibly undefined
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
// DA048: using guessed type char *off_DA048[11];
