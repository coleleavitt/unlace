__int64 __fastcall sub_56D150(
        _DWORD *a1,
        unsigned int a2,
        _DWORD *a3,
        int a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  _DWORD *v8; // r9
  unsigned int v9; // ebp
  unsigned int v10; // ebp
  __m128 v11; // xmm0
  __int64 v12; // r9
  __m128i v13; // xmm0
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r11
  unsigned int v18; // r15d
  unsigned int v19; // ebp
  __int64 v20; // r13
  __int64 v21; // rbx
  __int64 v22; // r11
  unsigned int v23; // eax
  __int64 v24; // r14
  unsigned int v25; // r12d
  __int64 v26; // rbx
  _BYTE *v27; // rdi
  unsigned int v28; // esi
  __int64 v29; // rbp
  void *v30; // rcx
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __int32 v33; // r9d
  __int8 v34; // r8
  unsigned int v35; // eax
  __m128i v36; // xmm2
  unsigned int v37; // edx
  unsigned int v38; // r15d
  char *v39; // rax
  __int32 v40; // r9d
  __int8 v41; // r8
  char *v42; // rbx
  __int64 v43; // rax
  __m128i *v44; // rbx
  unsigned int v45; // r15d
  void *v46; // rax
  __m128 si128; // xmm1
  char *v48; // rdx
  char *v49; // rsi
  volatile signed __int32 *v50; // rax
  char v51; // r15
  bool v52; // bp
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // esi
  void *v58; // rdi
  unsigned int v59; // ecx
  unsigned int v60; // edx
  void *v61; // rax
  __int32 v62; // edx
  __int64 v63; // rdi
  unsigned int v64; // eax
  __int64 *v65; // rdx
  int v66; // r8d
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 *v69; // rcx
  unsigned int v70; // eax
  __int64 v71; // r14
  unsigned int i; // r12d
  __int64 v73; // rdx
  void *v74; // rdi
  char *v75; // rax
  __m128i v76; // [rsp+0h] [rbp-C8h] BYREF
  void *src[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD *v78; // [rsp+20h] [rbp-A8h] BYREF
  char v79; // [rsp+2Fh] [rbp-99h]
  void *v80; // [rsp+30h] [rbp-98h]
  __int64 v81; // [rsp+38h] [rbp-90h]
  __m128i v82; // [rsp+40h] [rbp-88h] BYREF
  _DWORD *v83; // [rsp+50h] [rbp-78h]
  __m128i v84; // [rsp+58h] [rbp-70h] BYREF
  int v85; // [rsp+68h] [rbp-60h]
  unsigned int v86; // [rsp+6Ch] [rbp-5Ch]
  unsigned int v87; // [rsp+70h] [rbp-58h]
  unsigned int v88; // [rsp+74h] [rbp-54h]
  const __m128i *v89; // [rsp+78h] [rbp-50h]
  __m128i v90; // [rsp+80h] [rbp-48h] BYREF

  a1[6] = 0;
  v88 = a2;
  v83 = a3;
  a1[10] = 0;
  if ( a2 >= a1[2] )
    __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x14Eu, "stack__iter");
  v8 = a1;
  if ( a4 < 0 )
  {
    v78 = nullptr;
    v10 = 0;
    v79 = 0;
  }
  else
  {
    v9 = 8 * a4 + 80;
    if ( v9 > 7 )
    {
      v10 = v9 >> 3;
      v54 = off_8C52B8(8 * v10);
      v79 = 1;
      v8 = a1;
      v78 = v54;
    }
    else
    {
      v78 = nullptr;
      v10 = 0;
      v79 = 1;
    }
  }
  v11 = _mm_loadh_ps((const double *)&v78);
  v78 = v8;
  v76 = (__m128i)v11;
  sub_55ECB0((__int64)(v8 + 8), 32);
  v12 = (__int64)v78;
  v13 = _mm_load_si128(&v76);
  v14 = *((unsigned int *)v78 + 10);
  v15 = v14 + 1;
  v16 = v78[4] + 32 * v14;
  *((_DWORD *)v78 + 10) = v15;
  *(_DWORD *)(v16 + 16) = 0;
  *(_DWORD *)(v16 + 20) = v10;
  *(_DWORD *)(v16 + 24) = 0;
  *(_BYTE *)(v16 + 28) = 1;
  *(__m128i *)v16 = v13;
  if ( v15 )
  {
    v17 = v12;
    v89 = &v90;
    while ( 1 )
    {
      v18 = 0;
      v19 = v15;
      v20 = v17;
      do
      {
        v21 = 32LL * v18 + *(_QWORD *)(v20 + 32);
        v76.m128i_i64[0] = 32LL * v18;
        v22 = *(_QWORD *)v21;
        if ( *(_DWORD *)(v21 + 24) == *v83 )
        {
          v90 = _mm_loadu_si128((const __m128i *)(v21 + 8));
          if ( (unsigned __int32)v90.m128i_i32[2] >> 1 )
          {
            v63 = v90.m128i_i64[0];
            v64 = v90.m128i_i32[2] - 1;
            v65 = (__int64 *)v90.m128i_i64[0];
            v66 = v90.m128i_i32[2] - 1 - ((unsigned __int32)v90.m128i_i32[2] >> 1);
            do
            {
              v67 = v64;
              v68 = *v65;
              --v64;
              ++v65;
              v69 = (__int64 *)(v63 + 8 * v67);
              *(v65 - 1) = *v69;
              *v69 = v68;
            }
            while ( v64 != v66 );
          }
          sub_56C5C0(v20, v88, v22, v89);
        }
        else
        {
          v23 = *(unsigned __int16 *)(v22 + 208);
          if ( (_WORD)v23 )
          {
            v86 = v19;
            v24 = v22 + 48;
            v25 = 1;
            v87 = v18;
            while ( v25 != v23 )
            {
              v26 = *(unsigned int *)(v20 + 40);
              if ( (unsigned int)v26 <= 0x3F )
              {
                v27 = *(_BYTE **)(v20 + 32);
                v28 = *(_DWORD *)(v20 + 44);
                v29 = *(_QWORD *)v24;
                v30 = *(void **)(v22 + 24LL * v25 + 16);
                LOBYTE(v78) = *(_BYTE *)(v24 + 8);
                v31 = _mm_loadl_epi64((const __m128i *)&v27[v76.m128i_i64[0] + 16]);
                v32 = _mm_loadu_si128((const __m128i *)&v27[v76.m128i_i64[0]]);
                v33 = *(_DWORD *)&v27[v76.m128i_i64[0] + 24];
                v34 = v27[v76.m128i_i64[0] + 28];
                v35 = v26 + 1;
                v36 = _mm_shuffle_epi32(v31, 229);
                v37 = _mm_cvtsi128_si32(v36);
                if ( v28 >= (int)v26 + 1 )
                  goto LABEL_46;
                v38 = 2 * v28;
                if ( 2 * v28 < v35 )
                  v38 = v26 + 1;
                if ( v38 < 8 )
                  v38 = 8;
                if ( v28 >= v38 )
                {
LABEL_46:
                  *(_DWORD *)(v20 + 40) = v35;
                  v44 = (__m128i *)&v27[32 * v26];
                  v44[1].m128i_i32[2] = v33;
                  v44[1].m128i_i8[12] = v34;
                  *v44 = v32;
                  v44[1].m128i_i64[0] = v31.m128i_i64[0];
                }
                else
                {
                  v84.m128i_i64[1] = v22;
                  LOBYTE(v81) = v34;
                  LODWORD(v80) = v33;
                  src[0] = v30;
                  v84.m128i_i64[0] = v31.m128i_i64[0];
                  v85 = _mm_cvtsi128_si32(v36);
                  v82 = v32;
                  if ( v27 )
                  {
                    v39 = (char *)off_8C52A8(v27, 32LL * v38);
                    v30 = src[0];
                    v40 = (int)v80;
                    v41 = v81;
                    v32 = _mm_load_si128(&v82);
                    v42 = v39;
                    v37 = v85;
                    v31 = _mm_loadl_epi64(&v84);
                    v22 = v84.m128i_i64[1];
                  }
                  else
                  {
                    v75 = (char *)off_8C52B8(32LL * v38);
                    v22 = v84.m128i_i64[1];
                    v31 = _mm_loadl_epi64(&v84);
                    v37 = v85;
                    v32 = _mm_load_si128(&v82);
                    v42 = v75;
                    v41 = v81;
                    v40 = (int)v80;
                    v30 = src[0];
                  }
                  v43 = *(unsigned int *)(v20 + 40);
                  *(_QWORD *)(v20 + 32) = v42;
                  *(_DWORD *)(v20 + 44) = v38;
                  v44 = (__m128i *)&v42[32 * v43];
                  *(_DWORD *)(v20 + 40) = v43 + 1;
                  v44[1].m128i_i32[2] = v40;
                  v44[1].m128i_i8[12] = v41;
                  *v44 = v32;
                  v44[1].m128i_i64[0] = v31.m128i_i64[0];
                  if ( (_DWORD)v43 == -1 )
                    __assert_fail(
                      "(uint32_t)((&self->iterators)->size - 1) < (&self->iterators)->size",
                      "lib/src/./stack.c",
                      0x189u,
                      "stack__iter");
                }
                *(__m128i *)src = v32;
                if ( v37 )
                {
                  v45 = _mm_cvtsi128_si32(v31);
                  v81 = v22;
                  v80 = v30;
                  v46 = off_8C52B0(v37, 8u);
                  si128 = (__m128)_mm_load_si128((const __m128i *)src);
                  v44->m128i_i64[1] = (__int64)v46;
                  a8 = _mm_movehl_ps(a8, si128);
                  src[0] = (void *)(8LL * v45);
                  memcpy(v46, (const void *)a8.m128_u64[0], (size_t)src[0]);
                  v30 = v80;
                  v22 = v81;
                  if ( v45 )
                  {
                    v48 = (char *)src[0];
                    v49 = nullptr;
                    while ( 1 )
                    {
                      v50 = *(volatile signed __int32 **)&v49[v44->m128i_i64[1]];
                      if ( ((unsigned __int8)v50 & 1) == 0 )
                      {
                        if ( !*v50 )
                          goto LABEL_74;
                        _InterlockedAdd(v50, 1u);
                        if ( !*v50 )
                          break;
                      }
                      v49 += 8;
                      if ( v48 == v49 )
                        goto LABEL_29;
                    }
LABEL_73:
                    __assert_fail("self.ptr->ref_count != 0", "lib/src/./subtree.c", 0x22Du, "ts_subtree_retain");
                  }
                }
LABEL_29:
                v44->m128i_i64[0] = (__int64)v30;
                if ( v29 )
                {
LABEL_30:
                  v51 = v29 & 1;
                  if ( v79 )
                  {
                    v56 = v44[1].m128i_u32[0];
                    v57 = v44[1].m128i_u32[1];
                    v58 = (void *)v44->m128i_i64[1];
                    v59 = v56 + 1;
                    if ( v57 < (int)v56 + 1 )
                    {
                      v60 = 2 * v57;
                      if ( 2 * v57 < v59 )
                        v60 = v56 + 1;
                      if ( v60 < 8 )
                        v60 = 8;
                      if ( v57 < v60 )
                      {
                        v80 = (void *)v22;
                        LODWORD(src[0]) = v60;
                        if ( v58 )
                        {
                          v61 = off_8C52A8(v58, 8LL * v60);
                          v62 = (__int32)src[0];
                          v22 = (__int64)v80;
                        }
                        else
                        {
                          v61 = off_8C52B8(8LL * v60);
                          v22 = (__int64)v80;
                          v62 = (__int32)src[0];
                        }
                        v58 = v61;
                        v56 = v44[1].m128i_u32[0];
                        v44->m128i_i64[1] = (__int64)v58;
                        v44[1].m128i_i32[1] = v62;
                        v59 = v56 + 1;
                      }
                    }
                    v44[1].m128i_i32[0] = v59;
                    *((_QWORD *)v58 + v56) = v29;
                    if ( !v51 )
                    {
                      if ( !*(_DWORD *)v29 )
LABEL_74:
                        __assert_fail("self.ptr->ref_count > 0", "lib/src/./subtree.c", 0x22Bu, "ts_subtree_retain");
                      _InterlockedAdd((volatile signed __int32 *)v29, 1u);
                      if ( !*(_DWORD *)v29 )
                        goto LABEL_73;
                      goto LABEL_59;
                    }
LABEL_32:
                    v52 = (v29 & 8) != 0;
                  }
                  else
                  {
                    if ( v51 )
                      goto LABEL_32;
LABEL_59:
                    v52 = (*(_BYTE *)(v29 + 44) & 4) != 0;
                  }
                  if ( !v52 )
                  {
                    ++v44[1].m128i_i32[2];
                    if ( !(_BYTE)v78 )
LABEL_35:
                      v44[1].m128i_i8[12] = 0;
                  }
                  v23 = *(unsigned __int16 *)(v22 + 208);
                  goto LABEL_37;
                }
LABEL_45:
                ++v44[1].m128i_i32[2];
                goto LABEL_35;
              }
LABEL_37:
              ++v25;
              v24 += 24;
              if ( v23 < v25 )
              {
                v19 = v86;
                v18 = v87 + 1;
                goto LABEL_39;
              }
            }
            v55 = *(_QWORD *)(v22 + 16);
            v29 = *(_QWORD *)(v22 + 24);
            v44 = (__m128i *)(*(_QWORD *)(v20 + 32) + v76.m128i_i64[0]);
            LOBYTE(v78) = *(_BYTE *)(v22 + 32);
            v44->m128i_i64[0] = v55;
            if ( v29 )
              goto LABEL_30;
            goto LABEL_45;
          }
          v71 = *(_QWORD *)(v20 + 72);
          for ( i = 0; i < *(_DWORD *)(v21 + 16); ++i )
          {
            v73 = i;
            sub_56C9A0(v71, *(volatile signed __int32 **)(*(_QWORD *)(v21 + 8) + 8 * v73));
          }
          v74 = *(void **)(v21 + 8);
          *(_DWORD *)(v21 + 16) = 0;
          if ( v74 )
          {
            off_8C52A0(v74);
            *(_QWORD *)(v21 + 8) = 0;
            *(_QWORD *)(v21 + 16) = 0;
          }
        }
        v70 = *(_DWORD *)(v20 + 40);
        if ( v18 >= v70 )
          __assert_fail("index < self->size", "lib/src/./././././array.h", 0xAFu, "_array__erase");
        --v19;
        memmove(
          (void *)(v76.m128i_i64[0] + *(_QWORD *)(v20 + 32)),
          (const void *)(*(_QWORD *)(v20 + 32) + 32LL * (v18 + 1)),
          32LL * (v70 - 1 - v18));
        --*(_DWORD *)(v20 + 40);
LABEL_39:
        ;
      }
      while ( v18 < v19 );
      v15 = *(_DWORD *)(v20 + 40);
      v17 = v20;
      if ( !v15 )
      {
        v12 = v20;
        return *(_QWORD *)(v12 + 16);
      }
    }
  }
  return *(_QWORD *)(v12 + 16);
}
