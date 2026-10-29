unsigned __int64 __fastcall sub_4C55A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 i; // r12
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
  __m128i v28; // xmm1
  __m128 v29; // xmm0
  void *v30; // r13
  __m128i v31; // xmm0
  int v32; // eax
  void *v33; // rbx
  __m128i v34; // xmm0
  __int64 v35; // rax
  int v36; // ebp
  __m128i v37; // xmm2
  __m128i v38; // xmm0
  void *v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // r13
  __m128i v42; // xmm0
  void *v43; // rdi
  __m128i v44; // xmm0
  __int64 v45; // rax
  __m128i v46; // xmm0
  __m128i v48; // [rsp+0h] [rbp-138h] BYREF
  __int64 v49; // [rsp+10h] [rbp-128h] BYREF
  _OWORD *v50; // [rsp+18h] [rbp-120h]
  __m128i v51; // [rsp+20h] [rbp-118h] BYREF
  __m128i v52; // [rsp+30h] [rbp-108h] BYREF
  __m128i v53; // [rsp+40h] [rbp-F8h] BYREF
  int v54; // [rsp+50h] [rbp-E8h]
  __int64 v55; // [rsp+60h] [rbp-D8h]
  __m128i v56; // [rsp+68h] [rbp-D0h]
  __m128i v57; // [rsp+78h] [rbp-C0h] BYREF
  int v58; // [rsp+88h] [rbp-B0h]
  _OWORD v59[2]; // [rsp+90h] [rbp-A8h] BYREF
  int v60; // [rsp+B0h] [rbp-88h]
  void *ptr[2]; // [rsp+B8h] [rbp-80h]
  __m128i v62; // [rsp+C8h] [rbp-70h]
  __m128i v63; // [rsp+D8h] [rbp-60h]
  int v64; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+F8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( a2 - a1 > 1536 )
  {
    v7 = a3;
    for ( i = a2; v7; i = v11 )
    {
      v10 = *(unsigned int *)(i - 8);
      --v7;
      v11 = a1 + 96;
      v12 = *(unsigned int *)(a1 + 184);
      v13 = a1
          + 32
          * (((0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) & 0xFFFFFFFFFFFFFFFELL)
           + ((__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) >> 1));
      v14 = *(_DWORD *)(v13 + 88);
      if ( (int)v12 >= v14 )
      {
        if ( (int)v12 < (int)v10 )
        {
LABEL_40:
          sub_4C49E0(a1, a1 + 96, v12, v10, a5, a6);
          goto LABEL_7;
        }
        if ( v14 >= (int)v10 )
        {
LABEL_39:
          sub_4C49E0(a1, v13, v12, v10, a5, a6);
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
      sub_4C49E0(a1, i - 96, v12, v10, a5, a6);
LABEL_7:
      for ( j = i; ; j = v20 )
      {
        for ( k = *(_DWORD *)(a1 + 88); *(_DWORD *)(v11 + 88) < k; v11 += 96LL )
          ;
        v20 = j - 96;
        if ( *(_DWORD *)(j - 8) > k )
        {
          do
            v20 -= 96LL;
          while ( *(_DWORD *)(v20 + 88) > k );
        }
        if ( v11 >= v20 )
          break;
        v21 = v11;
        v11 += 96LL;
        sub_4C49E0(v21, v20, j, v15, v16, v17);
      }
      sub_4C55A0(v11, i, v7);
      v6 = v11 - a1;
      if ( (__int64)(v11 - a1) <= 1536 )
        return v65 - __readfsqword(0x28u);
    }
    v22 = i;
    v50 = v59;
    sub_4C2710(a1, i);
    while ( i - a1 > 96 )
    {
      v31 = _mm_loadu_si128((const __m128i *)(i - 96));
      v32 = *(_DWORD *)(i - 64);
      i -= 96;
      v33 = *(void **)(i + 40);
      v52 = v31;
      v34 = _mm_loadu_si128((const __m128i *)(i + 16));
      v54 = v32;
      v53 = v34;
      if ( v33 )
        v33 = (void *)(*(__int64 (__fastcall **)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v33 + 16LL))(
                        v33,
                        v22,
                        v23,
                        v24,
                        v25,
                        v26,
                        v48.m128i_i64[0],
                        v48.m128i_i64[1],
                        v49);
      v35 = *(_QWORD *)(i + 48);
      v36 = *(_DWORD *)(i + 88);
      *(_QWORD *)(i + 48) = 0;
      v37 = _mm_loadu_si128((const __m128i *)(i + 56));
      *(_OWORD *)(i + 56) = 0;
      v38 = _mm_loadu_si128((const __m128i *)(i + 72));
      v49 = v35;
      v55 = v35;
      v58 = v36;
      v48 = v37;
      v56 = v37;
      v57 = v38;
      if ( a1 != i )
      {
        v39 = *(void **)(i + 40);
        if ( v39 )
        {
          qfree(v39);
          *(_QWORD *)(i + 40) = 0;
        }
        *(__m128i *)i = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)(i + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_DWORD *)(i + 32) = *(_DWORD *)(a1 + 32);
        v40 = *(_QWORD *)(a1 + 40);
        if ( v40 )
          *(_QWORD *)(i + 40) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v40 + 16LL))(
                                  v40,
                                  v22,
                                  v23,
                                  v24,
                                  v25,
                                  v26,
                                  v48.m128i_i64[0],
                                  v48.m128i_i64[1],
                                  v49);
      }
      v41 = *(_QWORD *)(a1 + 48);
      v42 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      *(_QWORD *)(a1 + 48) = 0;
      *(_OWORD *)(a1 + 56) = 0;
      v43 = *(void **)(i + 48);
      if ( v43 )
      {
        *(_QWORD *)(i + 56) = 0;
        v51 = v42;
        qfree(v43);
        v42 = _mm_load_si128(&v51);
      }
      *(__m128i *)(i + 56) = v42;
      v44 = _mm_load_si128(&v52);
      *(_QWORD *)(i + 48) = v41;
      v45 = *(_QWORD *)(a1 + 72);
      v59[0] = v44;
      v46 = _mm_load_si128(&v53);
      *(_QWORD *)(i + 72) = v45;
      LODWORD(v45) = *(_DWORD *)(a1 + 80);
      v59[1] = v46;
      *(_DWORD *)(i + 80) = v45;
      *(_DWORD *)(i + 88) = *(_DWORD *)(a1 + 88);
      v60 = v54;
      if ( v33 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
      v64 = v36;
      v22 = 0;
      v27 = _mm_load_si128(&v48);
      v56 = 0;
      v28 = _mm_loadu_si128(&v57);
      v29 = _mm_loadh_ps((const double *)&v49);
      v62 = v27;
      v63 = v28;
      v55 = 0;
      *(__m128 *)ptr = v29;
      sub_4BF4F0(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((i - a1) >> 5), (__int64)v50);
      v30 = ptr[0];
      if ( ptr[1] )
        qfree(ptr[1]);
      if ( v30 )
        qfree(v30);
      if ( v33 )
        qfree(v33);
    }
  }
  return v65 - __readfsqword(0x28u);
}
