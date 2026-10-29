/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_523E0
// Address: 0x000523E0

//----- (000523E0) --------------------------------------------------------
int __fastcall sub_523E0(int *a1, int a2, unsigned int a3)
{
  unsigned int v4; // r1
  int v5; // r3
  int *v6; // r11
  int v7; // r2
  unsigned int v8; // r3
  bool v9; // cc
  int *v10; // r10
  __int64 v11; // kr00_8
  int v12; // r4
  _DWORD *v13; // r2
  int v14; // r9
  char *v15; // r6
  _BYTE *v16; // r7
  int v17; // r8
  int v18; // r10
  int v19; // r11
  int v20; // r4
  int v21; // t1
  int v22; // r5
  int v23; // t1
  int *v24; // r3
  int *v25; // r6
  int v26; // r3
  int v27; // r7
  unsigned __int8 *v28; // r2
  int v29; // r7
  int v30; // r10
  size_t v31; // r4
  size_t v32; // r8
  char *v33; // r5
  _DWORD *v34; // r0
  _BYTE *v35; // r0
  _BYTE *v36; // r9
  const void *v37; // r1
  size_t v38; // r4
  int *v40; // r0
  __int64 v41; // kr08_8
  int v42; // r4
  int v43; // r2
  int v44; // r1
  int v45; // r5
  int v46; // r3
  char *v47; // r4
  int v48; // r2
  int v49; // r3
  int v50; // r1
  _DWORD *v51; // r2
  int v52; // r1
  _BYTE *v53; // r10
  int v54; // r8
  char *v55; // r6
  _BYTE *v56; // r7
  int v57; // r11
  char *v58; // r9
  int v59; // r4
  int v60; // t1
  int v61; // r5
  int v62; // t1
  _BOOL4 v63; // r4
  unsigned int v64; // r4
  _DWORD *v65; // r0
  int v66; // [sp+0h] [bp-74h]
  int v67; // [sp+8h] [bp-6Ch]
  int v68; // [sp+8h] [bp-6Ch]
  int v69; // [sp+8h] [bp-6Ch]
  unsigned int v70; // [sp+Ch] [bp-68h]
  unsigned int v71; // [sp+Ch] [bp-68h]
  int *v72; // [sp+10h] [bp-64h]
  int *v73; // [sp+10h] [bp-64h]
  int v74; // [sp+14h] [bp-60h]
  int *v75; // [sp+14h] [bp-60h]
  char *v76; // [sp+14h] [bp-60h]
  unsigned int v77; // [sp+18h] [bp-5Ch]
  int *v78; // [sp+18h] [bp-5Ch]
  int *s; // [sp+1Ch] [bp-58h]
  char *sa; // [sp+1Ch] [bp-58h]
  unsigned int *v81; // [sp+20h] [bp-54h]
  unsigned int v82; // [sp+24h] [bp-50h]
  int *v83; // [sp+28h] [bp-4Ch]
  unsigned int v84; // [sp+28h] [bp-4Ch]
  int *v85; // [sp+2Ch] [bp-48h]
  int v86; // [sp+2Ch] [bp-48h]
  int *v87; // [sp+30h] [bp-44h]
  _DWORD *v88; // [sp+34h] [bp-40h]
  int v89; // [sp+38h] [bp-3Ch]
  char *v90; // [sp+3Ch] [bp-38h]
  int *v91; // [sp+40h] [bp-34h]
  int **v92; // [sp+44h] [bp-30h]
  int *v94; // [sp+4Ch] [bp-28h]
  int v96; // [sp+5Ch] [bp-18h]
  _DWORD v97[2]; // [sp+60h] [bp-14h] BYREF
  int v98; // [sp+68h] [bp-Ch]
  int v99; // [sp+6Ch] [bp-8h]

  v4 = a2 & 0xFFFFF000;
  v82 = a2 - v4;
  v5 = _stack_chk_guard;
  v88 = a1 + 1033;
  a1[1030] = v4;
  v99 = v5;
LABEL_2:
  v6 = a1;
  v96 = 1000;
  while ( 1 )
  {
    if ( a3 <= v4 )
      return -1;
    if ( (v6[4] & 2) != 0 )
      goto LABEL_5;
    v97[1] = 0;
    v98 = 0;
    v97[0] = &off_CFD90;
    v42 = ((int (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x56u, (char *)v97, 0, (int)callui, v66);
    v97[0] = &off_D17E4;
    sub_79BD4(v98);
    if ( v42 )
      return -7;
    v4 = v6[1030];
LABEL_5:
    v72 = v6 + 6;
    v66 = v6[5];
    if ( (*(int (__fastcall **)(int, unsigned int, int *, int))(*(_DWORD *)v6[2] + 144))(v6[2], v4, v6 + 6, 4096) != 4096 )
    {
      v6[1034] = v6[1030];
      return -7;
    }
    v81 = (unsigned int *)(v6 + 1030);
    v7 = a3;
    v8 = a3 - v6[1030];
    v9 = v8 > 0x1000;
    if ( v8 > 0x1000 )
      v8 = 4168;
    else
      v7 = 4168;
    if ( v9 )
    {
      v7 = (int)v6 + v8;
      *(int *)((char *)v6 + v8) = 4096;
    }
    else
    {
      *(int *)((char *)v6 + v7) = v8;
      v8 = (unsigned int)v6 + v7;
    }
    if ( !v9 )
      v87 = (int *)v8;
    v10 = (int *)v6[1031];
    if ( v9 )
      v87 = (int *)v7;
    v85 = v6 + 1031;
LABEL_17:
    if ( v10 != v85 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + 3);
        v74 = v10[4];
        v12 = *v87;
        v13 = (_DWORD *)(*(_DWORD *)v6[3] + 40 * v11);
        v70 = *v87;
        v77 = v13[1] - HIDWORD(v11);
        if ( *v87 >= v77 )
          v12 = v13[1] - HIDWORD(v11);
        v14 = v13[4];
        if ( v14 )
          v14 = v13[3] + HIDWORD(v11);
        if ( v12 )
          break;
LABEL_33:
        if ( v77 <= v70 )
        {
          *(_DWORD *)v6[1] = v10[2];
          return 1;
        }
        v24 = (int *)*v10;
        if ( v70 != 4096 )
        {
LABEL_49:
          v40 = v10;
          *(_DWORD *)v10[1] = v24;
          v41 = *(_QWORD *)v10;
          v10 = v24;
          *(_DWORD *)(v41 + 4) = HIDWORD(v41);
          sub_77E08(v40);
          --*v88;
          goto LABEL_17;
        }
        v10[4] = v74 + 4096;
        v10 = v24;
        if ( v24 == v85 )
          goto LABEL_36;
      }
      v15 = (char *)v6 + 23;
      v16 = (_BYTE *)v14;
      s = v10;
      v83 = v6;
      v17 = v74 - 1 + *v13;
      v18 = v6[4] & 1;
      v67 = v6[4] & 0x20;
      v19 = (int)v72 + v12 - 1;
      while ( 2 )
      {
        v21 = (unsigned __int8)*++v15;
        v20 = v21;
        v23 = *(unsigned __int8 *)++v17;
        v22 = v23;
        if ( !v18 )
        {
          v20 = (unsigned __int8)toupper(v20);
          v22 = (unsigned __int8)toupper(v22);
        }
        if ( v14 )
        {
          if ( v67 )
          {
            if ( ((v20 ^ v22) & (unsigned __int8)*v16) != 0 )
            {
LABEL_48:
              v10 = s;
              v6 = v83;
              v24 = (int *)*s;
              goto LABEL_49;
            }
          }
          else if ( v14 == 255 )
          {
            if ( v22 != 255 )
              goto LABEL_30;
          }
          else if ( *v16 )
          {
            goto LABEL_30;
          }
        }
        else
        {
LABEL_30:
          if ( v20 != v22 )
            goto LABEL_48;
        }
        ++v16;
        if ( v15 == (char *)v19 )
        {
          v10 = s;
          v6 = v83;
          goto LABEL_33;
        }
        continue;
      }
    }
LABEL_36:
    v71 = v6[1030];
    if ( 4 * v6[1036] )
    {
      v75 = (int *)v6[1035];
      v25 = v10;
      do
      {
        v26 = *v75++;
        v26 *= 5;
        v27 = *(_DWORD *)v6[3];
        v28 = *(unsigned __int8 **)(v27 + 8 * v26);
        v29 = v27 + 8 * v26;
        v30 = *v28;
        v31 = *v87 - v82;
        v32 = *(_DWORD *)(v29 + 4);
        if ( v31 )
        {
          v33 = (char *)v72 + v82;
          do
          {
            v35 = memchr(v33, v30, v31);
            v36 = v35;
            if ( !v35 )
              break;
            v37 = *(const void **)v29;
            v38 = v31 - (v35 - v33);
            if ( v32 > v38 )
            {
              if ( !memcmp(v35, v37, v38) )
              {
                v68 = *(v75 - 1);
                v34 = sub_77E84(20);
                v34[2] = v36 - (_BYTE *)v72 + v71;
                *v34 = v25;
                v34[3] = v68;
                v34[4] = v38;
                v34[1] = v25[1];
                *(_DWORD *)v25[1] = v34;
                v25[1] = (int)v34;
                ++*v88;
                v71 = *v81;
              }
            }
            else if ( !memcmp(v35, v37, v32) )
            {
              *(_DWORD *)v6[1] = v36 - (_BYTE *)v72 + v71;
              return 1;
            }
            v31 = v38 - 1;
            v33 = v36 + 1;
          }
          while ( v31 );
        }
      }
      while ( (int *)(v6[1035] + 4 * v6[1036]) != v75 );
      v10 = v25;
    }
    v43 = v6[1039];
    v91 = v6 + 1039;
    if ( v43 )
    {
      v46 = *v87;
      if ( v82 < *v87 )
      {
        v94 = v10;
        v78 = v6;
        v90 = (char *)v72 + v82 - 1;
        v89 = (int)v72 + v82;
        v92 = (int **)(v6 + 1038);
        while ( 1 )
        {
          sa = (char *)(v46 - v82);
          if ( 4 * v43 )
            break;
LABEL_84:
          v46 = *v87;
          ++v90;
          v9 = *v87 > ++v82;
          ++v89;
          if ( !v9 )
          {
            v6 = v78;
            goto LABEL_58;
          }
          v43 = *v91;
        }
        v73 = *v92;
        while ( 1 )
        {
          v47 = sa;
          v48 = *v73;
          v49 = *(_DWORD *)v78[3];
          ++v73;
          v50 = 5 * v48;
          v86 = v48;
          v51 = (_DWORD *)(v49 + 40 * v48);
          v52 = *(_DWORD *)(v49 + 8 * v50);
          v84 = v51[1];
          if ( (unsigned int)sa >= v84 )
            v47 = (char *)v51[1];
          v53 = (_BYTE *)v51[4];
          v76 = v47;
          if ( v53 )
            v53 = (_BYTE *)v51[3];
          if ( v47 )
            break;
LABEL_81:
          v64 = v71 + v82;
          if ( (unsigned int)sa >= v84 )
          {
            *(_DWORD *)v78[1] = v64;
            return 1;
          }
          v65 = sub_77E84(20);
          v65[2] = v64;
          v65[3] = v86;
          *v65 = v94;
          v65[4] = v76;
          v65[1] = v94[1];
          *(_DWORD *)v94[1] = v65;
          v94[1] = (int)v65;
          ++*v88;
          v71 = *v81;
LABEL_83:
          if ( &(*v92)[*v91] == v73 )
            goto LABEL_84;
        }
        v54 = v52 - 1;
        v55 = v90;
        v56 = v53;
        v57 = v78[4] & 1;
        v58 = &v47[v89 - 1];
        v69 = v78[4] & 0x20;
        while ( 2 )
        {
          v60 = (unsigned __int8)*++v55;
          v59 = v60;
          v62 = *(unsigned __int8 *)++v54;
          v61 = v62;
          if ( !v57 )
          {
            v59 = (unsigned __int8)toupper(v59);
            v61 = (unsigned __int8)toupper(v61);
          }
          if ( !v53 )
            goto LABEL_78;
          if ( v69 )
          {
            v63 = ((v59 ^ v61) & (unsigned __int8)*v56) == 0;
          }
          else
          {
            if ( v53 != (_BYTE *)255 )
            {
              if ( *v56 )
                goto LABEL_78;
LABEL_80:
              ++v56;
              if ( v58 == v55 )
                goto LABEL_81;
              continue;
            }
            if ( v61 == 255 )
              goto LABEL_80;
LABEL_78:
            v63 = v59 == v61;
          }
          break;
        }
        if ( !v63 )
          goto LABEL_83;
        goto LABEL_80;
      }
    }
LABEL_58:
    v4 = v71 + 4096;
    v82 = 0;
    v6[1030] = v71 + 4096;
    if ( !--v96 )
    {
      sub_78DE0();
      v45 = v44;
      if ( (unsigned int)(v44 - a1[1041]) > 4 )
      {
        sub_172DC(a1[2], &byte_8DEAC);
        a1[1041] = v45;
      }
      v4 = *v81;
      goto LABEL_2;
    }
  }
}
// 524C4: variable 'v87' is possibly undefined
// 5270E: variable 'v66' is possibly undefined
// 5277E: variable 'v44' is possibly undefined
// 8DEAC: using guessed type char byte_8DEAC;
// CFD90: using guessed type _UNKNOWN *off_CFD90;
// D17E4: using guessed type _UNKNOWN *off_D17E4;
// D3924: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
