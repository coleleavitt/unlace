/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1830
// Address: 0x00000000000D1830

//----- (00000000000D1830) ----------------------------------------------------
int32x2_t *__fastcall sub_D1830(__int64 a1, __int64 a2, int a3)
{
  __int128 v4; // q0
  __int128 v5; // q0
  __int128 v6; // q1
  __int128 v7; // q2
  __int64 v8; // x0
  __int64 v9; // x20
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x19
  unsigned __int64 v12; // x25
  void *v13; // x0
  void *v14; // x21
  unsigned __int64 v15; // x27
  unsigned __int64 v16; // x28
  __int64 v17; // x23
  unsigned __int64 v18; // x8
  signed __int64 v19; // x8
  bool v20; // cc
  _BOOL4 v21; // w8
  __int64 v22; // x20
  unsigned __int64 v23; // x0
  unsigned __int64 v24; // x21
  unsigned __int64 v25; // x25
  _BYTE *v26; // x0
  _BYTE *v27; // x22
  unsigned __int64 v28; // x27
  unsigned __int64 v29; // x28
  __int64 v30; // x23
  unsigned __int64 v31; // x8
  signed __int64 v32; // x8
  unsigned __int64 v33; // x19
  int v34; // w21
  __int64 v35; // x0
  __int64 v36; // x20
  __int64 v37; // x20
  unsigned __int64 v38; // x22
  __int64 v39; // x20
  unsigned __int64 v40; // x23
  __int64 v41; // x20
  unsigned __int64 v42; // x8
  int v43; // w0
  __int64 v44; // x20
  unsigned __int64 v45; // x8
  int v46; // w0
  __int64 v47; // x20
  unsigned __int64 v49; // x8
  int v50; // w0
  __int64 v51; // x20
  unsigned __int64 v52; // x8
  int v53; // w0
  __int64 v54; // x20
  int32x2_t *v55; // x0
  int32x2_t *v56; // x19
  unsigned __int64 v57; // x8
  __int64 v58; // x0
  __int64 v59; // x20
  int v60; // w21
  __int64 v61; // x20
  __int64 v62; // x20
  __int64 v63; // x20
  __int64 v64; // x20
  unsigned __int64 v65; // x22
  __int64 v66; // x20
  unsigned __int64 v67; // x23
  __int64 v68; // x20
  __int64 v69; // x20
  __int64 v70; // x8
  int v71; // w0
  __int64 v72; // x20
  __int64 v74; // x20
  _OWORD src[2]; // [xsp+10h] [xbp-1C0h] BYREF
  __int128 v77; // [xsp+30h] [xbp-1A0h]
  __int128 v78; // [xsp+40h] [xbp-190h]
  __int128 v79; // [xsp+50h] [xbp-180h]
  __int64 v80; // [xsp+60h] [xbp-170h]
  int v81; // [xsp+68h] [xbp-168h]
  __int64 v82; // [xsp+70h] [xbp-160h]
  unsigned __int64 v83; // [xsp+78h] [xbp-158h]
  unsigned __int64 v84; // [xsp+80h] [xbp-150h]
  unsigned __int64 v85; // [xsp+88h] [xbp-148h]
  unsigned __int64 v86; // [xsp+A8h] [xbp-128h]
  unsigned __int64 v87; // [xsp+B0h] [xbp-120h]
  unsigned __int64 v88; // [xsp+B8h] [xbp-118h]
  __int64 v89; // [xsp+150h] [xbp-80h]
  int v90; // [xsp+158h] [xbp-78h]
  int v91; // [xsp+15Ch] [xbp-74h]
  _QWORD v92[2]; // [xsp+160h] [xbp-70h] BYREF

  v92[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)&v79 + 1) = 0;
  v80 = 0;
  if ( a2 )
  {
    v4 = *(_OWORD *)(a2 + 16);
    src[0] = *(_OWORD *)a2;
    src[1] = v4;
    v6 = *(_OWORD *)(a2 + 48);
    v5 = *(_OWORD *)(a2 + 64);
    v7 = *(_OWORD *)(a2 + 32);
    v80 = *(_QWORD *)(a2 + 80);
    v78 = v6;
    v79 = v5;
    v77 = v7;
  }
  else
  {
    sub_D5198((__int64)src);
  }
  v81 = a3;
  v8 = sub_D4FA8((__int64)src);
  v82 = v8;
  if ( !v8 )
    return nullptr;
  v9 = v8;
  if ( !sub_D4FC4((__int64)src) )
  {
    v10 = sub_D4FE0((__int64)src);
    v11 = v10;
    v12 = v10 >= 0xFFFF ? 0xFFFFLL : v10;
    v13 = malloc(0x404u);
    if ( v13 )
    {
      v14 = v13;
      v15 = 4;
      while ( 1 )
      {
LABEL_11:
        if ( v15 < v12 )
        {
          v16 = v15 + 1024;
          if ( v15 + 1024 <= v12 )
            v15 += 1024LL;
          else
            v15 = v12;
          v17 = v15 >= 0x404 ? 1028LL : v15;
          if ( !sub_D4FC4((__int64)src)
            && (*((__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))&src[0] + 1))(
                 *((_QWORD *)&v78 + 1),
                 v9,
                 v14,
                 v17) == v17 )
          {
            continue;
          }
        }
        free(v14);
        goto LABEL_42;
        if ( (unsigned int)v17 >= 4 )
        {
          if ( v11 <= v16 )
            v18 = v11;
          else
            v18 = v16;
          if ( v18 >= 0x404 )
            v18 = 1028;
          v19 = v18 - 4;
          while ( *((_BYTE *)v14 + v19) != 80
               || *((_BYTE *)v14 + v19 + 1) != 75
               || *((_BYTE *)v14 + v19 + 2) != 6
               || *((_BYTE *)v14 + v19 + 3) != 7 )
          {
            v20 = v19-- <= 0;
            if ( v20 )
              goto LABEL_11;
          }
          if ( v11 - v15 + (unsigned int)v19 != -1 )
            break;
        }
      }
      free(v14);
      if ( !sub_D4FC4((__int64)src)
        && ((*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
              *((_QWORD *)&v78 + 1),
              v9,
              v92,
              4) == 4
         || !((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v9)) )
      {
        if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
               *((_QWORD *)&v78 + 1),
               v9,
               v92,
               4) == 4 )
        {
          v21 = 1;
          if ( LOBYTE(v92[0])
             | (unsigned __int64)(unsigned __int16)(BYTE1(v92[0]) << 8)
             | ((unsigned __int64)BYTE2(v92[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
             | ((unsigned __int64)BYTE3(v92[0]) << 24) )
          {
            goto LABEL_42;
          }
        }
        else
        {
          v21 = ((__int64 (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v9) == 0;
        }
        if ( v21 )
        {
          if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                 *((_QWORD *)&v78 + 1),
                 v9,
                 v92,
                 8) == 8 )
          {
            v33 = v92[0];
          }
          else
          {
            if ( ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v9) )
              goto LABEL_42;
            v33 = 0;
          }
          if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                 *((_QWORD *)&v78 + 1),
                 v9,
                 v92,
                 4) != 4 )
            goto LABEL_146;
          if ( (LOBYTE(v92[0])
              | (unsigned __int64)(unsigned __int16)(BYTE1(v92[0]) << 8)
              | ((unsigned __int64)BYTE2(v92[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
              | ((unsigned __int64)BYTE3(v92[0]) << 24)) != 1
            || sub_D4FC4((__int64)src) )
          {
            goto LABEL_42;
          }
          if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                 *((_QWORD *)&v78 + 1),
                 v9,
                 v92,
                 4) == 4 )
          {
            if ( v33 != -1
              && (LOBYTE(v92[0])
                | (unsigned __int64)(unsigned __int16)(BYTE1(v92[0]) << 8)
                | ((unsigned __int64)BYTE2(v92[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
                | ((unsigned __int64)BYTE3(v92[0]) << 24)) == 0x6064B50 )
            {
              v91 = 1;
              v58 = sub_D4FC4((__int64)src);
              v59 = v82;
              if ( v58 )
                v60 = -1;
              else
                v60 = 0;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     4) != 4
                && ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v59) )
              {
                v60 = -1;
              }
              v61 = v82;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     8) != 8
                && ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v61) )
              {
                v60 = -1;
              }
              v62 = v82;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     2) != 2
                && ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v62) )
              {
                v60 = -1;
              }
              v63 = v82;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     2) != 2
                && ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v63) )
              {
                v60 = -1;
              }
              v64 = v82;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     4) == 4 )
              {
                v65 = LOBYTE(v92[0])
                    | (unsigned __int64)(unsigned __int16)(BYTE1(v92[0]) << 8)
                    | ((unsigned __int64)BYTE2(v92[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
                    | ((unsigned __int64)BYTE3(v92[0]) << 24);
              }
              else
              {
                v65 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v64) )
                  v60 = -1;
              }
              v66 = v82;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     4) == 4 )
              {
                v67 = LOBYTE(v92[0])
                    | (unsigned __int64)(unsigned __int16)(BYTE1(v92[0]) << 8)
                    | ((unsigned __int64)BYTE2(v92[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
                    | ((unsigned __int64)BYTE3(v92[0]) << 24);
              }
              else
              {
                v67 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v66) )
                  v60 = -1;
              }
              v68 = v82;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     8) == 8 )
              {
                v83 = v92[0];
              }
              else
              {
                v83 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v68) )
                  v60 = -1;
              }
              v69 = v82;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     8) == 8 )
              {
                v70 = v92[0];
              }
              else
              {
                v71 = ((__int64 (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v69);
                v70 = 0;
                if ( v71 )
                  v60 = -1;
              }
              v72 = v82;
              if ( v70 != v83 || (v67 | v65) != 0 )
                v60 = -103;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     8) == 8 )
              {
                v87 = v92[0];
              }
              else
              {
                v87 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v72) )
                  v60 = -1;
              }
              v74 = v82;
              if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
                     *((_QWORD *)&v78 + 1),
                     v82,
                     v92,
                     8) == 8 )
              {
                v84 = 0;
                v88 = v92[0];
                if ( v60 )
                  goto LABEL_176;
              }
              else
              {
                v88 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v74) )
                  v60 = -1;
                v84 = 0;
                if ( v60 )
                  goto LABEL_176;
              }
              goto LABEL_114;
            }
          }
          else
          {
LABEL_146:
            ((void (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v9);
          }
        }
      }
    }
  }
