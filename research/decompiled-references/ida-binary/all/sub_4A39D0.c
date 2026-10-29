__int64 __fastcall sub_4A39D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  __m128i v5; // xmm0
  unsigned __int64 v6; // rbx
  int v7; // ecx
  void *v8; // r15
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  char *v11; // rax
  const char *v12; // r15
  size_t v13; // r14
  unsigned __int64 v14; // rdi
  char *v15; // rax
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  const char *v24; // rsi
  __int64 v25; // rax
  __m128i v26; // [rsp+8h] [rbp-B0h] BYREF
  __m128i v27; // [rsp+18h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+28h] [rbp-90h]
  void *v29; // [rsp+40h] [rbp-78h] BYREF
  __m128i v30; // [rsp+48h] [rbp-70h] BYREF
  __int64 v31; // [rsp+58h] [rbp-60h]
  __int64 v32; // [rsp+60h] [rbp-58h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v1 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 72LL))(v1, a1);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( *(_DWORD *)(v2 + 2376) == 2 )
    v26.m128i_i64[1] = QT::QTreeView::header(*(QT::QTreeView **)(v2 + 2384));
  else
    v26.m128i_i64[1] = QT::QTableView::horizontalHeader(*(QT::QTableView **)(v2 + 2472));
  v4 = *(_QWORD *)(v3 + 2392);
  v5.m128i_i64[0] = 0;
  v6 = 0;
  v27.m128i_i64[1] = 0;
  v7 = *(_DWORD *)(v4 + 48);
  v28 = 0;
  if ( v7 )
  {
    do
    {
      while ( 1 )
      {
        v12 = *(const char **)(*(_QWORD *)(v4 + 64) + 8 * v6);
        v30 = 0;
        v29 = nullptr;
        if ( v12 )
        {
          v13 = strlen(v12);
          v26.m128i_i64[0] = v13 + 1;
          v29 = (void *)qvector_reserve(&v29, 0, v13 + 1, 1);
          v30.m128i_i64[0] = v26.m128i_i64[0];
          memmove(v29, v12, v13);
          *((_BYTE *)v29 + v13) = 0;
        }
        v25 = v28;
        v24 = (const char *)v27.m128i_i64[1];
        v14 = v28 + 1;
        if ( (unsigned __int64)&v29 < v27.m128i_i64[1]
          || (unsigned __int64)&v29 >= v27.m128i_i64[1] + 24LL * *((_QWORD *)&v28 + 1) )
        {
          break;
        }
        v8 = v29;
        v9 = _mm_loadl_epi64(&v30);
        v29 = nullptr;
        v10 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
        v30 = 0;
        if ( *((_QWORD *)&v28 + 1) < v14 )
        {
          v27.m128i_i64[0] = v10.m128i_i64[0];
          v26.m128i_i64[0] = v9.m128i_i64[0];
          v27.m128i_i64[1] = qvector_reserve(&v27.m128i_u64[1], v27.m128i_i64[1], v28 + 1, 24);
          v24 = (const char *)v27.m128i_i64[1];
          v10 = _mm_loadl_epi64(&v27);
          v25 = v28;
          v9 = _mm_loadl_epi64(&v26);
        }
        v5 = _mm_unpacklo_epi64(v9, v10);
        v11 = (char *)&v24[24 * v25];
        *(_QWORD *)v11 = v8;
        *(__m128i *)(v11 + 8) = v5;
        *(_QWORD *)&v28 = v28 + 1;
        if ( v29 )
        {
          v30.m128i_i64[0] = 0;
          *(double *)v5.m128i_i64 = qfree(v29, v24);
        }
        if ( ++v6 >= *(int *)(v4 + 48) )
          goto LABEL_18;
      }
      if ( *((_QWORD *)&v28 + 1) < v14 )
      {
        v27.m128i_i64[1] = qvector_reserve(&v27.m128i_u64[1], v27.m128i_i64[1], v28 + 1, 24);
        v24 = (const char *)v27.m128i_i64[1];
        v25 = v28;
      }
      v5 = _mm_loadu_si128(&v30);
      ++v6;
      v15 = (char *)&v24[24 * v25];
      *(_QWORD *)v15 = v29;
      *(__m128i *)(v15 + 8) = v5;
      v16 = *(int *)(v4 + 48);
      *(_QWORD *)&v28 = v28 + 1;
    }
    while ( v6 < v16 );
  }
LABEL_18:
  sub_4E3480(v3 + 104, v26.m128i_i64[1]);
  sub_49DEA0((__int64)&v29, (QT::QHeaderView *)v26.m128i_i64[1]);
  v17 = *(_DWORD *)(v3 + 2376);
  if ( v17 != 1 )
    sub_49E380(v3, 2 * (unsigned int)(v17 != 2), (__int64)&v29, 4, *(double *)v5.m128i_i64);
  sub_547EF0(v3, &v29, 4);
  if ( v31 )
  {
    v32 = 0;
    qfree(v31, (const char *)&v29);
  }
  if ( v29 )
  {
    v30.m128i_i64[0] = 0;
    qfree(v29, (const char *)&v29);
  }
  v18 = v27.m128i_i64[1];
  if ( v27.m128i_i64[1] )
  {
    v19 = v28;
    if ( (_QWORD)v28 )
    {
      v20 = 0;
      do
      {
        v21 = (__int64 *)(v18 + 24 * v20);
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          qfree(v22, (const char *)&v29);
          v18 = v27.m128i_i64[1];
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v18, (const char *)&v29);
  }
  return 1;
}
