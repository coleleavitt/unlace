__int64 *__fastcall sub_26A8A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdi
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  __int64 *v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // r13
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  const char *v23; // r15
  size_t v24; // rax
  size_t v25; // r14
  void *v26; // rdi
  size_t v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rcx
  __int64 *v31; // r15
  __int64 v32; // r13
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __int64 i; // r14
  QT::QRegularExpression *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // [rsp+0h] [rbp-60h]
  size_t v42; // [rsp+0h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-50h]
  __int64 v45; // [rsp+18h] [rbp-48h]
  __int64 *v46; // [rsp+20h] [rbp-40h]

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v4 = (__int64 *)sub_268560(a2, a2, a3, a4, 0.0);
  if ( v4 )
  {
    v5 = *v4 + 40 * v4[1];
    if ( *v4 != v5 )
    {
      v6 = *v4;
      while ( 1 )
      {
        if ( *(_DWORD *)(v6 + 24) == 4 )
        {
          v7 = *(_QWORD *)(v6 + 32);
          v8 = *(_QWORD *)(v7 + 8);
          if ( v8 )
          {
            v9 = *(_DWORD **)v7;
            v10 = 0;
            v11 = *(_QWORD *)v7 + 16 * v8;
            do
            {
              v12 = *v9 == 2;
              v9 += 4;
              v10 += v12;
            }
            while ( (_DWORD *)v11 != v9 );
            if ( v8 == v10 )
            {
              v13 = a1;
              v14 = a1[1];
              v15 = a1[2];
              if ( v15 < v14 + 1 )
              {
                v11 = 0;
                v28 = qvector_reserve(a1, 0, v14 + 1, 48);
                v29 = a1[1];
                v30 = (__int64 *)a1[2];
                v45 = v28;
                a1[2] = v15;
                v31 = (__int64 *)*a1;
                v46 = v30;
                v44 = v29 - 1;
                if ( v29 - 1 >= 0 )
                {
                  v32 = v28;
                  do
                  {
                    v33 = *v31;
                    v34 = _mm_loadu_si128((const __m128i *)(v31 + 1));
                    *v31 = 0;
                    *(_OWORD *)(v31 + 1) = 0;
                    *(_QWORD *)v32 = v33;
                    *(__m128i *)(v32 + 8) = v34;
                    v35 = v31[3];
                    v36 = _mm_loadu_si128((const __m128i *)v31 + 2);
                    v31[3] = 0;
                    *(_QWORD *)(v32 + 24) = v35;
                    *(__m128i *)(v32 + 32) = v36;
                    v37 = *v31;
                    v31[5] = 0;
                    if ( v37 )
                    {
                      v41 = v31[1];
                      if ( v41 )
                      {
                        for ( i = 0; i != v41; ++i )
                        {
                          v39 = (QT::QRegularExpression *)(v37 + 8 * i);
                          QT::QRegularExpression::~QRegularExpression(v39);
                          v37 = *v31;
                        }
                      }
                      v31[1] = 0;
                      qfree(v37, nullptr);
                    }
                    --v44;
                    v31 += 6;
                    v32 += 48;
                  }
                  while ( v44 != -1 );
                  v31 = (__int64 *)*a1;
                }
                qfree(v31, nullptr);
                *a1 = v45;
                v16 = v46;
                a1[2] = (__int64)v46;
                v14 = a1[1];
              }
              else
              {
                v16 = (__int64 *)*a1;
                v45 = *a1;
              }
              v17 = 48 * v14 + v45;
              *(_OWORD *)(v17 + 8) = 0;
              v18 = (__int64 *)v17;
              *(_QWORD *)v17 = 0;
              *(_QWORD *)(v17 + 24) = 0;
              *(_OWORD *)(v17 + 32) = 0;
              ++a1[1];
              if ( *(_QWORD *)(v6 + 8)
                && (v23 = *(const char **)v6) != nullptr
                && (v24 = strlen(*(const char **)v6), (v25 = v24) != 0) )
              {
                v26 = (void *)v18[3];
                v27 = v24 + 1;
                if ( v18[5] < v24 + 1 )
                {
                  v42 = v24 + 1;
                  v40 = qvector_reserve(v18 + 3, v18[3], v27, 1);
                  v18[3] = v40;
                  v27 = v42;
                  v26 = (void *)v40;
                }
                v18[4] = v27;
                v11 = (__int64)v23;
                memmove(v26, v23, v25);
                *(_BYTE *)(v18[3] + v25) = 0;
              }
              else
              {
                v18[4] = 0;
              }
              v19 = *(_QWORD *)(v7 + 8);
              if ( v19 )
                break;
            }
          }
        }
LABEL_4:
        v6 += 40;
        if ( v5 == v6 )
          return a1;
      }
      v20 = 0;
      while ( 1 )
      {
        v21 = *(_QWORD *)v7 + 16 * v20;
        if ( *(_DWORD *)v21 != 2 )
          break;
        v11 = *(_QWORD *)(v21 + 8);
        sub_194350(v18, v11);
        if ( ++v20 == v19 )
          goto LABEL_4;
      }
      if ( under_debugger )
        BUG();
      interr(1623, v11, v16, v13, 0.0);
    }
  }
  return a1;
}
