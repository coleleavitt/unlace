unsigned __int64 __fastcall sub_161B50(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // r14
  __int64 v7; // rax
  __int64 v9; // rdi
  __int128 v10; // rax
  bool v11; // r12
  __m128i *v12; // rbp
  unsigned __int8 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int32 v18; // eax
  __int64 v19; // rdi
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __m128i v25; // xmm0
  __int32 v26; // eax
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int32 v30; // eax
  __m128i v31; // xmm0
  __int16 v33; // ax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _Unwind_Exception *v38; // rbx
  __m128i v39; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v40; // [rsp+10h] [rbp-C8h]
  __int64 v41; // [rsp+28h] [rbp-B0h]
  __m128i v42; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-98h]
  __int64 v44; // [rsp+48h] [rbp-90h]
  __int64 v45; // [rsp+50h] [rbp-88h]
  __int64 v46; // [rsp+58h] [rbp-80h]
  __m128i v47; // [rsp+60h] [rbp-78h] BYREF
  __m128i v48; // [rsp+70h] [rbp-68h]
  __int32 v49; // [rsp+80h] [rbp-58h]
  __int64 v50; // [rsp+88h] [rbp-50h]
  __int64 v51; // [rsp+90h] [rbp-48h]
  __int64 v52; // [rsp+98h] [rbp-40h]
  unsigned __int64 v53; // [rsp+A8h] [rbp-30h]

  v7 = *(_QWORD *)(a1 + 96);
  v53 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 40);
  v51 = 0;
  v52 = v7;
  *(_QWORD *)&v10 = *a3;
  *((_QWORD *)&v10 + 1) = v52 ^ a3[1];
  v11 = v10 != 0;
  if ( !v9 )
    sub_1582F0(0);
  LODWORD(v10) = *(_DWORD *)(a1 + 32);
  v12 = (__m128i *)a2;
  v13 = a4;
  v39 = _mm_loadu_si128((const __m128i *)a1);
  v40 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _DWORD, _QWORD))(*(_QWORD *)v9 + 16LL))(
          v9,
          a2,
          *((_QWORD *)&v10 + 1),
          a4,
          a5,
          a6,
          v39.m128i_i64[0],
          v39.m128i_i64[1],
          v40.m128i_i64[0],
          v40.m128i_i64[1],
          v10,
          0);
  v43 = 0;
  v41 = v14;
  v44 = -1;
  v45 = 0;
  v46 = 0;
  v42 = 0;
  if ( !v11 )
  {
LABEL_3:
    v18 = v12[2].m128i_i32[0];
    v19 = v12[2].m128i_i64[1];
    v47 = _mm_loadu_si128(v12);
    v20 = _mm_loadu_si128(v12 + 1);
    v49 = v18;
    v48 = v20;
    if ( v19 )
    {
      v6 = (__m128i *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v50 = (__int64)v6;
      sub_15D3B0((__m128i *)a1, &v47, v13, v21, v22, v23);
      if ( v6 )
        qfree();
      if ( v46 )
        goto LABEL_7;
    }
    else
    {
      v50 = 0;
      sub_15D3B0((__m128i *)a1, &v47, v13, v15, v16, v17);
      if ( v46 )
LABEL_7:
        qfree();
    }
    v24 = *(_QWORD *)(a1 + 40);
    if ( !v24 )
    {
      sub_1582F0(0);
      goto LABEL_30;
    }
    v25 = _mm_loadu_si128((const __m128i *)a1);
    v26 = *(_DWORD *)(a1 + 32);
    v50 = 0;
    v47 = v25;
    v27 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v49 = v26;
    v48 = v27;
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v50 = v28;
    if ( *(_DWORD *)(v28 + 8) == -1 )
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(a1 + 96) + 288LL))(*(_QWORD *)(a1 + 96), &v47);
      v34 = v50;
      *(_DWORD *)(v50 + 8) = v33;
      sub_1614C0(a1, &v47, v34, v35, v36, v37);
      if ( !v50 )
      {
LABEL_12:
        v24 = *(_QWORD *)(a1 + 40);
        if ( v24 )
        {
          v29 = _mm_loadu_si128((const __m128i *)a1);
          v30 = *(_DWORD *)(a1 + 32);
          v50 = 0;
          v47 = v29;
          v31 = _mm_loadu_si128((const __m128i *)(a1 + 16));
          v49 = v30;
          v48 = v31;
          v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          sub_15CEC0(a1, (__int64)&v39, (__int64)&v47, (v11 << 16) | 0x404, 0);
          *(_DWORD *)(*(_QWORD *)(a1 + 96) + 872LL) = 0;
          if ( v50 )
            qfree();
          if ( v41 )
            qfree();
          return v53 - __readfsqword(0x28u);
        }
LABEL_30:
        v38 = (struct _Unwind_Exception *)sub_1582F0(v24);
        if ( v6 )
          qfree();
        if ( v46 )
          qfree();
        if ( v41 )
          qfree();
        _Unwind_Resume(v38);
      }
    }
    else if ( !v28 )
    {
      goto LABEL_12;
    }
    qfree();
    goto LABEL_12;
  }
  v6 = &v42;
  if ( (unsigned int)sub_15E260(*(__int64 **)(a1 + 96), &v42, a2, 1u) == 1 )
  {
    v12 = &v42;
    goto LABEL_3;
  }
  if ( v46 )
    qfree();
  if ( v41 )
    qfree();
  return v53 - __readfsqword(0x28u);
}

