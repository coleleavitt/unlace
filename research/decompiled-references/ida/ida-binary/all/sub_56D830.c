__int64 __fastcall sub_56D830(
        __int64 a1,
        unsigned int a2,
        __int64 (__fastcall *a3)(__int64, __int64),
        __int64 a4,
        int a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 v9; // r15
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // r15d
  unsigned int v18; // ebp
  __int64 v19; // r13
  __int64 v20; // r12
  char v21; // al
  __int64 v22; // r11
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __m128i v25; // xmm5
  const void *v26; // rbx
  unsigned __int32 v27; // r12d
  __int64 v28; // r14
  char *v29; // rax
  char *v30; // rcx
  __int64 v31; // rdx
  volatile signed __int32 *v32; // rax
  int v33; // ecx
  int v34; // ebx
  char *v35; // rdi
  unsigned __int32 v36; // eax
  __int64 *v37; // rdx
  int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // rsi
  char *v41; // rcx
  unsigned int v42; // eax
  __int64 v44; // r14
  __int64 v45; // rdx
  void *v46; // rdi
  const __m128i *v47; // rcx
  __int64 v48; // r14
  unsigned int v49; // r12d
  __int64 v50; // rbx
  _BYTE *v51; // rdi
  unsigned int v52; // esi
  __int64 v53; // rbp
  void *v54; // rcx
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  int v57; // r9d
  char v58; // r8
  unsigned int v59; // eax
  __m128i v60; // xmm2
  unsigned int v61; // edx
  unsigned int v62; // r15d
  char *v63; // rax
  char v64; // r8
  int v65; // r9d
  char *v66; // rbx
  __int64 v67; // rax
  char *v68; // rbx
  unsigned int v69; // r15d
  void *v70; // rax
  __m128 si128; // xmm1
  char *v72; // rdx
  char *v73; // rsi
  volatile signed __int32 *v74; // rax
  char v75; // r15
  bool v76; // bp
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // esi
  void *v80; // rdi
  unsigned int v81; // ecx
  unsigned int v82; // edx
  void *v83; // rax
  int v84; // edx
  char *v85; // rax
  __m128i v86; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v87; // [rsp+18h] [rbp-C0h]
  void *v88[2]; // [rsp+20h] [rbp-B8h] BYREF
  char v89; // [rsp+37h] [rbp-A1h]
  void *v90; // [rsp+38h] [rbp-A0h]
  __int64 v91; // [rsp+40h] [rbp-98h]
  __int64 (__fastcall *v92)(__int64, __int64); // [rsp+48h] [rbp-90h]
  __m128i v93; // [rsp+50h] [rbp-88h] BYREF
  __int64 v94; // [rsp+60h] [rbp-78h]
  __m128i v95; // [rsp+68h] [rbp-70h] BYREF
  int v96; // [rsp+78h] [rbp-60h]
  unsigned int v97; // [rsp+7Ch] [rbp-5Ch]
  unsigned int v98; // [rsp+80h] [rbp-58h]
  unsigned int v99; // [rsp+84h] [rbp-54h]
  const __m128i *v100; // [rsp+88h] [rbp-50h]
  void *src[2]; // [rsp+90h] [rbp-48h] BYREF

  *(_DWORD *)(a1 + 24) = 0;
  v99 = a2;
  v92 = a3;
  v94 = a4;
  *(_DWORD *)(a1 + 40) = 0;
  if ( a2 >= *(_DWORD *)(a1 + 8) )
    __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x14Eu, "stack__iter");
  v9 = a1;
  if ( a5 < 0 )
  {
    v86.m128i_i64[0] = 0;
    v11 = 0;
    v89 = 0;
  }
  else
  {
    v10 = 8 * a5 + 80;
    if ( v10 > 7 )
    {
      v11 = v10 >> 3;
      v89 = 1;
      v86.m128i_i64[0] = (__int64)off_8C52B8(8 * v11);
    }
    else
    {
      v86.m128i_i64[0] = 0;
      v11 = 0;
      v89 = 1;
    }
  }
  v86 = (__m128i)_mm_loadh_ps((const double *)v86.m128i_i64);
  sub_55ECB0(a1 + 32, 32);
  v12 = *(unsigned int *)(a1 + 40);
  v13 = _mm_load_si128(&v86);
  v14 = v12 + 1;
  v15 = *(_QWORD *)(a1 + 32) + 32 * v12;
  *(_DWORD *)(a1 + 40) = v14;
  *(_DWORD *)(v15 + 16) = 0;
  *(_DWORD *)(v15 + 20) = v11;
  *(_DWORD *)(v15 + 24) = 0;
  *(_BYTE *)(v15 + 28) = 1;
  *(__m128i *)v15 = v13;
  if ( v14 )
  {
    v16 = a1;
    v100 = (const __m128i *)src;
    while ( 1 )
    {
      v17 = 0;
      v18 = v14;
      v19 = v16;
      do
      {
        v20 = 32LL * v17 + *(_QWORD *)(v19 + 32);
        v87 = 32LL * v17;
        v86.m128i_i64[0] = *(_QWORD *)v20;
        v21 = v92(v94, v20);
        v22 = v86.m128i_i64[0];
        v23 = v21 & 2;
        if ( (v21 & 1) != 0 || (v24 = *(unsigned __int16 *)(v86.m128i_i64[0] + 208), !(_WORD)v24) )
        {
          if ( !v23 )
          {
            v44 = *(_QWORD *)(v19 + 72);
            if ( *(_DWORD *)(v20 + 16) )
            {
              do
              {
                v45 = v23++;
                sub_56C9A0(v44, *(volatile signed __int32 **)(*(_QWORD *)(v20 + 8) + 8 * v45));
              }
              while ( v23 < *(_DWORD *)(v20 + 16) );
            }
            *(_DWORD *)(v20 + 16) = 0;
            v46 = *(void **)(v20 + 8);
            if ( v46 )
            {
              off_8C52A0(v46);
              *(_QWORD *)(v20 + 8) = 0;
              *(_QWORD *)(v20 + 16) = 0;
            }
            goto LABEL_25;
          }
          v34 = 1;
          *(__m128i *)src = _mm_loadu_si128((const __m128i *)(v20 + 8));
          v27 = (unsigned __int32)src[1];
          v33 = LODWORD(src[1]) >> 1;
          if ( !(LODWORD(src[1]) >> 1) )
          {
            sub_56C5C0(v19, v99, v86.m128i_i64[0], v100);
            goto LABEL_25;
          }
        }
        else
        {
          if ( !v23 )
            goto LABEL_42;
          v25 = _mm_loadu_si128((const __m128i *)(v20 + 8));
          *(__m128i *)src = v25;
          v26 = (const void *)v25.m128i_i64[0];
          v27 = v25.m128i_u32[2];
          if ( v25.m128i_i32[3] )
          {
            v28 = 8LL * v25.m128i_u32[2];
            src[0] = off_8C52B0(v25.m128i_u32[3], 8u);
            v29 = (char *)memcpy(src[0], v26, 8LL * v27);
            v22 = v86.m128i_i64[0];
            v30 = v29;
            if ( !v27 )
            {
              v47 = (const __m128i *)src;
              goto LABEL_40;
            }
            v31 = 0;
            while ( 1 )
            {
              v32 = *(volatile signed __int32 **)&v30[v31];
              if ( ((unsigned __int8)v32 & 1) == 0 )
              {
                if ( !*v32 )
LABEL_92:
                  __assert_fail("self.ptr->ref_count > 0", "lib/src/./subtree.c", 0x22Bu, "ts_subtree_retain");
                _InterlockedAdd(v32, 1u);
                if ( !*v32 )
LABEL_91:
                  __assert_fail("self.ptr->ref_count != 0", "lib/src/./subtree.c", 0x22Du, "ts_subtree_retain");
              }
              v31 += 8;
              if ( v28 == v31 )
                break;
              v30 = (char *)src[0];
            }
            v27 = (unsigned __int32)src[1];
          }
          v33 = v27 >> 1;
          if ( !(v27 >> 1) )
          {
            v47 = v100;
LABEL_40:
            v86.m128i_i64[0] = v22;
            sub_56C5C0(v19, v99, v22, v47);
            v22 = v86.m128i_i64[0];
LABEL_41:
            v24 = *(unsigned __int16 *)(v22 + 208);
            if ( !*(_WORD *)(v22 + 208) )
            {
              ++v17;
              continue;
            }
LABEL_42:
            v97 = v18;
            v48 = v22 + 48;
            v49 = 1;
            v98 = v17;
LABEL_43:
            if ( v24 == v49 )
            {
              v77 = *(_QWORD *)(v22 + 16);
              v53 = *(_QWORD *)(v22 + 24);
              v68 = (char *)(*(_QWORD *)(v19 + 32) + v87);
              v86.m128i_i8[0] = *(_BYTE *)(v22 + 32);
              *(_QWORD *)v68 = v77;
              if ( v53 )
                goto LABEL_62;
            }
            else
            {
              v50 = *(unsigned int *)(v19 + 40);
              if ( (unsigned int)v50 > 0x3F )
                goto LABEL_68;
              v51 = *(_BYTE **)(v19 + 32);
              v52 = *(_DWORD *)(v19 + 44);
              v53 = *(_QWORD *)v48;
              v54 = *(void **)(v22 + 24LL * v49 + 16);
              v86.m128i_i8[0] = *(_BYTE *)(v48 + 8);
              v55 = _mm_loadl_epi64((const __m128i *)&v51[v87 + 16]);
              v56 = _mm_loadu_si128((const __m128i *)&v51[v87]);
              v57 = *(_DWORD *)&v51[v87 + 24];
              v58 = v51[v87 + 28];
              v59 = v50 + 1;
              v60 = _mm_shuffle_epi32(v55, 229);
              v61 = _mm_cvtsi128_si32(v60);
              if ( v52 >= (int)v50 + 1 )
                goto LABEL_72;
              v62 = 2 * v52;
              if ( 2 * v52 < v59 )
                v62 = v50 + 1;
              if ( v62 < 8 )
                v62 = 8;
              if ( v52 >= v62 )
              {
LABEL_72:
                *(_DWORD *)(v19 + 40) = v59;
                v68 = &v51[32 * v50];
                *((_DWORD *)v68 + 6) = v57;
                v68[28] = v58;
                *(__m128i *)v68 = v56;
                *((_QWORD *)v68 + 2) = v55.m128i_i64[0];
              }
              else
              {
                v95.m128i_i64[1] = v22;
                LODWORD(v91) = v57;
                LOBYTE(v90) = v58;
                v88[0] = v54;
                v95.m128i_i64[0] = v55.m128i_i64[0];
                v96 = _mm_cvtsi128_si32(v60);
                v93 = v56;
                if ( v51 )
                {
                  v63 = (char *)off_8C52A8(v51, 32LL * v62);
                  v54 = v88[0];
                  v64 = (char)v90;
                  v65 = v91;
                  v56 = _mm_load_si128(&v93);
                  v66 = v63;
                  v61 = v96;
                  v55 = _mm_loadl_epi64(&v95);
                  v22 = v95.m128i_i64[1];
                }
                else
                {
                  v85 = (char *)off_8C52B8(32LL * v62);
                  v22 = v95.m128i_i64[1];
                  v55 = _mm_loadl_epi64(&v95);
                  v61 = v96;
                  v56 = _mm_load_si128(&v93);
                  v66 = v85;
                  v65 = v91;
                  v64 = (char)v90;
                  v54 = v88[0];
                }
                v67 = *(unsigned int *)(v19 + 40);
                *(_QWORD *)(v19 + 32) = v66;
                *(_DWORD *)(v19 + 44) = v62;
                v68 = &v66[32 * v67];
                *(_DWORD *)(v19 + 40) = v67 + 1;
                *((_DWORD *)v68 + 6) = v65;
                v68[28] = v64;
                *(__m128i *)v68 = v56;
                *((_QWORD *)v68 + 2) = v55.m128i_i64[0];
                if ( (_DWORD)v67 == -1 )
                  __assert_fail(
                    "(uint32_t)((&self->iterators)->size - 1) < (&self->iterators)->size",
                    "lib/src/./stack.c",
                    0x189u,
                    "stack__iter");
              }
              *(__m128i *)v88 = v56;
              if ( v61 )
              {
                v69 = _mm_cvtsi128_si32(v55);
                v91 = v22;
                v90 = v54;
                v70 = off_8C52B0(v61, 8u);
                si128 = (__m128)_mm_load_si128((const __m128i *)v88);
                *((_QWORD *)v68 + 1) = v70;
                a9 = _mm_movehl_ps(a9, si128);
                v88[0] = (void *)(8LL * v69);
                memcpy(v70, (const void *)a9.m128_u64[0], (size_t)v88[0]);
                v54 = v90;
                v22 = v91;
                if ( v69 )
                {
                  v72 = (char *)v88[0];
                  v73 = nullptr;
                  do
                  {
                    v74 = *(volatile signed __int32 **)&v73[*((_QWORD *)v68 + 1)];
                    if ( ((unsigned __int8)v74 & 1) == 0 )
                    {
                      if ( !*v74 )
                        goto LABEL_92;
                      _InterlockedAdd(v74, 1u);
                      if ( !*v74 )
                        goto LABEL_91;
                    }
                    v73 += 8;
                  }
                  while ( v72 != v73 );
                }
              }
              *(_QWORD *)v68 = v54;
              if ( v53 )
              {
LABEL_62:
                v75 = v53 & 1;
                if ( v89 )
                {
                  v78 = *((unsigned int *)v68 + 4);
                  v79 = *((_DWORD *)v68 + 5);
                  v80 = *((void **)v68 + 1);
                  v81 = v78 + 1;
                  if ( v79 < (int)v78 + 1 )
                  {
                    v82 = 2 * v79;
                    if ( 2 * v79 < v81 )
                      v82 = v78 + 1;
                    if ( v82 < 8 )
                      v82 = 8;
                    if ( v79 < v82 )
                    {
                      v90 = (void *)v22;
                      LODWORD(v88[0]) = v82;
                      if ( v80 )
                      {
                        v83 = off_8C52A8(v80, 8LL * v82);
                        v84 = (int)v88[0];
                        v22 = (__int64)v90;
                      }
                      else
                      {
                        v83 = off_8C52B8(8LL * v82);
                        v22 = (__int64)v90;
                        v84 = (int)v88[0];
                      }
                      v80 = v83;
                      v78 = *((unsigned int *)v68 + 4);
                      *((_QWORD *)v68 + 1) = v80;
                      *((_DWORD *)v68 + 5) = v84;
                      v81 = v78 + 1;
                    }
                  }
                  *((_DWORD *)v68 + 4) = v81;
                  *((_QWORD *)v80 + v78) = v53;
                  if ( !v75 )
                  {
                    if ( !*(_DWORD *)v53 )
                      goto LABEL_92;
                    _InterlockedAdd((volatile signed __int32 *)v53, 1u);
                    if ( !*(_DWORD *)v53 )
                      goto LABEL_91;
                    goto LABEL_85;
                  }
LABEL_64:
                  v76 = (v53 & 8) != 0;
                }
                else
                {
                  if ( v75 )
                    goto LABEL_64;
LABEL_85:
                  v76 = (*(_BYTE *)(v53 + 44) & 4) != 0;
                }
                v24 = *(unsigned __int16 *)(v22 + 208);
                if ( !v76 )
                {
                  ++*((_DWORD *)v68 + 6);
                  if ( !v86.m128i_i8[0] )
                    v68[28] = 0;
                }
LABEL_68:
                ++v49;
                v48 += 24;
                if ( v24 < v49 )
                {
                  v18 = v97;
                  v17 = v98 + 1;
                  continue;
                }
                goto LABEL_43;
              }
            }
            ++*((_DWORD *)v68 + 6);
            v24 = *(unsigned __int16 *)(v22 + 208);
            v68[28] = 0;
            goto LABEL_68;
          }
          v34 = 0;
        }
        v35 = (char *)src[0];
        v36 = v27 - 1;
        v37 = (__int64 *)src[0];
        v38 = v27 - 1 - v33;
        do
        {
          v39 = v36;
          v40 = *v37;
          --v36;
          ++v37;
          v41 = &v35[8 * v39];
          *(v37 - 1) = *(_QWORD *)v41;
          *(_QWORD *)v41 = v40;
        }
        while ( v36 != v38 );
        v86.m128i_i64[0] = v22;
        sub_56C5C0(v19, v99, v22, v100);
        v22 = v86.m128i_i64[0];
        if ( !v34 )
          goto LABEL_41;
LABEL_25:
        v42 = *(_DWORD *)(v19 + 40);
        if ( v17 >= v42 )
          __assert_fail("index < self->size", "lib/src/./././././array.h", 0xAFu, "_array__erase");
        --v18;
        memmove(
          (void *)(v87 + *(_QWORD *)(v19 + 32)),
          (const void *)(*(_QWORD *)(v19 + 32) + 32LL * (v17 + 1)),
          32LL * (v42 - 1 - v17));
        --*(_DWORD *)(v19 + 40);
      }
      while ( v17 < v18 );
      v14 = *(_DWORD *)(v19 + 40);
      v16 = v19;
      if ( !v14 )
      {
        v9 = v19;
        return *(_QWORD *)(v9 + 16);
      }
    }
  }
  return *(_QWORD *)(v9 + 16);
}
