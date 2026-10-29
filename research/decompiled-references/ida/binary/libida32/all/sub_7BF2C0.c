void __fastcall sub_7BF2C0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r14
  _QWORD *v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rbp
  const char *v8; // rsi
  const char *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r14
  __m128i *v17; // rbp
  __int64 k; // rdx
  __m128i *v19; // rax
  __m128i v20; // xmm2
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  __m128i *v25; // rsi
  __int64 v26; // rax
  char *v27; // r11
  __m128i v28; // xmm1
  __m128i v29; // xmm3
  __m128i v30; // xmm1
  void (__fastcall *v31)(_QWORD *); // rax
  unsigned __int64 v32; // rbp
  __int64 *v33; // rsi
  __int64 *i; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r14
  _QWORD *v38; // r12
  _QWORD *v39; // r13
  __int64 v40; // rbx
  __int64 v41; // rbp
  const char *v42; // rsi
  const char *v43; // rdi
  unsigned __int64 v44; // rbp
  __int64 *v45; // rsi
  __int64 *j; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  bool v50; // zf
  __int64 v51; // rdx
  unsigned __int64 v52; // rbx
  __int64 v53; // rax
  size_t v54; // r12
  void *v55; // rax
  __int64 *v56; // rsi
  size_t v57; // r12
  __int64 v58; // rax
  int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rax
  _QWORD *v62; // rdi
  _QWORD *v63; // rdx
  __int64 v64; // rcx
  __m128i v65; // xmm0
  __int64 *v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rax
  __int64 v69; // rax
  __m128i v70; // xmm0
  _QWORD *v71; // rax
  __int64 v72; // rax
  __m128i v73; // xmm0
  _QWORD *v74; // r14
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  _BYTE *ptr; // [rsp+0h] [rbp-118h]
  void *ptra; // [rsp+0h] [rbp-118h]
  _BYTE *ptrb; // [rsp+0h] [rbp-118h]
  __int64 v83; // [rsp+8h] [rbp-110h]
  void *v84; // [rsp+8h] [rbp-110h]
  __int64 v85; // [rsp+8h] [rbp-110h]
  __m128i v86; // [rsp+10h] [rbp-108h] BYREF
  __m128i v87; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v88; // [rsp+30h] [rbp-E8h]
  __int64 v89; // [rsp+38h] [rbp-E0h]
  _QWORD *v90; // [rsp+40h] [rbp-D8h]
  char *v91; // [rsp+48h] [rbp-D0h]
  __int64 v92; // [rsp+50h] [rbp-C8h]
  __int64 v93; // [rsp+58h] [rbp-C0h]
  void *v94; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v95; // [rsp+68h] [rbp-B0h]
  __m128i v96; // [rsp+80h] [rbp-98h]
  __int64 v97; // [rsp+C0h] [rbp-58h]
  __int64 v98; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-40h]

  v90 = a1;
  v99 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 )
  {
    if ( a1[3] == a2[3] )
    {
      v3 = 0;
      if ( a2[9] )
      {
        v86.m128i_i64[0] = a2[9];
        while ( 1 )
        {
          v4 = (_QWORD *)(a2[8] + 24 * v3);
          v5 = (_QWORD *)v90[8];
          v83 = v90[9];
          v6 = (__int64)&v5[3 * v83];
          ptr = v5;
          if ( v5 != (_QWORD *)v6 )
            break;
LABEL_80:
          LODWORD(v32) = v83;
          if ( v90[10] < (unsigned __int64)(v83 + 1) )
          {
            v76 = qvector_reserve(v90 + 8, ptr, v83 + 1, 24);
            v77 = v90[9];
            v90[8] = v76;
            v6 = v76 + 24 * v77;
          }
          v71 = v90;
          *(_QWORD *)v6 = 0;
          *(_OWORD *)(v6 + 8) = 0;
          ++v71[9];
          v72 = *(_QWORD *)v6;
          v73 = _mm_loadu_si128((const __m128i *)(v6 + 8));
          *(_QWORD *)v6 = *v4;
          *(_QWORD *)(v6 + 8) = v4[1];
          *(_QWORD *)(v6 + 16) = v4[2];
          *v4 = v72;
          *(__m128i *)(v4 + 1) = v73;
LABEL_37:
          v33 = (__int64 *)a2[5];
          for ( i = &v33[3 * a2[6]]; i != v33; v33 += 3 )
          {
            v35 = *v33;
            v36 = *v33 + 80 * v33[1];
            if ( *v33 != v36 )
            {
              do
              {
                if ( *(_DWORD *)(v35 + 72) == v3 )
                  *(_DWORD *)(v35 + 72) = v32;
                v35 += 80;
              }
              while ( v36 != v35 );
            }
          }
          if ( v86.m128i_i64[0] == ++v3 )
            goto LABEL_44;
        }
        v7 = v4[1];
        while ( 1 )
        {
          if ( v5[1] )
          {
            v8 = (const char *)*v5;
            v9 = haystack;
            if ( !v7 )
              goto LABEL_9;
          }
          else
          {
            if ( !v7 )
            {
LABEL_36:
              v32 = 0xAAAAAAAAAAAAAAABLL * (((char *)v5 - ptr) >> 3);
              if ( (char *)v5 - ptr != -24 )
                goto LABEL_37;
              goto LABEL_80;
            }
            v8 = haystack;
          }
          v9 = (const char *)*v4;
LABEL_9:
          if ( !strcmp(v9, v8) )
            goto LABEL_36;
          v5 += 3;
          if ( (_QWORD *)v6 == v5 )
            goto LABEL_80;
        }
      }
LABEL_44:
      v37 = 0;
      if ( a2[12] )
      {
        v86.m128i_i64[0] = a2[12];
        while ( 1 )
        {
          v38 = (_QWORD *)(a2[11] + 24 * v37);
          v39 = (_QWORD *)v90[11];
          v85 = v90[12];
          v40 = (__int64)&v39[3 * v85];
          ptrb = v39;
          if ( v39 != (_QWORD *)v40 )
            break;
LABEL_77:
          LODWORD(v44) = v85;
          if ( v90[13] < (unsigned __int64)(v85 + 1) )
          {
            v78 = qvector_reserve(v90 + 11, ptrb, v85 + 1, 24);
            v79 = v90[12];
            v90[11] = v78;
            v40 = v78 + 24 * v79;
          }
          v68 = v90;
          *(_QWORD *)v40 = 0;
          *(_OWORD *)(v40 + 8) = 0;
          ++v68[12];
          v69 = *(_QWORD *)v40;
          v70 = _mm_loadu_si128((const __m128i *)(v40 + 8));
          *(_QWORD *)v40 = *v38;
          *(_QWORD *)(v40 + 8) = v38[1];
          *(_QWORD *)(v40 + 16) = v38[2];
          *v38 = v69;
          *(__m128i *)(v38 + 1) = v70;
LABEL_56:
          v45 = (__int64 *)a2[5];
          for ( j = &v45[3 * a2[6]]; j != v45; v45 += 3 )
          {
            v47 = *v45;
            v48 = *v45 + 80 * v45[1];
            if ( v48 != *v45 )
            {
              do
              {
                if ( *(_DWORD *)(v47 + 76) == v37 )
                  *(_DWORD *)(v47 + 76) = v44;
                v47 += 80;
              }
              while ( v47 != v48 );
            }
          }
          if ( v86.m128i_i64[0] == ++v37 )
            goto LABEL_63;
        }
        v41 = v38[1];
        while ( 1 )
        {
          if ( v39[1] )
          {
            v42 = (const char *)*v39;
            v43 = haystack;
            if ( !v41 )
              goto LABEL_49;
          }
          else
          {
            if ( !v41 )
            {
LABEL_55:
              v44 = 0xAAAAAAAAAAAAAAABLL * (((char *)v39 - ptrb) >> 3);
              if ( (char *)v39 - ptrb != -24 )
                goto LABEL_56;
              goto LABEL_77;
            }
            v42 = haystack;
          }
          v43 = (const char *)*v38;
LABEL_49:
          if ( !strcmp(v43, v42) )
            goto LABEL_55;
          v39 += 3;
          if ( (_QWORD *)v40 == v39 )
            goto LABEL_77;
        }
      }
LABEL_63:
      v92 = 0;
      v49 = a2[6];
      v88 = 0;
      v93 = v49;
      if ( v49 )
      {
        while ( 1 )
        {
          v50 = a2[3] == 0;
          v94 = nullptr;
          v95 = 0;
          if ( v50 )
            goto LABEL_34;
          v56 = nullptr;
          v51 = 0;
          v52 = 0;
          do
          {
            if ( *(_DWORD *)(a2[2] + 4 * v52) == v88 )
            {
              if ( *((_QWORD *)&v95 + 1) < (unsigned __int64)(v51 + 1) )
              {
                v94 = (void *)qvector_reserve(&v94, v56, v51 + 1, 8);
                v51 = v95;
                v56 = (__int64 *)v94;
              }
              v56[v51] = v52;
              v56 = (__int64 *)v94;
              v51 = v95 + 1;
              *(_QWORD *)&v95 = v95 + 1;
            }
            ++v52;
          }
          while ( v52 < a2[3] );
          if ( !v51 )
          {
            if ( v56 )
              qfree(v56);
            goto LABEL_34;
          }
          v10 = v90[5];
          v11 = *(int *)(v90[2] + 4 * *v56);
          if ( (_DWORD)v11 == -1 )
            break;
          v12 = v10 + 24 * v11;
          v13 = (__int64 *)(a2[5] + v92);
          v14 = *v13;
          v89 = *v13 + 80 * v13[1];
          if ( v89 != v14 )
          {
            v15 = *(_QWORD *)(v12 + 8);
            v16 = v14;
            do
            {
              v17 = *(__m128i **)v12;
              for ( k = 0xCCCCCCCCCCCCCCCDLL * ((80 * v15) >> 4); k > 0; k >>= 1 )
              {
                while ( 1 )
                {
                  v19 = &v17[5 * (k >> 1)];
                  if ( *(_QWORD *)(v16 + 64) >= v19[4].m128i_i64[0] )
                    break;
                  v17 = v19 + 5;
                  k = k - 1 - (k >> 1);
                  if ( k <= 0 )
                    goto LABEL_23;
                }
              }
LABEL_23:
              v20 = _mm_loadu_si128((const __m128i *)v16);
              v21 = *(_QWORD *)(v16 + 24);
              ptra = nullptr;
              v86.m128i_i64[0] = v21;
              v87 = v20;
              v96 = v20;
              if ( v21 )
              {
                v54 = v21;
                v55 = (void *)qalloc_or_throw(v21, (const char *)v56);
                v56 = *(__int64 **)(v16 + 16);
                ptra = v55;
                memcpy(v55, v56, v54);
              }
              v84 = nullptr;
              v22 = *(_QWORD *)(v16 + 48);
              v86.m128i_i64[1] = v22;
              if ( v22 )
              {
                v57 = v22;
                v84 = (void *)qalloc_or_throw(v22, (const char *)v56);
                memcpy(v84, *(const void **)(v16 + 40), v57);
              }
              v23 = *(_QWORD *)(v16 + 64);
              v24 = *(_QWORD *)(v16 + 72);
              v25 = *(__m128i **)v12;
              v26 = *(_QWORD *)(v12 + 8);
              v97 = v23;
              v98 = v24;
              v27 = (char *)((char *)v17 - (char *)v25);
              if ( *(_QWORD *)(v12 + 16) < (unsigned __int64)(v26 + 1) )
              {
                v91 = (char *)((char *)v17 - (char *)v25);
                v53 = qvector_reserve(v12, v25, v26 + 1, 80);
                v27 = v91;
                *(_QWORD *)v12 = v53;
                v17 = (__m128i *)&v27[v53];
                v26 = *(_QWORD *)(v12 + 8);
              }
              v56 = (__int64 *)v17;
              v16 += 80;
              memmove(&v17[5], v17, 80 * v26 - (_QWORD)v27);
              v28 = _mm_loadl_epi64(&v86);
              v17[4].m128i_i64[0] = v23;
              v29 = _mm_load_si128(&v87);
              v17[4].m128i_i64[1] = v24;
              v17[1].m128i_i64[0] = (__int64)ptra;
              *(__m128i *)((char *)v17 + 24) = _mm_unpacklo_epi64(v28, v28);
              v30 = _mm_loadl_epi64((const __m128i *)&v86.m128i_u64[1]);
              v17[2].m128i_i64[1] = (__int64)v84;
              *v17 = v29;
              v17[3] = _mm_unpacklo_epi64(v30, v30);
              v15 = *(_QWORD *)(v12 + 8) + 1LL;
              *(_QWORD *)(v12 + 8) = v15;
            }
            while ( v89 != v16 );
LABEL_30:
            v56 = (__int64 *)v94;
          }
LABEL_31:
          if ( v56 )
          {
            *(_QWORD *)&v95 = 0;
            qfree(v56);
          }
          ++v88;
          v92 += 24;
          if ( v88 == v93 )
            goto LABEL_34;
        }
        v58 = v90[6];
        v59 = v58;
        if ( v90[7] < (unsigned __int64)(v58 + 1) )
        {
          v74 = v90;
          v75 = qvector_reserve(v90 + 5, v90[5], v58 + 1, 24);
          v74[5] = v75;
          v10 = v75;
          v58 = v74[6];
        }
        v60 = v92;
        v61 = v10 + 24 * v58;
        v62 = v90;
        *(_QWORD *)v61 = 0;
        *(_OWORD *)(v61 + 8) = 0;
        ++v62[6];
        v63 = (_QWORD *)(a2[5] + v60);
        v64 = *(_QWORD *)v61;
        v65 = _mm_loadu_si128((const __m128i *)(v61 + 8));
        *(_QWORD *)v61 = *v63;
        *(_QWORD *)(v61 + 8) = v63[1];
        *(_QWORD *)(v61 + 16) = v63[2];
        *v63 = v64;
        v56 = (__int64 *)v94;
        *(__m128i *)(v63 + 1) = v65;
        v66 = &v56[v95];
        if ( v66 == v56 )
          goto LABEL_31;
        do
        {
          v67 = *v56++;
          *(_DWORD *)(v62[2] + 4 * v67) = v59;
        }
        while ( v66 != v56 );
        goto LABEL_30;
      }
    }
LABEL_34:
    v31 = *(void (__fastcall **)(_QWORD *))(*a2 + 8LL);
    if ( v31 == sub_7BB900 )
    {
      sub_7BB760(a2);
      operator delete(a2, 0x70u);
    }
    else
    {
      v31(a2);
    }
  }
}

