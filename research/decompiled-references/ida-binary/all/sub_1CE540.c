__int64 __fastcall database_persistent_t__::vfunc_13(
        __int64 a1,
        void ***a2,
        const QT::QString *a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // r13
  __int64 v14; // r14
  unsigned int v16; // r14d
  __int64 v17; // rdi
  void **p_src; // rsi
  signed __int64 v19; // rax
  void **v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __m128i v27; // xmm0
  void *v28; // rsi
  __m128 v29; // xmm1
  __int64 v30; // rdi
  void **v31; // rbp
  size_t v32; // r13
  void **v33; // r12
  void *v34; // r8
  size_t v35; // r14
  void **v36; // rsi
  size_t v37; // rdx
  unsigned __int64 v38; // r13
  void **v39; // r12
  unsigned int v40; // ebx
  __int64 v42; // rax
  __int64 v43; // rax
  char v44; // [rsp+0h] [rbp-B8h]
  _BYTE v45[24]; // [rsp+8h] [rbp-B0h] BYREF
  void *src; // [rsp+20h] [rbp-98h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-90h]
  void **v48; // [rsp+40h] [rbp-78h] BYREF
  __int128 v49; // [rsp+48h] [rbp-70h]
  void *v50; // [rsp+60h] [rbp-58h] BYREF
  void *v51; // [rsp+68h] [rbp-50h]
  unsigned __int64 v52; // [rsp+78h] [rbp-40h]

  v13 = *((_QWORD *)a3 + 2);
  v14 = *((_QWORD *)a3 + 1);
  v52 = __readfsqword(0x28u);
  if ( qword_8CB330 == v13
    && (unsigned __int8)QT::QtPrivate::equalStrings(qword_8CB330, v14, qword_8CB330, qword_8CB328) )
  {
    v16 = 70;
  }
  else if ( v13 == qword_8CB310 && (unsigned __int8)QT::QtPrivate::equalStrings(v13, v14, v13, qword_8CB308) )
  {
    v16 = 69;
  }
  else if ( v13 == qword_8CB2D0 && (unsigned __int8)QT::QtPrivate::equalStrings(v13, v14, v13, qword_8CB2C8) )
  {
    v16 = 66;
  }
  else
  {
    v16 = 71;
  }
  v17 = *(_QWORD *)(a1 + 32);
  p_src = &src;
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( netnode_qgetblob(v17, &src, 1, 0, v16) <= 0 )
  {
    v40 = 0;
  }
  else
  {
    p_src = &src;
    v48 = nullptr;
    v49 = 0;
    v19 = sub_1CCE70((void **)&v48, (unsigned __int8 **)&src);
    v20 = v48;
    if ( v19 <= 0 )
    {
      v40 = 0;
    }
    else
    {
      *(_OWORD *)v45 = v49;
      QT::QString::toUtf8_helper((QT::QString *)&v50, a3);
      v27 = _mm_loadl_epi64((const __m128i *)&v45[8]);
      v28 = v51;
      v29 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)v45), v27);
      *(__m128 *)&v45[8] = v29;
      if ( !v51 )
        v28 = &QT::QByteArray::_empty;
      sub_169700(
        (int)"Converting IDB layout '%s' to newer format.\n",
        (__int64)v28,
        v21,
        v22,
        v23,
        v24,
        (__m128)v27,
        v29,
        a6,
        a7,
        v25,
        v26,
        a10,
        a11,
        v44);
      sub_17F470(&v50);
      v30 = *(_QWORD *)(a1 + 32);
      p_src = v20;
      v31 = (void **)src;
      *(__m128i *)n = _mm_load_si128((const __m128i *)&v45[8]);
      src = v20;
      netnode_setblob(v30, v20, *(_QWORD *)v45, 0, v16);
      if ( a2 )
      {
        v32 = n[0];
        v33 = a2[1];
        v34 = src;
        v35 = n[0];
        if ( v33 )
        {
          v33 = (void **)((char *)v33 - 1);
          v35 = (size_t)v33 + n[0];
        }
        v36 = *a2;
        if ( (unsigned __int64)a2[2] < v35 + 1 )
        {
          *(_QWORD *)v45 = src;
          v42 = qvector_reserve(a2, v36, v35 + 1, 1);
          *a2 = (void **)v42;
          v34 = *(void **)v45;
          v36 = (void **)v42;
        }
        a2[1] = (void **)(v35 + 1);
        v37 = v32;
        v38 = 2;
        *((_BYTE *)v36 + v35) = 0;
        memmove((char *)*a2 + (_QWORD)v33, v34, v37);
        v39 = a2[1];
        if ( v39 )
        {
          v38 = (unsigned __int64)v39 + 1;
          v39 = (void **)((char *)v39 - 1);
        }
        p_src = *a2;
        if ( (unsigned __int64)a2[2] < v38 )
        {
          v43 = qvector_reserve(a2, p_src, v38, 1);
          *a2 = (void **)v43;
          p_src = (void **)v43;
        }
        a2[1] = (void **)v38;
        *((_BYTE *)v39 + (_QWORD)p_src) = 0;
        *((_BYTE *)v39 + (_QWORD)*a2 + 1) = 0;
      }
      v20 = v31;
      v40 = 1;
    }
    if ( v20 )
      qfree(v20, (const char *)p_src);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, (const char *)p_src);
  }
  return v40;
}
