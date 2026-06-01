__int64 __fastcall sub_4A6750(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // r12d
  __int64 v10; // rax
  int *v12; // rsi
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __m128i v18; // xmm0
  const char **v19; // rdx
  QT::QAbstractItemView *v20; // rdi
  const char **v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r14
  const char **v24; // rax
  const char *v25; // rdi
  __int64 v26; // rdi
  const char **v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rbx
  const char **v30; // rax
  const char *v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // rbx
  int v36[2]; // [rsp+10h] [rbp-E0h] BYREF
  __m128i v37; // [rsp+18h] [rbp-D8h] BYREF
  int v38[2]; // [rsp+30h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+38h] [rbp-B8h]
  __int64 v40; // [rsp+48h] [rbp-A8h]
  __int64 (__fastcall **v41)(); // [rsp+50h] [rbp-A0h] BYREF
  const char **v42; // [rsp+58h] [rbp-98h] BYREF
  __m128i v43; // [rsp+60h] [rbp-90h]
  QT::QAbstractItemView *v44; // [rsp+70h] [rbp-80h]
  int v45[2]; // [rsp+80h] [rbp-70h] BYREF
  __int128 v46; // [rsp+88h] [rbp-68h]
  __int64 v47; // [rsp+98h] [rbp-58h]
  __int128 v48; // [rsp+A0h] [rbp-50h]
  char v49; // [rsp+B0h] [rbp-40h]
  unsigned __int64 v50; // [rsp+B8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2392) + 13LL) & 2) != 0 )
  {
    v10 = *(_QWORD *)a1;
    v49 = 0;
    v46 = 0;
    *(_QWORD *)v45 = 0;
    v47 = 0;
    v48 = 0;
    (*(void (__fastcall **)(__int64, int *, __int64))(v10 + 624))(a1, v45, 7);
    v12 = v38;
    *(_QWORD *)v36 = 0;
    *(_QWORD *)v38 = 0;
    v40 = -1;
    v37 = 0;
    v39 = 0;
    sub_4A5780(a1, (void **)v38, (__int64)v45, 3, (__int64 *)v36, 0, (__m128)0LL, a3, a4, a5, v13, v14, a8, a9);
    *(_DWORD *)(a1 + 1784) |= 0x400u;
    v15 = sub_4DE360(v45);
    LOBYTE(v9) = v15 != 0;
    if ( v15 )
    {
      if ( *(_DWORD *)(a1 + 2376) )
      {
        v18 = _mm_loadu_si128(&v37);
        v19 = *(const char ***)v36;
        *(_QWORD *)v36 = 0;
        v20 = *(QT::QAbstractItemView **)(a1 + 2384);
        v41 = chooser_widget_t::remove;
        v43 = v18;
        v44 = v20;
        v42 = v19;
        v37 = 0;
        if ( (_QWORD)v39 )
        {
          v12 = (_DWORD *)(&qword_58 + 1);
          sub_4A22B0(
            a1,
            (_BYTE *)&qword_58 + 1,
            0,
            (_BYTE *)&qword_58 + 1,
            0,
            (__int64)v38,
            0.0,
            a3,
            a4,
            a5,
            v16,
            v17,
            a8,
            a9,
            (unsigned __int64)v45,
            (__int64)&v41,
            7u);
        }
        else
        {
          v12 = (int *)&v42;
          sub_48EC20(v20, &v42, 0.0);
        }
        v21 = v42;
        v41 = chooser_widget_t::remove;
        if ( v42 )
        {
          v22 = v43.m128i_i64[0];
          if ( v43.m128i_i64[0] )
          {
            v23 = 0;
            do
            {
              v24 = &v21[3 * v23];
              v25 = *v24;
              if ( *v24 )
              {
                v24[1] = nullptr;
                qfree(v25, (const char *)v12);
                v21 = v42;
              }
              ++v23;
            }
            while ( v22 != v23 );
          }
          v43.m128i_i64[0] = 0;
          qfree(v21, (const char *)v12);
        }
      }
      else if ( (_QWORD)v39 )
      {
        v12 = (_DWORD *)(&qword_58 + 1);
        sub_4A22B0(
          a1,
          (_BYTE *)&qword_58 + 1,
          0,
          (_BYTE *)&qword_58 + 1,
          0,
          (__int64)v38,
          0.0,
          a3,
          a4,
          a5,
          v16,
          v17,
          a8,
          a9,
          (unsigned __int64)v45,
          0,
          7u);
      }
    }
    v26 = *(_QWORD *)v38;
    *(_DWORD *)(a1 + 1784) &= ~0x400u;
    if ( v26 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v26, (const char *)v12);
    }
    v27 = *(const char ***)v36;
    if ( *(_QWORD *)v36 )
    {
      v28 = v37.m128i_i64[0];
      if ( v37.m128i_i64[0] )
      {
        v29 = 0;
        do
        {
          v30 = &v27[3 * v29];
          v31 = *v30;
          if ( *v30 )
          {
            v30[1] = nullptr;
            qfree(v31, (const char *)v12);
            v27 = *(const char ***)v36;
          }
          ++v29;
        }
        while ( v28 != v29 );
      }
      v37.m128i_i64[0] = 0;
      qfree(v27, (const char *)v12);
    }
    sub_4DE2C0();
    v32 = *(_QWORD *)v45;
    if ( *(_QWORD *)v45 )
    {
      v33 = v46;
      if ( (_QWORD)v46 )
      {
        v34 = 0;
        do
        {
          ++v34;
          sub_4DE2C0();
          v32 = *(_QWORD *)v45;
        }
        while ( v33 != v34 );
      }
      *(_QWORD *)&v46 = 0;
      qfree(v32, (const char *)v12);
    }
  }
  else
  {
    return 0;
  }
  return v9;
}
