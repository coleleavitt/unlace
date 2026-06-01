__int64 __fastcall sub_3B90B0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rax
  __m128i *v9; // rax
  __m128i v10; // xmm0
  void *v11; // rsi
  __int64 v12; // rax
  const char *v13; // rsi
  __int64 v14; // rax
  const char *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 *v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-168h] BYREF
  __int64 v33; // [rsp+8h] [rbp-160h]
  __int64 v34; // [rsp+10h] [rbp-158h] BYREF
  __int128 v35; // [rsp+18h] [rbp-150h]
  __int64 v36; // [rsp+28h] [rbp-140h]
  __int128 v37; // [rsp+30h] [rbp-138h]
  __m128i si128; // [rsp+40h] [rbp-128h]
  void *ptr[2]; // [rsp+50h] [rbp-118h]
  __int64 v40; // [rsp+60h] [rbp-108h]
  int v41; // [rsp+68h] [rbp-100h]
  _BYTE v42[16]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+90h] [rbp-D8h]
  __int64 v46; // [rsp+98h] [rbp-D0h]
  __int64 v47; // [rsp+A0h] [rbp-C8h]
  __int64 v48; // [rsp+B8h] [rbp-B0h]
  __int64 v49; // [rsp+C0h] [rbp-A8h]
  __int64 v50; // [rsp+D0h] [rbp-98h]
  __int64 v51; // [rsp+D8h] [rbp-90h]
  __int64 v52; // [rsp+E8h] [rbp-80h]
  __int64 v53; // [rsp+F0h] [rbp-78h]
  __int64 v54; // [rsp+100h] [rbp-68h]
  __int64 v55; // [rsp+108h] [rbp-60h]
  __int64 v56; // [rsp+118h] [rbp-50h]
  __int64 v57; // [rsp+120h] [rbp-48h]
  unsigned __int64 v58; // [rsp+138h] [rbp-30h]

  v5 = a2;
  v58 = __readfsqword(0x28u);
  v7 = sub_4A0300("Type Libraries", v32, v33, v34, v35, SDWORD2(v35), v36, v37);
  if ( v7 )
  {
    v5 = 1;
    sub_479090(QT::QCoreApplication::self + 2, v7, 1);
  }
  else
  {
    v9 = (__m128i *)sub_3B8EB0(768, byte_9);
    v10 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1), _mm_cvtsi32_si128(a2)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
    v9[1] = v10;
    sub_4A3550(v42, v9, 0, 0);
    v11 = (void *)v43;
    if ( v45 <= 0xE )
    {
      v43 = qvector_reserve(&v43, v43, 15, 1);
      v11 = (void *)v43;
    }
    v44 = 15;
    qmemcpy(v11, "Type Libraries", 14);
    *(_BYTE *)(v43 + 14) = 0;
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
    v13 = v42;
    v14 = sub_4A37D0(v12, v42);
    v15 = (const char *)v14;
    LOBYTE(v5) = v14 != 0;
    if ( v14 )
    {
      v10.m128i_i64[0] = 0;
      v16 = *(_QWORD *)(v14 + 2488);
      v34 = 0;
      v36 = 0;
      v40 = 0;
      v41 = 0x400000;
      v32 = v16;
      v33 = 0;
      v35 = 0;
      v37 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      *(_OWORD *)ptr = 0;
      sub_534250(&v32, 0, 0, 0.0);
      sub_534250(&v32, unk_8C9B58, 0, 0.0);
      sub_534250(&v32, 0, 0, 0.0);
      v13 = v15;
      (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(QT::QCoreApplication::self[2] + 120LL))(
        QT::QCoreApplication::self + 2,
        v15,
        &v34);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v17 = v36;
      if ( v36 )
      {
        v18 = v37;
        if ( (_QWORD)v37 )
        {
          v19 = 0;
          do
          {
            v20 = (__int64 *)(v17 + 40 * v19);
            jvalue_t_clear(v20 + 3);
            v21 = *v20;
            if ( *v20 )
            {
              v20[1] = 0;
              qfree(v21, v13);
            }
            ++v19;
            v17 = v36;
          }
          while ( v18 != v19 );
        }
        *(_QWORD *)&v37 = 0;
        *(double *)v10.m128i_i64 = qfree(v17, v13);
      }
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        *(double *)v10.m128i_i64 = qfree(v34, v13, *(double *)v10.m128i_i64);
      }
    }
    if ( v56 )
    {
      v57 = 0;
      *(double *)v10.m128i_i64 = qfree(v56, v13, *(double *)v10.m128i_i64);
    }
    if ( v54 )
    {
      v55 = 0;
      *(double *)v10.m128i_i64 = qfree(v54, v13, *(double *)v10.m128i_i64);
    }
    v22 = v52;
    if ( v52 )
    {
      v23 = v53;
      if ( v53 )
      {
        v24 = 0;
        do
        {
          v25 = (__int64 *)(v22 + 24 * v24);
          v26 = *v25;
          if ( *v25 )
          {
            v25[1] = 0;
            *(double *)v10.m128i_i64 = qfree(v26, v13, *(double *)v10.m128i_i64);
            v22 = v52;
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      v53 = 0;
      *(double *)v10.m128i_i64 = qfree(v22, v13, *(double *)v10.m128i_i64);
    }
    v27 = v50;
    if ( v50 )
    {
      v28 = v51;
      if ( v51 )
      {
        v29 = 0;
        do
        {
          v30 = (__int64 *)(v27 + 24 * v29);
          v31 = *v30;
          if ( *v30 )
          {
            v30[1] = 0;
            *(double *)v10.m128i_i64 = qfree(v31, v13, *(double *)v10.m128i_i64);
            v27 = v50;
          }
          ++v29;
        }
        while ( v28 != v29 );
      }
      v51 = 0;
      *(double *)v10.m128i_i64 = qfree(v27, v13, *(double *)v10.m128i_i64);
    }
    if ( v48 )
    {
      v49 = 0;
      *(double *)v10.m128i_i64 = qfree(v48, v13, *(double *)v10.m128i_i64);
    }
    if ( v46 )
    {
      v47 = 0;
      *(double *)v10.m128i_i64 = qfree(v46, v13, *(double *)v10.m128i_i64);
    }
    if ( v43 )
    {
      v44 = 0;
      qfree(v43, v13, *(double *)v10.m128i_i64);
    }
  }
  return v5;
}
