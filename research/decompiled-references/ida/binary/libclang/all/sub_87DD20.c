__int64 __fastcall sub_87DD20(__int64 a1, __int64 a2, __m128i *a3)
{
  unsigned int v4; // r14d
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  bool v18; // al
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __m128i *v22; // rbx
  _QWORD *v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  unsigned __int8 **v28; // rbx
  unsigned __int8 v29; // al
  char v30; // al
  __int64 v31; // rdx
  int v32; // ebp
  unsigned int v33; // r13d
  int v34; // r15d
  __int64 v35; // rcx
  unsigned int v36; // eax
  void *v37; // rax
  unsigned int v38; // eax
  unsigned __int8 **v39; // rbx
  char v40; // bp
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rbp
  char *v45; // r15
  unsigned __int64 v46; // rax
  __int8 v47; // al
  unsigned __int32 v48; // edx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rbp
  int v52; // eax
  __int64 v53; // rdx
  _QWORD *v54; // rdx
  unsigned __int8 **v55; // rdi
  unsigned __int8 **v56; // rax
  unsigned __int8 **v57; // rbx
  unsigned int v58; // eax
  __int64 v59; // rax
  _QWORD *v60; // r13
  unsigned __int8 *v61; // r12
  _BYTE *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rbp
  __int64 v68; // r14
  __int64 v69; // rbp
  void *v70; // rdi
  unsigned __int8 *v71; // rax
  unsigned int v72; // [rsp+8h] [rbp-110h]
  unsigned __int64 v73; // [rsp+8h] [rbp-110h]
  unsigned int v74; // [rsp+8h] [rbp-110h]
  __int64 v76; // [rsp+10h] [rbp-108h]
  __int64 v77; // [rsp+18h] [rbp-100h]
  unsigned int v78; // [rsp+18h] [rbp-100h]
  unsigned __int8 v79; // [rsp+2Bh] [rbp-EDh]
  unsigned int v80; // [rsp+2Ch] [rbp-ECh]
  __int64 v81; // [rsp+38h] [rbp-E0h]
  void *v82; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int8 **v83; // [rsp+48h] [rbp-D0h] BYREF
  void *v84; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v85; // [rsp+58h] [rbp-C0h]
  char v86; // [rsp+5Ch] [rbp-BCh]
  void *v87; // [rsp+60h] [rbp-B8h] BYREF
  unsigned int v88; // [rsp+68h] [rbp-B0h]
  void *v89; // [rsp+70h] [rbp-A8h] BYREF
  unsigned int v90; // [rsp+78h] [rbp-A0h]
  void *v91; // [rsp+80h] [rbp-98h] BYREF
  unsigned int v92; // [rsp+88h] [rbp-90h]
  void *v93; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v94; // [rsp+98h] [rbp-80h]
  void *v95; // [rsp+A0h] [rbp-78h] BYREF
  unsigned int v96; // [rsp+A8h] [rbp-70h]
  char v97; // [rsp+ACh] [rbp-6Ch]

  if ( *(_BYTE *)(a1 + 962) || *(_DWORD *)(a1 + 948) )
    return 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = a1 + 56;
  v8 = a2;
  if ( a1 + 56 == v6 )
  {
LABEL_21:
    v20 = 2243;
    if ( *(char *)(sub_A2CB40(a1) + 1) < 0 )
      v20 = 2252;
    v21 = sub_8124E0(a2);
    sub_A2E1A0(a1, v21, v20, 0);
    return 0;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 24);
      if ( !v9 )
        goto LABEL_20;
      if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 33 > 3 )
        goto LABEL_20;
      v10 = *(_QWORD *)(v9 + 40);
      if ( (v10 & 7) != 0 )
        goto LABEL_20;
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v11 )
        goto LABEL_20;
      v12 = *(_QWORD *)(v11 + 16);
      if ( *(_DWORD *)v12 != 8 || *(_QWORD *)(v12 + 16) != 0x657461636F6C6C61LL )
        goto LABEL_20;
      v13 = *(_QWORD *)(sub_79A2E0(v9 + 72) + 16);
      v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v13 & 4) != 0 )
        v14 = (_QWORD *)*v14;
      if ( !v14 )
        BUG();
      if ( (*((_BYTE *)v14 - 36) & 0x7Fu) - 58 > 1 )
        goto LABEL_20;
      v15 = *(v14 - 3);
      v72 = *(_DWORD *)(v14 - 3) & 7;
      if ( (v15 & 7) == 0 )
        break;
      sub_79C450((__int64)(v14 - 8));
      v6 = *(_QWORD *)(v6 + 16);
      if ( v7 == v6 )
        goto LABEL_21;
    }
    v16 = (__int64)(v14 - 8);
    v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    v77 = *(_QWORD *)(v16 + 168);
    v18 = sub_79C450(v16);
    if ( v17 )
    {
      if ( v18 )
      {
        v19 = *(_QWORD *)(v17 + 16);
        if ( *(_DWORD *)v19 == 9
          && *(_QWORD *)(v19 + 16) == 0x6F7461636F6C6C61LL
          && *(_BYTE *)(v19 + 24) == 114
          && *(_DWORD *)v77
          && (*(_DWORD *)(v77 + 8) & 0x7FFFFFFF) == 1 )
        {
          break;
        }
      }
    }