LABEL_42:
  v22 = v82;
  if ( !sub_D4FC4((__int64)src) )
  {
    v23 = sub_D4FE0((__int64)src);
    v24 = v23;
    v25 = v23 >= 0xFFFF ? 0xFFFFLL : v23;
    v26 = malloc(0x404u);
    if ( v26 )
    {
      v27 = v26;
      v28 = 4;
LABEL_48:
      while ( v28 < v25 )
      {
        v29 = v28 + 1024;
        if ( v28 + 1024 <= v25 )
          v28 += 1024LL;
        else
          v28 = v25;
        v30 = v28 >= 0x404 ? 1028LL : v28;
        if ( sub_D4FC4((__int64)src)
          || (*((__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))&src[0] + 1))(
               *((_QWORD *)&v78 + 1),
               v22,
               v27,
               v30) != v30 )
        {
          break;
        }
        if ( (unsigned int)v30 >= 4 )
        {
          if ( v24 <= v29 )
            v31 = v24;
          else
            v31 = v29;
          if ( v31 >= 0x404 )
            v31 = 1028;
          v32 = v31 - 4;
          while ( v27[v32] != 80 || v27[v32 + 1] != 75 || v27[v32 + 2] != 5 || v27[v32 + 3] != 6 )
          {
            v20 = v32-- <= 0;
            if ( v20 )
              goto LABEL_48;
          }
          v33 = v24 - v28 + (unsigned int)v32;
          if ( v33 != -1 )
          {
            free(v27);
            v34 = 0;
            goto LABEL_75;
          }
        }
      }
      free(v27);
    }
  }
  v34 = -1;
  v33 = -1;
