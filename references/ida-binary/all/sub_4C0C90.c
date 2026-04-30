unsigned __int64 __fastcall move_to_folder_dialog_t__::vfunc_3(__int64 *a1, int a2, double a3, __m128 a4)
{
  __int64 v5; // rax
  const char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  size_t v9; // r12
  _BYTE *v10; // rax
  _BYTE *v11; // rbp
  int v12; // r9d
  __int64 v13; // rax
  double v14; // xmm0_8
  QT::QAbstractItemView *Child_helper; // rax
  QT::QAbstractItemView *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // [rsp+0h] [rbp-A8h] BYREF
  void *src; // [rsp+10h] [rbp-98h] BYREF
  __m128i v24; // [rsp+18h] [rbp-90h]
  _QWORD v25[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+50h] [rbp-58h] BYREF
  __int128 v27; // [rsp+58h] [rbp-50h]
  __int128 v28; // [rsp+68h] [rbp-40h]
  unsigned __int64 v29; // [rsp+78h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  if ( a2 != 2 )
    return v29 - __readfsqword(0x28u);
  v5 = *a1;
  v6 = (_BYTE *)(&dword_0 + 1);
  src = nullptr;
  v24 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 16))(a1, 1);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 136);
    v9 = *(_QWORD *)(v8 + 8);
    if ( !v9 )
      return v29 - __readfsqword(0x28u);
    v10 = (_BYTE *)qalloc_or_throw(*(_QWORD *)(v8 + 8));
    v6 = *(const char **)v8;
    v11 = v10;
    memcpy(v10, *(const void **)v8, v9);
    src = v11;
    v24 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    if ( v9 == 1 )
      goto LABEL_12;
    if ( *v11 != 47 )
    {
      if ( v9 < v9 + 1 )
      {
        src = (void *)qvector_reserve(&src, v11, v9 + 1, 1);
        v11 = src;
      }
      v24.m128i_i64[0] = v9 + 1;
      v11[v9] = 0;
      memmove((char *)src + 1, src, v9 - 1);
      *(_BYTE *)src = 47;
    }
    v6 = byte_9 + 5;
    v14 = callui(203, 14, (_DWORD)a1, 0, (unsigned int)&callui, v12);
    if ( v13 )
    {
      v6 = nullptr;
      Child_helper = (QT::QAbstractItemView *)QT::qt_qFindChild_helper(v13, 0, 0, &off_89D580, 1);
      v16 = Child_helper;
      if ( Child_helper )
      {
        v6 = (const char *)QT::QAbstractItemView::model(Child_helper);
        v17 = (__int64)v6;
        sub_48BB70(v25, (__int64)v6, (__int64)&src, v14, a4);
        if ( (HIDWORD(v25[0]) | LODWORD(v25[0])) >= 0 )
        {
          if ( v25[2] )
          {
            v6 = (const char *)v25;
            v19 = sub_48B5B0(v17, (__int64)v25);
            if ( v19 != -1 || !v18 )
            {
              v27 = 0;
              v26 = 0;
              v22.m128i_i64[0] = v18;
              v28 = -1;
              v20 = qvector_reserve(&v26, 0, 1, 16);
              v6 = (const char *)&v26;
              v21 = _mm_loadl_epi64(&v22);
              v26 = v20;
              *(__m128i *)(v20 + 16 * v27) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, v21);
              *(_QWORD *)&v27 = v27 + 1;
              *(_QWORD *)&v28 = v19;
              *((_QWORD *)&v28 + 1) = v21.m128i_i64[0];
              sub_493F70(v16, (__int64)&v26);
              if ( v26 )
              {
                *(_QWORD *)&v27 = 0;
                qfree(v26, (const char *)&v26);
              }
            }
          }
        }
      }
    }
  }
  v11 = src;
LABEL_12:
  if ( v11 )
  {
    v24.m128i_i64[0] = 0;
    qfree(v11, v6);
  }
  return v29 - __readfsqword(0x28u);
}
