void __fastcall sub_5025F0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void **v6; // r14
  unsigned __int64 v7; // r15
  int *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  char *v23; // rdi
  int *v24; // rdx
  int v25; // eax
  __m128i v26; // xmm1
  __int64 v27; // rax
  signed __int64 v28; // r12
  __m128i v29; // xmm0
  __int64 v30; // rdx
  int *v31; // rdi
  __m128i v32; // xmm2
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __m128i v36; // xmm0
  __int64 v37; // rax
  const void *v38; // rsi
  __int64 v39; // rax
  struct _Unwind_Exception *v40; // rbx
  __m128i v41; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v42[11]; // [rsp+10h] [rbp-58h] BYREF

  v42[3] = __readfsqword(0x28u);
  if ( a2 || a4 )
  {
    v12 = *(int **)a1;
    v13 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 )
    {
      v14 = *((_QWORD *)v12 + 1);
      v15 = *(_QWORD *)(a1 + 8);
      v16 = (__int64)v12 + 31;
      v20 = *(_QWORD *)(a1 + 16);
      if ( v14 >= v13 )
        v20 = *((_QWORD *)v12 + 1);
      v18 = a3 + v20;
      a6 = (__int64)(*(_QWORD *)(a1 + 8) - (((unsigned __int64)v12 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
      if ( a2 )
      {
        v19 = v18 - a6;
        goto LABEL_16;
      }
LABEL_10:
      v19 = ((__int64)(v15 - (v16 & 0xFFFFFFFFFFFFFFF0LL)) >> 3) + v13 + v18 - v14;
LABEL_16:
      v21 = v14;
      if ( v19 >= v14 )
        v21 = v19;
      if ( (v12[1] & 1) != 0 )
        v19 = v21;
      goto LABEL_20;
    }
  }
  else
  {
    a6 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v12 = *(int **)a1;
      if ( *(int *)a6 <= 1 && a3 > 0 )
      {
        v34 = QT::QArrayData::reallocateUnaligned(
                v12,
                *(_QWORD *)(a1 + 8),
                8,
                ((__int64)(*(_QWORD *)(a1 + 8) - ((a6 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3) + *(_QWORD *)(a1 + 16) + a3,
                0);
        v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)v35);
        if ( v35 )
        {
          *(__m128i *)a1 = v36;
          return;
        }
        QT::qBadAlloc();
        goto LABEL_61;
      }
      v13 = *(_QWORD *)(a1 + 16);
      if ( a6 )
      {
        v14 = *(_QWORD *)(a6 + 8);
        v15 = *(_QWORD *)(a1 + 8);
        v16 = a6 + 31;
        v17 = v14;
        if ( v13 >= v14 )
          v17 = *(_QWORD *)(a1 + 16);
        v18 = a3 + v17;
        goto LABEL_10;
      }
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 16);
    }
  }
  v33 = 0;
  if ( v13 >= 0 )
    v33 = v13;
  v14 = 0;
  v19 = a3 + v33;
LABEL_20:
  v6 = (void **)v42;
  v22 = QT::QArrayData::allocate(v42, 8, 16, v19, v19 <= v14, a6);
  v7 = v42[0];
  v23 = (char *)v22;
  if ( v22 && v42[0] )
  {
    v24 = *(int **)a1;
    if ( a2 == 1 )
    {
      v39 = (*(_QWORD *)(v42[0] + 8LL) - a3 - *(_QWORD *)(a1 + 16)) / 2;
      if ( v39 < 0 )
        v39 = 0;
      v23 += 8 * a3 + 8 * v39;
      v25 = 0;
      if ( !v24 )
        goto LABEL_26;
    }
    else
    {
      if ( !v24 )
      {
        *(_DWORD *)(v42[0] + 4LL) = 0;
        v26 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v22);
        if ( a3 > 0 )
        {
LABEL_29:
          v27 = *(_QWORD *)(a1 + 16);
          if ( v27 )
            goto LABEL_30;
LABEL_49:
          v29 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
          v30 = 0;
          goto LABEL_35;
        }
        goto LABEL_48;
      }
      v23 = (char *)(*(_QWORD *)(a1 + 8) + v22 - (((unsigned __int64)v24 + 31) & 0xFFFFFFFFFFFFFFF0LL));
    }
    v25 = v24[1];
LABEL_26:
    *(_DWORD *)(v42[0] + 4LL) = v25;
  }
  v26 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v23);
  if ( a3 > 0 )
  {
    if ( v23 )
      goto LABEL_29;
LABEL_61:
    v40 = (struct _Unwind_Exception *)QT::qBadAlloc();
    v42[0] = v7;
    v42[1] = 0;
    v42[2] = 0;
    sub_4FC1C0(v6);
    _Unwind_Resume(v40);
  }
LABEL_48:
  v27 = *(_QWORD *)(a1 + 16);
  if ( !v27 )
    goto LABEL_49;
  v27 += a3;
LABEL_30:
  v28 = 8 * v27;
  if ( *(_QWORD *)a1 && **(int **)a1 <= 1 && !a4 )
  {
    v37 = 0;
    if ( v28 )
    {
      v38 = *(const void **)(a1 + 8);
      v41 = v26;
      memcpy(v23, v38, v28);
      v26 = _mm_load_si128(&v41);
      v37 = v28 >> 3;
    }
    v31 = *(int **)a1;
    *(_QWORD *)(a1 + 16) = v37;
    *(__m128i *)a1 = v26;
    goto LABEL_37;
  }
  v29 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
  if ( v28 )
  {
    v41 = v26;
    memcpy(v23, (const void *)v29.m128i_i64[0], v28);
    v29 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
    v30 = *(_QWORD *)(a1 + 16);
    v26 = _mm_load_si128(&v41);
    v27 = v28 >> 3;
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 16);
    v27 = 0;
  }
LABEL_35:
  v31 = *(int **)a1;
  *(_QWORD *)(a1 + 16) = v27;
  *(__m128i *)a1 = v26;
  v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, v29);
  if ( a4 )
  {
    *(_QWORD *)(a4 + 16) = v30;
    v31 = *(int **)a4;
    *(__m128i *)a4 = v32;
  }
LABEL_37:
  if ( v31 )
  {
    if ( !_InterlockedSub(v31, 1u) )
      free(v31);
  }
}
