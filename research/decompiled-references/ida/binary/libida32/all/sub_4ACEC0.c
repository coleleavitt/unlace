unsigned __int64 __fastcall sub_4ACEC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 i; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
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
  void *v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // r13
  __m128i v40; // xmm0
  void *v41; // rdi
  __m128i v42; // xmm0
  int v43; // eax
  __m128i v44; // xmm0
  int v45; // eax
  __m128i v47; // [rsp+0h] [rbp-118h] BYREF
  __int64 v48; // [rsp+10h] [rbp-108h] BYREF
  _OWORD *v49; // [rsp+18h] [rbp-100h]
  __m128i v50; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v51; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v52; // [rsp+40h] [rbp-D8h] BYREF
  int v53; // [rsp+50h] [rbp-C8h]
  __int64 v54; // [rsp+60h] [rbp-B8h]
  __m128i v55; // [rsp+68h] [rbp-B0h]
  int v56; // [rsp+78h] [rbp-A0h]
  int v57; // [rsp+7Ch] [rbp-9Ch]
  _OWORD v58[2]; // [rsp+80h] [rbp-98h] BYREF
  int v59; // [rsp+A0h] [rbp-78h]
  void *ptr[2]; // [rsp+A8h] [rbp-70h]
  __m128i v61; // [rsp+B8h] [rbp-60h]
  int v62; // [rsp+C8h] [rbp-50h]
  int v63; // [rsp+CCh] [rbp-4Ch]
  unsigned __int64 v64; // [rsp+D8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( a2 - a1 > 1280 )
  {
    v7 = a3;
    for ( i = a2; v7; i = v12 )
    {
      v10 = *(unsigned int *)(i - 4);
      --v7;
      v11 = *(unsigned int *)(a1 + 156);
      v12 = a1 + 80;
      v13 = a1 + 80 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v6 >> 4)) >> 1);
      v14 = *(_DWORD *)(v13 + 76);
      if ( (int)v11 >= v14 )
      {
        if ( (int)v11 < (int)v10 )
        {
LABEL_40:
          sub_4AC2B0(a1, a1 + 80, v11, v10, a5, a6);
          goto LABEL_7;
        }
        if ( v14 >= (int)v10 )
        {
LABEL_39:
          sub_4AC2B0(a1, v13, v11, v10, a5, a6);
          goto LABEL_7;
        }
      }
      else
      {
        if ( v14 < (int)v10 )
          goto LABEL_39;
        if ( (int)v11 >= (int)v10 )
          goto LABEL_40;
      }
      sub_4AC2B0(a1, i - 80, v11, v10, a5, a6);
LABEL_7:
      for ( j = i; ; j = v20 )
      {
        for ( k = *(_DWORD *)(a1 + 76); *(_DWORD *)(v12 + 76) < k; v12 += 80LL )
          ;
        v20 = j - 80;
        if ( *(_DWORD *)(j - 4) > k )
        {
          do
            v20 -= 80LL;
          while ( *(_DWORD *)(v20 + 76) > k );
        }
        if ( v12 >= v20 )
          break;
        v21 = v12;
        v12 += 80LL;
        sub_4AC2B0(v21, v20, j, v15, v16, v17);
      }
      sub_4ACEC0(v12, i, v7);
      v6 = v12 - a1;
      if ( (__int64)(v12 - a1) <= 1280 )
        return v64 - __readfsqword(0x28u);
    }
    v22 = i;
    v49 = v58;
    sub_4AB950(a1, i);
    while ( i - a1 > 80 )
    {
      v30 = _mm_loadu_si128((const __m128i *)(i - 80));
      v31 = *(_DWORD *)(i - 48);
      i -= 80;
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
      v36 = *(_DWORD *)(i + 76);
      *(_OWORD *)(i + 56) = 0;
      v48 = v34;
      v54 = v34;
      LODWORD(v34) = *(_DWORD *)(i + 72);
      v57 = v36;
      v56 = v34;
      v47 = v35;
      v55 = v35;
      if ( a1 != i )
      {
        v37 = *(void **)(i + 40);
        if ( v37 )
        {
          qfree(v37);
          *(_QWORD *)(i + 40) = 0;
        }
        *(__m128i *)i = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)(i + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_DWORD *)(i + 32) = *(_DWORD *)(a1 + 32);
        v38 = *(_QWORD *)(a1 + 40);
        if ( v38 )
          *(_QWORD *)(i + 40) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v38 + 16LL))(
                                  v38,
                                  v22,
                                  v23,
                                  v24,
                                  v25,
                                  v26,
                                  v47.m128i_i64[0],
                                  v47.m128i_i64[1],
                                  v48);
      }
      v39 = *(_QWORD *)(a1 + 48);
      v40 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      *(_QWORD *)(a1 + 48) = 0;
      *(_OWORD *)(a1 + 56) = 0;
      v41 = *(void **)(i + 48);
      if ( v41 )
      {
        *(_QWORD *)(i + 56) = 0;
        v50 = v40;
        qfree(v41);
        v40 = _mm_load_si128(&v50);
      }
      *(__m128i *)(i + 56) = v40;
      v42 = _mm_load_si128(&v51);
      *(_QWORD *)(i + 48) = v39;
      v43 = *(_DWORD *)(a1 + 72);
      v58[0] = v42;
      v44 = _mm_load_si128(&v52);
      *(_DWORD *)(i + 72) = v43;
      v45 = *(_DWORD *)(a1 + 76);
      v58[1] = v44;
      *(_DWORD *)(i + 76) = v45;
      v59 = v53;
      if ( v32 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v32 + 16LL))(v32);
      v63 = v36;
      v22 = 0;
      v27 = _mm_load_si128(&v47);
      v28 = _mm_loadh_ps((const double *)&v48);
      v54 = 0;
      v62 = v56;
      v61 = v27;
      v55 = 0;
      *(__m128 *)ptr = v28;
      sub_4AA170(a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((i - a1) >> 4), (__int64)v49);
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

