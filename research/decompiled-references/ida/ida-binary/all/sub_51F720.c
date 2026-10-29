void __fastcall sub_51F720(int a1, QT::QAbstractItemView **a2, double a3, __m128 a4, __int64 a5, _QWORD **a6)
{
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 *v9; // r13
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rsi
  __m128 si128; // xmm0
  __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  __m128i v17; // xmm0
  QT::QAbstractItemView *v18; // rdi
  __m128i *v19; // rax
  const void *v20; // rsi
  const __m128i *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128i v26; // xmm3
  __m128i v27; // [rsp+0h] [rbp-A8h] BYREF
  __m128 v28; // [rsp+10h] [rbp-98h] BYREF
  __int64 v29; // [rsp+20h] [rbp-88h] BYREF
  __int128 v30; // [rsp+28h] [rbp-80h]
  _BYTE v31[24]; // [rsp+40h] [rbp-68h] BYREF
  __m128i v32; // [rsp+58h] [rbp-50h]
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = *a6[4];
      v8 = *a6[3];
      v9 = (__int64 *)*a6[1];
      v10 = QT::QAbstractItemView::model(a2[2]);
      v11 = *(__int64 **)(v10 + 216);
      if ( !v11 )
        v11 = *(__int64 **)(v10 + 208);
      if ( v9 == v11 )
      {
        v12 = *v9;
        *(_OWORD *)v31 = -1;
        dirtree_make_cursor(v31, v12, v7);
        si128 = (__m128)_mm_load_si128((const __m128i *)v31);
        v28 = si128;
        if ( si128.m128_u64[0] != -1 || !_mm_movehl_ps(a4, si128).m128_u64[0] )
        {
          v14 = *v9;
          *(_QWORD *)v31 = -1;
          v31[8] = 0;
          dirtree_resolve_cursor(v31, v14, &v28);
          if ( *(_QWORD *)v31 != -1 )
          {
            if ( v31[8] )
            {
              memset(v31, 0, sizeof(v31));
              v32 = (__m128i)-1LL;
              v15 = *(_QWORD *)(v8 + 8);
              if ( v15 )
              {
                v19 = (__m128i *)qalloc_or_throw(16 * v15);
                v20 = *(const void **)v8;
                v21 = v19;
                v27 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
                memcpy(v19, v20, 16 * v15);
                if ( *(_QWORD *)v31 )
                {
                  *(_QWORD *)&v31[8] = 0;
                  qfree(*(_QWORD *)v31, (const char *)v20, v22, v23, v24, v25, *(_OWORD *)&v27, *(_OWORD *)&v28);
                }
                v26 = _mm_load_si128(&v27);
                *(_QWORD *)v31 = v21;
                *(__m128i *)&v31[8] = v26;
                v32 = _mm_loadu_si128(v21);
              }
              v30 = 0;
              v29 = 0;
              v16 = qvector_reserve(&v29, 0, 1, 16);
              v17 = _mm_load_si128((const __m128i *)&v28);
              v29 = v16;
              *(__m128i *)(v16 + 16 * v30) = v17;
              v18 = a2[2];
              *(_QWORD *)&v30 = v30 + 1;
              (*(void (__fastcall **)(QT::QAbstractItemView *, _BYTE *, __int64 *, __int64, __int64))(*(_QWORD *)v18 + 792LL))(
                v18,
                v31,
                &v29,
                7,
                1);
              if ( v29 )
              {
                *(_QWORD *)&v30 = 0;
                *(double *)v17.m128i_i64 = qfree(v29, v31);
              }
              if ( *(_QWORD *)v31 )
              {
                *(_QWORD *)&v31[8] = 0;
                qfree(*(_QWORD *)v31, v31, *(double *)v17.m128i_i64);
              }
            }
          }
        }
      }
    }
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
