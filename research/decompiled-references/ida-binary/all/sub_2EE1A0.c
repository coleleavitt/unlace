__int64 __fastcall CustomCodeViewer__::vfunc_5(QT::QSplitter *this, QT::QEvent *a2)
{
  __int16 v3; // ax
  __int64 *v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // r15
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rbx
  char *v23; // rsi
  __m128i si128; // xmm0
  char *v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+4h] [rbp-44h]
  int v32; // [rsp+4h] [rbp-44h]
  __int64 v33; // [rsp+8h] [rbp-40h]
  __int64 v34; // [rsp+8h] [rbp-40h]

  v3 = *((_WORD *)a2 + 4);
  if ( v3 == 2004 )
  {
    v13 = *((_QWORD *)a2 + 3);
    v31 = *((_DWORD *)this + 40);
    v33 = *((_QWORD *)a2 + 2);
    if ( v13 )
    {
      v14 = *((_QWORD *)a2 + 2);
      v15 = 0;
      while ( !*(_QWORD *)(v14 + 8) || strcmp(*(const char **)v14, "left_margin_width") )
      {
        ++v15;
        v14 += 40;
        if ( v13 == v15 )
          goto LABEL_34;
      }
    }
    else
    {
LABEL_34:
      if ( *((_QWORD *)a2 + 4) < (unsigned __int64)(v13 + 1) )
      {
        v30 = qvector_reserve((char *)a2 + 16, v33, v13 + 1, 40);
        v13 = *((_QWORD *)a2 + 3);
        v33 = v30;
        *((_QWORD *)a2 + 2) = v30;
      }
      v14 = v33 + 40 * v13;
      *(_QWORD *)v14 = 0;
      *(_OWORD *)(v14 + 8) = 0;
      *(_DWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0;
      ++*((_QWORD *)a2 + 3);
      v23 = *(char **)v14;
      if ( *(_QWORD *)(v14 + 16) <= 0x11u )
      {
        v29 = qvector_reserve(v14, v23, 18, 1);
        *(_QWORD *)v14 = v29;
        v23 = (char *)v29;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DCF30);
      *(_QWORD *)(v14 + 8) = 18;
      v23[16] = 104;
      *(__m128i *)v23 = si128;
      *(_BYTE *)(*(_QWORD *)v14 + 17LL) = 0;
    }
    v16 = *(_DWORD *)(v14 + 24);
    v17 = v14 + 24;
    if ( v16 )
      jvalue_t_clear(v17);
    *(_DWORD *)v17 = 1;
    *(_QWORD *)(v17 + 8) = v31;
    v18 = *((_QWORD *)a2 + 3);
    v32 = *((_DWORD *)this + 41);
    v34 = *((_QWORD *)a2 + 2);
    if ( v18 )
    {
      v19 = *((_QWORD *)a2 + 2);
      v20 = 0;
      while ( !*(_QWORD *)(v19 + 8) || strcmp(*(const char **)v19, "right_margin_width") )
      {
        ++v20;
        v19 += 40;
        if ( v18 == v20 )
          goto LABEL_39;
      }
    }
    else
    {
LABEL_39:
      if ( *((_QWORD *)a2 + 4) < (unsigned __int64)(v18 + 1) )
      {
        v28 = qvector_reserve((char *)a2 + 16, v34, v18 + 1, 40);
        v18 = *((_QWORD *)a2 + 3);
        v34 = v28;
        *((_QWORD *)a2 + 2) = v28;
      }
      v19 = v34 + 40 * v18;
      *(_QWORD *)v19 = 0;
      *(_OWORD *)(v19 + 8) = 0;
      *(_DWORD *)(v19 + 24) = 0;
      *(_QWORD *)(v19 + 32) = 0;
      ++*((_QWORD *)a2 + 3);
      v25 = *(char **)v19;
      if ( *(_QWORD *)(v19 + 16) <= 0x12u )
      {
        v27 = qvector_reserve(v19, v25, 19, 1);
        *(_QWORD *)v19 = v27;
        v25 = (char *)v27;
      }
      v26 = _mm_load_si128((const __m128i *)&xmmword_5DCF40);
      *(_QWORD *)(v19 + 8) = 19;
      *((_WORD *)v25 + 8) = 26740;
      *(__m128i *)v25 = v26;
      *(_BYTE *)(*(_QWORD *)v19 + 18LL) = 0;
    }
    v21 = *(_DWORD *)(v19 + 24);
    v22 = v19 + 24;
    if ( v21 )
      jvalue_t_clear(v22);
    *(_DWORD *)v22 = 1;
    *(_QWORD *)(v22 + 8) = v32;
  }
  else if ( v3 == 2005 )
  {
    v4 = *((__int64 **)a2 + 2);
    v5 = v4[1];
    if ( v5 )
    {
      v6 = *v4;
      v7 = 0;
      while ( !*(_QWORD *)(v6 + 8) || strcmp(*(const char **)v6, "left_margin_width") )
      {
        ++v7;
        v6 += 40;
        if ( v5 == v7 )
          goto LABEL_11;
      }
      if ( *(_DWORD *)(v6 + 24) == 1 )
      {
        v8 = *(_QWORD *)(v6 + 32);
        if ( (int)v8 >= 0 )
        {
          *((_DWORD *)this + 40) = v8;
          v4 = *((__int64 **)a2 + 2);
          v5 = v4[1];
          if ( !v5 )
            return QT::QSplitter::event(this, a2);
        }
      }
LABEL_11:
      v9 = *v4;
      v10 = 0;
      while ( !*(_QWORD *)(v9 + 8) || strcmp(*(const char **)v9, "right_margin_width") )
      {
        ++v10;
        v9 += 40;
        if ( v5 == v10 )
          return QT::QSplitter::event(this, a2);
      }
      if ( *(_DWORD *)(v9 + 24) == 1 )
      {
        v11 = *(_QWORD *)(v9 + 32);
        if ( (int)v11 >= 0 )
          *((_DWORD *)this + 41) = v11;
      }
    }
  }
  return QT::QSplitter::event(this, a2);
}
