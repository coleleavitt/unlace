__int64 __fastcall sub_300D10(_BYTE *a1, const QT::QObject *a2, __int64 a3)
{
  __m128i v3; // xmm0
  __int64 v6; // rbx
  __int64 v8; // r10
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  size_t v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  size_t v17; // r14
  void *v18; // rax
  unsigned int v19; // ebx
  char v20; // al
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rcx
  bool v24; // zf
  const char *v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 *v30; // rbp
  __int64 v31; // rdi
  const char *v33; // r14
  char *v34; // rax
  const char *v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 *v38; // r15
  __int64 v39; // rdi
  size_t n; // [rsp+0h] [rbp-B8h]
  size_t na; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v42; // [rsp+8h] [rbp-B0h]
  char *v43; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+18h] [rbp-A0h]
  __int64 v45; // [rsp+28h] [rbp-90h] BYREF
  __int128 v46; // [rsp+30h] [rbp-88h]
  __m128i si128; // [rsp+40h] [rbp-78h]
  void *v48[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v49; // [rsp+60h] [rbp-58h]
  unsigned int v50; // [rsp+68h] [rbp-50h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v3.m128i_i64[0] = 0;
  v51 = __readfsqword(0x28u);
  v50 = 0;
  v43 = nullptr;
  v45 = 0;
  v49 = 0;
  v44 = 0;
  v46 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_OWORD *)v48 = 0;
  if ( a3 )
  {
    v6 = *(_QWORD *)(a3 + 8);
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( v6 == 1 )
      {
        v6 = 0;
      }
      else
      {
        v33 = *(const char **)a3;
        v34 = (char *)qvector_reserve(&v43, 0, *(_QWORD *)(a3 + 8), 1);
        v35 = v33;
        *(_QWORD *)&v44 = v6;
        v43 = v34;
        memmove(v34, v33, v6 - 1);
        v43[v6 - 1] = 0;
        v36 = v45;
        v6 = v46;
        if ( v45 )
        {
          if ( (_QWORD)v46 )
          {
            v37 = 0;
            do
            {
              v38 = (__int64 *)(v36 + 40 * v37);
              jvalue_t_clear(v38 + 3);
              v39 = *v38;
              if ( *v38 )
              {
                v38[1] = 0;
                qfree(v39, v35);
              }
              ++v37;
              v36 = v45;
            }
            while ( v6 != v37 );
          }
          *(_QWORD *)&v46 = 0;
          qfree(v36, v35);
          v45 = 0;
          v6 = v46;
          *((_QWORD *)&v46 + 1) = 0;
          v8 = 40 * v46;
        }
        else
        {
          v8 = 40 * v46;
        }
      }
    }
    else
    {
      v8 = 0;
    }
    v9 = 40LL * *(_QWORD *)(a3 + 32);
    v42 = 0xCCCCCCCCCCCCCCCDLL * (v9 >> 3);
    if ( v42 )
    {
      v10 = v6 - 0x3333333333333333LL * ((40LL * *(_QWORD *)(a3 + 32)) >> 3);
      v11 = *(_QWORD *)(a3 + 24);
      v12 = 0;
      v13 = 0;
      if ( *((_QWORD *)&v46 + 1) < v10 )
      {
        na = v8;
        v45 = qvector_reserve(&v45, 0, v10, 40);
        v13 = v45;
        v8 = na;
        v12 = 40 * v46 - na;
      }
      v14 = (_QWORD *)(v8 + v13);
      n = v11 + v9;
      memmove(&v14[(unsigned __int64)v9 / 8], v14, v12);
      if ( v11 != v11 + v9 )
      {
        do
        {
          *v14 = 0;
          *(_OWORD *)(v14 + 1) = 0;
          v17 = *(_QWORD *)(v11 + 8);
          if ( v17 )
          {
            v18 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 8));
            *v14 = v18;
            v14[2] = v17;
            memcpy(v18, *(const void **)v11, v17);
            v14[1] = v17;
          }
          *((_DWORD *)v14 + 6) = 0;
          jvalue_t_copy(v14 + 3, v11 + 24, v15, v16);
          v14 += 5;
          v11 += 40;
        }
        while ( n != v11 );
      }
      *(_QWORD *)&v46 = v42 + v46;
    }
    v3 = _mm_loadu_si128((const __m128i *)(a3 + 48));
    si128 = v3;
    QT::QByteArray::operator=(v48, a3 + 64);
    v50 = *(_DWORD *)(a3 + 88);
  }
  v19 = (*(__int64 (__fastcall **)(_BYTE *, const QT::QObject *))(*(_QWORD *)a1 + 560LL))(a1, a2);
  if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_8974E0, a2) && (get_merge_state() & 3) != 0 )
    v50 |= 0x100u;
  if ( v19 <= 0x3F )
    v50 |= (((((unsigned __int64)((v19 & 0x40) == 0) << v19) & *(_QWORD *)&dword_8BDE50) == 0) << 7) + 128;
  v20 = sub_4B8CE0(a2);
  v21 = v50;
  if ( v20 )
  {
    v21 = v50 | 0x40000000;
    v50 |= 0x40000000u;
  }
  v22 = sub_4B8B20(a2, v21);
  v24 = a1[529] == 0;
  v50 = v22;
  v25 = (const char *)v22;
  if ( v24 )
    v26 = sub_2DE3A0(*(double *)v3.m128i_i64, (__int64)a2, v22, v43, v23);
  else
    v26 = 0;
  if ( v48[0] && !_InterlockedSub((volatile signed __int32 *)v48[0], 1u) )
    free(v48[0]);
  v27 = v45;
  if ( v45 )
  {
    v28 = v46;
    if ( (_QWORD)v46 )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v27 + 40 * v29);
        jvalue_t_clear(v30 + 3);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31, v25);
        }
        ++v29;
        v27 = v45;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v46 = 0;
    *(double *)v3.m128i_i64 = qfree(v27, v25);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43, v25, *(double *)v3.m128i_i64);
  }
  return v26;
}
