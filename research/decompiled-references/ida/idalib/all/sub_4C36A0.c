unsigned __int64 __fastcall sub_4C36A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 i; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 j; // rdx
  int k; // eax
  unsigned __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm3
  __m128 v28; // xmm0
  void *v29; // r13
  __m128i v30; // xmm0
  int v31; // eax
  void *v32; // rbx
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm2
  int v36; // ebp
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // r13
  __m128i v41; // xmm0
  void *v42; // rdi
  __m128i v43; // xmm0
  __int64 v44; // rax
  __m128i v45; // xmm0
  __m128i v47; // [rsp+0h] [rbp-128h] BYREF
  __int64 v48; // [rsp+10h] [rbp-118h] BYREF
  _OWORD *v49; // [rsp+18h] [rbp-110h]
  __m128i v50; // [rsp+20h] [rbp-108h] BYREF
  __m128i v51; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v52; // [rsp+40h] [rbp-E8h] BYREF
  int v53; // [rsp+50h] [rbp-D8h]
  __int64 v54; // [rsp+60h] [rbp-C8h]
  __m128i v55; // [rsp+68h] [rbp-C0h]
  __int64 v56; // [rsp+78h] [rbp-B0h]
  int v57; // [rsp+80h] [rbp-A8h]
  _OWORD v58[2]; // [rsp+90h] [rbp-98h] BYREF
  int v59; // [rsp+B0h] [rbp-78h]
  void *ptr[2]; // [rsp+B8h] [rbp-70h]
  __m128i v61; // [rsp+C8h] [rbp-60h]
  __int64 v62; // [rsp+D8h] [rbp-50h]
  int v63; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v64; // [rsp+E8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( a2 - a1 > 1408 )
  {
    v7 = a3;
    for ( i = a2; v7; i = v11 )
    {
      v10 = *(unsigned int *)(i - 8);
      --v7;
      v11 = a1 + 88;
      v12 = *(unsigned int *)(a1 + 168);
      v13 = a1 + 88 * ((0x2E8BA2E8BA2E8BA3LL * (v6 >> 3)) >> 1);
      v14 = *(_DWORD *)(v13 + 80);
      if ( (int)v12 >= v14 )
      {
        if ( (int)v12 < (int)v10 )
        {
LABEL_40:
          sub_4C2960(a1, a1 + 88, v12, v10, a5, a6);
          goto LABEL_7;
        }
        if ( v14 >= (int)v10 )
        {
LABEL_39:
          sub_4C2960(a1, v13, v12, v10, a5, a6);
          goto LABEL_7;
        }
      }
      else
      {
        if ( v14 < (int)v10 )
          goto LABEL_39;
        if ( (int)v12 >= (int)v10 )
          goto LABEL_40;
      }
      sub_4C2960(a1, i - 88, v12, v10, a5, a6);
LABEL_7:
      for ( j = i; ; j = v20 )
      {
        for ( k = *(_DWORD *)(a1 + 80); *(_DWORD *)(v11 + 80) < k; v11 += 88LL )
          ;
        v20 = j - 88;
        if ( *(_DWORD *)(j - 8) > k )
        {
          do
            v20 -= 88LL;
          while ( *(_DWORD *)(v20 + 80) > k );
        }
        if ( v11 >= v20 )
          break;
        v21 = v11;
        v11 += 88LL;
        sub_4C2960(v21, v20, j, v15, v16, v17);
      }
      sub_4C36A0(v11, i, v7);
      v6 = v11 - a1;
      if ( (__int64)(v11 - a1) <= 1408 )
        return v64 - __readfsqword(0x28u);
    }
    v22 = i;
    v49 = v58;
    sub_4C1FF0(a1, i);
    while ( i - a1 > 88 )
    {
      v30 = _mm_loadu_si128((const __m128i *)(i - 88));
      v31 = *(_DWORD *)(i - 56);
      i -= 88;
      v32 = *(void **)(i + 40);
      v51 = v30;
      v33 = _mm_loadu_si128((const __m128i *)(i + 16));
      v53 = v31;
      v52 = v33;
      if ( v32 )
        v32 = (void *)(*(__int64 (__fastcall **)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v32 + 16LL))(
                        v32,
                        v22,
                        v23,
                        v24,
                        v25,
                        v26,
                        v47.m128i_i64[0],
                        v47.m128i_i64[1],
                        v48);
      v34 = *(_QWORD *)(i + 48);
      v35 = _mm_loadu_si128((const __m128i *)(i + 56));
      *(_QWORD *)(i + 48) = 0;
      v36 = *(_DWORD *)(i + 80);
      *(_OWORD *)(i + 56) = 0;
      v48 = v34;
      v54 = v34;
      v37 = *(_QWORD *)(i + 72);
      v57 = v36;
      v56 = v37;
      v47 = v35;
      v55 = v35;
      if ( a1 != i )
      {
        v38 = *(void **)(i + 40);
        if ( v38 )
        {
          qfree(v38);
          *(_QWORD *)(i + 40) = 0;
        }
        *(__m128i *)i = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)(i + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_DWORD *)(i + 32) = *(_DWORD *)(a1 + 32);
        v39 = *(_QWORD *)(a1 + 40);
        if ( v39 )
          *(_QWORD *)(i + 40) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v39 + 16LL))(
                                  v39,
                                  v22,
                                  v23,
                                  v24,
                                  v25,
                                  v26,
                                  v47.m128i_i64[0],
                                  v47.m128i_i64[1],
                                  v48);
      }
      v40 = *(_QWORD *)(a1 + 48);
      v41 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      *(_QWORD *)(a1 + 48) = 0;
      *(_OWORD *)(a1 + 56) = 0;
      v42 = *(void **)(i + 48);
      if ( v42 )
      {
        *(_QWORD *)(i + 56) = 0;
        v50 = v41;
        qfree(v42);
        v41 = _mm_load_si128(&v50);
      }
      *(__m128i *)(i + 56) = v41;
      v43 = _mm_load_si128(&v51);
      *(_QWORD *)(i + 48) = v40;
      v44 = *(_QWORD *)(a1 + 72);
      v58[0] = v43;
      v45 = _mm_load_si128(&v52);
      *(_QWORD *)(i + 72) = v44;
      LODWORD(v44) = *(_DWORD *)(a1 + 80);
      v58[1] = v45;
      *(_DWORD *)(i + 80) = v44;
      v59 = v53;
      if ( v32 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v32 + 16LL))(v32);
      v27 = _mm_load_si128(&v47);
      v22 = 0;
      v63 = v36;
      v28 = _mm_loadh_ps((const double *)&v48);
      v54 = 0;
      v62 = v56;
      v61 = v27;
      v55 = 0;
      *(__m128 *)ptr = v28;
      sub_4C0C60(a1, 0, 0x2E8BA2E8BA2E8BA3LL * ((i - a1) >> 3), (__int64)v49);
      v29 = ptr[0];
      if ( ptr[1] )
        qfree(ptr[1]);
      if ( v29 )
        qfree(v29);
      if ( v32 )
        qfree(v32);
    }
  }
  return v64 - __readfsqword(0x28u);
}
