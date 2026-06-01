unsigned __int64 __fastcall sub_161FE0(__int64 a1, const __m128i *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rdi
  __int128 v9; // rax
  bool v10; // r13
  char v11; // bp
  char v12; // r12
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rax
  __int32 v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int16 v21; // cx
  int v23; // edx
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  struct _Unwind_Exception *v26; // rbx
  __m128i v27; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-B0h]
  __m128i v29; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v30; // [rsp+40h] [rbp-98h] BYREF
  __int64 v31; // [rsp+50h] [rbp-88h]
  __int64 v32; // [rsp+58h] [rbp-80h]
  __m128i v33; // [rsp+60h] [rbp-78h] BYREF
  __m128i v34; // [rsp+70h] [rbp-68h]
  __int32 v35; // [rsp+80h] [rbp-58h]
  __int64 v36; // [rsp+88h] [rbp-50h]
  __int64 v37; // [rsp+90h] [rbp-48h]
  __int64 v38; // [rsp+98h] [rbp-40h]
  unsigned __int64 v39; // [rsp+A8h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 96);
  v39 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 40);
  v37 = 0;
  v38 = v6;
  *(_QWORD *)&v9 = *a3;
  *((_QWORD *)&v9 + 1) = v38 ^ a3[1];
  v10 = v9 != 0;
  if ( !v8 )
  {
    v26 = (struct _Unwind_Exception *)sub_158B30(0);
    if ( v32 )
      qfree();
    if ( v28 )
      qfree();
    _Unwind_Resume(v26);
  }
  LODWORD(v9) = *(_DWORD *)(a1 + 32);
  v11 = a4;
  v12 = a5;
  v27 = _mm_loadu_si128((const __m128i *)a1);
  v13 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v28 = (*(__int64 (__fastcall **)(__int64, const __m128i *, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _DWORD, _QWORD))(*(_QWORD *)v8 + 16LL))(
          v8,
          a2,
          *((_QWORD *)&v9 + 1),
          a4,
          a5,
          a6,
          v27.m128i_i64[0],
          v27.m128i_i64[1],
          v13.m128i_i64[0],
          v13.m128i_i64[1],
          v9,
          0);
  v14 = v28;
  v15 = a2[2].m128i_i64[1];
  if ( !v15 )
    goto LABEL_11;
  v30.m128i_i64[0] = 0;
  v30.m128i_i64[1] = -1;
  v31 = 0;
  v32 = 0;
  v29 = 0;
  if ( !v10 )
  {
    v16 = a2[2].m128i_i32[0];
    v36 = 0;
    v33 = _mm_loadu_si128(a2);
    v35 = v16;
    v34 = _mm_loadu_si128(a2 + 1);
LABEL_5:
    v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_6:
    sub_161DE0(a1, &v33, v17, v18, v19, v20);
    LOBYTE(v21) = 4;
    HIBYTE(v21) = v11;
    sub_15D7A0(a1, (__int64)&v27, (__int64)&v33, (v10 << 16) | v21, v12);
    if ( v36 )
      qfree();
    if ( v32 )
      qfree();
    v14 = v28;
LABEL_11:
    if ( v14 )
      qfree();
    return v39 - __readfsqword(0x28u);
  }
  v23 = sub_15EB60(*(__int64 **)(a1 + 96), &v29, (__int64)a2, 1u);
  v15 = v32;
  if ( v23 == 1 )
  {
    v24 = _mm_load_si128(&v29);
    v17 = (unsigned int)v31;
    v36 = 0;
    v33 = v24;
    v25 = _mm_load_si128(&v30);
    v35 = v31;
    v34 = v25;
    if ( !v32 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v32 )
    qfree();
  if ( v28 )
    qfree();
  return v39 - __readfsqword(0x28u);
}

