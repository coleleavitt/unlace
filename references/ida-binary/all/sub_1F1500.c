unsigned __int64 __fastcall sub_1F1500(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int128 *v7; // r14
  __int64 v8; // rax
  __int64 v10; // rdi
  __int128 v11; // rax
  bool v12; // r12
  const __m128i *v13; // rbp
  unsigned __int8 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int32 v19; // eax
  __int64 v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __m128i v29; // xmm0
  __int32 v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __m128i v34; // xmm0
  __int32 v35; // eax
  __m128i v36; // xmm0
  __int16 v38; // ax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _Unwind_Exception *v43; // rbx
  __m128i v44; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v45; // [rsp+10h] [rbp-C8h]
  __int64 v46; // [rsp+28h] [rbp-B0h]
  __int128 v47; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-98h]
  __int64 v49; // [rsp+48h] [rbp-90h]
  __int64 v50; // [rsp+50h] [rbp-88h]
  __int64 v51; // [rsp+58h] [rbp-80h]
  __m128i v52; // [rsp+60h] [rbp-78h] BYREF
  __m128i v53; // [rsp+70h] [rbp-68h]
  __int32 v54; // [rsp+80h] [rbp-58h]
  __int64 v55; // [rsp+88h] [rbp-50h]
  __int64 v56; // [rsp+90h] [rbp-48h]
  __int64 v57; // [rsp+98h] [rbp-40h]
  unsigned __int64 v58; // [rsp+A8h] [rbp-30h]

  v8 = *(_QWORD *)(a1 + 96);
  v58 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 40);
  v56 = 0;
  v57 = v8;
  *(_QWORD *)&v11 = *a3;
  *((_QWORD *)&v11 + 1) = v57 ^ a3[1];
  v12 = v11 != 0;
  if ( !v10 )
    sub_1E69C0(a7, 0, a2, *((__int64 *)&v11 + 1), a4);
  LODWORD(v11) = *(_DWORD *)(a1 + 32);
  v13 = (const __m128i *)a2;
  v14 = a4;
  v44 = _mm_loadu_si128((const __m128i *)a1);
  v45 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _DWORD, _QWORD))(*(_QWORD *)v10 + 16LL))(
          v10,
          a2,
          *((_QWORD *)&v11 + 1),
          a4,
          a5,
          a6,
          v44.m128i_i64[0],
          v44.m128i_i64[1],
          v45.m128i_i64[0],
          v45.m128i_i64[1],
          v11,
          0);
  v48 = 0;
  v46 = v15;
  v49 = -1;
  v50 = 0;
  v51 = 0;
  v47 = 0;
  if ( !v12 )
  {
LABEL_3:
    v19 = v13[2].m128i_i32[0];
    v20 = v13[2].m128i_i64[1];
    v52 = _mm_loadu_si128(v13);
    v21 = _mm_loadu_si128(v13 + 1);
    v54 = v19;
    v53 = v21;
    if ( v20 )
    {
      v7 = (__int128 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v55 = (__int64)v7;
      sub_1EAA80((__m128i *)a1, &v52, v14, v22, v23, v24);
      if ( v7 )
        qfree(v7, v52.m128i_i8);
      v27 = v51;
      if ( v51 )
        goto LABEL_7;
    }
    else
    {
      v55 = 0;
      sub_1EAA80((__m128i *)a1, &v52, v14, v16, v17, v18);
      v27 = v51;
      if ( v51 )
LABEL_7:
        qfree(v27, v52.m128i_i8);
    }
    v28 = *(_QWORD *)(a1 + 40);
    if ( !v28 )
    {
      sub_1E69C0(*(double *)v21.m128i_i64, 0, (__int64)&v52, v25, v26);
      goto LABEL_30;
    }
    v29 = _mm_loadu_si128((const __m128i *)a1);
    v30 = *(_DWORD *)(a1 + 32);
    v55 = 0;
    v52 = v29;
    v21 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v54 = v30;
    v53 = v21;
    v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v55 = v31;
    if ( *(_DWORD *)(v31 + 8) == -1 )
    {
      v38 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(a1 + 96) + 568LL))(*(_QWORD *)(a1 + 96), &v52);
      v39 = v55;
      *(_DWORD *)(v55 + 8) = v38;
      sub_1F0B40(a1, &v52, v39, v40, v41, v42);
      v31 = v55;
      if ( !v55 )
      {
LABEL_12:
        v28 = *(_QWORD *)(a1 + 40);
        if ( v28 )
        {
          v34 = _mm_loadu_si128((const __m128i *)a1);
          v35 = *(_DWORD *)(a1 + 32);
          v55 = 0;
          v52 = v34;
          v36 = _mm_loadu_si128((const __m128i *)(a1 + 16));
          v54 = v35;
          v53 = v36;
          v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          sub_1EA570(a1, (__int64)&v44, (__int64)&v52, (v12 << 16) | 0x404, 0);
          *(_DWORD *)(*(_QWORD *)(a1 + 96) + 912LL) = 0;
          if ( v55 )
            qfree(v55, v44.m128i_i8);
          if ( v46 )
            qfree(v46, v44.m128i_i8);
          return v58 - __readfsqword(0x28u);
        }
LABEL_30:
        v43 = (struct _Unwind_Exception *)sub_1E69C0(*(double *)v21.m128i_i64, v28, (__int64)&v52, v32, v33);
        if ( v7 )
          qfree(v7, v52.m128i_i8);
        if ( v51 )
          qfree(v51, v52.m128i_i8);
        if ( v46 )
          qfree(v46, v52.m128i_i8);
        _Unwind_Resume(v43);
      }
    }
    else if ( !v31 )
    {
      goto LABEL_12;
    }
    qfree(v31, v52.m128i_i8);
    goto LABEL_12;
  }
  v7 = &v47;
  if ( (unsigned int)sub_1EB7C0(*(const __m128i **)(a1 + 96), (__int64)&v47, a2, 1, (__m128i)0LL) == 1 )
  {
    v13 = (const __m128i *)&v47;
    goto LABEL_3;
  }
  if ( v51 )
    qfree(v51, (const char *)&v47);
  if ( v46 )
    qfree(v46, (const char *)&v47);
  return v58 - __readfsqword(0x28u);
}
