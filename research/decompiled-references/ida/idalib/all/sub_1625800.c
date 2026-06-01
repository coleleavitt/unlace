__m128i *__fastcall sub_1625800(__int64 *a1, const __m128i *a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __m128i *v10; // rbp
  __int64 v12; // r15
  unsigned __int8 *v13; // r12
  unsigned __int8 *v14; // rdx
  __int64 v15; // rax
  unsigned __int8 *v16; // rbp
  unsigned __int8 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r14
  unsigned __int8 *v27; // r12
  _BYTE *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // r12
  unsigned __int8 *v38; // rbp
  _BYTE *v39; // rdx
  __int64 v40; // rax
  unsigned __int8 *v41; // r12
  unsigned __int8 *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r13
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v63; // r13
  __int64 v64; // r12
  void *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // r14
  __int64 v69; // r13
  void *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // r15
  __int64 v74; // r13
  void *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // r13
  __int64 v78; // r14
  __int64 v79; // r13
  void *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // r14
  __int64 v84; // r13
  void *v85; // rdi
  unsigned int v86; // [rsp+0h] [rbp-118h] BYREF
  unsigned int v87; // [rsp+4h] [rbp-114h] BYREF
  __int64 v88; // [rsp+8h] [rbp-110h] BYREF
  __m128i v89; // [rsp+10h] [rbp-108h] BYREF
  unsigned int v90; // [rsp+28h] [rbp-F0h]
  _BYTE v91[16]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v93; // [rsp+70h] [rbp-A8h]
  __int64 v94; // [rsp+78h] [rbp-A0h]
  char v95; // [rsp+C8h] [rbp-50h]
  unsigned int v96; // [rsp+D0h] [rbp-48h]
  char v97; // [rsp+D4h] [rbp-44h]

  v6 = (_QWORD *)sub_168B6C0(a1);
  sub_B068A0(&v89, (__int64)v6, a2, (__int64)a3, (__int64)a4);
  if ( (*a3 & 0x20000) != 0 || (*a4 & 0x20000) != 0 )
    goto LABEL_3;
  v12 = *a1;
  v86 = 0;
  if ( !(unsigned __int8)sub_161CCC0(v12, &v89, a3, &v86, 0, 0) )
    return nullptr;
  v87 = 0;
  if ( !(unsigned __int8)sub_161CCC0(v12, &v89, a4, &v87, 1, 0) )
    return nullptr;
  if ( v86 )
  {
    if ( v86 <= v87 )
    {
LABEL_3:
      v9 = v6[294];
      v6[304] += 56LL;
      v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v6[295] >= (unsigned __int64)&v10[3].m128i_u64[1] && v9 )
        v6[294] = (char *)v10 + 56;
      else
        v10 = (__m128i *)sub_986170((__int64)(v6 + 294), 56, 56, 3, v7, v8);
      sub_B068A0(v10, (__int64)v6, a2, (__int64)a3, (__int64)a4);
      return v10;
    }
    sub_168B9F0(v91, v12 + 8, v90, 3153, 0);
    if ( v95 )
    {
      v13 = v93;
      if ( !v93 )
      {
        v53 = v94;
        v54 = *(_DWORD *)(v94 + 14976);
        if ( v54 )
        {
          v66 = (unsigned int)(v54 - 1);
          *(_DWORD *)(v94 + 14976) = v66;
          v13 = *(unsigned __int8 **)(v53 + 8 * v66 + 14848);
          v67 = *((unsigned int *)v13 + 134);
          v68 = *((_QWORD *)v13 + 66);
          *v13 = 0;
          *((_DWORD *)v13 + 106) = 0;
          v69 = v68 + (v67 << 6);
          while ( v68 != v69 )
          {
            while ( 1 )
            {
              v69 -= 64;
              v70 = *(void **)(v69 + 24);
              if ( v70 == (void *)(v69 + 40) )
                break;
              operator delete(v70);
              if ( v68 == v69 )
                goto LABEL_64;
            }
          }
LABEL_64:
          *((_DWORD *)v13 + 134) = 0;
        }
        else
        {
          v13 = (unsigned __int8 *)operator new(0x3A0u);
          *v13 = 0;
          *((_QWORD *)v13 + 12) = v13 + 112;
          *((_QWORD *)v13 + 16) = v13 + 144;
          *((_QWORD *)v13 + 20) = v13 + 176;
          *((_QWORD *)v13 + 24) = v13 + 208;
          *((_QWORD *)v13 + 28) = v13 + 240;
          *((_QWORD *)v13 + 32) = v13 + 272;
          *((_QWORD *)v13 + 36) = v13 + 304;
          *((_QWORD *)v13 + 40) = v13 + 336;
          *((_QWORD *)v13 + 44) = v13 + 368;
          *((_QWORD *)v13 + 48) = v13 + 400;
          *((_QWORD *)v13 + 52) = v13 + 432;
          *((_QWORD *)v13 + 13) = 0;
          v13[112] = 0;
          *((_QWORD *)v13 + 17) = 0;
          v13[144] = 0;
          *((_QWORD *)v13 + 21) = 0;
          v13[176] = 0;
          *((_QWORD *)v13 + 25) = 0;
          v13[208] = 0;
          *((_QWORD *)v13 + 29) = 0;
          v13[240] = 0;
          *((_QWORD *)v13 + 33) = 0;
          v13[272] = 0;
          *((_QWORD *)v13 + 37) = 0;
          v13[304] = 0;
          *((_QWORD *)v13 + 41) = 0;
          v13[336] = 0;
          *((_QWORD *)v13 + 45) = 0;
          v13[368] = 0;
          *((_QWORD *)v13 + 49) = 0;
          v13[400] = 0;
          *((_QWORD *)v13 + 53) = 0x800000000LL;
          *((_QWORD *)v13 + 66) = v13 + 544;
          *((_QWORD *)v13 + 67) = 0x600000000LL;
        }
        v93 = v13;
      }
      v13[*v13 + 1] = 14;
      v14 = v93;
      v15 = *v93;
      *v93 = v15 + 1;
      *(_QWORD *)&v14[8 * v15 + 16] = &v89;
    }
    else
    {
      if ( !v97 )
      {
LABEL_20:
        v10 = nullptr;
        sub_15F7200(v91);
        return v10;
      }
      v23 = sub_168B9E0(v91);
      v24 = v92;
      if ( v92 )
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
      v88 = v24;
      v25 = sub_1587BC0(v23, &v88, v19, v20, v21, v22);
      v26 = *v25 + 32LL * v96;
      v27 = *(unsigned __int8 **)(v26 + 8);
      if ( !v27 )
      {
        v57 = *(_QWORD *)(v26 + 16);
        v58 = *(_DWORD *)(v57 + 14976);
        if ( v58 )
        {
          v71 = (unsigned int)(v58 - 1);
          *(_DWORD *)(v57 + 14976) = v71;
          v27 = *(unsigned __int8 **)(v57 + 8 * v71 + 14848);
          v72 = *((unsigned int *)v27 + 134);
          v73 = *((_QWORD *)v27 + 66);
          *v27 = 0;
          *((_DWORD *)v27 + 106) = 0;
          v74 = v73 + (v72 << 6);
          while ( v73 != v74 )
          {
            while ( 1 )
            {
              v74 -= 64;
              v75 = *(void **)(v74 + 24);
              if ( v75 == (void *)(v74 + 40) )
                break;
              operator delete(v75);
              if ( v73 == v74 )
                goto LABEL_69;
            }
          }
LABEL_69:
          *((_DWORD *)v27 + 134) = 0;
        }
        else
        {
          v27 = (unsigned __int8 *)operator new(0x3A0u);
          *v27 = 0;
          *((_QWORD *)v27 + 12) = v27 + 112;
          *((_QWORD *)v27 + 16) = v27 + 144;
          *((_QWORD *)v27 + 20) = v27 + 176;
          *((_QWORD *)v27 + 24) = v27 + 208;
          *((_QWORD *)v27 + 28) = v27 + 240;
          *((_QWORD *)v27 + 32) = v27 + 272;
          *((_QWORD *)v27 + 36) = v27 + 304;
          *((_QWORD *)v27 + 40) = v27 + 336;
          *((_QWORD *)v27 + 44) = v27 + 368;
          *((_QWORD *)v27 + 48) = v27 + 400;
          *((_QWORD *)v27 + 52) = v27 + 432;
          *((_QWORD *)v27 + 13) = 0;
          v27[112] = 0;
          *((_QWORD *)v27 + 17) = 0;
          v27[144] = 0;
          *((_QWORD *)v27 + 21) = 0;
          v27[176] = 0;
          *((_QWORD *)v27 + 25) = 0;
          v27[208] = 0;
          *((_QWORD *)v27 + 29) = 0;
          v27[240] = 0;
          *((_QWORD *)v27 + 33) = 0;
          v27[272] = 0;
          *((_QWORD *)v27 + 37) = 0;
          v27[304] = 0;
          *((_QWORD *)v27 + 41) = 0;
          v27[336] = 0;
          *((_QWORD *)v27 + 45) = 0;
          v27[368] = 0;
          *((_QWORD *)v27 + 49) = 0;
          v27[400] = 0;
          *((_QWORD *)v27 + 53) = 0x800000000LL;
          *((_QWORD *)v27 + 66) = v27 + 544;
          *((_QWORD *)v27 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v26 + 8) = v27;
      }
      v27[*v27 + 1] = 14;
      v28 = *(_BYTE **)(v26 + 8);
      v29 = (unsigned __int8)*v28;
      *v28 = v29 + 1;
      *(_QWORD *)&v28[8 * v29 + 16] = &v89;
    }
    if ( v95 )
    {
      v16 = v93;
      if ( !v93 )
      {
        v51 = v94;
        v52 = *(_DWORD *)(v94 + 14976);
        if ( v52 )
        {
          v61 = (unsigned int)(v52 - 1);
          *(_DWORD *)(v94 + 14976) = v61;
          v16 = *(unsigned __int8 **)(v51 + 8 * v61 + 14848);
          v62 = *((unsigned int *)v16 + 134);
          *v16 = 0;
          v63 = *((_QWORD *)v16 + 66);
          *((_DWORD *)v16 + 106) = 0;
          v64 = v63 + (v62 << 6);
          while ( v63 != v64 )
          {
            while ( 1 )
            {
              v64 -= 64;
              v65 = *(void **)(v64 + 24);
              if ( v65 == (void *)(v64 + 40) )
                break;
              operator delete(v65);
              if ( v63 == v64 )
                goto LABEL_59;
            }
          }
LABEL_59:
          *((_DWORD *)v16 + 134) = 0;
        }
        else
        {
          v16 = (unsigned __int8 *)operator new(0x3A0u);
          *v16 = 0;
          *((_QWORD *)v16 + 12) = v16 + 112;
          *((_QWORD *)v16 + 16) = v16 + 144;
          *((_QWORD *)v16 + 20) = v16 + 176;
          *((_QWORD *)v16 + 24) = v16 + 208;
          *((_QWORD *)v16 + 28) = v16 + 240;
          *((_QWORD *)v16 + 32) = v16 + 272;
          *((_QWORD *)v16 + 36) = v16 + 304;
          *((_QWORD *)v16 + 40) = v16 + 336;
          *((_QWORD *)v16 + 44) = v16 + 368;
          *((_QWORD *)v16 + 48) = v16 + 400;
          *((_QWORD *)v16 + 52) = v16 + 432;
          v16[112] = 0;
          *((_QWORD *)v16 + 13) = 0;
          *((_QWORD *)v16 + 17) = 0;
          v16[144] = 0;
          *((_QWORD *)v16 + 21) = 0;
          v16[176] = 0;
          *((_QWORD *)v16 + 25) = 0;
          v16[208] = 0;
          *((_QWORD *)v16 + 29) = 0;
          v16[240] = 0;
          *((_QWORD *)v16 + 33) = 0;
          v16[272] = 0;
          *((_QWORD *)v16 + 37) = 0;
          v16[304] = 0;
          *((_QWORD *)v16 + 41) = 0;
          v16[336] = 0;
          *((_QWORD *)v16 + 45) = 0;
          v16[368] = 0;
          *((_QWORD *)v16 + 49) = 0;
          v16[400] = 0;
          *((_QWORD *)v16 + 53) = 0x800000000LL;
          *((_QWORD *)v16 + 66) = v16 + 544;
          *((_QWORD *)v16 + 67) = 0x600000000LL;
        }
        v93 = v16;
      }
      v16[*v16 + 1] = 2;
      v17 = v93;
      v18 = *v93;
      *v93 = v18 + 1;
      *(_QWORD *)&v17[8 * v18 + 16] = 1;
    }
    else if ( v97 )
    {
      v32 = sub_168B9E0(v91);
      v35 = v92;
      if ( v92 )
        v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
      v88 = v35;
      v36 = sub_1587BC0(v32, &v88, v30, v31, v33, v34);
      v37 = *v36 + 32LL * v96;
      v38 = *(unsigned __int8 **)(v37 + 8);
      if ( !v38 )
      {
        v55 = *(_QWORD *)(v37 + 16);
        v56 = *(_DWORD *)(v55 + 14976);
        if ( v56 )
        {
          v76 = (unsigned int)(v56 - 1);
          *(_DWORD *)(v55 + 14976) = v76;
          v38 = *(unsigned __int8 **)(v55 + 8 * v76 + 14848);
          v77 = *((unsigned int *)v38 + 134);
          *v38 = 0;
          v78 = *((_QWORD *)v38 + 66);
          *((_DWORD *)v38 + 106) = 0;
          v79 = v78 + (v77 << 6);
          while ( v78 != v79 )
          {
            while ( 1 )
            {
              v79 -= 64;
              v80 = *(void **)(v79 + 24);
              if ( v80 == (void *)(v79 + 40) )
                break;
              operator delete(v80);
              if ( v78 == v79 )
                goto LABEL_74;
            }
          }
LABEL_74:
          *((_DWORD *)v38 + 134) = 0;
        }
        else
        {
          v38 = (unsigned __int8 *)operator new(0x3A0u);
          *v38 = 0;
          *((_QWORD *)v38 + 12) = v38 + 112;
          *((_QWORD *)v38 + 16) = v38 + 144;
          *((_QWORD *)v38 + 20) = v38 + 176;
          *((_QWORD *)v38 + 24) = v38 + 208;
          *((_QWORD *)v38 + 28) = v38 + 240;
          *((_QWORD *)v38 + 32) = v38 + 272;
          *((_QWORD *)v38 + 36) = v38 + 304;
          *((_QWORD *)v38 + 40) = v38 + 336;
          *((_QWORD *)v38 + 44) = v38 + 368;
          *((_QWORD *)v38 + 48) = v38 + 400;
          *((_QWORD *)v38 + 52) = v38 + 432;
          v38[112] = 0;
          *((_QWORD *)v38 + 13) = 0;
          *((_QWORD *)v38 + 17) = 0;
          v38[144] = 0;
          *((_QWORD *)v38 + 21) = 0;
          v38[176] = 0;
          *((_QWORD *)v38 + 25) = 0;
          v38[208] = 0;
          *((_QWORD *)v38 + 29) = 0;
          v38[240] = 0;
          *((_QWORD *)v38 + 33) = 0;
          v38[272] = 0;
          *((_QWORD *)v38 + 37) = 0;
          v38[304] = 0;
          *((_QWORD *)v38 + 41) = 0;
          v38[336] = 0;
          *((_QWORD *)v38 + 45) = 0;
          v38[368] = 0;
          *((_QWORD *)v38 + 49) = 0;
          v38[400] = 0;
          *((_QWORD *)v38 + 53) = 0x800000000LL;
          *((_QWORD *)v38 + 66) = v38 + 544;
          *((_QWORD *)v38 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v37 + 8) = v38;
      }
      v38[*v38 + 1] = 2;
      v39 = *(_BYTE **)(v37 + 8);
      v40 = (unsigned __int8)*v39;
      *v39 = v40 + 1;
      *(_QWORD *)&v39[8 * v40 + 16] = 1;
    }
    goto LABEL_20;
  }
  if ( !v87 )
    goto LABEL_3;
  sub_168B9F0(v91, v12 + 8, v90, 3153, 0);
  if ( v95 )
  {
    v41 = v93;
    if ( !v93 )
    {
      v59 = v94;
      v60 = *(_DWORD *)(v94 + 14976);
      if ( v60 )
      {
        v81 = (unsigned int)(v60 - 1);
        *(_DWORD *)(v94 + 14976) = v81;
        v41 = *(unsigned __int8 **)(v59 + 8 * v81 + 14848);
        v82 = *((unsigned int *)v41 + 134);
        v83 = *((_QWORD *)v41 + 66);
        *v41 = 0;
        *((_DWORD *)v41 + 106) = 0;
        v84 = v83 + (v82 << 6);
        while ( v83 != v84 )
        {
          while ( 1 )
          {
            v84 -= 64;
            v85 = *(void **)(v84 + 24);
            if ( v85 == (void *)(v84 + 40) )
              break;
            operator delete(v85);
            if ( v83 == v84 )
              goto LABEL_79;
          }
        }
LABEL_79:
        *((_DWORD *)v41 + 134) = 0;
      }
      else
      {
        v41 = (unsigned __int8 *)operator new(0x3A0u);
        *v41 = 0;
        *((_QWORD *)v41 + 12) = v41 + 112;
        *((_QWORD *)v41 + 16) = v41 + 144;
        *((_QWORD *)v41 + 20) = v41 + 176;
        *((_QWORD *)v41 + 24) = v41 + 208;
        *((_QWORD *)v41 + 28) = v41 + 240;
        *((_QWORD *)v41 + 32) = v41 + 272;
        *((_QWORD *)v41 + 36) = v41 + 304;
        *((_QWORD *)v41 + 40) = v41 + 336;
        *((_QWORD *)v41 + 44) = v41 + 368;
        *((_QWORD *)v41 + 48) = v41 + 400;
        *((_QWORD *)v41 + 52) = v41 + 432;
        *((_QWORD *)v41 + 13) = 0;
        v41[112] = 0;
        *((_QWORD *)v41 + 17) = 0;
        v41[144] = 0;
        *((_QWORD *)v41 + 21) = 0;
        v41[176] = 0;
        *((_QWORD *)v41 + 25) = 0;
        v41[208] = 0;
        *((_QWORD *)v41 + 29) = 0;
        v41[240] = 0;
        *((_QWORD *)v41 + 33) = 0;
        v41[272] = 0;
        *((_QWORD *)v41 + 37) = 0;
        v41[304] = 0;
        *((_QWORD *)v41 + 41) = 0;
        v41[336] = 0;
        *((_QWORD *)v41 + 45) = 0;
        v41[368] = 0;
        *((_QWORD *)v41 + 49) = 0;
        v41[400] = 0;
        *((_QWORD *)v41 + 53) = 0x800000000LL;
        *((_QWORD *)v41 + 66) = v41 + 544;
        *((_QWORD *)v41 + 67) = 0x600000000LL;
      }
      v93 = v41;
    }
    v41[*v41 + 1] = 14;
    v42 = v93;
    v43 = *v93;
    *v93 = v43 + 1;
    *(_QWORD *)&v42[8 * v43 + 16] = &v89;
  }
  else if ( v97 )
  {
    v48 = sub_168B9E0(v91);
    v49 = v92;
    if ( v92 )
      v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
    v88 = v49;
    v50 = sub_1587BC0(v48, &v88, v44, v45, v46, v47);
    sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v96 + 8), (__int64)&v89, 0xEu);
  }
  LODWORD(v88) = 0;
  v10 = nullptr;
  sub_1587D10((__int64)v91, (int *)&v88);
  sub_15F7200(v91);
  return v10;
}
