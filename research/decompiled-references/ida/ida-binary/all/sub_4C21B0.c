__int64 __fastcall sub_4C21B0(const char *a1, QT::QAbstractItemView *a2, __int64 a3, const __m128i *a4)
{
  unsigned int v5; // ebp
  __m128i v7; // xmm1
  int v8; // r9d
  const char *v9; // rsi
  double v10; // xmm0_8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rbx
  _QWORD *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v25; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v26; // [rsp+8h] [rbp-1B0h]
  __m128i v27; // [rsp+20h] [rbp-198h] BYREF
  void (__fastcall *v28)(__m128i *, __m128i *, __int64); // [rsp+30h] [rbp-188h]
  __int64 v29; // [rsp+38h] [rbp-180h]
  _QWORD v30[7]; // [rsp+40h] [rbp-178h] BYREF
  __int64 v31; // [rsp+78h] [rbp-140h]
  __int64 v32; // [rsp+80h] [rbp-138h]
  __int64 v33; // [rsp+90h] [rbp-128h]
  __int64 v34; // [rsp+98h] [rbp-120h]
  __int64 v35; // [rsp+A8h] [rbp-110h]
  __int64 v36; // [rsp+B8h] [rbp-100h]
  __int64 v37; // [rsp+C0h] [rbp-F8h]
  __int64 v38; // [rsp+D0h] [rbp-E8h]
  __int64 v39; // [rsp+D8h] [rbp-E0h]
  _QWORD *v40; // [rsp+F0h] [rbp-C8h]
  __int64 v41; // [rsp+F8h] [rbp-C0h]
  __int64 v42; // [rsp+110h] [rbp-A8h]
  __int64 v43; // [rsp+118h] [rbp-A0h]
  __int64 v44; // [rsp+128h] [rbp-90h]
  __int64 v45; // [rsp+130h] [rbp-88h]
  __int64 v46; // [rsp+140h] [rbp-78h]
  __int64 v47; // [rsp+148h] [rbp-70h]
  _BYTE v48[16]; // [rsp+168h] [rbp-50h] BYREF
  void (__fastcall *v49)(_BYTE *, _BYTE *, __int64, double); // [rsp+178h] [rbp-40h]
  unsigned __int64 v50; // [rsp+188h] [rbp-30h]

  v5 = (unsigned int)a2;
  v50 = __readfsqword(0x28u);
  QT::QAbstractScrollArea::setSizeAdjustPolicy(a2, 1);
  v25 = 0;
  v28 = nullptr;
  v26 = 0;
  v27 = 0;
  v29 = a4[1].m128i_i64[1];
  if ( a4[1].m128i_i64[0] )
  {
    v7 = _mm_loadu_si128(a4);
    v28 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a4[1].m128i_i64[0];
    a4[1] = 0;
    v27 = v7;
  }
  sub_4C1BB0((__int64)v30, a1, a2, a3, &v27);
  if ( v28 )
    v28(&v27, &v27, 3);
  v9 = nullptr;
  v10 = callui(203, 0, (unsigned int)v30, (unsigned int)&v25, (unsigned int)&callui, v8, v25, v26);
  v30[0] = &standalone_dirtree_widget_dialog_t___vtable;
  LOBYTE(v5) = v11 == 1;
  if ( v49 )
  {
    v9 = v48;
    v49(v48, v48, 3, v10);
  }
  if ( v46 )
  {
    v47 = 0;
    v10 = qfree(v46, v9, v10);
  }
  v12 = v44;
  v30[0] = &forms::dialog_desc_t___vtable;
  if ( v44 )
  {
    v13 = v45;
    if ( v45 )
    {
      v14 = 0;
      do
      {
        v15 = (__int64 *)(v12 + 24 * v14);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          v10 = qfree(v16, v9, v10);
          v12 = v44;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    v45 = 0;
    v10 = qfree(v12, v9, v10);
  }
  if ( v42 )
  {
    v43 = 0;
    v10 = qfree(v42, v9, v10);
  }
  v17 = v40;
  v18 = &v40[v41];
  if ( v40 != v18 )
  {
    do
    {
      if ( *v17 )
        (*(void (__fastcall **)(_QWORD, double))(*(_QWORD *)*v17 + 8LL))(*v17, v10);
      ++v17;
    }
    while ( v18 != v17 );
    v18 = v40;
  }
  if ( v18 )
  {
    v41 = 0;
    v10 = qfree(v18, v9, v10);
  }
  v30[0] = &forms::abstract_form_desc_t___vtable;
  if ( v38 )
  {
    v39 = 0;
    v10 = qfree(v38, v9, v10);
  }
  v30[0] = &forms::container_t___vtable;
  if ( v36 )
  {
    v37 = 0;
    v10 = qfree(v36, v9, v10);
  }
  v30[0] = &forms::abstract_container_t___vtable;
  if ( v35 )
    (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v35 + 8LL))(v35, v10);
  v19 = v33;
  v35 = 0;
  v30[0] = &forms::element_t___vtable;
  if ( v33 )
  {
    v20 = v34;
    if ( v34 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v19 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          v10 = qfree(v23, v9, v10);
          v19 = v33;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    v34 = 0;
    v10 = qfree(v19, v9, v10);
  }
  if ( v31 )
  {
    v32 = 0;
    v10 = qfree(v31, v9, v10);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, v9, v10);
  }
  return v5;
}
