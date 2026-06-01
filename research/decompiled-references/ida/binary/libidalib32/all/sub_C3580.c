__int64 __fastcall sub_C3580(__int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rax
  size_t v18; // rbx
  void *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 *v22; // r13
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rsi
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // rax
  const void *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rsi
  __m128i v42; // xmm0
  bool v43; // cf
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rbx
  __int64 v47; // rdx
  unsigned __int64 v48; // rbp
  __int64 v49; // rcx
  __m128i v50; // xmm0
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rbx
  __int64 v54; // rsi
  unsigned __int64 v55; // rbp
  __int64 v56; // rdi
  __m128i v57; // xmm0
  unsigned __int64 v58; // rax
  __int64 v59; // [rsp+0h] [rbp-88h]
  unsigned __int64 v60; // [rsp+8h] [rbp-80h]
  __int64 v61; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v62; // [rsp+18h] [rbp-70h]
  void *v63; // [rsp+20h] [rbp-68h] BYREF
  __m128i v64; // [rsp+28h] [rbp-60h] BYREF
  int v65; // [rsp+38h] [rbp-50h]
  unsigned __int64 v66; // [rsp+48h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( a2 >= 0 && a2 < (unsigned __int64)xmmword_251378 )
  {
    v3 = qword_251370 + 56LL * a2;
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 32) == 0xFF )
      {
        ++*(_DWORD *)(a1 + 24);
        v5 = *(_QWORD *)(v3 + 8);
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( *(_QWORD *)(a1 + 8) < v6 )
            *(_QWORD *)(a1 + 8) = v6;
        }
        v7 = sub_C3500(a2);
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v7 )
          *(_QWORD *)(a1 + 16) = v7;
        v8 = *(int *)(v3 + 44);
        if ( (int)v8 < *(_DWORD *)(dbg + 64LL) )
        {
          v9 = *(_QWORD *)(dbg + 56LL) + 32 * v8;
          if ( (*(_BYTE *)(v9 + 9) & 1) == 0 )
          {
            if ( *(_QWORD *)(v9 + 16) )
            {
              v10 = *(_QWORD *)(a1 + 64);
              v11 = *(_QWORD *)(a1 + 72);
              if ( v11 < v10 + 1 )
              {
                v35 = qvector_reserve();
                v36 = *(_QWORD *)(a1 + 64);
                v37 = *(_QWORD *)(a1 + 72);
                *(_QWORD *)(a1 + 72) = v11;
                v38 = *(__int64 **)(a1 + 56);
                v12 = v35;
                v39 = v36 - 1;
                if ( v39 >= 0 )
                {
                  v40 = v35;
                  do
                  {
                    v41 = *v38;
                    v42 = _mm_loadu_si128((const __m128i *)(v38 + 1));
                    v40 += 24;
                    *(_OWORD *)(v38 + 1) = 0;
                    *v38 = 0;
                    v38 += 3;
                    *(_QWORD *)(v40 - 24) = v41;
                    *(__m128i *)(v40 - 16) = v42;
                    v43 = v39-- == 0;
                  }
                  while ( !v43 );
                }
                qfree();
                *(_QWORD *)(a1 + 56) = v12;
                v10 = *(_QWORD *)(a1 + 64);
                *(_QWORD *)(a1 + 72) = v37;
              }
              else
              {
                v12 = *(_QWORD *)(a1 + 56);
              }
              v13 = v12 + 24 * v10;
              *(_QWORD *)v13 = 0;
              *(_OWORD *)(v13 + 8) = 0;
              ++*(_QWORD *)(a1 + 64);
            }
          }
        }
        v14 = *(_QWORD *)(a1 + 40);
        v15 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v14 + 1) )
        {
          v29 = qvector_reserve();
          *(_QWORD *)(a1 + 32) = v29;
          v15 = v29;
          v14 = *(_QWORD *)(a1 + 40);
        }
        *(_DWORD *)(v15 + 4 * v14) = a2;
        ++*(_QWORD *)(a1 + 40);
      }
      else
      {
        v17 = *(_QWORD *)(a1 + 64);
        v18 = *(_QWORD *)(v3 + 8);
        v19 = nullptr;
        v63 = nullptr;
        v20 = 3 * v17;
        v21 = *(_QWORD *)(a1 + 56);
        v64 = 0;
        v22 = (unsigned __int64 *)(v21 + 8 * v20 - 24);
        if ( v18 )
        {
          v30 = (void *)qalloc_or_throw();
          v31 = *(const void **)v3;
          v64.m128i_i64[1] = v18;
          v63 = v30;
          v19 = v30;
          memcpy(v30, v31, v18);
          v64.m128i_i64[0] = v18;
        }
        v23 = v22[1];
        v24 = *v22;
        v65 = a2;
        v25 = v22[2];
        v26 = v23 + 1;
        if ( (unsigned __int64)&v63 >= v24 && (unsigned __int64)&v63 < v24 + 32 * v25 )
        {
          v63 = nullptr;
          v32 = v64.m128i_i64[1];
          v64 = 0;
          v61 = v32;
          if ( v25 < v26 )
          {
            v24 = qvector_reserve();
            v51 = v22[1];
            v52 = v22[2];
            v22[2] = v25;
            v53 = *v22;
            v62 = v52;
            v54 = v51 - 1;
            if ( v54 >= 0 )
            {
              v55 = v24;
              do
              {
                v56 = *(_QWORD *)v53;
                v57 = _mm_loadu_si128((const __m128i *)(v53 + 8));
                *(_QWORD *)v53 = 0;
                *(_QWORD *)(v53 + 16) = 0;
                *(_QWORD *)v55 = v56;
                *(__m128i *)(v55 + 8) = v57;
                *(_DWORD *)(v55 + 24) = *(_DWORD *)(v53 + 24);
                if ( *(_QWORD *)v53 )
                {
                  *(_QWORD *)(v53 + 8) = 0;
                  qfree();
                }
                v53 += 32LL;
                v55 += 32LL;
                v43 = v54-- == 0;
              }
              while ( !v43 );
            }
            qfree();
            v58 = v62;
            v23 = v22[1];
            *v22 = v24;
            v22[2] = v58;
          }
          v33 = v24 + 32 * v23;
          v34 = _mm_loadh_ps((const double *)&v61);
          *(_QWORD *)v33 = v19;
          *(_DWORD *)(v33 + 24) = a2;
          *(__m128 *)(v33 + 8) = v34;
        }
        else
        {
          if ( v25 < v26 )
          {
            v24 = qvector_reserve();
            v44 = v22[1];
            v45 = v22[2];
            v22[2] = v25;
            v46 = *v22;
            v60 = v45;
            v47 = v44 - 1;
            if ( v47 >= 0 )
            {
              v48 = v24;
              do
              {
                v49 = *(_QWORD *)v46;
                v50 = _mm_loadu_si128((const __m128i *)(v46 + 8));
                *(_QWORD *)v46 = 0;
                *(_QWORD *)(v46 + 16) = 0;
                *(_QWORD *)v48 = v49;
                *(__m128i *)(v48 + 8) = v50;
                *(_DWORD *)(v48 + 24) = *(_DWORD *)(v46 + 24);
                if ( *(_QWORD *)v46 )
                {
                  *(_QWORD *)(v46 + 8) = 0;
                  v59 = v47;
                  qfree();
                  v47 = v59;
                }
                v46 += 32LL;
                v48 += 32LL;
                v43 = v47-- == 0;
              }
              while ( !v43 );
            }
            qfree();
            v23 = v22[1];
            *v22 = v24;
            v22[2] = v60;
          }
          v27 = _mm_loadu_si128(&v64);
          v28 = v24 + 32 * v23;
          *(_QWORD *)v28 = v19;
          *(_DWORD *)(v28 + 24) = a2;
          *(__m128i *)(v28 + 8) = v27;
        }
        ++v22[1];
      }
    }
  }
  return 0;
}