LABEL_75:
  v91 = 0;
  v35 = sub_D4FC4((__int64)src);
  v36 = v82;
  if ( v35 )
    v34 = -1;
  if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
         *((_QWORD *)&v78 + 1),
         v82,
         v92,
         4) != 4
    && ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v36) )
  {
    v34 = -1;
  }
  v37 = v82;
  if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
         *((_QWORD *)&v78 + 1),
         v82,
         v92,
         2) == 2 )
  {
    v38 = LOBYTE(v92[0]) | ((unsigned __int64)BYTE1(v92[0]) << 8);
  }
  else
  {
    v38 = 0;
    if ( ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v37) )
      v34 = -1;
  }
  v39 = v82;
  if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
         *((_QWORD *)&v78 + 1),
         v82,
         v92,
         2) == 2 )
  {
    v40 = LOBYTE(v92[0]) | ((unsigned __int64)BYTE1(v92[0]) << 8);
  }
  else
  {
    v40 = 0;
    if ( ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v39) )
      v34 = -1;
  }
  v41 = v82;
  if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
         *((_QWORD *)&v78 + 1),
         v82,
         v92,
         2) == 2 )
  {
    v42 = LOBYTE(v92[0]) | ((unsigned __int64)BYTE1(v92[0]) << 8);
  }
  else
  {
    v43 = ((__int64 (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v41);
    v42 = 0;
    if ( v43 )
      v34 = -1;
  }
  v44 = v82;
  v83 = v42;
  if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
         *((_QWORD *)&v78 + 1),
         v82,
         v92,
         2) == 2 )
  {
    v45 = LOBYTE(v92[0]) | ((unsigned __int64)BYTE1(v92[0]) << 8);
  }
  else
  {
    v46 = ((__int64 (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v44);
    v45 = 0;
    if ( v46 )
      v34 = -1;
  }
  v47 = v82;
  if ( v45 != v83 || (v40 | v38) != 0 )
    v34 = -103;
  if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
         *((_QWORD *)&v78 + 1),
         v82,
         v92,
         4) == 4 )
  {
    v49 = LOBYTE(v92[0])
        | (unsigned __int64)(unsigned __int16)(BYTE1(v92[0]) << 8)
        | ((unsigned __int64)BYTE2(v92[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
        | ((unsigned __int64)BYTE3(v92[0]) << 24);
  }
  else
  {
    v50 = ((__int64 (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v47);
    v49 = 0;
    if ( v50 )
      v34 = -1;
  }
  v51 = v82;
  v87 = v49;
  if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
         *((_QWORD *)&v78 + 1),
         v82,
         v92,
         4) == 4 )
  {
    v52 = LOBYTE(v92[0])
        | (unsigned __int64)(unsigned __int16)(BYTE1(v92[0]) << 8)
        | ((unsigned __int64)BYTE2(v92[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
        | ((unsigned __int64)BYTE3(v92[0]) << 24);
  }
  else
  {
    v53 = ((__int64 (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v51);
    v52 = 0;
    if ( v53 )
      v34 = -1;
  }
  v54 = v82;
  v88 = v52;
  if ( (*((unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))&src[0] + 1))(
         *((_QWORD *)&v78 + 1),
         v82,
         v92,
         2) == 2 )
  {
    v84 = LOBYTE(v92[0]) | ((unsigned __int64)BYTE1(v92[0]) << 8);
    if ( v34 )
      goto LABEL_176;
  }
  else
  {
    v84 = 0;
    if ( ((unsigned int (__fastcall *)(_QWORD, __int64))v78)(*((_QWORD *)&v78 + 1), v54) || v34 )
      goto LABEL_176;
  }
LABEL_114:
  if ( v33 < v87 + v88 )
  {
LABEL_176:
    (*((void (__fastcall **)(_QWORD, __int64))&v77 + 1))(*((_QWORD *)&v78 + 1), v82);
    return nullptr;
  }
  v85 = v33 - (v87 + v88);
  v86 = v33;
  v89 = 0;
  v90 = 0;
  v55 = (int32x2_t *)malloc(0x150u);
  v56 = v55;
  if ( v55 )
  {
    memcpy(v55, src, 0x150u);
    v57 = v56[21].n64_u64[0];
    v56[16].n64_u64[0] = 0;
    v56[17].n64_u64[0] = v57;
    v56[18].n64_u64[0] = (unsigned int)sub_D2548((__int64)v56, v56 + 22, v56[39].n64_u64, 0, 0, 0, 0, 0, 0) == 0;
  }
  return v56;
}