LABEL_20:
    v6 = *(_QWORD *)(v6 + 16);
    if ( v7 == v6 )
      goto LABEL_21;
  }
  v22 = a3;
  v76 = *(_QWORD *)(v77 + 16);
  v81 = *(_QWORD *)(v6 + 40);
  if ( !*(_DWORD *)(v6 + 176) )
    goto LABEL_21;
  v23 = (_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = sub_B19120(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL), 0);
  if ( (_BYTE)v4
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v23 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
  {
    v27 = sub_8124E0(a2);
    v28 = (unsigned __int8 **)sub_A2E1A0(a1, v27, 2248, 0);
    v29 = sub_B19120(*v23, 0);
    if ( v28 )
    {
      sub_823450(v28, v29 ^ 1u);
      sub_8356A0(v28, v76, 8u);
    }
    return 0;
  }
  v30 = *(_BYTE *)(a2 + 2);
  v31 = *(unsigned __int8 *)(a2 + 3);
  v85 = 1;
  v84 = nullptr;
  v86 = 0;
  if ( !(unsigned __int8)sub_87D880(
                           *(_QWORD *)(a2 + 8LL * ((v30 & 8) != 0) + 8 + v31),
                           (__int64)&v84,
                           a1,
                           v24,
                           v25,
                           v26) )
    goto LABEL_65;
  v32 = 0;
  if ( *(_DWORD *)(a2 + 16) != 1 )
  {
    v33 = 1;
    v34 = *(_DWORD *)(a2 + 16);
    do
    {
      v35 = 8LL * v33++;
      sub_857160(a1, *(_QWORD *)(a2 + v35 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)));
      v32 |= sub_B0E990(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    }
    while ( v33 != v34 );
    v8 = a2;
  }
  v36 = sub_8124E0(v8);
  v82 = nullptr;
  v79 = sub_81FCD0(a1, v36, v76, (__int64 *)&v82, 0);
  if ( !v79 )
    goto LABEL_65;
  v88 = 1;
  v87 = nullptr;
  v90 = 1;
  v89 = nullptr;
  v92 = v85;
  if ( v85 > 0x40 )
    sub_2585A50(&v91, v82, 0);
  else
    v91 = v82;
  sub_258A1B0(&v84, &v91, &v87, &v89);
  v80 = v90;
  if ( v90 <= 0x40 )
  {
    v37 = v89;
    goto LABEL_45;
  }
  if ( v80 - (unsigned int)sub_2587400(&v89) <= 0x40 )
  {
    v37 = *(void **)v89;
LABEL_45:
    if ( !v37 )
    {
      v40 = v32 ^ 1;
      v41 = (unsigned __int64)v87;
      if ( v88 > 0x40 )
        v41 = *(_QWORD *)v87;
      if ( v85 > 0x40 )
      {
        v74 = v85;
        v72 = v74 - sub_2587400(&v84);
      }
      else if ( v84 )
      {
        _BitScanReverse64(&v42, (unsigned __int64)v84);
        v72 = v42 + 1;
      }
      v78 = sub_80F950(v8);
      if ( (unsigned int)sub_B064C0(*(_QWORD *)(a1 + 16)) < v72 || HIDWORD(v41) )
      {
        if ( v40 )
        {
          v55 = (unsigned __int8 **)sub_A2E1A0(a1, v78, 2250, 0);
          if ( v55 )
            sub_8356A0(v55, v41, 3u);
          goto LABEL_56;
        }
        v43 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v43 = *(_QWORD *)(a1 + 16);
        v73 = *(unsigned int *)(*(_QWORD *)(v43 + 2160) + 136LL);
        if ( v73 >= v41 )
        {
          v44 = sub_6C55D0(v43, v76, (__int64)&v87, 0, 0, 0);
          v45 = sub_828880(a1, v81, v44, (__int64)v22);
          LODWORD(v46) = (_DWORD)v87;
          if ( v88 > 0x40 )
            v46 = *(_QWORD *)v87;
          BYTE4(v95) &= ~1u;
          LODWORD(v95) = 0;
          sub_6A3820((__int64)&v95, 0, v46);
          sub_6A01B0((__int64)v45, (__int64)&v95);
          if ( (unsigned int)v95 > 1 )
            sub_69F740((__int64)&v95);
          v47 = v22[1].m128i_i8[8];
          if ( (v47 & 1) == 0 )
          {
            if ( (v47 & 2) != 0
              || ((v48 = v22[3].m128i_u32[2], v48 != 1) || (v47 & 4) == 0)
              && (v47 & 8) != 0
              && *(_QWORD *)(v22[3].m128i_i64[0] + 8LL * (((unsigned __int32)v22[1].m128i_i32[2] >> 4) - 1)) == v22[2].m128i_i64[0] )
            {
              v59 = sub_A2E240(a1, v8, 2264, 0);
              v60 = (_QWORD *)v59;
              if ( v59 )
              {
                v61 = *(unsigned __int8 **)v59;
                if ( !*(_QWORD *)v59 )
                {
                  v64 = *(_QWORD *)(v59 + 8);
                  v65 = *(_DWORD *)(v64 + 14976);
                  if ( v65 )
                  {
                    v66 = (unsigned int)(v65 - 1);
                    *(_DWORD *)(v64 + 14976) = v66;
                    v61 = *(unsigned __int8 **)(v64 + 8 * v66 + 14848);
                    v67 = *((unsigned int *)v61 + 134);
                    v68 = *((_QWORD *)v61 + 66);
                    *v61 = 0;
                    *((_DWORD *)v61 + 106) = 0;
                    v69 = v68 + (v67 << 6);
                    while ( v68 != v69 )
                    {
                      v69 -= 64;
                      v70 = *(void **)(v69 + 24);
                      if ( v70 != (void *)(v69 + 40) )
                        operator delete(v70, *(_QWORD *)(v69 + 40) + 1LL);
                    }
                    *((_DWORD *)v61 + 134) = 0;
                  }
                  else
                  {
                    v61 = (unsigned __int8 *)operator new(0x3A0u);
                    *v61 = 0;
                    v71 = v61 + 112;
                    do
                    {
                      *((_QWORD *)v71 - 2) = v71;
                      v71 += 32;
                      *((_QWORD *)v71 - 5) = 0;
                      *(v71 - 32) = 0;
                    }
                    while ( v71 != v61 + 432 );
                    *((_QWORD *)v61 + 52) = v71;
                    *((_QWORD *)v61 + 53) = 0x800000000LL;
                    *((_QWORD *)v61 + 66) = v61 + 544;
                    *((_QWORD *)v61 + 67) = 0x600000000LL;
                  }
                  *v60 = v61;
                }
                v61[*v61 + 1] = 2;
                v62 = (_BYTE *)*v60;
                v63 = *(unsigned __int8 *)*v60;
                *v62 = v63 + 1;
                *(_QWORD *)&v62[8 * v63 + 16] = 3;
              }
              v22[1].m128i_i8[8] |= 1u;
              v22[3].m128i_i32[2] = 0;
            }
            else
            {
              v49 = v48;
              v50 = v48 + 1LL;
              v51 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL);
              if ( v22[3].m128i_u32[3] < v50 )
              {
                sub_25D6060(&v22[3], &v22[4], v50, 8);
                v49 = v22[3].m128i_u32[2];
              }
              *(_QWORD *)(v22[3].m128i_i64[0] + 8 * v49) = 0;
              v52 = v22[3].m128i_i32[2] + 1;
              v22[3].m128i_i32[2] = v52;
              v53 = *(_QWORD *)(v51 + 32);
              v22[1].m128i_i8[8] |= 8u;
              v22[2].m128i_i64[1] = v53;
              v54 = *(_QWORD **)(v51 + 40);
              if ( (*(_BYTE *)(v51 + 19) & 2) != 0 )
              {
                if ( *((_DWORD *)v54 + 2) <= 0x40u )
                  v54 = (_QWORD *)*v54;
                else
                  v54 = *(_QWORD **)*v54;
              }
              v22[2].m128i_i64[0] = (__int64)v54;
              v22[1].m128i_i32[2] = v22[1].m128i_i32[2] & 0xF | (16 * v52);
            }
          }
          goto LABEL_91;
        }
        if ( v40 )
        {
          v56 = (unsigned __int8 **)sub_A2E1A0(a1, v78, 2245, 0);
          v57 = v56;
          if ( v56 )
          {
            sub_8356A0(v56, v41, 3u);
            sub_8356A0(v57, v73, 3u);
          }
          goto LABEL_56;
        }
      }
      sub_823870(v22, v43, *(_QWORD *)(v8 + 8));
LABEL_91:
      v4 = v79;
      goto LABEL_56;
    }
  }
  v38 = sub_8124E0(v8);
  v83 = (unsigned __int8 **)sub_A2E1A0(a1, v38, 2261, 0);
  v39 = v83;
  if ( v83 )
    sub_829A30(&v83, (__int64)&v84);
  v94 = v92;
  if ( v92 > 0x40 )
  {
    sub_2585B30(&v93);
    v58 = v94;
    v94 = 0;
    v97 = 1;
    v96 = v58;
    v95 = v93;
    if ( v39 )
    {
LABEL_50:
      sub_829A30(&v83, (__int64)&v95);
      sub_8356A0(v39, v76, 8u);
      if ( v96 <= 0x40 )
      {
LABEL_53:
        if ( v94 > 0x40 && v93 )
          operator delete[](v93);
        goto LABEL_56;
      }
    }
    else if ( v58 <= 0x40 )
    {
      goto LABEL_56;
    }
    if ( v95 )
      operator delete[](v95);
    goto LABEL_53;
  }
  v96 = v92;
  v94 = 0;
  v93 = v91;
  v95 = v91;
  v97 = 1;
  if ( v39 )
    goto LABEL_50;
LABEL_56:
  if ( v92 > 0x40 && v91 )
    operator delete[](v91);
  if ( v90 > 0x40 && v89 )
    operator delete[](v89);
  if ( v88 > 0x40 && v87 )
    operator delete[](v87);
LABEL_65:
  if ( v85 > 0x40 && v84 )
    operator delete[](v84);
  return v4;
}

