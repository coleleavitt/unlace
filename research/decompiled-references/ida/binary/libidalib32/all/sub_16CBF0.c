unsigned __int64 __fastcall sub_16CBF0(
        const __m128i *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __m128i *v7; // rdi
  __int32 v8; // eax
  char v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rbp
  __m128i v20; // xmm0
  __int32 v21; // r12d
  __m128i v22; // xmm0
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  _QWORD *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r14
  struct _Unwind_Exception *v29; // rbx
  __m128i v30; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v31; // [rsp+10h] [rbp-D8h] BYREF
  __int32 v32; // [rsp+20h] [rbp-C8h]
  __int64 v33; // [rsp+28h] [rbp-C0h]
  __m128i v34; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v35; // [rsp+40h] [rbp-A8h]
  __int32 v36; // [rsp+50h] [rbp-98h]
  __int64 v37; // [rsp+58h] [rbp-90h]
  _BYTE v38[88]; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  v7 = (__m128i *)a1[2].m128i_i64[1];
  if ( !v7 )
  {
    sub_1582F0(0);
LABEL_35:
    v29 = (struct _Unwind_Exception *)sub_1582F0(v7);
    if ( v33 )
      qfree();
    _Unwind_Resume(v29);
  }
  v8 = a1[2].m128i_i32[0];
  v9 = a3;
  v33 = 0;
  v30 = _mm_loadu_si128(a1);
  v32 = v8;
  v31 = _mm_loadu_si128(a1 + 1);
  v10 = (*(__int64 (__fastcall **)(__m128i *, const __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v7->m128i_i64[0] + 16))(
          v7,
          a2,
          a3,
          a4,
          a5,
          a6,
          v30.m128i_i64[0],
          v30.m128i_i64[1],
          v31.m128i_i64[0],
          v31.m128i_i64[1]);
  v15 = _mm_load_si128(&v30);
  v33 = v10;
  v34 = v15;
  v16 = _mm_load_si128(&v31);
  v36 = v32;
  v35 = v16;
  if ( !v10 )
  {
    if ( (v9 & 1) == 0 )
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_32;
      goto LABEL_13;
    }
    v28 = a2[2].m128i_i64[1];
LABEL_25:
    if ( v28 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      if ( (v9 & 2) == 0 )
        goto LABEL_5;
      goto LABEL_14;
    }
    if ( (v9 & 2) == 0 )
    {
LABEL_32:
      v37 = 0;
      sub_1614C0((__int64)a1, &v34, v11, v12, v13, v14);
      goto LABEL_8;
    }
LABEL_13:
    v18 = 0;
    goto LABEL_14;
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v18 = v17;
  if ( (v9 & 1) != 0 )
  {
    v28 = a2[2].m128i_i64[1];
    if ( v17 )
      qfree();
    goto LABEL_25;
  }
  if ( (v9 & 2) == 0 )
  {
LABEL_5:
    v37 = v18;
    sub_1614C0((__int64)a1, &v34, v11, v12, v13, v14);
    goto LABEL_6;
  }
LABEL_14:
  v20 = _mm_loadu_si128(a2);
  v21 = a2[2].m128i_i32[0];
  v7 = (__m128i *)a1;
  v37 = v18;
  v34 = v20;
  v22 = _mm_loadu_si128(a2 + 1);
  v36 = v21;
  v35 = v22;
  sub_1614C0((__int64)a1, &v34, v11, v12, v13, v14);
  if ( v32 == v21 )
    goto LABEL_21;
  v26 = (_QWORD *)a1[6].m128i_i64[0];
  switch ( v21 )
  {
    case 2:
      v27 = v26[107];
      break;
    case 3:
      v27 = v26[108];
      break;
    case 1:
      v27 = v26[106];
      break;
    default:
      goto LABEL_21;
  }
  if ( v27 )
  {
    sub_168770((__int64)v38, (int)v26, 0, v23, v24, v25);
    v7 = (__m128i *)v38;
    sub_16C9F0((__int64)v38);
  }
LABEL_21:
  if ( !a1[2].m128i_i64[1] )
    goto LABEL_35;
  sub_15CF60((__int64)a1, (__int64)&v30, (__int64)a1);
LABEL_6:
  if ( v18 )
    qfree();
LABEL_8:
  if ( v33 )
    qfree();
  return v39 - __readfsqword(0x28u);
}

