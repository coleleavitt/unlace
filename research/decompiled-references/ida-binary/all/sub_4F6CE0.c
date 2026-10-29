void __fastcall sub_4F6CE0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v6; // r14
  int *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  char *v22; // rdi
  int *v23; // rdx
  int v24; // eax
  __m128i v25; // xmm1
  __int64 v26; // rax
  signed __int64 v27; // r12
  __m128i v28; // xmm0
  __int64 v29; // rdx
  int *v30; // rdi
  __m128i v31; // xmm2
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // rax
  const void *v37; // rsi
  __int64 v38; // rax
  struct _Unwind_Exception *v39; // rbx
  __m128i v40; // [rsp+0h] [rbp-48h] BYREF
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  ptr[1] = (void *)__readfsqword(0x28u);
  if ( a2 || a4 )
  {
    v11 = *(int **)a1;
    v12 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 )
    {
      v13 = *((_QWORD *)v11 + 1);
      v14 = *(_QWORD *)(a1 + 8);
      v15 = (__int64)v11 + 31;
      v19 = *(_QWORD *)(a1 + 16);
      if ( v13 >= v12 )
        v19 = *((_QWORD *)v11 + 1);
      v17 = a3 + v19;
      a6 = (__int64)(*(_QWORD *)(a1 + 8) - (((unsigned __int64)v11 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
      if ( a2 )
      {
        v18 = v17 - a6;
        goto LABEL_16;
      }
LABEL_10:
      v18 = ((__int64)(v14 - (v15 & 0xFFFFFFFFFFFFFFF0LL)) >> 3) + v12 + v17 - v13;
LABEL_16:
      v20 = v13;
      if ( v18 >= v13 )
        v20 = v18;
      if ( (v11[1] & 1) != 0 )
        v18 = v20;
      goto LABEL_20;
    }
  }
  else
  {
    a6 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v11 = *(int **)a1;
      if ( *(int *)a6 <= 1 && a3 > 0 )
      {
        v33 = QT::QArrayData::reallocateUnaligned(
                v11,
                *(_QWORD *)(a1 + 8),
                8,
                ((__int64)(*(_QWORD *)(a1 + 8) - ((a6 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3) + *(_QWORD *)(a1 + 16) + a3,
                0);
        v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)v34);
        if ( v34 )
        {
          *(__m128i *)a1 = v35;
          return;
        }
        QT::qBadAlloc();
        goto LABEL_61;
      }
      v12 = *(_QWORD *)(a1 + 16);
      if ( a6 )
      {
        v13 = *(_QWORD *)(a6 + 8);
        v14 = *(_QWORD *)(a1 + 8);
        v15 = a6 + 31;
        v16 = v13;
        if ( v12 >= v13 )
          v16 = *(_QWORD *)(a1 + 16);
        v17 = a3 + v16;
        goto LABEL_10;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 16);
    }
  }
  v32 = 0;
  if ( v12 >= 0 )
    v32 = v12;
  v13 = 0;
  v18 = a3 + v32;
LABEL_20:
  v21 = QT::QArrayData::allocate(ptr, 8, 16, v18, v13 >= v18, a6);
  v6 = ptr[0];
  v22 = (char *)v21;
  if ( v21 && ptr[0] )
  {
    v23 = *(int **)a1;
    if ( a2 == 1 )
    {
      v38 = (*((_QWORD *)ptr[0] + 1) - a3 - *(_QWORD *)(a1 + 16)) / 2;
      if ( v38 < 0 )
        v38 = 0;
      v22 += 8 * a3 + 8 * v38;
      v24 = 0;
      if ( !v23 )
        goto LABEL_26;
    }
    else
    {
      if ( !v23 )
      {
        *((_DWORD *)ptr[0] + 1) = 0;
        v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v21);
        if ( a3 > 0 )
        {
LABEL_29:
          v26 = *(_QWORD *)(a1 + 16);
          if ( v26 )
            goto LABEL_30;
LABEL_49:
          v28 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
          v29 = 0;
          goto LABEL_35;
        }
        goto LABEL_48;
      }
      v22 = (char *)(*(_QWORD *)(a1 + 8) + v21 - (((unsigned __int64)v23 + 31) & 0xFFFFFFFFFFFFFFF0LL));
    }
    v24 = v23[1];
LABEL_26:
    *((_DWORD *)ptr[0] + 1) = v24;
  }
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v22);
  if ( a3 > 0 )
  {
    if ( v22 )
      goto LABEL_29;
LABEL_61:
    v39 = (struct _Unwind_Exception *)QT::qBadAlloc();
    if ( v6 && !_InterlockedSub((volatile signed __int32 *)v6, 1u) )
      free(v6);
    _Unwind_Resume(v39);
  }
LABEL_48:
  v26 = *(_QWORD *)(a1 + 16);
  if ( !v26 )
    goto LABEL_49;
  v26 += a3;
LABEL_30:
  v27 = 8 * v26;
  if ( *(_QWORD *)a1 && **(int **)a1 <= 1 && !a4 )
  {
    v36 = 0;
    if ( v27 )
    {
      v37 = *(const void **)(a1 + 8);
      v40 = v25;
      memcpy(v22, v37, v27);
      v25 = _mm_load_si128(&v40);
      v36 = v27 >> 3;
    }
    v30 = *(int **)a1;
    *(_QWORD *)(a1 + 16) = v36;
    *(__m128i *)a1 = v25;
    goto LABEL_37;
  }
  v28 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
  if ( v27 )
  {
    v40 = v25;
    memcpy(v22, (const void *)v28.m128i_i64[0], v27);
    v28 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
    v29 = *(_QWORD *)(a1 + 16);
    v25 = _mm_load_si128(&v40);
    v26 = v27 >> 3;
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 16);
    v26 = 0;
  }
LABEL_35:
  v30 = *(int **)a1;
  *(_QWORD *)(a1 + 16) = v26;
  *(__m128i *)a1 = v25;
  v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, v28);
  if ( a4 )
  {
    *(_QWORD *)(a4 + 16) = v29;
    v30 = *(int **)a4;
    *(__m128i *)a4 = v31;
  }
LABEL_37:
  if ( v30 )
  {
    if ( !_InterlockedSub(v30, 1u) )
      free(v30);
  }
}
