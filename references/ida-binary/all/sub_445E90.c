__int64 __fastcall sub_445E90(
        QT::QAbstractItemView *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  unsigned int v16; // eax
  __m128i v17; // xmm0
  unsigned int v18; // ebp
  _QWORD *v19; // rax
  _QWORD *v20; // r13
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 (*v24)(); // rdx
  unsigned int v25; // eax
  __int64 v26; // rbp
  size_t v27; // r15
  int v28; // edx
  const char *v29; // r13
  const char *v30; // rcx
  __int64 v31; // rbp
  const char *v32; // r9
  __int64 v33; // r10
  __int64 v34; // rdx
  void (__fastcall *v35)(__int64, int *, __int64, __int64, _QWORD); // r10
  const char *v36; // rsi
  unsigned __int64 v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // rdx
  unsigned int v40; // r14d
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // r12
  __int64 v44; // rbp
  __int64 *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  void *v50; // rax
  const void *v51; // rsi
  const char *v52; // rax
  __int64 v53; // rax
  __m128i v54; // [rsp+8h] [rbp-E0h] BYREF
  int v55[2]; // [rsp+18h] [rbp-D0h]
  int v56[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v57[3]; // [rsp+28h] [rbp-C0h]
  __int64 v58; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v59; // [rsp+48h] [rbp-A0h]
  int v60[2]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v61; // [rsp+68h] [rbp-80h]
  _QWORD v62[2]; // [rsp+80h] [rbp-68h] BYREF
  size_t v63; // [rsp+90h] [rbp-58h]
  int v64; // [rsp+98h] [rbp-50h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v16 = sub_443130(a7, a8, a9, a10, a11, a12, a13, a14, (__int64)this, a2, a3, a4, a5, a6);
  if ( v16 == -1 )
    return 0;
  v17.m128i_i64[0] = 0;
  v18 = v16;
  *(_QWORD *)v56 = 0;
  *(_OWORD *)v57 = 0;
  v19 = sub_426230(this, (const char *)a2);
  v20 = (_QWORD *)sub_417080((__int64)v19);
  v21 = *(__int64 (__fastcall **)(__int64))(*v20 + 296LL);
  if ( v21 == vault_with_events_t__::vfunc_37 )
  {
    v22 = (__int64 *)v20[1];
    if ( v22 )
    {
      v23 = *v22;
      v24 = *(__int64 (**)())(*v22 + 480);
      if ( v24 == sub_178B60 )
      {
LABEL_5:
        v25 = (*(__int64 (__fastcall **)(__int64 *, int *, _QWORD, _QWORD, _QWORD))(v23 + 264))(v22, v56, 0, 0, v18);
        goto LABEL_6;
      }
      if ( !(unsigned __int8)v24() )
      {
        v22 = (__int64 *)v20[1];
        v23 = *v22;
        goto LABEL_5;
      }
    }
    v25 = 52;
    goto LABEL_36;
  }
  v25 = ((__int64 (__fastcall *)(_QWORD *, int *, _QWORD, _QWORD, _QWORD))v21)(v20, v56, 0, 0, v18);
LABEL_6:
  if ( !v25 )
  {
    v26 = *(_QWORD *)v56;
    v63 = 0;
    v27 = *(_QWORD *)(*(_QWORD *)v56 + 32LL);
    if ( v27 )
    {
      v50 = (void *)qalloc_or_throw(*(_QWORD *)(*(_QWORD *)v56 + 32LL));
      v51 = *(const void **)(v26 + 24);
      v63 = v27;
      v52 = (const char *)memcpy(v50, v51, v27);
      v28 = *(_DWORD *)(v26 + 84);
      v58 = 0;
      v30 = v52;
      v59 = 0;
      v29 = v52;
    }
    else
    {
      v28 = *(_DWORD *)(*(_QWORD *)v56 + 84LL);
      v29 = nullptr;
      v58 = 0;
      v59 = 0;
      v30 = &s1;
    }
    v64 = v28;
    sub_169A50(&v58, (__int64)"/%d@%s", v28, v30);
    v31 = QT::QAbstractItemView::model(this);
    v32 = &s1;
    v33 = *(_QWORD *)(*(_QWORD *)v31 + 520LL);
    if ( (_QWORD)v59 )
      v32 = (const char *)v58;
    *(_QWORD *)v55 = v32;
    v54.m128i_i64[1] = v33;
    *(_QWORD *)v60 = 0;
    v54.m128i_i64[0] = (__int64)v60;
    v61 = 0;
    *(_QWORD *)v60 = qvector_reserve(v60, 0, 2, 1);
    v34 = *(_QWORD *)v55;
    v35 = (void (__fastcall *)(__int64, int *, __int64, __int64, _QWORD))v54.m128i_i64[1];
    *(_QWORD *)&v61 = 2;
    **(_BYTE **)v60 = 47;
    *(_BYTE *)(*(_QWORD *)v60 + 1LL) = 0;
    v35(v31, v60, v34, 1, 0);
    if ( *(_QWORD *)v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(*(_QWORD *)v60, (const char *)v60);
    }
    *(_DWORD *)(a2 + 64) |= 0x400u;
    v36 = (const char *)v62;
    v62[0] = v29;
    v62[1] = v27;
    v38 = sub_4457D0(this, (__int64)v62);
    v17 = (__m128i)v37;
    if ( v38 != -1 || !v37 )
    {
      v39 = *(_QWORD *)(a2 + 80);
      v36 = *(const char **)(a2 + 72);
      if ( *(_QWORD *)(a2 + 88) < (unsigned __int64)(v39 + 1) )
      {
        v54.m128i_i64[0] = v17.m128i_i64[0];
        v53 = qvector_reserve(a2 + 72, v36, v39 + 1, 16);
        *(_QWORD *)(a2 + 72) = v53;
        v39 = *(_QWORD *)(a2 + 80);
        v36 = (const char *)v53;
        v17 = _mm_loadl_epi64(&v54);
      }
      *(__m128i *)&v36[16 * v39] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, v17);
      ++*(_QWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 136) |= 2u;
      *(_QWORD *)(a2 + 96) = v38;
      *(_QWORD *)(a2 + 104) = v17.m128i_i64[0];
    }
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      *(double *)v17.m128i_i64 = qfree(v58, v36);
    }
    if ( v29 )
      *(double *)v17.m128i_i64 = qfree(v29, v36, *(double *)v17.m128i_i64);
    v40 = 2;
    goto LABEL_22;
  }
