unsigned __int64 __fastcall sub_49A0C0(QT::QAbstractItemView *a1)
{
  __int64 *v1; // rbp
  __int64 (__fastcall *v2)(__int64 *, __m128i *); // rax
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  const __m128i *v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rax
  const __m128i *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rsi
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  void *v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  __m128i v20; // kr00_16
  __int64 v21; // r12
  char *v22; // rcx
  __int64 v23; // rax
  char *v24; // rsi
  __m128i v25; // kr10_16
  __int64 v26; // rax
  _QWORD *v28; // rdi
  void *v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // r9
  unsigned __int64 v32; // rcx
  char *v33; // rax
  __m128i *v34; // rax
  int v35; // [rsp+Ch] [rbp-BCh]
  __int64 v36; // [rsp+20h] [rbp-A8h]
  __int64 v37; // [rsp+20h] [rbp-A8h]
  __m128i *v38; // [rsp+20h] [rbp-A8h]
  __int64 v39; // [rsp+20h] [rbp-A8h]
  __int64 v40; // [rsp+20h] [rbp-A8h]
  void *ptr[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v43; // [rsp+40h] [rbp-88h]
  _QWORD v44[4]; // [rsp+50h] [rbp-78h] BYREF
  __m128i v45; // [rsp+70h] [rbp-58h] BYREF
  __int64 v46; // [rsp+80h] [rbp-48h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v1 = (__int64 *)QT::QAbstractItemView::model(a1);
  v2 = *(__int64 (__fastcall **)(__int64 *, __m128i *))(*v1 + 120);
  v45 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v46 = 0;
  v3 = v2(v1, &v45);
  v5 = v3;
  v35 = v3;
  *(_OWORD *)ptr = 0;
  v43 = 0;
  if ( v3 < 0LL )
    v5 = 0;
  v6 = QT::QArrayData::allocate(&v45, 24, 16, v5, 1, v4);
  v7 = (const __m128i *)ptr[1];
  v8 = (__m128i)(unsigned __int64)v6;
  v9 = v45.m128i_i64[0];
  v10 = (const __m128i *)((char *)ptr[1] + 24 * v43);
  if ( ptr[1] == v10 || ptr[1] >= v10 )
  {
    v12 = 0;
  }
  else
  {
    v11 = v8.m128i_i64[0];
    v12 = 0;
    v13 = v8;
    do
    {
      v14 = _mm_loadu_si128(v7);
      v7 = (const __m128i *)((char *)v7 + 24);
      ++v12;
      v11 += 24;
      *(__m128i *)(v11 - 24) = v14;
      *(_QWORD *)(v11 - 8) = v7[-1].m128i_i64[1];
    }
    while ( v7 < v10 );
    v8 = v13;
  }
  if ( v9 )
    *(_DWORD *)(v9 + 4) |= 1u;
  v15 = ptr[0];
  v43 = v12;
  *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, v8);
  if ( v15 && !_InterlockedSub((volatile signed __int32 *)v15, 1u) )
    free(v15);
  v16 = 0;
  if ( v35 > 0 )
  {
    while ( 1 )
    {
      v17 = *v1;
      v44[0] = -1;
      v44[1] = 0;
      v44[2] = 0;
      (*(void (__fastcall **)(__m128i *, __int64 *, _QWORD, _QWORD, _QWORD *))(v17 + 96))(&v45, v1, v16, 0, v44);
      v19 = v43;
      if ( !ptr[0] )
      {
        v25 = v45;
        v21 = v46;
        v37 = v43;
        sub_3FB980((__m128i *)ptr, 0, 1, 0, v43, v18);
        v24 = (char *)ptr[1];
        v23 = v43;
        v19 = v37;
        v20 = v25;
        goto LABEL_20;
      }
      if ( *(int *)ptr[0] > 1 )
        break;
      v28 = ptr[1];
      v29 = (void *)(((unsigned __int64)ptr[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *((_QWORD *)ptr[0] + 1) - 0xAAAAAAAAAAAAAAABLL * (((char *)ptr[1] - (char *)v29) >> 3) == v43 )
      {
        if ( v43 || v29 == ptr[1] )
        {
          v21 = v46;
          v20 = v45;
          if ( *(int *)ptr[0] <= 1 )
          {
            v24 = (char *)ptr[1];
            v30 = *((_QWORD *)ptr[0] + 1);
            v31 = (__int64)ptr[1] - (((unsigned __int64)ptr[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
            v32 = 0xAAAAAAAAAAAAAAABLL * (v31 >> 3);
            v23 = v43;
            if ( (__int64)(v30 - v43 - v32) > 0 )
              goto LABEL_20;
            if ( v31 <= 0 )
            {
              v40 = v43;
              sub_3FB980((__m128i *)ptr, 0, 1, 0, v43, v31);
              v19 = v40;
              v22 = (char *)ptr[1];
              goto LABEL_18;
            }
            v18 = 3 * v43;
            if ( 3 * v43 < 2 * v30 )
            {
              v22 = (char *)ptr[1] - 24 * v32;
              if ( v43 && v22 != ptr[1] && ptr[1] && v22 )
              {
                v39 = v43;
                v33 = (char *)memmove(v22, ptr[1], 24 * v43);
                v19 = v39;
                v22 = v33;
              }
              ptr[1] = v22;
LABEL_18:
              v23 = v43;
              v24 = v22;
LABEL_20:
              v38 = (__m128i *)&v24[24 * v19];
              memmove(&v38[1].m128i_u64[1], v38, 24 * (v23 - v19));
              *v38 = v20;
              v38[1].m128i_i64[0] = v21;
              ++v43;
              goto LABEL_21;
            }
          }
LABEL_17:
          v36 = v43;
          sub_3FB980((__m128i *)ptr, 0, 1, 0, v43, v18);
          v22 = (char *)ptr[1];
          v19 = v36;
          goto LABEL_18;
        }
        *(__m128i *)((char *)ptr[1] - 24) = _mm_load_si128(&v45);
        *(v28 - 1) = v46;
        ptr[1] = (char *)ptr[1] - 24;
        ++v43;
      }
      else
      {
        v34 = (__m128i *)((char *)ptr[1] + 24 * v43);
        *v34 = _mm_load_si128(&v45);
        v34[1].m128i_i64[0] = v46;
        ++v43;
      }
LABEL_21:
      if ( !ptr[0] || *(int *)ptr[0] > 1 )
        sub_3FB980((__m128i *)ptr, 0, 0, 0, v19, v18);
      if ( v35 == ++v16 )
        goto LABEL_25;
    }
    v20 = v45;
    v21 = v46;
    goto LABEL_17;
  }
LABEL_25:
  v26 = QT::QTableView::horizontalHeader(a1);
  sub_4EAA40(a1, v26, ptr, 1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v47 - __readfsqword(0x28u);
}
