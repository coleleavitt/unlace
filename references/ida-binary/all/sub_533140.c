unsigned __int64 __fastcall sub_533140(__int64 *a1)
{
  char *v1; // rsi
  __int64 v2; // rbx
  _QWORD *v3; // r13
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // r15
  size_t v7; // rbx
  void *v8; // rbp
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  size_t v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // r13
  __int64 v20; // rbp
  size_t v21; // r14
  void *v22; // rax
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v28; // rax
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  __int128 v30; // [rsp+20h] [rbp-58h]
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a1 )
  {
    v1 = nullptr;
    v30 = 0;
    v29 = 0;
    v29 = qvector_reserve(&v29, 0, 1000, 24);
    v2 = v29;
    if ( QT::QCoreApplication::self )
    {
      v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 32LL))(QT::QCoreApplication::self + 2);
      do
      {
        v4 = v3[1];
        v5 = 0;
        if ( v4 )
        {
          do
          {
            while ( 1 )
            {
              v6 = *(_QWORD *)(*v3 + 8 * v5);
              v7 = *(_QWORD *)(v6 + 40);
              if ( v7 > 1 )
                break;
              if ( v4 == ++v5 )
                goto LABEL_11;
            }
            v8 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 40));
            memcpy(v8, *(const void **)(v6 + 32), v7);
            v9 = v30;
            v1 = (char *)v29;
            if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 1) )
            {
              v29 = qvector_reserve(&v29, v29, v30 + 1, 24);
              v9 = v30;
              v1 = (char *)v29;
            }
            ++v5;
            v10 = &v1[24 * v9];
            *(_QWORD *)v10 = v8;
            *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
            *(_QWORD *)&v30 = v30 + 1;
          }
          while ( v4 != v5 );
        }
LABEL_11:
        v3 = (_QWORD *)v3[15];
      }
      while ( v3 );
      v2 = v29;
    }
    v11 = 24 * v30;
    v12 = 0xAAAAAAAAAAAAAAABLL * ((24 * (__int64)v30) >> 3);
    if ( v12 )
    {
      v13 = a1[1];
      v14 = *a1;
      v15 = 3 * v13;
      v16 = v13 - 0x5555555555555555LL * ((24 * (__int64)v30) >> 3);
      v17 = 0;
      v18 = 8 * v15;
      if ( a1[2] < v16 )
      {
        v28 = qvector_reserve(a1, v14, v16, 24);
        *a1 = v28;
        v14 = v28;
        v17 = 24 * a1[1] - v18;
      }
      v19 = (_QWORD *)(v14 + v18);
      v20 = v2 + v11;
      v1 = (char *)v19;
      memmove(&v19[(unsigned __int64)v11 / 8], v19, v17);
      if ( v2 + v11 != v2 )
      {
        do
        {
          while ( 1 )
          {
            *v19 = 0;
            *(_OWORD *)(v19 + 1) = 0;
            v21 = *(_QWORD *)(v2 + 8);
            if ( v21 )
              break;
            v2 += 24;
            v19 += 3;
            if ( v20 == v2 )
              goto LABEL_21;
          }
          v22 = (void *)qalloc_or_throw(*(_QWORD *)(v2 + 8));
          *v19 = v22;
          v2 += 24;
          v19[2] = v21;
          v1 = *(char **)(v2 - 24);
          v19 += 3;
          memcpy(v22, v1, v21);
          *(v19 - 2) = v21;
        }
        while ( v20 != v2 );
      }
LABEL_21:
      v2 = v29;
      a1[1] += v12;
    }
    if ( v2 )
    {
      v23 = v30;
      if ( (_QWORD)v30 )
      {
        v24 = 0;
        do
        {
          v25 = (__int64 *)(v2 + 24 * v24);
          v26 = *v25;
          if ( *v25 )
          {
            v25[1] = 0;
            qfree(v26, v1);
          }
          ++v24;
          v2 = v29;
        }
        while ( v23 != v24 );
      }
      *(_QWORD *)&v30 = 0;
      qfree(v2, v1);
    }
  }
  return v31 - __readfsqword(0x28u);
}
