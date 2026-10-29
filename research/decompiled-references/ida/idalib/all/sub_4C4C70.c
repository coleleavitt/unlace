unsigned __int64 __fastcall sub_4C4C70(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 i; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 j; // rbp
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned int v22; // eax
  unsigned int v23; // edx
  __m128 v24; // xmm0
  __m128i v25; // xmm3
  __m128i v26; // xmm1
  void *v27; // r12
  __m128i v28; // xmm0
  int v29; // eax
  void *v30; // rbx
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i v33; // xmm2
  int v34; // ebp
  __m128i v35; // xmm0
  void *v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // r12
  __m128i v39; // xmm0
  void *v40; // rdi
  __m128i v41; // xmm0
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v45; // [rsp+8h] [rbp-130h] BYREF
  __m128i v46; // [rsp+10h] [rbp-128h] BYREF
  __m128i v47; // [rsp+20h] [rbp-118h] BYREF
  __m128i v48; // [rsp+30h] [rbp-108h] BYREF
  __m128i v49; // [rsp+40h] [rbp-F8h] BYREF
  int v50; // [rsp+50h] [rbp-E8h]
  __int64 v51; // [rsp+60h] [rbp-D8h]
  __m128i v52; // [rsp+68h] [rbp-D0h]
  __m128i v53; // [rsp+78h] [rbp-C0h] BYREF
  int v54; // [rsp+88h] [rbp-B0h]
  _OWORD v55[2]; // [rsp+90h] [rbp-A8h] BYREF
  int v56; // [rsp+B0h] [rbp-88h]
  void *ptr[2]; // [rsp+B8h] [rbp-80h]
  __m128i v58; // [rsp+C8h] [rbp-70h]
  __m128i v59; // [rsp+D8h] [rbp-60h]
  int v60; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v61; // [rsp+F8h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( (__int64)(a2 - a1) > 1536 )
  {
    v7 = a3;
    for ( i = a2; v7; i = v10 )
    {
      v10 = a1 + 96;
      --v7;
      v11 = ((0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) & 0xFFFFFFFFFFFFFFFELL)
          + ((__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) >> 1);
      v12 = *(_DWORD *)(a1 + 176);
      v13 = a1 + 32 * v11;
      v14 = *(unsigned int *)(v13 + 80);
      if ( v12 < (unsigned int)v14 || (unsigned int)v14 >= v12 && *(_QWORD *)(a1 + 168) < *(_QWORD *)(v13 + 72) )
      {
        v15 = *(unsigned int *)(i - 16);
        if ( (unsigned int)v14 >= (unsigned int)v15 )
        {
          if ( (unsigned int)v15 < (unsigned int)v14 || (v14 = *(_QWORD *)(i - 24), *(_QWORD *)(v13 + 72) >= v14) )
          {
            if ( v12 < (unsigned int)v15 || (unsigned int)v15 >= v12 && *(_QWORD *)(a1 + 168) < *(_QWORD *)(i - 24) )
            {
LABEL_54:
              sub_4C49E0(a1, i - 96, v14, v15, a5, a6);
              goto LABEL_13;
            }
LABEL_53:
            sub_4C49E0(a1, a1 + 96, v14, v15, a5, a6);
            goto LABEL_13;
          }
        }
      }
      else
      {
        v15 = *(unsigned int *)(i - 16);
        if ( v12 < (unsigned int)v15 || (unsigned int)v15 >= v12 && *(_QWORD *)(a1 + 168) < *(_QWORD *)(i - 24) )
          goto LABEL_53;
        if ( (unsigned int)v14 < (unsigned int)v15
          || (unsigned int)v15 >= (unsigned int)v14 && *(_QWORD *)(v13 + 72) < *(_QWORD *)(i - 24) )
        {
          goto LABEL_54;
        }
      }
      sub_4C49E0(a1, v13, v14, v15, a5, a6);
LABEL_13:
      for ( j = i; ; sub_4C49E0(v21, j, v20, v16, v17, v18) )
      {
        v22 = *(_DWORD *)(a1 + 80);
        while ( 1 )
        {
          v23 = *(_DWORD *)(v10 + 80);
          if ( v23 >= v22 )
          {
            if ( v22 < v23 )
              break;
            v16 = *(_QWORD *)(a1 + 72);
            if ( *(_QWORD *)(v10 + 72) >= v16 )
              break;
          }
          v10 += 96LL;
        }
        do
        {
          do
          {
            v20 = *(unsigned int *)(j - 16);
            j -= 96LL;
          }
          while ( v22 < (unsigned int)v20 );
        }
        while ( (unsigned int)v20 >= v22 && *(_QWORD *)(a1 + 72) < *(_QWORD *)(j + 72) );
        if ( v10 >= j )
          break;
        v21 = v10;
        v10 += 96LL;
      }
      sub_4C4C70(v10, i, v7);
      v6 = v10 - a1;
      if ( (__int64)(v10 - a1) <= 1536 )
        return v61 - __readfsqword(0x28u);
    }
    sub_4C2240(a1, i, i);
    while ( (__int64)(i - a1) > 96 )
    {
      v28 = _mm_loadu_si128((const __m128i *)(i - 96));
      v29 = *(_DWORD *)(i - 64);
      i -= 96LL;
      v30 = *(void **)(i + 40);
      v48 = v28;
      v31 = _mm_loadu_si128((const __m128i *)(i + 16));
      v50 = v29;
      v49 = v31;
      if ( v30 )
        v30 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
      v32 = *(_QWORD *)(i + 48);
      v33 = _mm_loadu_si128((const __m128i *)(i + 56));
      *(_QWORD *)(i + 48) = 0;
      v34 = *(_DWORD *)(i + 88);
      *(_OWORD *)(i + 56) = 0;
      v35 = _mm_loadu_si128((const __m128i *)(i + 72));
      v45 = v32;
      v51 = v32;
      v54 = v34;
      v46 = v33;
      v52 = v33;
      v53 = v35;
      if ( a1 != i )
      {
        v36 = *(void **)(i + 40);
        if ( v36 )
        {
          qfree(v36);
          *(_QWORD *)(i + 40) = 0;
        }
        *(__m128i *)i = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)(i + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_DWORD *)(i + 32) = *(_DWORD *)(a1 + 32);
        v37 = *(_QWORD *)(a1 + 40);
        if ( v37 )
          *(_QWORD *)(i + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = *(_QWORD *)(a1 + 48);
      v39 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      *(_QWORD *)(a1 + 48) = 0;
      *(_OWORD *)(a1 + 56) = 0;
      v40 = *(void **)(i + 48);
      if ( v40 )
      {
        *(_QWORD *)(i + 56) = 0;
        v47 = v39;
        qfree(v40);
        v39 = _mm_load_si128(&v47);
      }
      *(__m128i *)(i + 56) = v39;
      v41 = _mm_load_si128(&v48);
      *(_QWORD *)(i + 48) = v38;
      v42 = *(_QWORD *)(a1 + 72);
      v55[0] = v41;
      v43 = _mm_load_si128(&v49);
      *(_QWORD *)(i + 72) = v42;
      LODWORD(v42) = *(_DWORD *)(a1 + 80);
      v55[1] = v43;
      *(_DWORD *)(i + 80) = v42;
      *(_DWORD *)(i + 88) = *(_DWORD *)(a1 + 88);
      v56 = v50;
      if ( v30 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
      v60 = v34;
      v52 = 0;
      v24 = _mm_loadh_ps((const double *)&v45);
      v25 = _mm_load_si128(&v46);
      v26 = _mm_loadu_si128(&v53);
      v51 = 0;
      v58 = v25;
      v59 = v26;
      *(__m128 *)ptr = v24;
      sub_4BF020(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 5), (__int64)v55);
      v27 = ptr[0];
      if ( ptr[1] )
        qfree(ptr[1]);
      if ( v27 )
        qfree(v27);
      if ( v30 )
        qfree(v30);
    }
  }
  return v61 - __readfsqword(0x28u);
}
