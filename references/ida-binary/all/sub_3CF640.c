__int64 __fastcall til_view_t__::vfunc_5(
        QT::QSplitter *this,
        QT::QEvent *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __int64 a8)
{
  int v8; // eax
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // r15
  int v16; // ecx
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 *v24; // r15
  __int64 v25; // r12
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 i; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 j; // r14
  char *v36; // rsi
  __m128i si128; // xmm0
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // [rsp+0h] [rbp-68h]
  __int64 v41; // [rsp+0h] [rbp-68h]
  __int64 v42; // [rsp+0h] [rbp-68h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h] BYREF
  __int128 v45; // [rsp+18h] [rbp-50h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v8 = *((unsigned __int16 *)a2 + 4);
  v46 = __readfsqword(0x28u);
  if ( v8 == 2004 )
  {
    v11 = (char *)this;
    v44 = 0;
    v45 = 0;
    if ( (unsigned __int8)sub_51B3C0(&v44, this) )
    {
      v18 = operator new(0x18u);
      *(_QWORD *)v18 = 0;
      v19 = v18;
      *(_OWORD *)(v18 + 8) = 0;
      sub_519010(v18, &v44);
      v20 = *((_QWORD *)a2 + 3);
      v41 = *((_QWORD *)a2 + 2);
      if ( v20 )
      {
        v21 = *((_QWORD *)a2 + 2);
        v22 = 0;
        while ( !*(_QWORD *)(v21 + 8) || strcmp(*(const char **)v21, "partitions") )
        {
          ++v22;
          v21 += 40;
          if ( v20 == v22 )
            goto LABEL_49;
        }
      }
      else
      {
LABEL_49:
        if ( *((_QWORD *)a2 + 4) < (unsigned __int64)(v20 + 1) )
        {
          v41 = qvector_reserve((char *)a2 + 16, v41, v20 + 1, 40);
          v20 = *((_QWORD *)a2 + 3);
          *((_QWORD *)a2 + 2) = v41;
        }
        v21 = v41 + 40 * v20;
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        *(_DWORD *)(v21 + 24) = 0;
        *(_QWORD *)(v21 + 32) = 0;
        ++*((_QWORD *)a2 + 3);
        v36 = *(char **)v21;
        if ( *(_QWORD *)(v21 + 16) <= 0xAu )
        {
          v38 = qvector_reserve(v21, v36, 11, 1);
          *(_QWORD *)v21 = v38;
          v36 = (char *)v38;
        }
        *(_QWORD *)(v21 + 8) = 11;
        qmemcpy(v36, "partitions", 10);
        *(_BYTE *)(*(_QWORD *)v21 + 10LL) = 0;
      }
      v11 = (char *)*(unsigned int *)(v21 + 24);
      v23 = v21 + 24;
      if ( (_DWORD)v11 )
        jvalue_t_clear(v23);
      *(_DWORD *)v23 = 4;
      *(_QWORD *)(v23 + 8) = v19;
    }
    if ( !*((_BYTE *)this + 112) )
    {
      v12 = *((_QWORD *)this + 13);
      if ( v12 )
      {
        v13 = *((_QWORD *)a2 + 3);
        v40 = *(_BYTE *)(*(_QWORD *)(v12 + 1000) + 57LL);
        v43 = *((_QWORD *)a2 + 2);
        if ( v13 )
        {
          v14 = *((_QWORD *)a2 + 2);
          v15 = 0;
          while ( 1 )
          {
            if ( *(_QWORD *)(v14 + 8) )
            {
              v11 = "dynamic_selection";
              if ( !strcmp(*(const char **)v14, "dynamic_selection") )
                break;
            }
            ++v15;
            v14 += 40;
            if ( v13 == v15 )
              goto LABEL_54;
          }
        }
        else
        {
LABEL_54:
          if ( *((_QWORD *)a2 + 4) < (unsigned __int64)(v13 + 1) )
          {
            v43 = qvector_reserve((char *)a2 + 16, v43, v13 + 1, 40);
            v13 = *((_QWORD *)a2 + 3);
            *((_QWORD *)a2 + 2) = v43;
          }
          v14 = v43 + 40 * v13;
          *(_QWORD *)v14 = 0;
          *(_OWORD *)(v14 + 8) = 0;
          *(_DWORD *)(v14 + 24) = 0;
          *(_QWORD *)(v14 + 32) = 0;
          ++*((_QWORD *)a2 + 3);
          v11 = *(char **)v14;
          if ( *(_QWORD *)(v14 + 16) <= 0x11u )
          {
            v39 = qvector_reserve(v14, v11, 18, 1);
            *(_QWORD *)v14 = v39;
            v11 = (char *)v39;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_5DD7A0);
          *(_QWORD *)(v14 + 8) = 18;
          v11[16] = 110;
          *(__m128i *)v11 = si128;
          *(_BYTE *)(*(_QWORD *)v14 + 17LL) = 0;
        }
        v16 = *(_DWORD *)(v14 + 24);
        v17 = v14 + 24;
        if ( v16 )
          jvalue_t_clear(v17);
        *(_DWORD *)v17 = 5;
        *(_BYTE *)(v17 + 8) = v40;
      }
    }
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44, v11);
    }
  }
  else
  {
    if ( v8 != 2005 )
      return QT::QSplitter::event(this, a2);
    v24 = *((__int64 **)a2 + 2);
    v25 = v24[1];
    if ( !v25 )
      return QT::QSplitter::event(this, a2);
    v26 = 0;
    v42 = *v24;
    v27 = *v24;
    while ( !*(_QWORD *)(v27 + 8) || strcmp(*(const char **)v27, "partitions") )
    {
      ++v26;
      v27 += 40;
      if ( v25 == v26 )
        goto LABEL_35;
    }
    if ( *(_DWORD *)(v27 + 24) == 4 )
    {
      v28 = *(_QWORD *)(v27 + 32);
      a7 = 0.0;
      v44 = 0;
      v45 = 0;
      sub_518DE0(&v44, v28);
      sub_51B6E0(this);
      if ( v44 )
      {
        *(_QWORD *)&v45 = 0;
        a7 = qfree(v44, (const char *)&v44);
      }
      v25 = v24[1];
      if ( !v25 )
        return QT::QSplitter::event(this, a2);
      v42 = *v24;
    }
LABEL_35:
    v29 = v42;
    v30 = 0;
    for ( i = v42; !*(_QWORD *)(i + 8) || strcmp(*(const char **)i, "dynamic_selection"); i += 40 )
    {
      if ( v25 == ++v30 )
        return QT::QSplitter::event(this, a2);
    }
    if ( !*((_BYTE *)this + 112) )
    {
      v34 = *((_QWORD *)this + 13);
      if ( v34 )
      {
        for ( j = 0; j != v25; ++j )
        {
          if ( *(_QWORD *)(v29 + 8) && !strcmp(*(const char **)v29, "dynamic_selection") )
            goto LABEL_47;
          v29 += 40;
        }
        if ( !under_debugger )
        {
          interr(1289, "dynamic_selection", v32, v33, a7);
LABEL_47:
          if ( *(_DWORD *)(v29 + 24) == 5 )
          {
            *(_BYTE *)(*(_QWORD *)(v34 + 1000) + 57LL) = *(_BYTE *)(v29 + 32);
            return QT::QSplitter::event(this, a2);
          }
          if ( !under_debugger )
            interr(1281, "dynamic_selection", v32, v33, a7);
        }
        BUG();
      }
    }
  }
  return QT::QSplitter::event(this, a2);
}
