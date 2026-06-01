__int64 __fastcall sub_533460(__int64 a1, int a2, __int64 *a3)
{
  int v3; // ecx
  __int64 v6; // rdi
  void *v7; // rbp
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  void *v10; // rdi
  bool v11; // zf
  const char *v12; // rdx
  void *v13; // rdi
  char *v14; // rax
  void *v15; // rdx
  __m128i v16; // xmm0
  char *v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rbx
  char *v20; // rax
  __int64 v21; // rdi
  char *v22; // r13
  size_t v23; // rax
  size_t v24; // r14
  _QWORD *v25; // rbp
  void *v26; // rdi
  size_t v27; // r15
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int128 v31; // [rsp+18h] [rbp-70h]
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  char *s[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 160);
  v34 = __readfsqword(0x28u);
  if ( !v3 )
    return 0;
  switch ( a2 )
  {
    case 1:
      QT::QAction::text((QT::QAction *)&ptr);
      sub_51AB70((__int64)&v32, (const QT::QString *)&ptr);
      v6 = *a3;
      v7 = v32;
      v32 = nullptr;
      v8 = _mm_loadu_si128((const __m128i *)s);
      *(_OWORD *)s = 0;
      if ( v6 )
      {
        a3[1] = 0;
        v29 = v8;
        qfree(v6, (const char *)&ptr);
        v9 = _mm_load_si128(&v29);
        v10 = v32;
        *a3 = (__int64)v7;
        *(__m128i *)(a3 + 1) = v9;
        if ( v10 )
        {
          s[0] = nullptr;
          qfree(v10, (const char *)&ptr);
        }
      }
      else
      {
        *a3 = (__int64)v7;
        *(__m128i *)(a3 + 1) = v8;
      }
      goto LABEL_9;
    case 2:
      v11 = *(_QWORD *)(a1 + 40) == 0;
      ptr = nullptr;
      v12 = &s1;
      v31 = 0;
      if ( !v11 )
        v12 = *(const char **)(a1 + 32);
      sub_4B1970((__int64)&ptr, nullptr, v12);
      v32 = nullptr;
      *(_OWORD *)s = 0;
      sub_532CD0((__int64 *)&v32, &ptr, 0);
      v14 = (char *)a3[2];
      v15 = v32;
      v16 = _mm_loadu_si128((const __m128i *)s);
      v32 = (void *)*a3;
      v13 = v32;
      *a3 = (__int64)v15;
      s[1] = v14;
      *(__m128i *)(a3 + 1) = v16;
      if ( v13 )
      {
        s[0] = nullptr;
        *(double *)v16.m128i_i64 = qfree(v13, (const char *)&ptr);
      }
      v17 = (char *)ptr;
      if ( ptr )
      {
        v18 = v31;
        if ( (_QWORD)v31 )
        {
          v19 = 0;
          do
          {
            v20 = &v17[24 * v19];
            v21 = *(_QWORD *)v20;
            if ( *(_QWORD *)v20 )
            {
              *((_QWORD *)v20 + 1) = 0;
              *(double *)v16.m128i_i64 = qfree(v21, (const char *)&ptr, *(double *)v16.m128i_i64);
              v17 = (char *)ptr;
            }
            ++v19;
          }
          while ( v18 != v19 );
        }
        *(_QWORD *)&v31 = 0;
        qfree(v17, (const char *)&ptr, *(double *)v16.m128i_i64);
      }
      return 1;
    case 3:
      QT::QAction::toolTip((QT::QAction *)&ptr);
      QT::QString::toUtf8_helper((QT::QString *)&v32, (const QT::QString *)&ptr);
      v22 = s[0];
      if ( (s[0] || (v22 = (char *)&QT::QByteArray::_empty) != nullptr) && (v23 = strlen(v22), (v24 = v23) != 0) )
      {
        v26 = (void *)*a3;
        v27 = v23 + 1;
        if ( a3[2] < v23 + 1 )
        {
          v28 = qvector_reserve(a3, *a3, v23 + 1, 1);
          *a3 = v28;
          v26 = (void *)v28;
        }
        a3[1] = v27;
        memmove(v26, v22, v24);
        *(_BYTE *)(*a3 + v24) = 0;
      }
      else
      {
        a3[1] = 0;
      }
      if ( v32 && !_InterlockedSub((volatile signed __int32 *)v32, 1u) )
        free(v32);
LABEL_9:
      if ( ptr )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
      break;
    case 4:
      v25 = QT::QCoreApplication::self;
      QT::QAction::icon((QT::QAction *)&v32);
      *(_DWORD *)a3 = sub_479FD0((__int64)v25, (QT::QIcon *)&v32);
      QT::QIcon::~QIcon((QT::QIcon *)&v32);
      break;
    case 5:
      *(_DWORD *)a3 = *(_DWORD *)(a1 + 120);
      break;
    case 6:
      *(_BYTE *)a3 = QT::QAction::isCheckable(*(QT::QAction **)(a1 + 192));
      break;
    case 7:
      *(_BYTE *)a3 = QT::QAction::isChecked(*(QT::QAction **)(a1 + 192));
      break;
    case 8:
      *(_BYTE *)a3 = QT::QAction::isVisible(*(QT::QAction **)(a1 + 192));
      break;
    default:
      return 0;
  }
  return 1;
}
