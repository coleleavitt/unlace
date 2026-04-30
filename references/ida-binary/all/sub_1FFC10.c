unsigned __int64 __fastcall sub_1FFC10(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  int v14; // r12d
  __int32 v15; // eax
  int v16; // r13d
  _DWORD *v17; // rbp
  __m128 v18; // xmm0
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // rbx
  __int64 v22; // rax
  __m128i v24; // [rsp+0h] [rbp-98h] BYREF
  __m128 v25; // [rsp+10h] [rbp-88h]
  __int32 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  char v28[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+40h] [rbp-58h]
  char v30; // [rsp+48h] [rbp-50h]
  __int64 v31; // [rsp+50h] [rbp-48h]
  __int16 v32; // [rsp+58h] [rbp-40h]
  unsigned __int64 v33; // [rsp+68h] [rbp-30h]

  v14 = a3;
  v15 = a2[2].m128i_i32[0];
  v33 = __readfsqword(0x28u);
  v16 = a4;
  v17 = (_DWORD *)a2[2].m128i_i64[1];
  v27 = 0;
  v24 = _mm_loadu_si128(a2);
  v18 = (__m128)_mm_loadu_si128(a2 + 1);
  v26 = v15;
  v25 = v18;
  if ( v17 )
  {
    v27 = (*(__int64 (__fastcall **)(_DWORD *, const __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64, unsigned __int64, __int32))(*(_QWORD *)v17 + 16LL))(
            v17,
            a2,
            a3,
            a4,
            a5,
            a6,
            v24.m128i_i64[0],
            v24.m128i_i64[1],
            v25.m128_u64[0],
            v25.m128_u64[1],
            v26);
    v17 = (_DWORD *)v27;
  }
  if ( v17[2] == -1 )
    v17[2] = (*(__int16 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1 + 568LL))(a1, &v24);
  if ( (v14 & 1) != 0 )
    sub_1EB630(a1, (__int64)&v24, a3, a4);
  sub_1E95D0((QT::QObject *)v28, a1, 6, v16, -32768, *(double *)v18.m128_u64);
  if ( (v14 & 4) != 0 )
    sub_479090(QT::QCoreApplication::self + 2, a1, 1);
  if ( (v14 & 0x10000) != 0 )
  {
    v21 = a1 + 384;
    if ( (unsigned __int8)sub_1EA140(a1 + 384, 0) || (v14 & 2) != 0 )
      goto LABEL_11;
LABEL_20:
    sub_1FF700(v21, &v24, v18, a8, a9, a10, v19, v20, a13, a14);
    goto LABEL_12;
  }
  v21 = a1 + 384;
  if ( (v14 & 2) == 0 )
    goto LABEL_20;
LABEL_11:
  sub_1FFBB0(v21, &v24, byte_8BA8E5, v18, a8, a9, a10, v19, v20, a13, a14);
LABEL_12:
  if ( !v30 )
  {
    v22 = v29;
    if ( v29 )
    {
      *(_QWORD *)(v29 + 948) = v31;
      *(_WORD *)(v22 + 956) = v32;
    }
  }
  *(_QWORD *)v28 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v28);
  if ( v27 )
    qfree(v27, v24.m128i_i8);
  return v33 - __readfsqword(0x28u);
}
