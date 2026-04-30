__int64 __fastcall sub_1F01C0(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, int a6, char a7)
{
  QT::QFont *v7; // r14
  QT::QFontMetricsF *v8; // r15
  __int64 v9; // rdx
  bool v10; // zf
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rdx
  int *v16; // rax
  int *v17; // rcx
  int *v18; // rdi
  int v19; // edx
  int v20; // ecx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 tinfo_property4; // rbp
  unsigned __int64 v25; // rdx
  size_t v26; // rbx
  const char *v27; // rbp
  __int64 v28; // rdx
  void *v29; // rax
  const char *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  const char *v34; // rbp
  _BYTE *v35; // rbx
  char *v36; // r13
  unsigned int v37; // edi
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  const char *v40; // rdx
  const char *v41; // rsi
  __int64 tinfo_by_edm_name; // rax
  void *v43; // rax
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  struct _Unwind_Exception *v46; // rbx
  double v47; // [rsp+0h] [rbp-138h]
  unsigned __int64 v48; // [rsp+0h] [rbp-138h]
  __int64 v49; // [rsp+0h] [rbp-138h]
  __int64 v51; // [rsp+10h] [rbp-128h]
  unsigned __int64 v52; // [rsp+10h] [rbp-128h]
  __int64 v53; // [rsp+18h] [rbp-120h]
  __int64 v54; // [rsp+28h] [rbp-110h] BYREF
  void *dest; // [rsp+30h] [rbp-108h] BYREF
  __m128i v56; // [rsp+38h] [rbp-100h] BYREF
  __m128i v57[4]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v58[16]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v59[88]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v60; // [rsp+F8h] [rbp-40h]

  v9 = a7 & 1;
  v10 = *(_BYTE *)(a1 + 968) == 0;
  v60 = __readfsqword(0x28u);
  if ( v10 )
  {
    v13 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 424) )
    {
      v46 = (struct _Unwind_Exception *)sub_1E69C0(a3, a1, a2, v9, a5);
      if ( dest )
      {
        v56.m128i_i64[0] = 0;
        qfree(dest, (const char *)a2);
      }
      QT::QFontMetricsF::~QFontMetricsF(v8);
      QT::QFont::~QFont(v7);
      _Unwind_Resume(v46);
    }
    v12 = *(_DWORD *)(a1 + 416);
    if ( v12 == 2 )
    {
      v13 = *(_QWORD *)(a1 + 896);
    }
    else if ( v12 == 3 )
    {
      v13 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v13 = 0;
      if ( v12 == 1 )
        v13 = *(_QWORD *)(a1 + 888);
    }
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 168LL))(v13, 0, v9);
  if ( !v14 )
    return -1;
  v47 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v13 + 312LL))(v13);
  memset(v57, 0, sizeof(v57));
  QT::QFont::QFont((QT::QFont *)v58);
  QT::QFont::QFont((QT::QFont *)&dest);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v59, (const QT::QFont *)&dest);
  QT::QFont::~QFont((QT::QFont *)&dest);
  sub_1C8200(v57, a1, (__m128d)*(unsigned __int64 *)&v47);
  v15 = sub_178210(v14, (__int64)v57, a1);
  v16 = *(int **)(v15 + 184);
  v17 = &v16[5 * *(_QWORD *)(v15 + 192)];
  if ( v16 == v17 )
    goto LABEL_22;
  v18 = nullptr;
  do
  {
    v19 = *v16;
    if ( a6 >= *v16 && a6 < v19 + v16[1] && *((_BYTE *)v16 + 16) == 12 )
    {
      if ( v18 )
      {
        if ( v19 > *v18 )
          v18 = v16;
      }
      else
      {
        v18 = v16;
      }
    }
    v16 += 5;
  }
  while ( v17 != v16 );
  dest = nullptr;
  v56 = 0;
  if ( !v18 )
    goto LABEL_22;
  if ( v18[1] < 0 )
    goto LABEL_22;
  if ( !*((_BYTE *)v18 + 16) )
    goto LABEL_22;
  v20 = v18[2];
  if ( v20 < 0 )
    goto LABEL_22;
  v21 = v18[3];
  if ( v20 > v21 )
    goto LABEL_22;
  v22 = *(_QWORD *)(v14 + 16);
  if ( v22 )
  {
    v25 = v22 - 1;
    if ( v25 < v20 || v25 < v21 )
      goto LABEL_22;
    v26 = v21 - v20;
    v27 = (const char *)(*(_QWORD *)(v14 + 8) + v20);
    v28 = v26 + 1;
    if ( v26 == -1 )
    {
      v26 = -1;
      v29 = nullptr;
      goto LABEL_37;
    }
LABEL_61:
    v49 = v28;
    v29 = (void *)qvector_reserve(&dest, 0, v28, 1);
    dest = v29;
    v28 = v49;
LABEL_37:
    v56.m128i_i64[0] = v28;
    v30 = v27;
    *((_BYTE *)v29 + v26) = 0;
    memmove(dest, v27, v26);
    v48 = v56.m128i_i64[0];
    if ( v56.m128i_i64[0] > 1uLL )
    {
      v34 = (const char *)dest;
      v35 = (char *)dest + v56.m128i_i64[0] - 1;
      v36 = (char *)dest;
      if ( dest < v35 )
      {
        while ( 1 )
        {
          v37 = (char)*(v35 - 1);
          if ( v37 > 0x7F || !isspace(v37) )
            break;
          if ( v34 == --v35 )
            goto LABEL_54;
        }
      }
      v38 = v35 - v34;
      if ( v35 == v34 )
      {
LABEL_54:
        if ( !v34 )
        {
          v54 = 0;
          goto LABEL_58;
        }
        v56.m128i_i64[0] = 0;
        qfree(v34, v30, v31, v32, v33, v38);
        dest = nullptr;
        v56.m128i_i64[1] = 0;
        v48 = v56.m128i_i64[0];
      }
      else
      {
        v39 = v38 + 1;
        if ( v48 < v38 + 1 )
        {
          if ( v56.m128i_i64[1] < v39 )
          {
            v52 = v38 + 1;
            dest = (void *)qvector_reserve(&dest, v34, v38 + 1, 1);
            v36 = (char *)dest;
            v38 = v35 - v34;
            v39 = v52;
            v48 = v56.m128i_i64[0];
          }
          v51 = v39;
          v53 = v38;
          memset(&v36[v48], 0, v39 - v48);
          v35 = (char *)dest + v53;
          v56.m128i_i64[0] = v51;
        }
        else if ( v48 != v38 + 1 )
        {
          v56.m128i_i64[0] = v38 + 1;
        }
        *v35 = 0;
        v48 = v56.m128i_i64[0];
      }
    }
    v40 = &s1;
    v54 = 0;
    if ( !v48 )
    {
LABEL_46:
      v41 = nullptr;
      tinfo_by_edm_name = get_tinfo_by_edm_name(&v54, 0, v40);
      if ( tinfo_by_edm_name < 0 )
      {
        tinfo_property4 = -1;
      }
      else
      {
        v41 = (_BYTE *)(&qword_128 + 3);
        tinfo_property4 = get_tinfo_property4(v54, 299, tinfo_by_edm_name, 0, 0, 0);
        if ( tinfo_property4 != -1 && a2 )
        {
          v43 = *(void **)a2;
          v44 = _mm_loadu_si128((const __m128i *)(a2 + 8));
          v45 = _mm_loadu_si128(&v56);
          *(_QWORD *)a2 = dest;
          dest = v43;
          *(__m128i *)(a2 + 8) = v45;
          v56 = v44;
        }
      }
      clear_tinfo_t(&v54);
      if ( dest )
      {
        v56.m128i_i64[0] = 0;
        qfree(dest, v41);
      }
      goto LABEL_23;
    }
    v34 = (const char *)dest;
LABEL_58:
    v40 = v34;
    goto LABEL_46;
  }
  if ( !v20 && !v21 )
  {
    v26 = 0;
    v28 = 1;
    v27 = &s1;
    goto LABEL_61;
  }
LABEL_22:
  tinfo_property4 = -1;
LABEL_23:
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v59);
  QT::QFont::~QFont((QT::QFont *)v58);
  return tinfo_property4;
}
