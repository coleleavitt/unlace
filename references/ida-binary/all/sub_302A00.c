double __fastcall sub_302A00(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  double result; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 i; // rbp
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 j; // rbp
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 k; // rbp
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 m; // rbp
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rbp
  void *v41; // rdi
  __int64 v42; // rbp
  _QWORD *v43; // r12
  __int64 v44; // rdi
  __int64 v45; // rdi

  sub_193AE0(*(__int64 **)(a1 + 912), (__int64)a2, a3, a4, a5);
  sub_231840(*(_QWORD **)(a1 + 904), a2);
  *(_QWORD *)(a1 + 576) = &edit_type_form_data_t___vtable;
  clear_tinfo_t(a1 + 880);
  v6 = *(_QWORD *)(a1 + 848);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 856) = 0;
    result = qfree(v6, a2);
  }
  v8 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 576) = &unk_872A10;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 800);
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (__int64 *)(v8 + 24 * i);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12, a2);
          v8 = *(_QWORD *)(a1 + 792);
        }
      }
    }
    *(_QWORD *)(a1 + 800) = 0;
    result = qfree(v8, a2);
  }
  v13 = *(_QWORD *)(a1 + 768);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 776) = 0;
    result = qfree(v13, a2);
  }
  v14 = *(_QWORD *)(a1 + 744);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 752) = 0;
    result = qfree(v14, a2);
  }
  v15 = *(_QWORD *)(a1 + 720);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 728) = 0;
    result = qfree(v15, a2);
  }
  clear_tinfo_t(a1 + 712);
  v16 = *(_QWORD *)(a1 + 672);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 680);
    if ( v17 )
    {
      for ( j = 0; j != v17; ++j )
      {
        v19 = (__int64 *)(v16 + 24 * j);
        v20 = *v19;
        if ( *v19 )
        {
          v19[1] = 0;
          qfree(v20, a2);
          v16 = *(_QWORD *)(a1 + 672);
        }
      }
    }
    *(_QWORD *)(a1 + 680) = 0;
    result = qfree(v16, a2);
  }
  v21 = *(_QWORD *)(a1 + 640);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 648) = 0;
    result = qfree(v21, a2);
  }
  v22 = *(_QWORD *)(a1 + 584);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 592) = 0;
    result = qfree(v22, a2);
  }
  v23 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 280) = &add_type_form_data_t___vtable;
  if ( v23 )
  {
    *(_QWORD *)(a1 + 552) = 0;
    result = qfree(v23, a2);
  }
  v24 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 280) = &unk_872A10;
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 504);
    if ( v25 )
    {
      for ( k = 0; k != v25; ++k )
      {
        v27 = (__int64 *)(v24 + 24 * k);
        v28 = *v27;
        if ( *v27 )
        {
          v27[1] = 0;
          qfree(v28, a2);
          v24 = *(_QWORD *)(a1 + 496);
        }
      }
    }
    *(_QWORD *)(a1 + 504) = 0;
    result = qfree(v24, a2);
  }
  v29 = *(_QWORD *)(a1 + 472);
  if ( v29 )
  {
    *(_QWORD *)(a1 + 480) = 0;
    result = qfree(v29, a2);
  }
  v30 = *(_QWORD *)(a1 + 448);
  if ( v30 )
  {
    *(_QWORD *)(a1 + 456) = 0;
    result = qfree(v30, a2);
  }
  v31 = *(_QWORD *)(a1 + 424);
  if ( v31 )
  {
    *(_QWORD *)(a1 + 432) = 0;
    result = qfree(v31, a2);
  }
  clear_tinfo_t(a1 + 416);
  v32 = *(_QWORD *)(a1 + 376);
  if ( v32 )
  {
    v33 = *(_QWORD *)(a1 + 384);
    if ( v33 )
    {
      for ( m = 0; m != v33; ++m )
      {
        v35 = (__int64 *)(v32 + 24 * m);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36, a2);
          v32 = *(_QWORD *)(a1 + 376);
        }
      }
    }
    *(_QWORD *)(a1 + 384) = 0;
    result = qfree(v32, a2);
  }
  v37 = *(_QWORD *)(a1 + 344);
  if ( v37 )
  {
    *(_QWORD *)(a1 + 352) = 0;
    result = qfree(v37, a2);
  }
  v38 = *(_QWORD *)(a1 + 288);
  if ( v38 )
  {
    *(_QWORD *)(a1 + 296) = 0;
    result = qfree(v38, a2);
  }
  v39 = *(_QWORD *)(a1 + 192);
  if ( v39 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    result = qfree(v39, a2);
  }
  *(_QWORD *)(a1 + 152) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 152));
  if ( *(_BYTE *)(a1 + 148) )
    sub_533CA0(a1 + 16);
  v40 = *(_QWORD *)(a1 + 104);
  while ( v40 )
  {
    sub_2FFDC0(*(_QWORD **)(v40 + 24));
    v41 = (void *)v40;
    v40 = *(_QWORD *)(v40 + 16);
    a2 = (const char *)&dword_30;
    operator delete(v41, 0x30u);
  }
  v42 = *(_QWORD *)(a1 + 56);
  while ( v42 )
  {
    v43 = (_QWORD *)v42;
    sub_3002A0(*(_QWORD **)(v42 + 24), a2);
    v44 = *(_QWORD *)(v42 + 32);
    v42 = *(_QWORD *)(v42 + 16);
    if ( v44 )
    {
      v43[5] = 0;
      result = qfree(v44, a2);
    }
    a2 = (_BYTE *)dword_40;
    operator delete(v43, 0x40u);
  }
  v45 = *(_QWORD *)(a1 + 16);
  if ( v45 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    return qfree(v45, a2);
  }
  return result;
}
