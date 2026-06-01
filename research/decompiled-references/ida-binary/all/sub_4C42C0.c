__int64 __fastcall sub_4C42C0(__m128i *a1, __int64 a2)
{
  QT::QWidget *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // rsi
  _DWORD *v8; // rax
  char *v9; // r13
  size_t v10; // rax
  size_t v11; // r8
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm1
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rcx
  _BOOL4 v20; // eax
  int v21; // eax
  void *v22; // rdi
  size_t v23; // rdx
  __int64 v24; // rax
  size_t v25; // [rsp+0h] [rbp-88h]
  size_t v26; // [rsp+0h] [rbp-88h]
  size_t v27; // [rsp+8h] [rbp-80h]
  void *ptr[4]; // [rsp+10h] [rbp-78h] BYREF
  char *s[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+40h] [rbp-48h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = (QT::QWidget *)sub_4CE6E0(a2);
    if ( v3 )
    {
      if ( !*(_DWORD *)(a2 + 40) )
      {
        v14 = sub_4CD6B0(a2, 1);
        if ( v14 )
          sub_4B8820(&a1[1].m128i_i64[1], v14, 0);
      }
      if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(*((_QWORD *)v3 + 1) + 16LL))
        && (unsigned int)sub_4C6090(v3, 0, 0) == 1 )
      {
        v15 = QT::QWidget::pos(v3);
        v16 = _mm_loadl_epi64((const __m128i *)&qword_5DBD90);
        a1[3].m128i_i64[0] = v15;
        a1[3].m128i_i64[1] = _mm_sub_epi32(
                               _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(*((_QWORD *)v3 + 4) + 28LL)), v16),
                               _mm_loadl_epi64((const __m128i *)(*((_QWORD *)v3 + 4) + 20LL))).m128i_u64[0];
        QT::QWidget::saveGeometry((QT::QWidget *)s);
        v17 = a1[5].m128i_i64[0];
        v18 = _mm_loadu_si128(a1 + 4);
        v19 = v30;
        a1[4] = _mm_load_si128((const __m128i *)s);
        a1[5].m128i_i64[0] = v19;
        v30 = v17;
        *(__m128i *)s = v18;
        if ( v18.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v18.m128i_i64[0], 1u) )
          free(s[0]);
        a1[5].m128i_i32[2] = 128;
        return 1;
      }
      v4 = sub_4CE740(a2);
      v5 = v4;
      if ( v4 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 448LL))(v4, a2);
        if ( v6 >= 0 )
        {
          v7 = (unsigned int)(v6 - 1);
          if ( !v6 )
            v7 = 1;
          v8 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 456LL))(v5, v7);
          if ( v8 )
          {
            if ( !v8[10] )
            {
              (*(void (__fastcall **)(void **))(*(_QWORD *)v8 + 416LL))(ptr);
              QT::QString::toUtf8_helper((QT::QString *)s, (const QT::QString *)ptr);
              v9 = s[1];
              if ( (s[1] || (v9 = (char *)&QT::QByteArray::_empty) != nullptr) && (v10 = strlen(v9), (v11 = v10) != 0) )
              {
                v22 = (void *)a1->m128i_i64[0];
                v23 = v10 + 1;
                if ( a1[1].m128i_i64[0] < v10 + 1 )
                {
                  v26 = v10 + 1;
                  v27 = v10;
                  v24 = qvector_reserve(a1, a1->m128i_i64[0], v23, 1);
                  v11 = v27;
                  v23 = v26;
                  a1->m128i_i64[0] = v24;
                  v22 = (void *)v24;
                }
                a1->m128i_i64[1] = v23;
                v25 = v11;
                memmove(v22, v9, v11);
                *(_BYTE *)(a1->m128i_i64[0] + v25) = 0;
              }
              else
              {
                a1->m128i_i64[1] = 0;
              }
              if ( s[0] && !_InterlockedSub((volatile signed __int32 *)s[0], 1u) )
                free(s[0]);
              if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                free(ptr[0]);
              v12 = *(_DWORD *)(v5 + 40);
              if ( v12 == 1 )
              {
                v20 = QT::QSplitter::orientation(*(QT::QSplitter **)(v5 + 104)) != 1;
                if ( v6 )
                  v21 = 4 * v20 + 4;
                else
                  v21 = v20 + 1;
                a1[5].m128i_i32[2] = v21;
                return 1;
              }
              if ( v12 == 2 )
              {
                a1[5].m128i_i32[2] = v6 == 0 ? 96 : 64;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
