__int64 __fastcall sub_47CAF0(__m128i *a1, __m128i *a2)
{
  __int64 v2; // r12
  unsigned __int16 v3; // ax
  unsigned int v5; // edx
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int32 v10; // eax
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  void *v13; // rdx
  void *v14; // r12
  size_t v15; // rbp
  const char *v16; // rsi
  __int64 v17; // rax
  bool v18; // zf
  void *v19; // rdi
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  void *src; // [rsp+18h] [rbp-70h]
  size_t n; // [rsp+20h] [rbp-68h]
  void *v23[11]; // [rsp+30h] [rbp-58h] BYREF

  v23[3] = (void *)__readfsqword(0x28u);
  v2 = a1[35].m128i_i64[1];
  if ( v2 )
  {
    v3 = *(_WORD *)(v2 + 8);
    if ( v3 > 0x1Fu )
    {
      v5 = 0;
      if ( v3 != 117 )
        return v5;
      if ( a2 )
      {
        a2->m128i_i32[1] = 1;
        a2[1] = _mm_unpacklo_epi64(_mm_loadl_epi64(a1 + 36), (__m128i)(unsigned __int64)v2);
        a2->m128i_i32[2] = sub_47B6A0((QT::QGuiApplication *)a1, 0);
        v17 = a1[7].m128i_i64[0];
        if ( v17 )
        {
          v18 = a2[1].m128i_i64[0] == 0;
          a2[2].m128i_i64[0] = *(_QWORD *)(v17 + 72);
          if ( v18 )
            a2[1].m128i_i64[0] = *(_QWORD *)a1[7].m128i_i64[0];
        }
      }
      return 1;
    }
    if ( v3 > 1u )
    {
      switch ( *(_WORD *)(v2 + 8) )
      {
        case 2:
          if ( !a2 )
            return 1;
          a2->m128i_i32[1] = 4;
          v7 = _mm_loadl_epi64(a1 + 36);
          goto LABEL_9;
        case 3:
          if ( !a2 )
            return 1;
          a2->m128i_i32[1] = 5;
          v7 = _mm_loadl_epi64(a1 + 36);
          goto LABEL_9;
        case 6:
          if ( !a2 )
            return 1;
          a2->m128i_i32[1] = 2;
          v11 = _mm_loadl_epi64(a1 + 36);
          goto LABEL_15;
        case 7:
          if ( !a2 )
            return 1;
          a2->m128i_i32[1] = 3;
          v11 = _mm_loadl_epi64(a1 + 36);
LABEL_15:
          a2[1] = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)v2);
          a2->m128i_i32[2] = sub_47B6A0((QT::QGuiApplication *)a1, v2);
          a2[2].m128i_i32[0] = *(_DWORD *)(v2 + 64);
          v12 = _mm_loadu_si128((const __m128i *)(v2 + 40));
          v13 = *(void **)(v2 + 56);
          *(__m128i *)v23 = v12;
          v23[2] = v13;
          if ( v12.m128i_i64[0] )
            _InterlockedAdd((volatile signed __int32 *)v12.m128i_i64[0], 1u);
          QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v23);
          if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
            free(v23[0]);
          v14 = src;
          v15 = n;
          if ( !src )
            v14 = &QT::QByteArray::_empty;
          memset(v23, 0, 24);
          if ( !n )
            goto LABEL_23;
          v19 = nullptr;
          if ( n != -1 )
          {
            v23[0] = (void *)qvector_reserve(v23, 0, n + 1, 1);
            v19 = v23[0];
          }
          v23[1] = (void *)(v15 + 1);
          memmove(v19, v14, v15);
          *((_BYTE *)v23[0] + v15) = 0;
          if ( v23[1] )
            v16 = (const char *)v23[0];
          else
LABEL_23:
            v16 = &s1;
          qstrncpy((char *)a2[2].m128i_i64 + 4, v16, 8);
          if ( v23[0] )
          {
            v23[1] = nullptr;
            qfree(v23[0], v16);
          }
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
          break;
        case 0x1F:
          if ( !a2 )
            return 1;
          a2->m128i_i32[1] = 6;
          v7 = _mm_loadl_epi64(a1 + 36);
LABEL_9:
          v8 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)v2);
          a2[1] = v8;
          a2->m128i_i32[2] = sub_47B6A0((QT::QGuiApplication *)a1, v2);
          QT::QEventPoint::position(*(QT::QEventPoint **)(v2 + 48));
          a2[2].m128i_i32[0] = (int)(*(double *)v8.m128i_i64
                                   + COERCE_DOUBLE(v8.m128i_i64[0] & 0x8000000000000000LL | 0x3FE0000000000000LL));
          QT::QEventPoint::position(*(QT::QEventPoint **)(v2 + 48));
          a2[2].m128i_i32[1] = (int)(COERCE_DOUBLE(v8.m128i_i64[0] & 0x8000000000000000LL | 0x3FE0000000000000LL)
                                   + COERCE_DOUBLE(v8.m128i_i64[0] & 0x8000000000000000LL | 0x3FE0000000000000LL));
          v9 = (unsigned int)(*(_DWORD *)(v2 + 64) - 1);
          if ( (unsigned int)v9 <= 3 )
            v10 = dword_6CB220[v9];
          else
            v10 = 0;
          a2[2].m128i_i32[2] = v10;
          break;
        default:
          return 0;
      }
      return 1;
    }
  }
  return 0;
}
