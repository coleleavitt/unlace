unsigned __int64 __fastcall sub_200F00(
        const __m128i *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v13; // rdi
  double v14; // xmm0_8
  __int64 v15; // rdi
  double v16; // xmm0_8
  __int64 v17; // rdi
  double v18; // xmm4_8
  double v19; // xmm5_8
  const char *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // kr00_8
  __int64 v24; // rcx
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rdx
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rcx
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v34; // rax
  struct _Unwind_Exception *v35; // rbx
  int v36; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v37; // [rsp+10h] [rbp-78h] BYREF
  __int128 v38; // [rsp+18h] [rbp-70h]
  char v39[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v40; // [rsp+40h] [rbp-48h]
  char v41; // [rsp+48h] [rbp-40h]
  __int64 v42; // [rsp+50h] [rbp-38h]
  __int16 v43; // [rsp+58h] [rbp-30h]
  unsigned __int64 v44; // [rsp+68h] [rbp-20h]

  v44 = __readfsqword(0x28u);
  v13 = a1[14].m128i_i64[0];
  if ( v13 )
  {
    v14 = qfree(v13, a2);
    v15 = a1[15].m128i_i64[1];
    a1[14].m128i_i64[0] = 0;
    a1[14].m128i_i32[2] = 0;
    v16 = qfree(v15, a2, v14);
    v17 = a1[13].m128i_i64[1];
    a1[15].m128i_i64[1] = 0;
    a1[16].m128i_i32[0] = 0;
    sub_1FD320(v17, v16, a4, a5, a6, v18, v19, a9, a10);
  }
  v20 = (const char *)&v37;
  v37 = 0;
  v38 = 0;
  if ( sub_1EB270((__int64)a1, (__int64)&v37, 0, a12, 0.0) > 0 )
  {
    v22 = 1;
    if ( a1[46].m128i_i8[5] )
      v22 = 3;
    if ( !a1[26].m128i_i64[1] )
    {
      v35 = (struct _Unwind_Exception *)sub_1E69C0(0.0, (__int64)a1, (__int64)&v37, v22, v21);
      if ( v37 )
      {
        *(_QWORD *)&v38 = 0;
        qfree(v37, (const char *)&v37);
      }
      _Unwind_Resume(v35);
    }
    v23 = sub_32C7D0(v37, a1[25].m128i_i16[6], v22);
    *(_DWORD *)v39 = v23;
    sub_2006B0(a1, (__int64)v39, 0, v24, 0.0, a4, a5, a6, v25, v26, a9, a10);
    sub_1FD9B0((__int64)a1, 1u, v27, 0.0, a4, a5, a6, v28, v29, a9, a10);
    sub_1E95D0((QT::QObject *)v39, (__int64)a1, 7, 0, -32768, 0.0);
    v20 = (const char *)&v36;
    v36 = HIDWORD(v23);
    sub_2006B0(a1, (__int64)&v36, 0, v30, 0.0, a4, a5, a6, v31, v32, a9, a10);
    if ( !v41 )
    {
      v34 = v40;
      if ( v40 )
      {
        *(_QWORD *)(v40 + 948) = v42;
        *(_WORD *)(v34 + 956) = v43;
      }
    }
    *(_QWORD *)v39 = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v39);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, v20);
  }
  return v44 - __readfsqword(0x28u);
}
