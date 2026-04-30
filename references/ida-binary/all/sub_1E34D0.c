unsigned __int64 __fastcall sub_1E34D0(QT::QAbstractScrollArea *this, __int64 a2)
{
  char v3; // bl
  __int64 v4; // rax
  double v5; // xmm0_8
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // rax
  __int64 v13; // r12
  __int64 v14; // r14
  int *v15; // rbx
  int *i; // r15
  unsigned __int64 v17; // r12
  __int64 v18; // rbx
  unsigned __int64 v19; // r14
  __int64 v20; // r12
  __int64 (__fastcall **v21)(); // rsi
  const char *v22; // r14
  size_t v23; // r12
  const char *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  size_t v28; // r9
  unsigned __int64 v29; // r12
  __int64 v30; // r8
  size_t v31; // r10
  __int64 (__fastcall **v32)(); // rsi
  int v33; // eax
  __int64 (__fastcall **v34)(); // rsi
  unsigned __int64 v35; // rdx
  size_t v36; // rax
  const char *v37; // rbx
  double v38; // xmm0_8
  double v39; // [rsp+0h] [rbp-98h]
  size_t v40; // [rsp+0h] [rbp-98h]
  unsigned __int64 v41; // [rsp+8h] [rbp-90h]
  __int64 v42; // [rsp+10h] [rbp-88h]
  size_t v43; // [rsp+18h] [rbp-80h]
  __int64 (__fastcall **v44)(); // [rsp+20h] [rbp-78h] BYREF
  __int128 v45; // [rsp+28h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __m128i si128; // [rsp+48h] [rbp-50h]
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v3 = a2;
  LOBYTE(v41) = a2;
  v48 = __readfsqword(0x28u);
  *((_DWORD *)this + 257) = *((_DWORD *)this + 264) & 1;
  v4 = QT::QAbstractScrollArea::viewport(this);
  v39 = (double)(*(_DWORD *)(*(_QWORD *)(v4 + 32) + 28LL) + 1 - *(_DWORD *)(*(_QWORD *)(v4 + 32) + 20LL));
  v5 = sub_2855D0(*((_QWORD *)this + 111));
  v6 = (__int64 *)((char *)this + 1000);
  *((_DWORD *)this + 258) = (int)(v39 / v5);
  if ( (_BYTE)a2 )
    sub_1DFA40((__int64)v6);
  else
    sub_1DFB20(v6, a2);
  v7 = *((__int64 **)this + 126);
  v8 = *((__int64 **)this + 125);
  if ( v8 == v7 )
  {
    src = dbgreg_place_t___vtable;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC600);
  }
  else
  {
    v9 = *v8;
    v44 = dbgreg_place_t___vtable;
    *(_QWORD *)((char *)&v45 + 4) = v9;
    HIDWORD(v45) = 0;
    LODWORD(v45) = 0;
    v10 = *((_DWORD *)v7 - 8);
    v11 = *(v7 - 7);
    src = dbgreg_place_t___vtable;
    si128.m128i_i32[0] = 0;
    si128.m128i_i32[3] = v10 - 1;
    *(__int64 *)((char *)si128.m128i_i64 + 4) = v11;
  }
  sub_1EB140(this);
  if ( !v3 )
  {
    v13 = *((_QWORD *)this + 126);
    v14 = *((_QWORD *)this + 125);
    for ( *((_DWORD *)this + 264) &= ~0x10000u; v13 != v14; v14 += 56 )
    {
      v15 = *(int **)(v14 + 16);
      for ( i = &v15[*(_QWORD *)(v14 + 24)]; i != v15; ++v15 )
      {
        while ( *v15 < 0 || !(unsigned __int8)sub_1E22F0(*v15) )
        {
          if ( i == ++v15 )
            goto LABEL_15;
        }
        *((_DWORD *)this + 264) |= 0x10000u;
      }
LABEL_15:
      ;
    }
    if ( dbg )
    {
      v17 = 0;
      v18 = 0;
      v44 = nullptr;
      v45 = 0;
      do
      {
        v33 = *((unsigned __int8 *)this + 1024);
        if ( _bittest(&v33, v18) )
        {
          if ( v17 > 1 )
          {
            v34 = v44;
            v35 = v17 + 1;
            if ( *((_QWORD *)&v45 + 1) < v17 + 1 )
            {
              v44 = (__int64 (__fastcall **)())qvector_reserve(&v44, v44, v35, 1);
              v35 = v17 + 1;
              v34 = v44;
            }
            *(_QWORD *)&v45 = v35;
            *((_BYTE *)v34 + v17 - 1) = 44;
            v19 = 2;
            *((_BYTE *)v44 + v17) = 0;
            v20 = v45;
            if ( (_QWORD)v45 )
            {
              v19 = v45 + 1;
              v20 = v45 - 1;
            }
            v21 = v44;
            if ( *((_QWORD *)&v45 + 1) < v19 )
            {
              v44 = (__int64 (__fastcall **)())qvector_reserve(&v44, v44, v19, 1);
              v21 = v44;
            }
            *(_QWORD *)&v45 = v19;
            *((_BYTE *)v21 + v20) = 32;
            *((_BYTE *)v44 + v20 + 1) = 0;
          }
          v22 = *(const char **)(*(_QWORD *)(dbg + 40LL) + 8 * v18);
          si128 = 0;
          src = nullptr;
          if ( v22 )
          {
            v23 = strlen(v22);
            v24 = v22;
            src = (void *)qvector_reserve(&src, 0, v23 + 1, 1);
            si128.m128i_i64[0] = v23 + 1;
            memmove(src, v22, v23);
            *((_BYTE *)src + v23) = 0;
            v29 = si128.m128i_i64[0];
            if ( si128.m128i_i64[0] )
            {
              v28 = si128.m128i_i64[0] - 1;
              if ( si128.m128i_i64[0] != 1 )
              {
                v30 = v45;
                v31 = si128.m128i_i64[0] - 1;
                if ( (_QWORD)v45 )
                {
                  v30 = v45 - 1;
                  v31 = v28 + v45 - 1;
                  v29 = si128.m128i_i64[0] + v45 - 1;
                }
                v32 = v44;
                if ( *((_QWORD *)&v45 + 1) < v29 )
                {
                  v43 = v31;
                  v42 = v30;
                  v40 = si128.m128i_i64[0] - 1;
                  v44 = (__int64 (__fastcall **)())qvector_reserve(&v44, v44, v29, 1);
                  v31 = v43;
                  v32 = v44;
                  v30 = v42;
                  v28 = v40;
                }
                *(_QWORD *)&v45 = v29;
                *((_BYTE *)v32 + v31) = 0;
                v24 = (const char *)src;
                memcpy((char *)v44 + v30, src, v28);
              }
            }
            if ( src )
            {
              si128.m128i_i64[0] = 0;
              qfree(src, v24, v25, v26, v27, v28);
            }
          }
          v17 = v45;
        }
        ++v18;
      }
      while ( v18 != 8 );
      v36 = 0;
      v37 = &s1;
      if ( v17 )
      {
        v36 = v17 - 1;
        v37 = (const char *)v44;
        v41 = (v17 - 1) >> 63;
      }
      if ( !v37 || (_BYTE)v41 )
      {
        v36 = 0;
        if ( v37 )
          v36 = strlen(v37);
      }
      v38 = QT::QString::fromUtf8(&src, v36, v37);
      QT::QWidget::setWindowTitle(this, (const QT::QString *)&src);
      if ( src && !_InterlockedSub((volatile signed __int32 *)src, 1u) )
        free(src);
      if ( v44 )
      {
        *(_QWORD *)&v45 = 0;
        qfree(v44, (const char *)&src, v38);
      }
    }
  }
  return v48 - __readfsqword(0x28u);
}
