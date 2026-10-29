unsigned __int64 __fastcall sub_4E3480(__int64 a1, QT::QHeaderView *a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // r15
  _DWORD *v8; // rax
  size_t v9; // rbx
  int v10; // r9d
  unsigned __int64 v11; // rsi
  double v12; // xmm0_8
  int v13; // eax
  __int64 i; // r12
  char v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  _QWORD *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // rbp
  char isSectionHidden; // al
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  __int64 v33; // rbx
  const char *v34; // r11
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  size_t v40; // r10
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  const void *v44; // r11
  void *v45; // rax
  size_t v46; // [rsp+0h] [rbp-1E8h]
  _QWORD *v48; // [rsp+18h] [rbp-1D0h]
  _QWORD *v49; // [rsp+20h] [rbp-1C8h]
  const void *v50; // [rsp+28h] [rbp-1C0h]
  const char *v51; // [rsp+30h] [rbp-1B8h]
  int v52; // [rsp+3Ch] [rbp-1ACh]
  __int64 v53; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v54; // [rsp+48h] [rbp-1A0h]
  __int64 v55; // [rsp+60h] [rbp-188h] BYREF
  __int128 v56; // [rsp+68h] [rbp-180h]
  void *src; // [rsp+80h] [rbp-168h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-160h]
  _QWORD v59[7]; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-110h]
  __int128 v61; // [rsp+E0h] [rbp-108h]
  __int64 v62; // [rsp+F0h] [rbp-F8h]
  __int128 v63; // [rsp+F8h] [rbp-F0h]
  _QWORD *v64; // [rsp+108h] [rbp-E0h]
  __int64 v65; // [rsp+110h] [rbp-D8h]
  __int64 v66; // [rsp+118h] [rbp-D0h]
  __int128 v67; // [rsp+120h] [rbp-C8h]
  void *v68; // [rsp+130h] [rbp-B8h]
  __int128 v69; // [rsp+138h] [rbp-B0h]
  int v70; // [rsp+148h] [rbp-A0h]
  _QWORD *v71; // [rsp+150h] [rbp-98h] BYREF
  __int128 v72; // [rsp+158h] [rbp-90h]
  int v73; // [rsp+168h] [rbp-80h]
  __int64 v74; // [rsp+170h] [rbp-78h]
  __int128 v75; // [rsp+178h] [rbp-70h]
  __int64 v76; // [rsp+188h] [rbp-60h]
  __int128 v77; // [rsp+190h] [rbp-58h]
  unsigned __int64 v78; // [rsp+1A8h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v52 = QT::QHeaderView::count(a2);
  v49 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 304LL))(a1);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 312LL))(a1);
  v48 = (_QWORD *)v4;
  if ( v52 != v49[1] || v52 != *(_QWORD *)(v4 + 8) )
  {
    if ( !under_debugger )
      interr(72185, a2, v5, v52, a3);
    BUG();
  }
  v53 = 0;
  v54 = 0;
  if ( v52
    && (v53 = qvector_reserve(&v53, 0, v52, 1),
        v29 = 0,
        memset((void *)(v53 + v54), 0, v52 - (_QWORD)v54),
        *(_QWORD *)&v54 = v52,
        v52 > 0) )
  {
    while ( 1 )
    {
      isSectionHidden = QT::QHeaderView::isSectionHidden(a2, v29);
      *(_BYTE *)(v53 + v29) = isSectionHidden ^ 1;
      if ( v52 == v29 + 1 )
        break;
      ++v29;
    }
    v31 = operator new(0x28u);
    *(_DWORD *)(v31 + 32) = 2;
    v7 = (_QWORD *)v31;
    v32 = 0;
    *(_OWORD *)(v31 + 16) = 0;
    *(_QWORD *)(v31 + 8) = 0;
    *(_QWORD *)v31 = &forms::vlayout_t___vtable;
    while ( 1 )
    {
      v33 = operator new(0x88u);
      v34 = &s1;
      v35 = 24 * v32 + *v49;
      if ( *(_QWORD *)(v35 + 8) )
        v34 = *(const char **)v35;
      v36 = v53;
      *(_DWORD *)(v33 + 8) = 7;
      *(_DWORD *)(v33 + 12) = v32 + 100;
      *(_QWORD *)(v33 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v33 + 24) = 0xFFFFFFFFLL;
      *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v33 + 40) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v33 + 48) = 0;
      *(_QWORD *)(v33 + 56) = 0;
      *(_QWORD *)(v33 + 80) = 0;
      *(_QWORD *)v33 = &forms::abstract_button_t___vtable;
      *(_QWORD *)(v33 + 104) = v32 + v36;
      *(_QWORD *)(v33 + 112) = 0;
      *(_OWORD *)(v33 + 64) = 0;
      *(_OWORD *)(v33 + 88) = 0;
      *(_OWORD *)(v33 + 120) = 0;
      if ( v34 )
      {
        v51 = v34;
        v46 = strlen(v34);
        v37 = (void *)qvector_reserve(v33 + 112, 0, v46 + 1, 1);
        *(_QWORD *)(v33 + 112) = v37;
        *(_QWORD *)(v33 + 120) = v46 + 1;
        memmove(v37, v51, v46);
        *(_BYTE *)(*(_QWORD *)(v33 + 112) + v46) = 0;
      }
      *(_DWORD *)(v33 + 32) = 1;
      *(_QWORD *)v33 = &forms::check_box_t___vtable;
      if ( v32 < v48[1] )
      {
        v38 = 24 * v32 + *v48;
        if ( v33 + 56 != v38 )
        {
          v39 = *(_QWORD *)(v38 + 8);
          if ( v39 && (v40 = v39 - 1, v39 != 1) )
          {
            v44 = *(const void **)v38;
            v45 = *(void **)(v33 + 56);
            if ( *(_QWORD *)(v33 + 72) < v39 )
            {
              v50 = v44;
              v46 = v39 - 1;
              v45 = (void *)qvector_reserve(v33 + 56, *(_QWORD *)(v33 + 56), v39, 1);
              v44 = v50;
              v40 = v39 - 1;
              *(_QWORD *)(v33 + 56) = v45;
            }
            *(_QWORD *)(v33 + 64) = v39;
            memmove(v45, v44, v40);
            *(_BYTE *)(*(_QWORD *)(v33 + 56) + v39 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(v33 + 64) = 0;
          }
        }
      }
      v41 = v7[2];
      v42 = v7[1];
      if ( v7[3] < (unsigned __int64)(v41 + 1) )
      {
        v43 = qvector_reserve(v7 + 1, v42, v41 + 1, 8);
        v7[1] = v43;
        v42 = v43;
        v41 = v7[2];
      }
      *(_QWORD *)(v42 + 8 * v41) = v33;
      ++v7[2];
      if ( v29 == v32 )
        break;
      ++v32;
    }
  }
  else
  {
    v6 = operator new(0x28u);
    *(_QWORD *)(v6 + 8) = 0;
    v7 = (_QWORD *)v6;
    *(_DWORD *)(v6 + 32) = 2;
    *(_OWORD *)(v6 + 16) = 0;
    *(_QWORD *)v6 = &forms::vlayout_t___vtable;
  }
  v56 = 0;
  v55 = 0;
  src = nullptr;
  *(_OWORD *)n = 0;
  v8 = (_DWORD *)qvector_reserve(&src, 0, 8, 1);
  src = v8;
  n[0] = 8;
  *v8 = 1970040643;
  *(_DWORD *)((char *)v8 + 3) = 1936616821;
  *((_BYTE *)src + 7) = 0;
  v9 = n[0];
  v59[1] = 0xFFFFFFFF00000001LL;
  v59[2] = 0xFFFFFFFFLL;
  v59[3] = 0xFFFFFFFFLL;
  v59[4] = 0xFFFFFFFF00000000LL;
  v59[5] = 0xFFFFFFFF00000000LL;
  v59[6] = 0;
  v60 = 0;
  v62 = 0;
  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  v59[0] = &forms::abstract_form_desc_t___vtable;
  v68 = nullptr;
  v61 = 0;
  v63 = 0;
  v67 = 0;
  v69 = 0;
  if ( n[0] )
  {
    v68 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v69 + 1) = v9;
    memcpy(v68, src, v9);
    *(_QWORD *)&v69 = v9;
  }
  v70 = -1;
  v71 = nullptr;
  v59[0] = &forms::dialog_desc_t___vtable;
  v73 = -1;
  v74 = 0;
  v76 = 0;
  v72 = 0;
  v75 = 0;
  v77 = 0;
  sub_4DD060((__int64)&v71, 2, -1);
  sub_4DD060((__int64)&v71, 4, -1);
  if ( src )
  {
    n[0] = 0;
    qfree(src, &byte_4);
  }
  v11 = 0;
  v64 = v7;
  v12 = callui(203, 0, (unsigned int)v59, (unsigned int)&v55, (unsigned int)&callui, v10, v46);
  if ( v13 == 1 )
  {
    v11 = (unsigned int)v52;
    if ( v52 > 0 )
    {
      for ( i = 0; i != v52; ++i )
      {
        v11 = (unsigned int)i;
        v15 = *(_BYTE *)(v53 + i) ^ 1;
        if ( v15 != (unsigned __int8)QT::QHeaderView::isSectionHidden(a2, i) )
        {
          v11 = (unsigned int)i;
          QT::QHeaderView::setSectionHidden(a2, i, v15);
        }
      }
    }
  }
  v16 = v76;
  v59[0] = &forms::dialog_desc_t___vtable;
  if ( v76 )
  {
    v17 = v77;
    if ( (_QWORD)v77 )
    {
      v18 = 0;
      do
      {
        v19 = (__int64 *)(v16 + 24 * v18);
        v20 = *v19;
        if ( *v19 )
        {
          v19[1] = 0;
          v12 = qfree(v20, (const char *)v11, v12);
          v16 = v76;
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v77 = 0;
    v12 = qfree(v16, (const char *)v11, v12);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    v12 = qfree(v74, (const char *)v11, v12);
  }
  v21 = v71;
  v22 = &v71[v72];
  if ( v71 != v22 )
  {
    do
    {
      if ( *v21 )
        (*(void (__fastcall **)(_QWORD, double))(*(_QWORD *)*v21 + 8LL))(*v21, v12);
      ++v21;
    }
    while ( v22 != v21 );
    v22 = v71;
  }
  if ( v22 )
  {
    *(_QWORD *)&v72 = 0;
    v12 = qfree(v22, (const char *)v11, v12);
  }
  v59[0] = &forms::abstract_form_desc_t___vtable;
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    v12 = qfree(v68, (const char *)v11, v12);
  }
  v59[0] = &forms::container_t___vtable;
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    v12 = qfree(v66, (const char *)v11, v12);
  }
  v59[0] = &forms::abstract_container_t___vtable;
  if ( v64 )
    (*(void (__fastcall **)(_QWORD *, double))(*v64 + 8LL))(v64, v12);
  v23 = v62;
  v64 = nullptr;
  v59[0] = &forms::element_t___vtable;
  if ( v62 )
  {
    v24 = v63;
    if ( (_QWORD)v63 )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)(v23 + 24 * v25);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          v12 = qfree(v27, (const char *)v11, v12);
          v23 = v62;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v63 = 0;
    v12 = qfree(v23, (const char *)v11, v12);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    v12 = qfree(v60, (const char *)v11, v12);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    v12 = qfree(v55, (const char *)v11, v12);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53, (const char *)v11, v12);
  }
  return v78 - __readfsqword(0x28u);
}
