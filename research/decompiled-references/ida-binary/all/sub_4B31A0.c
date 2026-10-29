__int64 __fastcall sub_4B31A0(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // rax
  const char *v6; // rbx
  signed __int64 v7; // rax
  double v8; // xmm0_8
  _QWORD *v9; // rbp
  __m128 si128; // xmm2
  __m128 v11; // xmm5
  unsigned __int64 v12; // xmm5_8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rbp
  unsigned __int8 *v20; // r8
  unsigned __int64 v21; // r10
  unsigned __int8 *v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rbx
  char v25; // al
  _DWORD *v26; // rbp
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r12
  unsigned __int8 *v31; // r12
  unsigned __int8 *v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 result; // rax
  _QWORD *v36; // rdx
  __m128i v37; // xmm3
  __int64 v38; // rax
  __m128i v39; // xmm0
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int16 v42; // cx
  __int64 v43; // rax
  __m128i *v44; // rdx
  __m128i *v45; // rax
  _QWORD *v46; // r14
  void **v47; // rax
  void **v48; // r13
  void **v49; // r12
  char *v50; // rdi
  void **v51; // rbp
  void **v52; // rbx
  __int64 v53; // rax
  void **v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rdx
  _QWORD *v57; // r14
  void **v58; // rax
  void **v59; // r15
  void **v60; // r13
  char *v61; // rdi
  void **v62; // rbp
  void **v63; // r12
  __int64 v64; // rax
  void **v65; // rax
  __int64 v66; // rax
  __int16 v67; // bx
  __int64 v68; // rax
  __m128i *v69; // rdx
  __m128i *v70; // rax
  __m128i v71; // xmm0
  __int64 v72; // rdx
  __int16 v73; // cx
  __int64 v74; // rax
  __m128i *v75; // rdx
  __m128i *v76; // rax
  __m128i v77; // xmm0
  __int64 v78; // rdx
  __m128i v79; // xmm0
  __int64 v80; // rdx
  __m128i v81; // xmm4
  __int64 v82; // [rsp+0h] [rbp-148h]
  __int64 v83; // [rsp+0h] [rbp-148h]
  __int64 v84; // [rsp+0h] [rbp-148h]
  unsigned int v85; // [rsp+0h] [rbp-148h]
  __int64 v86; // [rsp+8h] [rbp-140h]
  __int64 v87; // [rsp+8h] [rbp-140h]
  __int64 v88; // [rsp+10h] [rbp-138h]
  unsigned __int64 v89; // [rsp+10h] [rbp-138h]
  unsigned __int8 *v90; // [rsp+28h] [rbp-120h]
  unsigned __int64 v91; // [rsp+30h] [rbp-118h]
  __int64 v92; // [rsp+38h] [rbp-110h]
  unsigned __int64 v93; // [rsp+40h] [rbp-108h]
  _DWORD *v94; // [rsp+48h] [rbp-100h]
  __m128i v95; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v96; // [rsp+60h] [rbp-E8h]
  __int64 v97; // [rsp+68h] [rbp-E0h]
  volatile signed __int32 *v98; // [rsp+70h] [rbp-D8h]
  __int64 v99; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v100; // [rsp+80h] [rbp-C8h]
  void **v101; // [rsp+88h] [rbp-C0h]
  void *v102; // [rsp+A8h] [rbp-A0h]
  void *v103[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v104; // [rsp+C0h] [rbp-88h]
  void *ptr[2]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v106; // [rsp+E0h] [rbp-68h]
  __int64 v107; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v108; // [rsp+F8h] [rbp-50h]
  char v109; // [rsp+100h] [rbp-48h]
  unsigned __int64 v110; // [rsp+108h] [rbp-40h]

  v110 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 <= 1 )
    return 0;
  v6 = *(const char **)a1;
  v7 = v5 - 1;
  if ( !*(_QWORD *)a1 || v7 < 0 )
  {
    v7 = 0;
    if ( v6 )
    {
      v84 = v3;
      v87 = v4;
      v7 = strlen(*(const char **)a1);
      v3 = v84;
      v4 = v87;
    }
  }
  v82 = v3;
  v86 = v4;
  v101 = v103;
  v8 = QT::QString::fromUtf8(v103, v7, v6);
  v9 = qword_8D1C98;
  si128 = (__m128)_mm_load_si128((const __m128i *)v103);
  v12 = _mm_movehl_ps(v11, si128).m128_u64[0];
  v95 = (__m128i)si128;
  v91 = v12;
  v98 = (volatile signed __int32 *)si128.m128_u64[0];
  if ( qword_8D1C98 )
  {
    v88 = v104;
    v99 = *((_QWORD *)qword_8D1C98 + 3);
    v13 = QT::qHash(v104, v12, v99);
    v94 = v9;
    v14 = v88;
    v93 = v9[2];
    v100 = v93 - 1;
    v15 = v9[4];
    v16 = (v93 - 1) & v13;
    v96 = v82;
    v17 = v16 & 0x7F;
    v92 = v15;
    v97 = v86;
    v18 = v15 + 144 * (v16 >> 7);
LABEL_6:
    v19 = v91;
    v20 = (unsigned __int8 *)(v18 + 128);
LABEL_7:
    v21 = v19;
    v22 = &v20[v17 - 128];
    while ( 1 )
    {
      v23 = *v22;
      if ( v23 == 255 )
      {
        v26 = v94;
        goto LABEL_32;
      }
      v24 = *(_QWORD *)v20 + 32 * v23;
      if ( *(_QWORD *)(v24 + 16) == v14 )
      {
        v90 = v20;
        v89 = v21;
        v83 = v14;
        v25 = QT::QtPrivate::equalStrings(v14, *(_QWORD *)(v24 + 8), v14, v21);
        v14 = v83;
        v21 = v89;
        v20 = v90;
        if ( v25 )
          break;
      }
      if ( v20 == ++v22 )
      {
        v36 = v20 + 16;
        v19 = v21;
        v20 += 144;
        v17 = 0;
        if ( 0x8E38E38E38E38E39LL * (((__int64)v36 - v92) >> 4) != v93 >> 7 )
          goto LABEL_7;
        v18 = v92;
        goto LABEL_6;
      }
    }
    v26 = v94;
    if ( v24 )
    {
      v27 = QT::qHash(v83, v91, v99);
      v28 = v100 & v27;
      v29 = (unsigned int)v100 & (unsigned int)v27 & 0x7F;
      v30 = v92 + 144 * (v28 >> 7);
LABEL_14:
      v31 = (unsigned __int8 *)(v30 + 128);
LABEL_15:
      v32 = &v31[v29 - 128];
      while ( 1 )
      {
        v33 = *v32;
        if ( v33 == 255 )
          break;
        v34 = *(_QWORD *)v31 + 32 * v33;
        if ( v83 == *(_QWORD *)(v34 + 16)
          && (unsigned __int8)QT::QtPrivate::equalStrings(v83, *(_QWORD *)(v34 + 8), v83, v91) )
        {
          if ( v34 )
          {
            result = *(unsigned __int16 *)(v34 + 24);
            goto LABEL_22;
          }
          break;
        }
        if ( v31 == ++v32 )
        {
          v56 = v31 + 16;
          v31 += 144;
          v29 = 0;
          if ( 0x8E38E38E38E38E39LL * (((__int64)v56 - v92) >> 4) != v93 >> 7 )
            goto LABEL_15;
          v30 = v92;
          goto LABEL_14;
        }
      }
      result = 0;
      goto LABEL_22;
    }
LABEL_32:
    v37 = _mm_load_si128(&v95);
    v106 = v14;
    *(__m128i *)ptr = v37;
    if ( !v98 )
      goto LABEL_67;
  }
  else
  {
    v81 = _mm_load_si128(&v95);
    v106 = v104;
    *(__m128i *)ptr = v81;
    if ( !v98 )
      goto LABEL_34;
  }
  _InterlockedAdd(v98, 1u);
  v26 = qword_8D1C98;
  if ( !qword_8D1C98 )
  {
LABEL_34:
    v102 = nullptr;
    goto LABEL_35;
  }
LABEL_67:
  v57 = qword_8D1C98;
  if ( *v26 > 1u )
  {
    v102 = qword_8D1C98;
    if ( qword_8D1C98 )
    {
      if ( *(_DWORD *)qword_8D1C98 != -1 )
      {
        _InterlockedAdd((volatile signed __int32 *)qword_8D1C98, 1u);
        v57 = qword_8D1C98;
      }
      if ( v57 )
      {
        v40 = v57;
        if ( *(_DWORD *)v57 <= 1u )
          goto LABEL_37;
        v40 = (_QWORD *)operator new(0x28u);
        sub_4B2EA0((__int64)v40, (__int64)v57, v8, a3);
        if ( *(_DWORD *)v57 != -1 && !_InterlockedSub((volatile signed __int32 *)v57, 1u) )
        {
          v58 = (void **)v57[4];
          if ( v58 )
          {
            v59 = &v58[18 * (_QWORD)*(v58 - 1)];
            if ( v58 == v59 )
            {
              v66 = 0;
            }
            else
            {
              v60 = v59 - 2;
              do
              {
                v61 = (char *)*v60;
                v62 = v59;
                v59 -= 18;
                if ( *v60 )
                {
                  v63 = v59;
                  if ( v59 == v60 )
                    goto LABEL_87;
                  do
                  {
                    v64 = *(unsigned __int8 *)v63;
                    if ( (_BYTE)v64 != 0xFF )
                    {
                      v65 = (void **)&v61[32 * v64];
                      if ( *v65 )
                      {
                        if ( !_InterlockedSub((volatile signed __int32 *)*v65, 1u) )
                          free(*v65);
                        v61 = (char *)*v60;
                      }
                    }
                    v63 = (void **)((char *)v63 + 1);
                  }
                  while ( v60 != v63 );
                  if ( v61 )
LABEL_87:
                    operator delete[](v61);
                }
                v60 -= 18;
              }
              while ( (void **)v57[4] != v59 );
              v66 = 144LL * (_QWORD)*(v62 - 19);
            }
            operator delete[](v59 - 1, v66 + 8);
          }
          operator delete(v57, 0x28u);
        }
LABEL_36:
        qword_8D1C98 = v40;
LABEL_37:
        sub_4B2A60((__int64)&v107, v40, (__int64)ptr);
        v42 = word_8C2F80;
        v43 = *(_QWORD *)(v107 + 32) + 144 * (v108 >> 7);
        v44 = (__m128i *)(*(_QWORD *)(v43 + 128) + 32LL * *(unsigned __int8 *)(v43 + (v108 & 0x7F)));
        v45 = v44;
        if ( !v109 )
        {
          v79 = _mm_load_si128((const __m128i *)ptr);
          *(_OWORD *)ptr = 0;
          *v44 = v79;
          v80 = v106;
          v106 = 0;
          v45[1].m128i_i64[0] = v80;
        }
        v45[1].m128i_i16[4] = v42;
        if ( v102 )
        {
          if ( *(_DWORD *)v102 != -1 && !_InterlockedSub((volatile signed __int32 *)v102, 1u) )
          {
            v46 = v102;
            if ( v102 )
            {
              v47 = *((void ***)v102 + 4);
              if ( v47 )
              {
                v48 = &v47[18 * (_QWORD)*(v47 - 1)];
                if ( v47 == v48 )
                {
                  v55 = 0;
                }
                else
                {
                  v49 = v48 - 2;
                  do
                  {
                    v50 = (char *)*v49;
                    v51 = v48;
                    v48 -= 18;
                    if ( *v49 )
                    {
                      v52 = v48;
                      if ( v48 == v49 )
                        goto LABEL_55;
                      do
                      {
                        v53 = *(unsigned __int8 *)v52;
                        if ( (_BYTE)v53 != 0xFF )
                        {
                          v54 = (void **)&v50[32 * v53];
                          if ( *v54 )
                          {
                            if ( !_InterlockedSub((volatile signed __int32 *)*v54, 1u) )
                              free(*v54);
                            v50 = (char *)*v49;
                          }
                        }
                        v52 = (void **)((char *)v52 + 1);
                      }
                      while ( v52 != v49 );
                      if ( v50 )
LABEL_55:
                        operator delete[](v50);
                    }
                    v49 -= 18;
                  }
                  while ( (void **)v46[4] != v48 );
                  v55 = 144LL * (_QWORD)*(v51 - 19);
                }
                operator delete[](v48 - 1, v55 + 8);
              }
              operator delete(v46, 0x28u);
            }
          }
        }
        goto LABEL_60;
      }
    }
LABEL_35:
    v38 = operator new(0x28u);
    v39 = _mm_load_si128((const __m128i *)&xmmword_5DC4C0);
    v40 = (_QWORD *)v38;
    *(_QWORD *)v38 = 1;
    *(_QWORD *)(v38 + 24) = 0;
    *(_QWORD *)(v38 + 32) = 0;
    *(__m128i *)(v38 + 8) = v39;
    v41 = operator new[]((unsigned __int64)&qword_98);
    *(_QWORD *)v41 = 1;
    *(_OWORD *)(v41 + 8) = -1;
    *(_OWORD *)(v41 + 24) = -1;
    *(_OWORD *)(v41 + 40) = -1;
    *(_OWORD *)(v41 + 56) = -1;
    *(_OWORD *)(v41 + 72) = -1;
    *(_OWORD *)(v41 + 88) = -1;
    *(_OWORD *)(v41 + 104) = -1;
    *(_OWORD *)(v41 + 120) = -1;
    *(_QWORD *)(v41 + 136) = 0;
    *(_WORD *)(v41 + 144) = 0;
    v40[4] = v41 + 8;
    v40[3] = QT::QHashSeed::globalSeed((QT::QHashSeed *)&qword_98);
    goto LABEL_36;
  }
  if ( *((_QWORD *)qword_8D1C98 + 1) < *((_QWORD *)qword_8D1C98 + 2) >> 1 )
  {
    sub_4B2A60((__int64)&v107, qword_8D1C98, (__int64)ptr);
    v73 = word_8C2F80;
    v74 = *(_QWORD *)(v107 + 32) + 144 * (v108 >> 7);
    v75 = (__m128i *)(*(_QWORD *)(v74 + 128) + 32LL * *(unsigned __int8 *)(v74 + (v108 & 0x7F)));
    v76 = v75;
    if ( !v109 )
    {
      v77 = _mm_load_si128((const __m128i *)ptr);
      *(_OWORD *)ptr = 0;
      *v75 = v77;
      v78 = v106;
      v106 = 0;
      v76[1].m128i_i64[0] = v78;
    }
    v76[1].m128i_i16[4] = v73;
  }
  else
  {
    v67 = word_8C2F80;
    sub_4B2A60((__int64)&v107, qword_8D1C98, (__int64)ptr);
    v68 = *(_QWORD *)(v107 + 32) + 144 * (v108 >> 7);
    v69 = (__m128i *)(*(_QWORD *)(v68 + 128) + 32LL * *(unsigned __int8 *)(v68 + (v108 & 0x7F)));
    v70 = v69;
    if ( !v109 )
    {
      v71 = _mm_load_si128((const __m128i *)ptr);
      *(_OWORD *)ptr = 0;
      *v69 = v71;
      v72 = v106;
      v106 = 0;
      v70[1].m128i_i64[0] = v72;
    }
    v70[1].m128i_i16[4] = v67;
  }
LABEL_60:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  result = (unsigned __int16)word_8C2F80++;
LABEL_22:
  if ( v103[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v103[0], 1u) )
    {
      v85 = result;
      free(v103[0]);
      return v85;
    }
  }
  return result;
}
