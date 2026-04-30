unsigned __int64 __fastcall sub_47D300(QT::QFont ***a1, QT::QObject *a2, double a3, double a4, __m128 a5)
{
  __int64 v7; // rcx
  void *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rdx
  QT::QFont *v13; // rdx
  QT::QFont *v14; // rbx
  __int64 v15; // r13
  QT::QFont *i; // r15
  const char *v17; // rdi
  const char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __m128 v21; // xmm0
  __int64 v22; // r13
  unsigned __int64 v23; // xmm2_8
  __int64 *v24; // rbx
  __int64 v25; // rsi
  const char **v26; // [rsp+0h] [rbp-B8h]
  __int64 v27; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int64 v29; // [rsp+58h] [rbp-60h]
  __int64 v30; // [rsp+60h] [rbp-58h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a2 )
  {
    QT::QApplication::allWidgets((QT::QApplication *)&ptr);
    v8 = ptr;
    if ( v30 <= 0 )
      goto LABEL_6;
    v9 = v29;
    do
    {
      v10 = v9;
      if ( v29 + 8 * v30 == v9 )
        goto LABEL_6;
      v9 += 8;
    }
    while ( *(QT::QObject **)(v9 - 8) != a2 );
    v12 = v10 - v29;
    if ( v12 == -8 )
    {
LABEL_6:
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
    }
    else
    {
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      v27 = 0;
      if ( (unsigned __int8)sub_4EB9F0(&v27, a2, v12, v7, v8) )
      {
        v13 = **a1;
        v26 = (const char **)v27;
        v14 = (QT::QFont *)((char *)v13 + 72 * (_QWORD)(*a1)[1]);
        if ( v13 != v14 )
        {
          v15 = *(_QWORD *)(v27 + 8);
          for ( i = **a1; v14 != i; i = (QT::QFont *)((char *)i + 72) )
          {
            v19 = *((_QWORD *)i + 3);
            if ( v15 )
            {
              v17 = &s1;
              v18 = *v26;
              if ( !v19 )
                goto LABEL_18;
            }
            else
            {
              if ( !v19 )
              {
LABEL_24:
                if ( i )
                  sub_4EB8F0(a2, i);
                break;
              }
              v18 = &s1;
            }
            v17 = *((const char **)i + 2);
LABEL_18:
            if ( !strcmp(v17, v18) )
              goto LABEL_24;
          }
        }
      }
      v20 = *((_QWORD *)a2 + 1);
      v21 = (__m128)_mm_loadu_si128((const __m128i *)(v20 + 24));
      v22 = *(_QWORD *)(v20 + 40);
      v23 = _mm_movehl_ps(a5, v21).m128_u64[0];
      v24 = (__int64 *)v23;
      if ( v21.m128_u64[0] )
      {
        _InterlockedAdd((volatile signed __int32 *)v21.m128_u64[0], 1u);
        _InterlockedAdd((volatile signed __int32 *)v21.m128_u64[0], 1u);
      }
      while ( (__int64 *)(v23 + 8 * v22) != v24 )
      {
        v25 = *v24++;
        if ( (*(_BYTE *)(*(_QWORD *)(v25 + 8) + 48LL) & 1) != 0 )
          sub_47D300(a1);
      }
      if ( v21.m128_u64[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v21.m128_u64[0], 1u) )
          free((void *)v21.m128_u64[0]);
        if ( !_InterlockedSub((volatile signed __int32 *)v21.m128_u64[0], 1u) )
          free((void *)v21.m128_u64[0]);
      }
    }
  }
  return v31 - __readfsqword(0x28u);
}
