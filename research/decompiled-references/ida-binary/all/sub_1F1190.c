unsigned __int64 __fastcall sub_1F1190(
        const __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7)
{
  char *v8; // rdi
  __int32 v9; // eax
  const __m128i *v10; // r13
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i si128; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rbp
  __m128i *v21; // rsi
  __m128i v23; // xmm0
  __int32 v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  struct _Unwind_Exception *v29; // rbx
  int v30[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v31[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int32 v32; // [rsp+20h] [rbp-A8h]
  __int64 v33; // [rsp+28h] [rbp-A0h]
  __m128i v34; // [rsp+30h] [rbp-98h] BYREF
  __m128 v35; // [rsp+40h] [rbp-88h]
  __int32 v36; // [rsp+50h] [rbp-78h]
  __int64 v37; // [rsp+58h] [rbp-70h]
  char v38[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v39; // [rsp+70h] [rbp-58h]
  char v40; // [rsp+78h] [rbp-50h]
  char v41[24]; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  v8 = (char *)a1[2].m128i_i64[1];
  if ( !v8 )
  {
    sub_1E69C0(*(double *)a7.m128i_i64, 0, (__int64)a2, a3, a4);
LABEL_39:
    v29 = (struct _Unwind_Exception *)sub_1E69C0(*(double *)a7.m128i_i64, (__int64)v8, (__int64)a2, v25, v26);
    if ( v33 )
      qfree(v33, a2->m128i_i8);
    _Unwind_Resume(v29);
  }
  v9 = a1[2].m128i_i32[0];
  v10 = a2;
  v11 = a3;
  v33 = 0;
  *(__m128i *)v30 = _mm_loadu_si128(a1);
  v32 = v9;
  *(__m128i *)v31 = _mm_loadu_si128(a1 + 1);
  v12 = (*(__int64 (__fastcall **)(char *, __m128i *, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
          v8,
          a2,
          a3,
          a4,
          a5,
          a6,
          *(_QWORD *)v30,
          *(_QWORD *)&v30[2],
          v31[0],
          v31[1]);
  si128 = _mm_load_si128((const __m128i *)v30);
  v33 = v12;
  v34 = si128;
  v18 = _mm_load_si128((const __m128i *)v31);
  v36 = v32;
  v35 = (__m128)v18;
  if ( !v12 )
  {
    if ( (v11 & 1) == 0 )
    {
      if ( (v11 & 2) == 0 )
        goto LABEL_36;
      goto LABEL_13;
    }
    v28 = a2[2].m128i_i64[1];
LABEL_29:
    if ( v28 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      if ( (v11 & 2) == 0 )
        goto LABEL_5;
      goto LABEL_14;
    }
    if ( (v11 & 2) == 0 )
    {
LABEL_36:
      v21 = &v34;
      v37 = 0;
      sub_1F0B40((__int64)a1, &v34, v13, v14, v15, v16);
      goto LABEL_8;
    }
LABEL_13:
    v20 = 0;
    goto LABEL_14;
  }
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v20 = v19;
  if ( (v11 & 1) != 0 )
  {
    v28 = a2[2].m128i_i64[1];
    if ( v19 )
      qfree(v19, a2->m128i_i8);
    goto LABEL_29;
  }
  if ( (v11 & 2) == 0 )
  {
LABEL_5:
    v21 = &v34;
    v37 = v20;
    sub_1F0B40((__int64)a1, &v34, v13, v14, v15, v16);
    goto LABEL_6;
  }
LABEL_14:
  v23 = _mm_loadu_si128(a2);
  v24 = a2[2].m128i_i32[0];
  a2 = &v34;
  v8 = (char *)a1;
  v37 = v20;
  v34 = v23;
  a7 = _mm_loadu_si128(v10 + 1);
  v36 = v24;
  v35 = (__m128)a7;
  sub_1F0B40((__int64)a1, &v34, v13, v14, v15, v16);
  if ( v32 == v24 )
    goto LABEL_25;
  a2 = (__m128i *)a1[6].m128i_i64[0];
  switch ( v24 )
  {
    case 2:
      v27 = a2[56].m128i_i64[0];
      break;
    case 3:
      v27 = a2[56].m128i_i64[1];
      break;
    case 1:
      v27 = a2[55].m128i_i64[1];
      break;
    default:
      goto LABEL_25;
  }
  if ( v27 )
  {
    sub_1E96E0((QT::QObject *)v38, *(double *)a7.m128i_i64, (__int64)a2, 0);
    if ( !v40 && v39 && *(_DWORD *)(v39 + 964) == 1 )
      dto_copy_to_inf(v41);
    v8 = v38;
    *(_QWORD *)v38 = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v38);
  }
LABEL_25:
  if ( !a1[2].m128i_i64[1] )
    goto LABEL_39;
  v21 = (__m128i *)v30;
  sub_1EA610((__int64)a1, (__int64)v30, (__int64)a1);
LABEL_6:
  if ( v20 )
    qfree(v20, v21->m128i_i8);
LABEL_8:
  if ( v33 )
    qfree(v33, v21->m128i_i8);
  return v42 - __readfsqword(0x28u);
}