LABEL_36:
  v36 = "Failed to retrieve worklists";
  sub_4168C0(v25, (__int64)"Failed to retrieve worklists");
  v40 = 0;
LABEL_22:
  v41 = *(_QWORD *)v56;
  if ( *(_QWORD *)v56 )
  {
    v42 = v57[0];
    if ( v57[0] )
    {
      v43 = 0;
      v44 = 0;
      do
      {
        v45 = (__int64 *)(v41 + v43);
        v46 = *(_QWORD *)(v41 + v43 + 48);
        if ( v46 )
        {
          v45[7] = 0;
          *(double *)v17.m128i_i64 = qfree(v46, v36, *(double *)v17.m128i_i64);
        }
        v47 = v45[3];
        if ( v47 )
        {
          v45[4] = 0;
          *(double *)v17.m128i_i64 = qfree(v47, v36, *(double *)v17.m128i_i64);
        }
        v48 = *v45;
        if ( *v45 )
        {
          v45[1] = 0;
          *(double *)v17.m128i_i64 = qfree(v48, v36, *(double *)v17.m128i_i64);
        }
        ++v44;
        v41 = *(_QWORD *)v56;
        v43 += 88;
      }
      while ( v42 != v44 );
    }
    v57[0] = 0;
    qfree(v41, v36, *(double *)v17.m128i_i64);
  }
  return v40;
}
