__int64 __fastcall sub_2086B60(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11,
        int a12,
        int a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        int a21,
        unsigned int a22,
        int a23)
{
  __int64 v25; // rbx
  unsigned int v26; // ebp
  __m128i si128; // xmm5
  __m128i v28; // xmm6
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  __int64 v31; // r9
  __int64 v32; // r15
  char v33; // dl
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  __m128 v37; // xmm0
  __m128 v38; // xmm0
  __m128 v39; // xmm0
  __int64 v40; // r14
  __int64 v41; // r15
  int v42; // r14d
  unsigned int v43; // eax
  int v44; // r9d
  __int64 v45; // rax
  __int64 *v46; // r11
  unsigned int v47; // r10d
  __int64 v48; // rdx
  unsigned __int8 v49; // cl
  int v50; // ebx
  char v51; // bp
  unsigned __int8 v52; // di
  char *v53; // rdi
  __int64 v54; // r8
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rcx
  unsigned __int64 v58; // rsi
  unsigned int v59; // eax
  unsigned __int64 v60; // rsi
  __int64 v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 *v65; // r14
  __int64 v66; // r9
  _QWORD *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // rcx
  bool v72; // zf
  __int64 v73; // rdx
  _QWORD *v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // [rsp-10h] [rbp-168h]
  __int64 v77; // [rsp+0h] [rbp-158h] BYREF
  __int64 v78; // [rsp+8h] [rbp-150h] BYREF
  __int64 v79; // [rsp+10h] [rbp-148h] BYREF
  __int64 v80; // [rsp+18h] [rbp-140h] BYREF
  __m128 v81; // [rsp+20h] [rbp-138h] BYREF
  __m128 v82; // [rsp+30h] [rbp-128h] BYREF
  __int64 v83; // [rsp+40h] [rbp-118h]
  int v84; // [rsp+48h] [rbp-110h]
  int v85; // [rsp+4Ch] [rbp-10Ch]
  __int64 v86; // [rsp+50h] [rbp-108h]
  __int64 v87; // [rsp+58h] [rbp-100h]
  __int64 v88; // [rsp+60h] [rbp-F8h]
  __int64 v89; // [rsp+68h] [rbp-F0h]
  __int64 v90; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD *v91; // [rsp+78h] [rbp-E0h] BYREF
  __m128 v92; // [rsp+80h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-C8h] BYREF
  __m128 v94; // [rsp+A0h] [rbp-B8h] BYREF
  __m256i v95; // [rsp+B0h] [rbp-A8h]
  _BYTE v96[56]; // [rsp+D0h] [rbp-88h]
  __int64 v97; // [rsp+108h] [rbp-50h]
  char v98; // [rsp+110h] [rbp-48h]

  v25 = *a1;
  v26 = a22;
  v77 = a2;
  v78 = a3;
  v84 = a21;
  v79 = a4;
  v80 = a5;
  v85 = a23;
  if ( a22 )
  {
    v81 = _mm_loadh_ps((const double *)&a17);
    v82 = _mm_loadh_ps((const double *)&a19);
    goto LABEL_3;
  }
  v95.m256i_i64[0] = __PAIR64__(a8, a6);
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v78);
  v35 = _mm_loadh_ps((const double *)&a17);
  v36 = _mm_loadh_ps((const double *)&a19);
  v95.m256i_i64[3] = __PAIR64__(a11, a10);
  v37 = _mm_loadh_ps((const double *)&v80);
  v81 = v35;
  v94 = v37;
  v38 = _mm_loadh_ps((const double *)&a9);
  *(__m128 *)&v96[24] = v35;
  *(_DWORD *)v96 = a12;
  *(__m128 *)&v95.m256i_u64[1] = v38;
  *(_DWORD *)&v96[4] = a13;
  v39 = _mm_loadh_ps((const double *)&a15);
  v82 = v36;
  *(__m128 *)&v96[8] = v39;
  *(__m128 *)&v96[40] = v36;
  v97 = a20;
  v40 = *(unsigned int *)(v25 + 872);
  v41 = *(_QWORD *)(v25 + 856);
  v98 = v84;
  v83 = v25 + 856;
  if ( !(_DWORD)v40 )
    goto LABEL_81;
  v42 = v40 - 1;
  v43 = sub_2075CC0((__int64)ptr);
  v44 = 1;
  v45 = v42 & v43;
  v46 = (__int64 *)(v41 + 8 * v45);
  v47 = v45;
  v48 = *v46;
  if ( *v46 == -4096 )
    goto LABEL_80;
  v86 = v25;
  a22 = 0;
  while ( 1 )
  {
    if ( v48 == -8192 )
      goto LABEL_77;
    v49 = *(_BYTE *)(v48 - 16);
    v87 = v48;
    v50 = *(_DWORD *)&v96[4];
    v88 = *(_QWORD *)&v96[16];
    v51 = v49 & 2;
    if ( v94.m128_u64[0] != 0 && ptr[0] != nullptr && (v96[4] & 8) == 0 && *(_BYTE *)ptr[0] == 14 )
    {
      v52 = *((_BYTE *)ptr[0] - 16);
      v53 = (v52 & 2) != 0 ? *((char **)ptr[0] - 4) : (char *)ptr[0] - 16 - 8LL * ((v52 >> 2) & 0xF);
      if ( *((_QWORD *)v53 + 9) && (*(_BYTE *)(v48 + 36) & 8) == 0 )
      {
        if ( v51 )
        {
          v54 = *(_QWORD *)(v48 - 32);
          v89 = v54;
          if ( ptr[0] != *(void **)(v54 + 8) )
            goto LABEL_77;
          v55 = *(_QWORD *)(v54 + 24);
          if ( !v55 || v55 != v94.m128_u64[0] )
            goto LABEL_35;
          LODWORD(v89) = *(_DWORD *)(v48 - 24);
        }
        else
        {
          v54 = v48 + -16 - 8LL * ((v49 >> 2) & 0xF);
          if ( ptr[0] != *(void **)(v54 + 8) )
            goto LABEL_77;
          v75 = *(_QWORD *)(v54 + 24);
          if ( !v75 || v75 != v94.m128_u64[0] )
          {
LABEL_76:
            v57 = v48 + -16 - 8LL * ((v49 >> 2) & 0xF);
            if ( ptr[0] != *(void **)(v57 + 8) )
              goto LABEL_77;
            goto LABEL_36;
          }
          LODWORD(v89) = (*(_WORD *)(v48 - 16) >> 6) & 0xF;
        }
        v56 = 0;
        if ( (unsigned int)v89 > 9 )
          v56 = *(_QWORD *)(v54 + 72);
        if ( v88 == v56 )
        {
LABEL_66:
          v25 = v86;
          v26 = a22;
          sub_2082040(&v92, v46, (_QWORD *)(*(_QWORD *)(v86 + 856) + 8LL * *(unsigned int *)(v86 + 872)), v83, 1);
          v65 = (__int64 *)v92.m128_u64[0];
          goto LABEL_82;
        }
      }
    }
    if ( !v51 )
      goto LABEL_76;
    v89 = *(_QWORD *)(v48 - 32);
LABEL_35:
    v57 = v89;
    if ( ptr[0] != *(void **)(v89 + 8) )
      goto LABEL_77;
LABEL_36:
    if ( *(void **)(v57 + 16) == ptr[1] && v94.m128_u64[0] == *(_QWORD *)(v57 + 24) )
    {
      v58 = v94.m128_u64[1];
      if ( *(_BYTE *)v48 != 16 )
        v87 = sub_206C6C0(v48);
      if ( v58 == v87
        && v95.m256i_i32[0] == *(_DWORD *)(v48 + 16)
        && v95.m256i_i64[1] == *(_QWORD *)(v57 + 32)
        && v95.m256i_i32[1] == *(_DWORD *)(v48 + 20) )
      {
        v59 = v51 ? *(_DWORD *)(v48 - 24) : (*(_WORD *)(v48 - 16) >> 6) & 0xF;
        v60 = v59 <= 8 ? 0LL : *(_QWORD *)(v57 + 64);
        if ( *(_OWORD *)&v95.m256i_u64[2] == __PAIR128__(*(_QWORD *)(v48 + 24), v60)
          && *(_DWORD *)v96 == *(_DWORD *)(v48 + 32)
          && v50 == *(_DWORD *)(v48 + 36)
          && *(_QWORD *)&v96[8] == *(_QWORD *)(v57 + 40) )
        {
          v61 = v59 <= 9 ? 0LL : *(_QWORD *)(v57 + 72);
          if ( v88 == v61 && *(_OWORD *)&v96[24] == *(_OWORD *)(v57 + 48) )
          {
            v62 = v59 <= 0xA ? 0LL : *(_QWORD *)(v57 + 80);
            if ( *(_QWORD *)&v96[40] == v62 )
            {
              v63 = v59 <= 0xB ? 0LL : *(_QWORD *)(v57 + 88);
              if ( *(_QWORD *)&v96[48] == v63 )
              {
                v64 = v59 <= 0xC ? 0LL : *(_QWORD *)(v57 + 96);
                if ( v97 == v64 && v98 == (unsigned __int8)BYTE1(*(_QWORD *)v48) >> 7 )
                  goto LABEL_66;
              }
            }
          }
        }
      }
    }
LABEL_77:
    v47 = v42 & (v44 + v47);
    v46 = (__int64 *)(v41 + 8LL * v47);
    v48 = *v46;
    if ( *v46 == -4096 )
      break;
    ++v44;
  }
  v25 = v86;
  v26 = a22;
