bool __fastcall sub_169FD90(__int64 *a1, __int64 a2, __int64 a3, __int32 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __m128 si128; // xmm0
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rdx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  size_t v21; // r15
  char *v22; // rcx
  void *v23; // rax
  bool result; // al
  __int64 v25; // rax
  unsigned __int8 *v26; // rbp
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  bool v29; // bl
  unsigned __int8 *v30; // rbp
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbp
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r12
  unsigned __int8 *v41; // rbp
  _BYTE *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // r12
  unsigned __int8 *v52; // rbp
  _BYTE *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // r15
  __int64 v66; // r12
  void *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // r14
  __int64 v71; // r12
  void *v72; // rdi
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // rdx
  __int64 v76; // r15
  void *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // r15
  __int64 v81; // r14
  void *v82; // rdi
  __int64 v83; // [rsp+0h] [rbp-E0h]
  __int64 v84; // [rsp+10h] [rbp-D0h] BYREF
  void *v85; // [rsp+18h] [rbp-C8h] BYREF
  __m128 v86; // [rsp+20h] [rbp-C0h]
  __int64 v87; // [rsp+30h] [rbp-B0h] BYREF
  unsigned __int8 *v88; // [rsp+38h] [rbp-A8h]
  __int64 v89; // [rsp+40h] [rbp-A0h]
  int v90; // [rsp+50h] [rbp-90h]
  char v91; // [rsp+54h] [rbp-8Ch]
  char v92; // [rsp+90h] [rbp-50h]
  unsigned int v93; // [rsp+98h] [rbp-48h]
  char v94; // [rsp+9Ch] [rbp-44h]

  if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) && !*(_QWORD *)(a2 + 8) || ((*(_DWORD *)a3 >> 12) & 0x7F) == 0x45 )
    return 1;
  v8 = *(_QWORD *)(a3 + 8);
  v11 = sub_1E5FBF0(a1, v8, 1);
  v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v13 = *(_QWORD *)v12;
  if ( (*(_BYTE *)(*(_QWORD *)v12 + 17LL) & 4) == 0
    && (unsigned int)*(unsigned __int8 *)(v13 + 16) - 47 > 1
    && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 > 1
     || !sub_F63050(v13, v8, v9, v10)) )
  {
    sub_168B9F0((__int64)&v85, a1 + 1, *(_DWORD *)(a3 + 192), 0xEA3u, 0);
    if ( v92 )
    {
      v26 = v88;
      if ( !v88 )
      {
        v57 = v89;
        v58 = *(_DWORD *)(v89 + 14976);
        if ( v58 )
        {
          v63 = (unsigned int)(v58 - 1);
          *(_DWORD *)(v89 + 14976) = v63;
          v26 = *(unsigned __int8 **)(v57 + 8 * v63 + 14848);
          v64 = *((unsigned int *)v26 + 134);
          *v26 = 0;
          v65 = *((_QWORD *)v26 + 66);
          *((_DWORD *)v26 + 106) = 0;
          v66 = v65 + (v64 << 6);
          while ( v65 != v66 )
          {
            while ( 1 )
            {
              v66 -= 64;
              v67 = *(void **)(v66 + 24);
              if ( v67 == (void *)(v66 + 40) )
                break;
              operator delete(v67);
              if ( v65 == v66 )
                goto LABEL_52;
            }
          }
LABEL_52:
          *((_DWORD *)v26 + 134) = 0;
        }
        else
        {
          v26 = (unsigned __int8 *)operator new(0x3A0u);
          *v26 = 0;
          *((_QWORD *)v26 + 12) = v26 + 112;
          *((_QWORD *)v26 + 16) = v26 + 144;
          *((_QWORD *)v26 + 20) = v26 + 176;
          *((_QWORD *)v26 + 24) = v26 + 208;
          *((_QWORD *)v26 + 28) = v26 + 240;
          *((_QWORD *)v26 + 32) = v26 + 272;
          *((_QWORD *)v26 + 36) = v26 + 304;
          *((_QWORD *)v26 + 40) = v26 + 336;
          *((_QWORD *)v26 + 44) = v26 + 368;
          *((_QWORD *)v26 + 48) = v26 + 400;
          *((_QWORD *)v26 + 52) = v26 + 432;
          v26[112] = 0;
          *((_QWORD *)v26 + 13) = 0;
          *((_QWORD *)v26 + 17) = 0;
          v26[144] = 0;
          *((_QWORD *)v26 + 21) = 0;
          v26[176] = 0;
          *((_QWORD *)v26 + 25) = 0;
          v26[208] = 0;
          *((_QWORD *)v26 + 29) = 0;
          v26[240] = 0;
          *((_QWORD *)v26 + 33) = 0;
          v26[272] = 0;
          *((_QWORD *)v26 + 37) = 0;
          v26[304] = 0;
          *((_QWORD *)v26 + 41) = 0;
          v26[336] = 0;
          *((_QWORD *)v26 + 45) = 0;
          v26[368] = 0;
          *((_QWORD *)v26 + 49) = 0;
          v26[400] = 0;
          *((_QWORD *)v26 + 53) = 0x800000000LL;
          *((_QWORD *)v26 + 66) = v26 + 544;
          *((_QWORD *)v26 + 67) = 0x600000000LL;
        }
        v88 = v26;
      }
      v26[*v26 + 1] = 8;
      v27 = v88;
      v28 = *v88;
      *v88 = v28 + 1;
      *(_QWORD *)&v27[8 * v28 + 16] = v11;
    }
    else
    {
      if ( !v94 )
      {
LABEL_18:
        sub_15F7200(&v85);
        return 1;
      }
      v35 = sub_168B9E0(&v85);
      v38 = v86.m128_i64[1];
      if ( v86.m128_u64[1] )
        v38 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v86.m128_u64[1] + 32LL))(v86.m128_u64[1]);
      v84 = v38;
      v39 = sub_1587BC0(v35, &v84, v33, v34, v36, v37);
      v40 = *v39 + 32LL * v93;
      v41 = *(unsigned __int8 **)(v40 + 8);
      if ( !v41 )
      {
        v61 = *(_QWORD *)(v40 + 16);
        v62 = *(_DWORD *)(v61 + 14976);
        if ( v62 )
        {
          v73 = (unsigned int)(v62 - 1);
          *(_DWORD *)(v61 + 14976) = v73;
          v41 = *(unsigned __int8 **)(v61 + 8 * v73 + 14848);
          v74 = *((unsigned int *)v41 + 134);
          *v41 = 0;
          v75 = *((_QWORD *)v41 + 66);
          *((_DWORD *)v41 + 106) = 0;
          v76 = v75 + (v74 << 6);
          while ( v75 != v76 )
          {
            while ( 1 )
            {
              v76 -= 64;
              v77 = *(void **)(v76 + 24);
              if ( v77 == (void *)(v76 + 40) )
                break;
              v83 = v75;
              operator delete(v77);
              v75 = v83;
              if ( v83 == v76 )
                goto LABEL_62;
            }
          }
LABEL_62:
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
          v41[112] = 0;
          *((_QWORD *)v41 + 13) = 0;
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
        *(_QWORD *)(v40 + 8) = v41;
      }
      v41[*v41 + 1] = 8;
      v42 = *(_BYTE **)(v40 + 8);
      v43 = (unsigned __int8)*v42;
      *v42 = v43 + 1;
      *(_QWORD *)&v42[8 * v43 + 16] = v11;
    }
    v29 = (*(_BYTE *)(a1[29] + 1) & 8) != 0;
    if ( v92 )
    {
      v30 = v88;
      if ( !v88 )
      {
        v55 = v89;
        v56 = *(_DWORD *)(v89 + 14976);
        if ( v56 )
        {
          v68 = (unsigned int)(v56 - 1);
          *(_DWORD *)(v89 + 14976) = v68;
          v30 = *(unsigned __int8 **)(v55 + 8 * v68 + 14848);
          v69 = *((unsigned int *)v30 + 134);
          *v30 = 0;
          v70 = *((_QWORD *)v30 + 66);
          *((_DWORD *)v30 + 106) = 0;
          v71 = v70 + (v69 << 6);
          while ( v70 != v71 )
          {
            while ( 1 )
            {
              v71 -= 64;
              v72 = *(void **)(v71 + 24);
              if ( v72 == (void *)(v71 + 40) )
                break;
              operator delete(v72);
              if ( v70 == v71 )
                goto LABEL_57;
            }
          }
LABEL_57:
          *((_DWORD *)v30 + 134) = 0;
        }
        else
        {
          v30 = (unsigned __int8 *)operator new(0x3A0u);
          *v30 = 0;
          *((_QWORD *)v30 + 12) = v30 + 112;
          *((_QWORD *)v30 + 16) = v30 + 144;
          *((_QWORD *)v30 + 20) = v30 + 176;
          *((_QWORD *)v30 + 24) = v30 + 208;
          *((_QWORD *)v30 + 28) = v30 + 240;
          *((_QWORD *)v30 + 32) = v30 + 272;
          *((_QWORD *)v30 + 36) = v30 + 304;
          *((_QWORD *)v30 + 40) = v30 + 336;
          *((_QWORD *)v30 + 44) = v30 + 368;
          *((_QWORD *)v30 + 48) = v30 + 400;
          *((_QWORD *)v30 + 52) = v30 + 432;
          v30[112] = 0;
          *((_QWORD *)v30 + 13) = 0;
          *((_QWORD *)v30 + 17) = 0;
          v30[144] = 0;
          *((_QWORD *)v30 + 21) = 0;
          v30[176] = 0;
          *((_QWORD *)v30 + 25) = 0;
          v30[208] = 0;
          *((_QWORD *)v30 + 29) = 0;
          v30[240] = 0;
          *((_QWORD *)v30 + 33) = 0;
          v30[272] = 0;
          *((_QWORD *)v30 + 37) = 0;
          v30[304] = 0;
          *((_QWORD *)v30 + 41) = 0;
          v30[336] = 0;
          *((_QWORD *)v30 + 45) = 0;
          v30[368] = 0;
          *((_QWORD *)v30 + 49) = 0;
          v30[400] = 0;
          *((_QWORD *)v30 + 53) = 0x800000000LL;
          *((_QWORD *)v30 + 66) = v30 + 544;
          *((_QWORD *)v30 + 67) = 0x600000000LL;
        }
        v88 = v30;
      }
      v30[*v30 + 1] = 3;
      v31 = v88;
      v32 = *v88;
      *v88 = v32 + 1;
      *(_QWORD *)&v31[8 * v32 + 16] = v29;
    }
    else if ( v94 )
    {
      v46 = sub_168B9E0(&v85);
      v49 = v86.m128_i64[1];
      if ( v86.m128_u64[1] )
        v49 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v86.m128_u64[1] + 32LL))(v86.m128_u64[1]);
      v84 = v49;
      v50 = sub_1587BC0(v46, &v84, v44, v45, v47, v48);
      v51 = *v50 + 32LL * v93;
      v52 = *(unsigned __int8 **)(v51 + 8);
      if ( !v52 )
      {
        v59 = *(_QWORD *)(v51 + 16);
        v60 = *(_DWORD *)(v59 + 14976);
        if ( v60 )
        {
          v78 = (unsigned int)(v60 - 1);
          *(_DWORD *)(v59 + 14976) = v78;
          v52 = *(unsigned __int8 **)(v59 + 8 * v78 + 14848);
          v79 = *((unsigned int *)v52 + 134);
          *v52 = 0;
          v80 = *((_QWORD *)v52 + 66);
          *((_DWORD *)v52 + 106) = 0;
          v81 = v80 + (v79 << 6);
          while ( v80 != v81 )
          {
            while ( 1 )
            {
              v81 -= 64;
              v82 = *(void **)(v81 + 24);
              if ( v82 == (void *)(v81 + 40) )
                break;
              operator delete(v82);
              if ( v80 == v81 )
                goto LABEL_67;
            }
          }
LABEL_67:
          *((_DWORD *)v52 + 134) = 0;
        }
        else
        {
          v52 = (unsigned __int8 *)operator new(0x3A0u);
          *v52 = 0;
          *((_QWORD *)v52 + 12) = v52 + 112;
          *((_QWORD *)v52 + 16) = v52 + 144;
          *((_QWORD *)v52 + 20) = v52 + 176;
          *((_QWORD *)v52 + 24) = v52 + 208;
          *((_QWORD *)v52 + 28) = v52 + 240;
          *((_QWORD *)v52 + 32) = v52 + 272;
          *((_QWORD *)v52 + 36) = v52 + 304;
          *((_QWORD *)v52 + 40) = v52 + 336;
          *((_QWORD *)v52 + 44) = v52 + 368;
          *((_QWORD *)v52 + 48) = v52 + 400;
          *((_QWORD *)v52 + 52) = v52 + 432;
          v52[112] = 0;
          *((_QWORD *)v52 + 13) = 0;
          *((_QWORD *)v52 + 17) = 0;
          v52[144] = 0;
          *((_QWORD *)v52 + 21) = 0;
          v52[176] = 0;
          *((_QWORD *)v52 + 25) = 0;
          v52[208] = 0;
          *((_QWORD *)v52 + 29) = 0;
          v52[240] = 0;
          *((_QWORD *)v52 + 33) = 0;
          v52[272] = 0;
          *((_QWORD *)v52 + 37) = 0;
          v52[304] = 0;
          *((_QWORD *)v52 + 41) = 0;
          v52[336] = 0;
          *((_QWORD *)v52 + 45) = 0;
          v52[368] = 0;
          *((_QWORD *)v52 + 49) = 0;
          v52[400] = 0;
          *((_QWORD *)v52 + 53) = 0x800000000LL;
          *((_QWORD *)v52 + 66) = v52 + 544;
          *((_QWORD *)v52 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v51 + 8) = v52;
      }
      v52[*v52 + 1] = 3;
      v53 = *(_BYTE **)(v51 + 8);
      v54 = (unsigned __int8)*v53;
      *v53 = v54 + 1;
      *(_QWORD *)&v53[8 * v54 + 16] = v29;
    }
    goto LABEL_18;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v90 = 0;
  v85 = &v87;
  v86 = si128;
  v91 = 0;
  sub_1EA6140(&v85, v11, 8, 4);
  *v17 = *(_DWORD *)(a3 + 192);
  v17[1] = *(_DWORD *)(a3 + 216);
  v18 = (_QWORD *)a1[31];
  v19 = v86.m128_u64[1];
  v20 = v18[294];
  v21 = v86.m128_u64[0] - v86.m128_u64[1];
  v18[304] += v86.m128_u64[0] - v86.m128_u64[1];
  v22 = (char *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v18[295] >= (unsigned __int64)&v22[v21] && v20 )
  {
    v18[294] = &v22[v21];
  }
  else
  {
    v25 = sub_986170((__int64)(v18 + 294), v21, v21, 3, v15, v16);
    v19 = v86.m128_u64[1];
    v22 = (char *)v25;
  }
  v23 = memcpy(v22, (char *)v85 + v19, v21);
  sub_15AB760((__m128i **)a2, (_QWORD *)a1[31], v11, (__int64)v23, a4, si128);
  result = v85 != &v87 && v85 != nullptr;
  if ( result )
  {
    operator delete[](v85);
    return 0;
  }
  return result;
}
