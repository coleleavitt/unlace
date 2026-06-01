__int64 __fastcall sub_2E5A70(QT::QWidget *this, const char *a2, const char *a3, double a4)
{
  int v6; // eax
  __int64 *v7; // rdi
  const char *v9; // rsi
  __int64 *v10; // r13
  __int64 *v11; // r14
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 *v17; // r13
  __int64 v18; // r14
  __m128i v19; // xmm1
  __int64 v20; // rdi
  double v21; // xmm0_8
  __int64 v22; // rdi
  __m128i v23; // xmm1
  __int64 v24; // rdx
  const char *v25; // r14
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // r13
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 *v31; // rax
  __int64 v32; // rcx
  const char *v33; // r13
  _QWORD *func; // rax
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __m128i v40; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+18h] [rbp-C0h]
  __int64 v42; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+28h] [rbp-B0h]
  __int64 v44; // [rsp+40h] [rbp-98h] BYREF
  __m128i v45; // [rsp+48h] [rbp-90h] BYREF
  const char *v46; // [rsp+60h] [rbp-78h] BYREF
  __int128 v47; // [rsp+68h] [rbp-70h]
  __int64 *v48; // [rsp+78h] [rbp-60h]
  __int128 v49; // [rsp+80h] [rbp-58h]
  int v50; // [rsp+90h] [rbp-48h]
  unsigned __int64 v51; // [rsp+98h] [rbp-40h]

  v6 = *((_DWORD *)this + 618);
  v7 = *(__int64 **)a2;
  v51 = __readfsqword(0x28u);
  sub_169A50(v7, (__int64)"%0*a", 2 * v6, a4);
  v9 = a3;
  v46 = nullptr;
  v48 = nullptr;
  v50 = -1;
  v47 = 0;
  v49 = 0;
  if ( (unsigned __int8)get_import_entry(&v46, a3) )
  {
    v10 = v48;
    v42 = 0;
    v43 = 0;
    v11 = &v48[v49];
    if ( v48 != v11 )
    {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v16 = *v10;
        if ( v13 < v14 + 1 )
        {
          v40.m128i_i64[0] = *v10;
          v42 = qvector_reserve(&v42, v12, v14 + 1, 24);
          v14 = v43;
          v12 = v42;
          v16 = v40.m128i_i64[0];
        }
        v15 = v12 + 24 * v14;
        *(_QWORD *)v15 = 0;
        *(_OWORD *)(v15 + 8) = 0;
        *(_QWORD *)&v43 = v43 + 1;
        sub_169A50((__int64 *)v15, (__int64)"%llu", v16);
        if ( v11 == ++v10 )
          break;
        v13 = *((_QWORD *)&v43 + 1);
        v14 = v43;
        v12 = v42;
      }
    }
    v9 = (const char *)&v42;
    sub_2E5140(&v44, &v42, ", ");
    v17 = *(__int64 **)a2;
    v18 = v44;
    v44 = 0;
    v19 = _mm_loadu_si128(&v45);
    v45 = 0;
    v20 = v17[3];
    if ( v20 )
    {
      v17[4] = 0;
      v40 = v19;
      v21 = qfree(v20, (const char *)&v42);
      v22 = v44;
      v23 = _mm_load_si128(&v40);
      v17[3] = v18;
      *((__m128i *)v17 + 2) = v23;
      if ( v22 )
      {
        v45.m128i_i64[0] = 0;
        qfree(v22, (const char *)&v42, v21);
      }
    }
    else
    {
      v17[3] = v18;
      *((__m128i *)v17 + 2) = v19;
    }
    v24 = v42;
    v25 = v46;
    v46 = nullptr;
    v26 = *((_QWORD *)&v47 + 1);
    v40.m128i_i64[0] = v47;
    v47 = 0;
    v41 = v26;
    if ( v42 )
    {
      v27 = v43;
      if ( (_QWORD)v43 )
      {
        v28 = 0;
        do
        {
          v29 = (__int64 *)(v24 + 24 * v28);
          v30 = *v29;
          if ( *v29 )
          {
            v29[1] = 0;
            qfree(v30, (const char *)&v42);
            v24 = v42;
          }
          ++v28;
        }
        while ( v27 != v28 );
      }
      *(_QWORD *)&v43 = 0;
      qfree(v24, (const char *)&v42);
    }
  }
  else
  {
    v41 = 0;
    v25 = nullptr;
    v40.m128i_i64[0] = 0;
  }
  v44 = 0;
  v45 = 0;
  if ( !*((_BYTE *)QT::QCoreApplication::self + 745) )
    goto LABEL_20;
  v9 = &s1;
  v36 = (unsigned int)getinf(36);
  if ( v40.m128i_i64[0] )
    v9 = v25;
  if ( (int)demangle_name(&v44, v9, v36, 2) > 0 )
  {
    v37 = *(__int64 **)a2;
    v33 = v25;
    v38 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v39 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)a2 + 56LL));
    v37[6] = v44;
    *(__m128i *)(v37 + 7) = _mm_loadu_si128(&v45);
    v44 = v38;
    v45 = v39;
  }
  else
  {
LABEL_20:
    v31 = *(__int64 **)a2;
    v31[7] = v40.m128i_i64[0];
    v32 = v41;
    v33 = (const char *)v31[6];
    v31[6] = (__int64)v25;
    v31[8] = v32;
  }
  func = (_QWORD *)get_func(a3);
  if ( func )
  {
    v9 = a2 + 128;
    sub_2DBCA0(this, (__int64)(a2 + 128), func);
  }
  *((_DWORD *)a2 + 35) = 136;
  if ( v44 )
  {
    v45.m128i_i64[0] = 0;
    qfree(v44, v9);
  }
  if ( v33 )
    qfree(v33, v9);
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48, v9);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, v9);
  }
  return 1;
}
