unsigned __int64 __fastcall sub_4AE1D0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r13
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
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i v29; // xmm3
  __m128i v30; // xmm1
  __m128 v31; // xmm0
  void *v32; // r13
  __m128i v33; // xmm0
  int v34; // eax
  __int64 v35; // rbx
  __m128i v36; // xmm0
  __int64 v37; // rax
  __m128i v38; // xmm2
  int v39; // ebp
  __m128i v40; // xmm0
  void *v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // r13
  __m128i v44; // xmm0
  void *v45; // rdi
  __m128i v46; // xmm0
  __int64 v47; // rax
  __m128i v48; // xmm0
  __m128i v50; // [rsp+0h] [rbp-138h] BYREF
  __int64 v51; // [rsp+10h] [rbp-128h] BYREF
  __m128i *v52; // [rsp+18h] [rbp-120h]
  __m128i v53; // [rsp+20h] [rbp-118h] BYREF
  __m128i v54; // [rsp+30h] [rbp-108h] BYREF
  __m128i v55; // [rsp+40h] [rbp-F8h] BYREF
  int v56; // [rsp+50h] [rbp-E8h]
  __int64 v57; // [rsp+58h] [rbp-E0h]
  __int64 v58; // [rsp+60h] [rbp-D8h]
  __m128i v59; // [rsp+68h] [rbp-D0h]
  __m128i v60; // [rsp+78h] [rbp-C0h] BYREF
  int v61; // [rsp+88h] [rbp-B0h]
  _OWORD v62[2]; // [rsp+90h] [rbp-A8h] BYREF
  int v63; // [rsp+B0h] [rbp-88h]
  void *ptr[2]; // [rsp+B8h] [rbp-80h]
  __m128i v65; // [rsp+C8h] [rbp-70h]
  __m128i v66; // [rsp+D8h] [rbp-60h]
  int v67; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+F8h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( (__int64)(a2 - a1) > 1536 )
  {
    v7 = a3;
    for ( i = a2; v7; i = v10 )
    {
      --v7;
      v10 = a1 + 96;
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
LABEL_52:
              sub_4ADFA0(a1, i - 96, v14, v15, a5, a6);
              goto LABEL_13;
            }
LABEL_51:
            sub_4ADFA0(a1, a1 + 96, v14, v15, a5, a6);
            goto LABEL_13;
          }
        }
      }
      else
      {
        v15 = *(unsigned int *)(i - 16);
        if ( v12 < (unsigned int)v15 || (unsigned int)v15 >= v12 && *(_QWORD *)(a1 + 168) < *(_QWORD *)(i - 24) )
          goto LABEL_51;
        if ( (unsigned int)v14 < (unsigned int)v15
          || (unsigned int)v15 >= (unsigned int)v14 && *(_QWORD *)(v13 + 72) < *(_QWORD *)(i - 24) )
        {
          goto LABEL_52;
        }
      }
      sub_4ADFA0(a1, v13, v14, v15, a5, a6);
LABEL_13:
      for ( j = i; ; sub_4ADFA0(v21, j, v20, v16, v17, v18) )
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
      sub_4AE1D0(v10, i, v7);
      v6 = v10 - a1;
      if ( (__int64)(v10 - a1) <= 1536 )
        return v68 - __readfsqword(0x28u);
    }
    v24 = i;
    sub_4ABB90(a1, i, i);
    if ( (__int64)(i - a1) > 96 )
    {
      v52 = &v54;
      do
      {
        v33 = _mm_loadu_si128((const __m128i *)(i - 96));
        v34 = *(_DWORD *)(i - 64);
        i -= 96LL;
        v35 = *(_QWORD *)(i + 40);
        v54 = v33;
        v36 = _mm_loadu_si128((const __m128i *)(i + 16));
        v56 = v34;
        v55 = v36;
        if ( v35 )
          v35 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v35 + 16LL))(
                  v35,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28,
                  v50.m128i_i64[0],
                  v50.m128i_i64[1],
                  v51);
        v37 = *(_QWORD *)(i + 48);
        v38 = _mm_loadu_si128((const __m128i *)(i + 56));
        *(_QWORD *)(i + 48) = 0;
        v39 = *(_DWORD *)(i + 88);
        *(_OWORD *)(i + 56) = 0;
        v40 = _mm_loadu_si128((const __m128i *)(i + 72));
        v51 = v37;
        v58 = v37;
        v61 = v39;
        v50 = v38;
        v59 = v38;
        v60 = v40;
        if ( a1 != i )
        {
          v41 = *(void **)(i + 40);
          if ( v41 )
          {
            qfree(v41);
            *(_QWORD *)(i + 40) = 0;
          }
          *(__m128i *)i = _mm_loadu_si128((const __m128i *)a1);
          *(__m128i *)(i + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
          *(_DWORD *)(i + 32) = *(_DWORD *)(a1 + 32);
          v42 = *(_QWORD *)(a1 + 40);
          if ( v42 )
            *(_QWORD *)(i + 40) = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v42 + 16LL))(
                                    v42,
                                    v24,
                                    v25,
                                    v26,
                                    v27,
                                    v28,
                                    v50.m128i_i64[0],
                                    v50.m128i_i64[1],
                                    v51);
        }
        v43 = *(_QWORD *)(a1 + 48);
        v44 = _mm_loadu_si128((const __m128i *)(a1 + 56));
        *(_QWORD *)(a1 + 48) = 0;
        *(_OWORD *)(a1 + 56) = 0;
        v45 = *(void **)(i + 48);
        if ( v45 )
        {
          *(_QWORD *)(i + 56) = 0;
          v53 = v44;
          qfree(v45);
          v44 = _mm_load_si128(&v53);
        }
        *(__m128i *)(i + 56) = v44;
        v46 = _mm_load_si128(&v54);
        *(_QWORD *)(i + 48) = v43;
        v47 = *(_QWORD *)(a1 + 72);
        v62[0] = v46;
        v48 = _mm_load_si128(&v55);
        *(_QWORD *)(i + 72) = v47;
        LODWORD(v47) = *(_DWORD *)(a1 + 80);
        v62[1] = v48;
        *(_DWORD *)(i + 80) = v47;
        *(_DWORD *)(i + 88) = *(_DWORD *)(a1 + 88);
        v63 = v56;
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        v67 = v39;
        v24 = 0;
        v29 = _mm_load_si128(&v50);
        v59 = 0;
        v30 = _mm_loadu_si128(&v60);
        v31 = _mm_loadh_ps((const double *)&v51);
        v58 = 0;
        v65 = v29;
        v66 = v30;
        *(__m128 *)ptr = v31;
        sub_4A85B0(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 5), (__int64)v62);
        v32 = ptr[0];
        if ( ptr[1] )
          qfree(ptr[1]);
        if ( v32 )
          qfree(v32);
        v57 = v35;
        sub_4A82A0(v52);
      }
      while ( (__int64)(i - a1) > 96 );
    }
  }
  return v68 - __readfsqword(0x28u);
}

