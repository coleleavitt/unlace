unsigned __int64 __fastcall move_to_folder_dialog_t__::vfunc_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  int v6; // r8d
  __int64 v9; // rax
  double v10; // xmm0_8
  QT::QAbstractItemView *Child_helper; // rdi
  int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // r13
  const char *v15; // rdx
  __int64 v16; // rsi
  bool v17; // zf
  const char *v18; // rdx
  const char *v19; // rsi
  __int64 v20; // rax
  _QWORD *v21; // rdx
  int v22; // r9d
  double v23; // xmm0_8
  __int64 v24; // rdi
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  int v27; // r9d
  double v28; // xmm0_8
  __int64 v29; // rdi
  __m128i v30; // [rsp+8h] [rbp-90h] BYREF
  __int128 v31; // [rsp+18h] [rbp-80h]
  __m128i v32; // [rsp+28h] [rbp-70h] BYREF
  __int64 v33; // [rsp+40h] [rbp-58h] BYREF
  __int128 v34; // [rsp+48h] [rbp-50h]
  __m128i v35; // [rsp+58h] [rbp-40h]
  unsigned __int64 v36; // [rsp+68h] [rbp-30h]

  v6 = *(_DWORD *)(a1 + 352);
  v36 = __readfsqword(0x28u);
  if ( v6 <= 0 )
  {
    v10 = callui(203, 14, a1, 0, v6, a6);
    if ( v9 )
    {
      Child_helper = (QT::QAbstractItemView *)QT::qt_qFindChild_helper(v9, 0, 0, &off_89D580, 1);
      if ( Child_helper )
      {
        v12 = *(_DWORD *)(a2 + 12);
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            v13 = QT::QAbstractItemView::model(Child_helper);
            v14 = *(_QWORD **)(v13 + 216);
            if ( !v14 )
              v14 = *(_QWORD **)(v13 + 208);
            v15 = &s1;
            if ( *(_QWORD *)(a1 + 336) )
              v15 = *(const char **)(a1 + 328);
            v16 = *v14;
            LOBYTE(v34) = 0;
            v33 = -1;
            dirtree_resolve_path(&v33, v16, v15, v10);
            if ( v33 != -1 && (_BYTE)v34 )
            {
              v17 = *(_QWORD *)(a1 + 336) == 0;
              v30.m128i_i64[1] = 0;
              v18 = &s1;
              v31 = 0;
              v32 = (__m128i)-1LL;
              if ( !v17 )
                v18 = *(const char **)(a1 + 328);
              v19 = &v30.m128i_i8[8];
              if ( (unsigned __int8)dirtree_findfirst(*v14, &v30.m128i_u64[1], v18) )
              {
                v34 = 0;
                v25 = _mm_loadu_si128(&v32);
                v33 = 0;
                v35 = v25;
                v30.m128i_i64[0] = v32.m128i_i64[0];
                v26 = (__m128i)v32.m128i_u64[1];
                v33 = qvector_reserve(&v33, 0, 1, 16);
                v19 = &byte_6;
                *(__m128i *)(v33 + 16 * v34) = _mm_unpacklo_epi64(_mm_loadl_epi64(&v30), v26);
                *(_QWORD *)&v34 = v34 + 1;
                ++*(_DWORD *)(a1 + 352);
                v28 = callui(203, 6, a1, 0, (unsigned int)&v33, v27);
                v29 = v33;
                --*(_DWORD *)(a1 + 352);
                if ( v29 )
                {
                  *(_QWORD *)&v34 = 0;
                  qfree(v29, &byte_6, v28);
                }
              }
              if ( v30.m128i_i64[1] )
              {
                *(_QWORD *)&v31 = 0;
                qfree(v30.m128i_i64[1], v19);
              }
            }
          }
        }
        else
        {
          v20 = QT::QAbstractItemView::model(Child_helper);
          v21 = *(_QWORD **)(v20 + 216);
          if ( !v21 )
            v21 = *(_QWORD **)(v20 + 208);
          v33 = 0;
          v34 = 0;
          dirtree_get_abspath_by_cursor(&v33, *v21, a1 + 280, 0);
          ++*(_DWORD *)(a1 + 352);
          v23 = callui(203, 15, a1, 1, (unsigned int)&v33, v22);
          v24 = v33;
          --*(_DWORD *)(a1 + 352);
          if ( v24 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v24, &byte_9[6], v23);
          }
        }
      }
    }
  }
  return v36 - __readfsqword(0x28u);
}
