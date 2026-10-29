unsigned __int64 __fastcall sub_1F0EE0(
        __int64 a1,
        __m128i *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 v7; // rax
  __int64 v9; // rdi
  __int128 v10; // rax
  bool v11; // r13
  char v12; // bp
  char v13; // r12
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rax
  __int32 v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int16 v22; // cx
  int v24; // edx
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  struct _Unwind_Exception *v27; // rbx
  __m128i v28; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-B0h]
  __m128i v30; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+40h] [rbp-98h] BYREF
  __int64 v32; // [rsp+50h] [rbp-88h]
  __int64 v33; // [rsp+58h] [rbp-80h]
  __m128i v34; // [rsp+60h] [rbp-78h] BYREF
  __m128i v35; // [rsp+70h] [rbp-68h]
  __int32 v36; // [rsp+80h] [rbp-58h]
  __int64 v37; // [rsp+88h] [rbp-50h]
  __int64 v38; // [rsp+90h] [rbp-48h]
  __int64 v39; // [rsp+98h] [rbp-40h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-30h]

  v7 = *(_QWORD *)(a1 + 96);
  v40 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 40);
  v38 = 0;
  v39 = v7;
  *(_QWORD *)&v10 = *a3;
  *((_QWORD *)&v10 + 1) = v39 ^ a3[1];
  v11 = v10 != 0;
  if ( !v9 )
  {
    v27 = (struct _Unwind_Exception *)sub_1E69C0(a7, 0, (__int64)a2, *((__int64 *)&v10 + 1), a4);
    if ( v33 )
      qfree(v33, a2->m128i_i8);
    if ( v29 )
      qfree(v29, a2->m128i_i8);
    _Unwind_Resume(v27);
  }
  LODWORD(v10) = *(_DWORD *)(a1 + 32);
  v12 = a4;
  v13 = a5;
  v28 = _mm_loadu_si128((const __m128i *)a1);
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v29 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _DWORD, _QWORD))(*(_QWORD *)v9 + 16LL))(
          v9,
          a2,
          *((_QWORD *)&v10 + 1),
          a4,
          a5,
          a6,
          v28.m128i_i64[0],
          v28.m128i_i64[1],
          v14.m128i_i64[0],
          v14.m128i_i64[1],
          v10,
          0);
  v15 = v29;
  v16 = a2[2].m128i_i64[1];
  if ( !v16 )
    goto LABEL_11;
  v31.m128i_i64[0] = 0;
  v31.m128i_i64[1] = -1;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  if ( !v11 )
  {
    v17 = a2[2].m128i_i32[0];
    v37 = 0;
    v34 = _mm_loadu_si128(a2);
    v36 = v17;
    v35 = _mm_loadu_si128(a2 + 1);
LABEL_5:
    v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_6:
    sub_1F0B40(a1, &v34, v18, v19, v20, v21);
    LOBYTE(v22) = 4;
    a2 = &v28;
    HIBYTE(v22) = v12;
    sub_1EA570(a1, (__int64)&v28, (__int64)&v34, (v11 << 16) | v22, v13);
    if ( v37 )
      qfree(v37, v28.m128i_i8);
    if ( v33 )
      qfree(v33, v28.m128i_i8);
    v15 = v29;
LABEL_11:
    if ( v15 )
      qfree(v15, a2->m128i_i8);
    return v40 - __readfsqword(0x28u);
  }
  v24 = sub_1EB7C0(*(const __m128i **)(a1 + 96), (__int64)&v30, (__int64)a2, 1, (__m128i)0LL);
  v16 = v33;
  if ( v24 == 1 )
  {
    v25 = _mm_load_si128(&v30);
    v18 = (unsigned int)v32;
    v37 = 0;
    v34 = v25;
    v26 = _mm_load_si128(&v31);
    v36 = v32;
    v35 = v26;
    if ( !v33 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v33 )
    qfree(v33, v30.m128i_i8);
  if ( v29 )
    qfree(v29, v30.m128i_i8);
  return v40 - __readfsqword(0x28u);
}
