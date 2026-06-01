void __fastcall sub_7E2600(_QWORD *a1, _QWORD *a2)
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
  __int64 *v31; // rsi
  void (__fastcall *v32)(_QWORD *); // rax
  unsigned __int64 v33; // rbp
  __int64 *v34; // rsi
  __int64 *i; // rdi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r14
  _QWORD *v39; // r12
  _QWORD *v40; // r13
  __int64 v41; // rbx
  __int64 v42; // rbp
  const char *v43; // rsi
  const char *v44; // rdi
  unsigned __int64 v45; // rbp
  __int64 *v46; // rsi
  __int64 *j; // rdi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  bool v51; // zf
  __int64 v52; // rdx
  unsigned __int64 v53; // rbx
  __int64 v54; // rax
  size_t v55; // r12
  size_t v56; // r12
  __int64 v57; // rax
  int v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rax
  _QWORD *v61; // rdi
  _QWORD *v62; // rdx
  __int64 v63; // rcx
  __m128i v64; // xmm0
  __int64 *v65; // rcx
  __int64 v66; // rdx
  _QWORD *v67; // rax
  __int64 v68; // rax
  __m128i v69; // xmm0
  _QWORD *v70; // rax
  __int64 v71; // rax
  __m128i v72; // xmm0
  _QWORD *v73; // r14
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  _BYTE *ptr; // [rsp+0h] [rbp-118h]
  void *ptra; // [rsp+0h] [rbp-118h]
  _BYTE *ptrb; // [rsp+0h] [rbp-118h]
  __int64 v82; // [rsp+8h] [rbp-110h]
  void *v83; // [rsp+8h] [rbp-110h]
  __int64 v84; // [rsp+8h] [rbp-110h]
  __m128i v85; // [rsp+10h] [rbp-108h] BYREF
  __m128i v86; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v87; // [rsp+30h] [rbp-E8h]
  __int64 v88; // [rsp+38h] [rbp-E0h]
  _QWORD *v89; // [rsp+40h] [rbp-D8h]
  char *v90; // [rsp+48h] [rbp-D0h]
  __int64 v91; // [rsp+50h] [rbp-C8h]
  __int64 v92; // [rsp+58h] [rbp-C0h]
  void *v93; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v94; // [rsp+68h] [rbp-B0h]
  __m128i v95; // [rsp+80h] [rbp-98h]
  __int64 v96; // [rsp+C0h] [rbp-58h]
  __int64 v97; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v98; // [rsp+D8h] [rbp-40h]

  v89 = a1;
  v98 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 )
  {
    if ( a1[3] == a2[3] )
    {
      v3 = 0;
      if ( a2[9] )
      {
        v85.m128i_i64[0] = a2[9];
        while ( 1 )
        {
          v4 = (_QWORD *)(a2[8] + 24 * v3);
          v5 = (_QWORD *)v89[8];
          v82 = v89[9];
          v6 = (__int64)&v5[3 * v82];
          ptr = v5;
          if ( v5 != (_QWORD *)v6 )
            break;
LABEL_80:
          LODWORD(v33) = v82;
          if ( v89[10] < (unsigned __int64)(v82 + 1) )
          {
            v75 = qvector_reserve(v89 + 8, ptr, v82 + 1, 24);
            v76 = v89[9];
            v89[8] = v75;
            v6 = v75 + 24 * v76;
          }
          v70 = v89;
          *(_QWORD *)v6 = 0;
          *(_OWORD *)(v6 + 8) = 0;
          ++v70[9];
          v71 = *(_QWORD *)v6;
          v72 = _mm_loadu_si128((const __m128i *)(v6 + 8));
          *(_QWORD *)v6 = *v4;
          *(_QWORD *)(v6 + 8) = v4[1];
          *(_QWORD *)(v6 + 16) = v4[2];
          *v4 = v71;
          *(__m128i *)(v4 + 1) = v72;
LABEL_37:
          v34 = (__int64 *)a2[5];
          for ( i = &v34[3 * a2[6]]; i != v34; v34 += 3 )
          {
            v36 = *v34;
            v37 = *v34 + 80 * v34[1];
            if ( *v34 != v37 )
            {
              do
              {
                if ( *(_DWORD *)(v36 + 72) == v3 )
                  *(_DWORD *)(v36 + 72) = v33;
                v36 += 80;
              }
              while ( v37 != v36 );
            }
          }
          if ( v85.m128i_i64[0] == ++v3 )
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
              v33 = 0xAAAAAAAAAAAAAAABLL * (((char *)v5 - ptr) >> 3);
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
      v38 = 0;
      if ( a2[12] )
      {
        v85.m128i_i64[0] = a2[12];
        while ( 1 )
        {
          v39 = (_QWORD *)(a2[11] + 24 * v38);
          v40 = (_QWORD *)v89[11];
          v84 = v89[12];
          v41 = (__int64)&v40[3 * v84];
          ptrb = v40;
          if ( v40 != (_QWORD *)v41 )
            break;
LABEL_77:
          LODWORD(v45) = v84;
          if ( v89[13] < (unsigned __int64)(v84 + 1) )
          {
            v77 = qvector_reserve(v89 + 11, ptrb, v84 + 1, 24);
            v78 = v89[12];
            v89[11] = v77;
            v41 = v77 + 24 * v78;
          }
          v67 = v89;
          *(_QWORD *)v41 = 0;
          *(_OWORD *)(v41 + 8) = 0;
          ++v67[12];
          v68 = *(_QWORD *)v41;
          v69 = _mm_loadu_si128((const __m128i *)(v41 + 8));
          *(_QWORD *)v41 = *v39;
          *(_QWORD *)(v41 + 8) = v39[1];
          *(_QWORD *)(v41 + 16) = v39[2];
          *v39 = v68;
          *(__m128i *)(v39 + 1) = v69;
LABEL_56:
          v46 = (__int64 *)a2[5];
          for ( j = &v46[3 * a2[6]]; j != v46; v46 += 3 )
          {
            v48 = *v46;
            v49 = *v46 + 80 * v46[1];
            if ( v49 != *v46 )
            {
              do
              {
                if ( *(_DWORD *)(v48 + 76) == v38 )
                  *(_DWORD *)(v48 + 76) = v45;
                v48 += 80;
              }
              while ( v48 != v49 );
            }
          }
          if ( v85.m128i_i64[0] == ++v38 )
            goto LABEL_63;
        }
        v42 = v39[1];
        while ( 1 )
        {
          if ( v40[1] )
          {
            v43 = (const char *)*v40;
            v44 = haystack;
            if ( !v42 )
              goto LABEL_49;
          }
          else
          {
            if ( !v42 )
            {
LABEL_55:
              v45 = 0xAAAAAAAAAAAAAAABLL * (((char *)v40 - ptrb) >> 3);
              if ( (char *)v40 - ptrb != -24 )
                goto LABEL_56;
              goto LABEL_77;
            }
            v43 = haystack;
          }
          v44 = (const char *)*v39;
LABEL_49:
          if ( !strcmp(v44, v43) )
            goto LABEL_55;
          v40 += 3;
          if ( (_QWORD *)v41 == v40 )
            goto LABEL_77;
        }
      }
LABEL_63:
      v91 = 0;
      v50 = a2[6];
      v87 = 0;
      v92 = v50;
      if ( v50 )
      {
        while ( 1 )
        {
          v51 = a2[3] == 0;
          v93 = nullptr;
          v94 = 0;
          if ( v51 )
            goto LABEL_34;
          v31 = nullptr;
          v52 = 0;
          v53 = 0;
          do
          {
            if ( *(_DWORD *)(a2[2] + 4 * v53) == v87 )
            {
              if ( *((_QWORD *)&v94 + 1) < (unsigned __int64)(v52 + 1) )
              {
                v93 = (void *)qvector_reserve(&v93, v31, v52 + 1, 8);
                v52 = v94;
                v31 = (__int64 *)v93;
              }
              v31[v52] = v53;
              v31 = (__int64 *)v93;
              v52 = v94 + 1;
              *(_QWORD *)&v94 = v94 + 1;
            }
            ++v53;
          }
          while ( v53 < a2[3] );
          if ( !v52 )
          {
            if ( v31 )
              qfree(v31);
            goto LABEL_34;
          }
          v10 = v89[5];
          v11 = *(int *)(v89[2] + 4 * *v31);
          if ( (_DWORD)v11 == -1 )
            break;
          v12 = v10 + 24 * v11;
          v13 = (__int64 *)(a2[5] + v91);
          v14 = *v13;
          v88 = *v13 + 80 * v13[1];
          if ( v88 != v14 )
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
              v85.m128i_i64[0] = v21;
              v86 = v20;
              v95 = v20;
              if ( v21 )
              {
                v55 = v21;
                ptra = (void *)qalloc_or_throw(v21);
                memcpy(ptra, *(const void **)(v16 + 16), v55);
              }
              v83 = nullptr;
              v22 = *(_QWORD *)(v16 + 48);
              v85.m128i_i64[1] = v22;
              if ( v22 )
              {
                v56 = v22;
                v83 = (void *)qalloc_or_throw(v22);
                memcpy(v83, *(const void **)(v16 + 40), v56);
              }
              v23 = *(_QWORD *)(v16 + 64);
              v24 = *(_QWORD *)(v16 + 72);
              v25 = *(__m128i **)v12;
              v26 = *(_QWORD *)(v12 + 8);
              v96 = v23;
              v97 = v24;
              v27 = (char *)((char *)v17 - (char *)v25);
              if ( *(_QWORD *)(v12 + 16) < (unsigned __int64)(v26 + 1) )
              {
                v90 = (char *)((char *)v17 - (char *)v25);
                v54 = qvector_reserve(v12, v25, v26 + 1, 80);
                v27 = v90;
                *(_QWORD *)v12 = v54;
                v17 = (__m128i *)&v27[v54];
                v26 = *(_QWORD *)(v12 + 8);
              }
              v16 += 80;
              memmove(&v17[5], v17, 80 * v26 - (_QWORD)v27);
              v28 = _mm_loadl_epi64(&v85);
              v17[4].m128i_i64[0] = v23;
              v29 = _mm_load_si128(&v86);
              v17[4].m128i_i64[1] = v24;
              v17[1].m128i_i64[0] = (__int64)ptra;
              *(__m128i *)((char *)v17 + 24) = _mm_unpacklo_epi64(v28, v28);
              v30 = _mm_loadl_epi64((const __m128i *)&v85.m128i_u64[1]);
              v17[2].m128i_i64[1] = (__int64)v83;
              *v17 = v29;
              v17[3] = _mm_unpacklo_epi64(v30, v30);
              v15 = *(_QWORD *)(v12 + 8) + 1LL;
              *(_QWORD *)(v12 + 8) = v15;
            }
            while ( v88 != v16 );
LABEL_30:
            v31 = (__int64 *)v93;
          }
LABEL_31:
          if ( v31 )
          {
            *(_QWORD *)&v94 = 0;
            qfree(v31);
          }
          ++v87;
          v91 += 24;
          if ( v87 == v92 )
            goto LABEL_34;
        }
        v57 = v89[6];
        v58 = v57;
        if ( v89[7] < (unsigned __int64)(v57 + 1) )
        {
          v73 = v89;
          v74 = qvector_reserve(v89 + 5, v89[5], v57 + 1, 24);
          v73[5] = v74;
          v10 = v74;
          v57 = v73[6];
        }
        v59 = v91;
        v60 = v10 + 24 * v57;
        v61 = v89;
        *(_QWORD *)v60 = 0;
        *(_OWORD *)(v60 + 8) = 0;
        ++v61[6];
        v62 = (_QWORD *)(a2[5] + v59);
        v63 = *(_QWORD *)v60;
        v64 = _mm_loadu_si128((const __m128i *)(v60 + 8));
        *(_QWORD *)v60 = *v62;
        *(_QWORD *)(v60 + 8) = v62[1];
        *(_QWORD *)(v60 + 16) = v62[2];
        *v62 = v63;
        v31 = (__int64 *)v93;
        *(__m128i *)(v62 + 1) = v64;
        v65 = &v31[v94];
        if ( v65 == v31 )
          goto LABEL_31;
        do
        {
          v66 = *v31++;
          *(_DWORD *)(v61[2] + 4 * v66) = v58;
        }
        while ( v65 != v31 );
        goto LABEL_30;
      }
    }
LABEL_34:
    v32 = *(void (__fastcall **)(_QWORD *))(*a2 + 8LL);
    if ( v32 == sub_7DECE0 )
    {
      sub_7DEB40(a2);
      operator delete(a2, 0x70u);
    }
    else
    {
      v32(a2);
    }
  }
}
