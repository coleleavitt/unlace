unsigned __int64 __fastcall sub_4A9020(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  __int64 v12; // rax
  const char **v13; // r12
  __int64 v14; // rax
  const char *v15; // rsi
  __int64 v16; // rax
  QT::QAbstractScrollArea *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64); // rax
  unsigned __int64 (__fastcall *v22)(__int64); // rax
  __int64 v23; // rbp
  const char *v24; // rsi
  const char *v25; // rsi
  char *v26; // rbp
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // [rsp+0h] [rbp-A8h] BYREF
  __int8 v30; // [rsp+1Fh] [rbp-89h]
  char *v31; // [rsp+20h] [rbp-88h] BYREF
  __m128i v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+40h] [rbp-68h] BYREF
  __m128i v34; // [rsp+48h] [rbp-60h] BYREF
  __int64 v35; // [rsp+58h] [rbp-50h]
  __int128 v36; // [rsp+60h] [rbp-48h]
  char v37; // [rsp+70h] [rbp-38h]
  unsigned __int64 v38; // [rsp+78h] [rbp-30h]

  v10 = *(_DWORD *)(a1 + 2376);
  v38 = __readfsqword(0x28u);
  if ( v10 == 2 )
    return sub_4A7030(a1, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v10 == 1 )
  {
    v32 = 0;
    v31 = nullptr;
    v31 = (char *)qvector_reserve(&v31, 0, 2, 1);
    v32.m128i_i64[0] = 2;
    *v31 = 47;
    v31[1] = 0;
    v12 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2384));
    v13 = *(const char ***)(v12 + 216);
    if ( !v13 )
      v13 = *(const char ***)(v12 + 208);
    if ( a2[1] )
    {
      v23 = *a2;
      v24 = *v13;
      v34.m128i_i8[0] = 0;
      v33 = -1;
      dirtree_resolve_cursor(&v33, v24, v23);
      v30 = v34.m128i_i8[0];
      if ( v33 != -1 )
      {
        if ( v34.m128i_i8[0] )
        {
          v33 = 0;
          v34 = 0;
          v25 = *v13;
          dirtree_get_abspath_by_cursor(&v33, *v13, v23, 0);
          v26 = (char *)v33;
          v33 = 0;
          v27 = _mm_loadu_si128(&v34);
          v34 = 0;
          if ( v31 )
          {
            v29 = v27;
            v32.m128i_i64[0] = 0;
            qfree(v31, v25);
            v28 = _mm_load_si128(&v29);
            v31 = v26;
            v32 = v28;
            if ( v33 )
            {
              v34.m128i_i64[0] = 0;
              qfree(v33, v25);
            }
          }
          else
          {
            v31 = v26;
            v32 = v27;
          }
        }
      }
    }
    v14 = *(_QWORD *)a1;
    v37 = 0;
    v34 = 0;
    v33 = 0;
    v35 = 0;
    v36 = 0;
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(v14 + 624))(a1, &v33, 3);
    v15 = &s1;
    if ( v32.m128i_i64[0] )
      v15 = v31;
    dirtree_chdir(*v13, v15);
    v16 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 1784) & 0x40) != 0 )
    {
      v17 = (QT::QAbstractScrollArea *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(v16 + 704))(a1, &v33, 7);
      sub_4E0B20(a1 + 104, v17, 0);
    }
    else
    {
      v21 = *(__int64 (__fastcall **)(__int64))(v16 + 560);
      if ( v21 == sub_4A88B0 )
      {
        v17 = (QT::QAbstractScrollArea *)&v33;
        vault_files_dirtree_widget_t__::vfunc_30(a1 + 104);
        v22 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 568LL);
        if ( v22 == sub_4A76D0 )
        {
          if ( *(_DWORD *)(a1 + 2376) == 2 )
            v17 = *(QT::QAbstractScrollArea **)(a1 + 2384);
          else
            v17 = *(QT::QAbstractScrollArea **)(a1 + 2472);
          sub_4A72C0(a1, v17);
        }
        else
        {
          ((void (__fastcall *)(__int64, __int64 *))v22)(a1, &v33);
        }
      }
      else
      {
        v17 = (QT::QAbstractScrollArea *)&v33;
        ((void (__fastcall *)(__int64, __int64 *, _QWORD))v21)(a1, &v33, 0);
      }
    }
    sub_4DE2C0();
    v18 = v33;
    if ( v33 )
    {
      v19 = v34.m128i_i64[0];
      if ( v34.m128i_i64[0] )
      {
        v20 = 0;
        do
        {
          ++v20;
          sub_4DE2C0();
          v18 = v33;
        }
        while ( v19 != v20 );
      }
      v34.m128i_i64[0] = 0;
      qfree(v18, (const char *)v17);
    }
    if ( v31 )
    {
      v32.m128i_i64[0] = 0;
      qfree(v31, (const char *)v17);
    }
  }
  return v38 - __readfsqword(0x28u);
}
