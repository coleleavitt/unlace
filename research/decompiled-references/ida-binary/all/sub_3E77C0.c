QT::QAbstractItemView *__fastcall sub_3E77C0(
        int a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // r13d
  QT::QAbstractItemView *v14; // rbx
  void **v16; // rdi
  unsigned __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r14
  int v20; // edx
  unsigned __int64 v21; // r13
  int v22; // ebx
  __int64 v23; // rdx
  double v24; // xmm0_8
  double v25; // xmm4_8
  double v26; // xmm5_8
  int v27; // eax
  void *ptr[4]; // [rsp+0h] [rbp-68h] BYREF
  void *v29; // [rsp+20h] [rbp-48h] BYREF
  __int128 v30; // [rsp+28h] [rbp-40h]
  unsigned __int64 v31; // [rsp+38h] [rbp-30h]

  v10 = xmmword_8D1248;
  v31 = __readfsqword(0x28u);
  v11 = qword_8D1240;
  v12 = 8 * xmmword_8D1248;
  if ( a1 < 0 )
  {
    v29 = nullptr;
    v30 = 0;
    if ( !v12 )
    {
      v22 = 1;
      v13 = 0;
      goto LABEL_27;
    }
    v16 = nullptr;
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)v11 + 1116LL);
      if ( v18 == -1 )
        goto LABEL_11;
      v19 = v18;
      if ( v18 >= v17 )
      {
        v20 = v18 + 1;
        LOBYTE(ptr[0]) = 0;
        v21 = v20;
        if ( v20 < v17 )
          goto LABEL_20;
        if ( v17 < v20 )
          break;
      }
LABEL_10:
      *((_BYTE *)v16 + v19) = 1;
      v16 = (void **)v29;
      v17 = v30;
      v10 = xmmword_8D1248;
LABEL_11:
      v11 += 8;
      if ( v11 == qword_8D1240 + 8 * v10 )
      {
        if ( v17 )
        {
          v22 = 0;
          v23 = 0;
          while ( 1 )
          {
            v13 = v22++;
            if ( !*((_BYTE *)v16 + v23) )
              break;
            v23 = v22;
            if ( v22 >= v17 )
            {
              v27 = v13 + 2;
              v13 = v22;
              v22 = v27;
              break;
            }
          }
        }
        else
        {
          v22 = 1;
          v13 = 0;
        }
        if ( v16 )
        {
          *(_QWORD *)&v30 = 0;
          qfree(v16, a2);
        }
LABEL_27:
        v24 = QT::QString::fromUtf8(ptr, 11, "Watch view ");
        QT::QString::number((QT::QString *)&v29, v22, 10);
        QT::QString::append((QT::QString *)ptr, (const QT::QString *)&v29);
        if ( v29 && !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
          free(v29);
        v14 = (QT::QAbstractItemView *)operator new(0x478u);
        sub_3E7380(v14, v13, (const QT::QString *)ptr, v24, a4, a5, a6, v25, v26, a9, a10);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        return v14;
      }
    }
    if ( ptr < v16 || ptr >= (void **)((char *)v16 + *((_QWORD *)&v30 + 1)) )
    {
      if ( *((_QWORD *)&v30 + 1) >= (unsigned __int64)v20
        || (a2 = (const char *)v16,
            v29 = (void *)qvector_reserve(&v29, v16, v20, 1),
            v16 = (void **)v29,
            v17 = v30,
            (unsigned __int64)v30 < v21) )
      {
        do
        {
          *((_BYTE *)v16 + v17++) = 0;
          v16 = (void **)v29;
        }
        while ( v21 != v17 );
        *(_QWORD *)&v30 = v21;
        goto LABEL_10;
      }
    }
    else if ( *((_QWORD *)&v30 + 1) >= (unsigned __int64)v20
           || (a2 = (const char *)v16,
               v29 = (void *)qvector_reserve(&v29, v16, v20, 1),
               v16 = (void **)v29,
               v17 = v30,
               (unsigned __int64)v30 < v21) )
    {
      do
      {
        *((_BYTE *)v16 + v17++) = 0;
        v16 = (void **)v29;
      }
      while ( v21 != v17 );
    }
LABEL_20:
    *(_QWORD *)&v30 = v21;
    goto LABEL_10;
  }
  v13 = a1;
  if ( !v12 )
  {
LABEL_33:
    v22 = a1 + 1;
    goto LABEL_27;
  }
  while ( a1 != *(_DWORD *)(*(_QWORD *)v11 + 1116LL) )
  {
    v11 += 8;
    if ( v11 == qword_8D1240 + v12 )
      goto LABEL_33;
  }
  return nullptr;
}
