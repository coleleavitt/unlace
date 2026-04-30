__int64 __fastcall type_editor_field_handler_t__::vfunc_3(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 Child_helper; // rax
  QT::QPlainTextEdit *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __m128i si128; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rbp
  __m128i v17; // xmm0
  __int64 v18; // rdi
  double v19; // xmm0_8
  __int64 v20; // rbp
  __m128i v21; // xmm1
  __m128i v22; // xmm1
  __int64 v23; // rdi
  __m128i v25; // [rsp+0h] [rbp-A8h] BYREF
  int v26[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v27; // [rsp+18h] [rbp-90h]
  __int64 v28[2]; // [rsp+20h] [rbp-88h] BYREF
  int v29[2]; // [rsp+30h] [rbp-78h]
  int v30[4]; // [rsp+38h] [rbp-70h] BYREF
  int v31[2]; // [rsp+48h] [rbp-60h]
  int v32[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v33; // [rsp+60h] [rbp-48h]
  int v34[2]; // [rsp+68h] [rbp-40h]
  __int64 v35; // [rsp+70h] [rbp-38h]

  *(_QWORD *)v34 = __readfsqword(0x28u);
  Child_helper = QT::qt_qFindChild_helper(a3, 0, 0, &off_891AA0, 1);
  if ( Child_helper )
  {
    v6 = (QT::QPlainTextEdit *)Child_helper;
    v7 = 0;
    clear_tinfo_t(a4 + 1);
    v8 = a4[12];
    a4[3] = 0;
    a4[6] = 0;
    if ( v8 )
    {
      do
      {
        v9 = (__int64 *)(a4[11] + 24 * v7);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, nullptr);
        }
        ++v7;
      }
      while ( v8 != v7 );
    }
    a4[12] = 0;
    a4[9] = 0;
    if ( (unsigned __int8)sub_3D0D20(
                            v6,
                            v25.m128i_i64[0],
                            v25.m128i_i32[2],
                            0,
                            0,
                            0,
                            0,
                            0,
                            0,
                            0,
                            0,
                            0,
                            0,
                            v33,
                            v34[0],
                            v35) )
    {
      copy_tinfo_t(a4 + 1, v26, v11);
      v12 = a4[2];
      v13 = v27;
      v27 = 0;
      si128 = _mm_load_si128((const __m128i *)v28);
      *(_OWORD *)v28 = 0;
      if ( v12 )
      {
        a4[3] = 0;
        v25 = si128;
        qfree(v12, (const char *)v26);
        si128 = _mm_load_si128(&v25);
      }
      v15 = a4[5];
      a4[2] = v13;
      *(__m128i *)(a4 + 3) = si128;
      v16 = *(_QWORD *)v29;
      v17 = _mm_loadu_si128((const __m128i *)v30);
      *(_QWORD *)v29 = 0;
      *(_OWORD *)v30 = 0;
      if ( v15 )
      {
        a4[6] = 0;
        v25 = v17;
        qfree(v15, (const char *)v26);
        v17 = _mm_load_si128(&v25);
      }
      a4[5] = v16;
      *((__m128i *)a4 + 3) = v17;
    }
    v18 = a4[8];
    v19 = 0.0;
    v20 = *(_QWORD *)v31;
    *(_QWORD *)v31 = 0;
    v21 = _mm_load_si128((const __m128i *)v32);
    *(_OWORD *)v32 = 0;
    if ( v18 )
    {
      a4[9] = 0;
      v25 = v21;
      v19 = qfree(v18, (const char *)v26);
      v22 = _mm_load_si128(&v25);
      v23 = *(_QWORD *)v31;
      a4[8] = v20;
      *(__m128i *)(a4 + 9) = v22;
      if ( v23 )
      {
        *(_QWORD *)v32 = 0;
        v19 = qfree(v23, (const char *)v26, v19);
      }
    }
    else
    {
      a4[8] = v20;
      *(__m128i *)(a4 + 9) = v21;
    }
    if ( *(_QWORD *)v29 )
    {
      *(_QWORD *)v30 = 0;
      v19 = qfree(*(_QWORD *)v29, (const char *)v26, v19);
    }
    if ( v27 )
    {
      v28[0] = 0;
      qfree(v27, (const char *)v26, v19);
    }
    clear_tinfo_t(v26);
  }
  return 1;
}