LABEL_80:
  v41 = *(_QWORD *)(v25 + 856);
  v40 = *(unsigned int *)(v25 + 872);
LABEL_81:
  sub_2082040(&v92, (_QWORD *)(v41 + 8 * v40), (_QWORD *)(v41 + 8 * v40), v83, 1);
  v65 = (__int64 *)v92.m128_u64[0];
LABEL_82:
  v74 = (_QWORD *)(*(_QWORD *)(v25 + 856) + 8LL * *(unsigned int *)(v25 + 872));
  sub_2082040(&v92, v74, v74, v83, 1);
  if ( (__int64 *)v92.m128_u64[0] != v65 )
  {
    v32 = *v65;
    if ( *v65 )
      return v32;
  }
  if ( !(_BYTE)v85 )
    return 0;
  v25 = *a1;
LABEL_3:
  si128 = _mm_load_si128((const __m128i *)&v81);
  HIDWORD(ptr[1]) = 13;
  v28 = _mm_load_si128((const __m128i *)&v82);
  v29 = _mm_loadh_ps((const double *)&v77);
  ptr[0] = &v94;
  v94 = v29;
  *(__m128i *)v96 = si128;
  v30 = _mm_loadh_ps((const double *)&v79);
  *(__m128i *)&v96[32] = v28;
  *(__m128 *)v95.m256i_i8 = v30;
  *(_QWORD *)&v96[48] = a20;
  *(__m128 *)&v95.m256i_u64[2] = _mm_loadh_ps((const double *)&a14);
  *(__m128 *)&v96[16] = _mm_loadh_ps((const double *)&a15);
  if ( a20 )
  {
    LODWORD(ptr[1]) = 13;
    v31 = 13;
  }
  else if ( a19 )
  {
    LODWORD(ptr[1]) = 12;
    v31 = 12;
  }
  else if ( a18 )
  {
    LODWORD(ptr[1]) = 11;
    v31 = 11;
  }
  else if ( a15 )
  {
    LODWORD(ptr[1]) = 10;
    v31 = 10;
  }
  else if ( a9 )
  {
    LODWORD(ptr[1]) = 9;
    v31 = 9;
  }
  else
  {
    LODWORD(ptr[1]) = 8;
    v31 = 8;
  }
  v77 = v31;
  v32 = sub_20B4330(40, v31, v26);
  sub_20B2FD0(v32, (_DWORD)a1, 18, v26, (unsigned int)&v94, v77, 0, 0);
  v33 = v84;
  *(_DWORD *)(v32 + 16) = a6;
  *(_WORD *)(v32 + 2) = 46;
  *(_DWORD *)(v32 + 20) = a8;
  *(_DWORD *)(v32 + 24) = a10;
  *(_DWORD *)(v32 + 28) = a11;
  *(_DWORD *)(v32 + 32) = a12;
  *(_DWORD *)(v32 + 36) = a13;
  *(_BYTE *)(v32 + 1) = (v33 << 7) | *(_BYTE *)(v32 + 1) & 0x7F;
  v90 = v32;
  if ( !v26 )
  {
    if ( (unsigned __int8)sub_207FBB0((__int64 *)(v25 + 856), &v90, &v91) )
    {
      sub_2082040(&v92, v91, (_QWORD *)(*(_QWORD *)(v25 + 856) + 8LL * *(unsigned int *)(v25 + 872)), v25 + 856, 1);
LABEL_8:
      v32 = v90;
      goto LABEL_9;
    }
    v67 = v91;
    v68 = (unsigned int)(*(_DWORD *)(v25 + 864) + 1);
    v69 = *(unsigned int *)(v25 + 872);
    v92.m128_u64[0] = (unsigned __int64)v91;
    v70 = (unsigned int)(4 * v68);
    if ( (unsigned int)v70 >= 3 * (int)v69 )
    {
      sub_2086980(v25 + 856, 2 * v69, v68, (unsigned int)(2 * v69), v70, v66);
    }
    else
    {
      v71 = (unsigned int)(v69 - *(_DWORD *)(v25 + 868) - v68);
      if ( (unsigned int)v71 > (unsigned int)v69 >> 3 )
      {
LABEL_70:
        v72 = *v67 == -4096;
        *(_DWORD *)(v25 + 864) = v68;
        if ( !v72 )
          --*(_DWORD *)(v25 + 868);
        *v67 = v90;
        v73 = *(_QWORD *)(v25 + 856);
        v91 = v67;
        sub_2082040(&v92, v67, (_QWORD *)(v73 + 8 * v69), v25 + 856, 1);
        goto LABEL_8;
      }
      sub_2086980(v25 + 856, v69, v68, v71, v70, v66);
    }
    sub_207FBB0((__int64 *)(v25 + 856), &v90, &v92);
    v69 = *(unsigned int *)(v25 + 872);
    v67 = (_QWORD *)v92.m128_u64[0];
    LODWORD(v68) = *(_DWORD *)(v25 + 864) + 1;
    goto LABEL_70;
  }
  if ( v26 == 1 )
  {
    sub_20AC2A0(v32, a1, v76);
    goto LABEL_8;
  }
LABEL_9:
  if ( ptr[0] != &v94 )
    free(ptr[0]);
  return v32;
}
