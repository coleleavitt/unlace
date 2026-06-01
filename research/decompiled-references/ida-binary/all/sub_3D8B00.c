__int64 __fastcall sub_3D8B00(
        _DWORD *a1,
        const __m128i *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const __m128i *v15; // rbx
  __m128 si128; // xmm0
  __int64 v17; // rax
  const __m128i *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rax
  char *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  const __m128i *v24; // rdx
  void *v25; // rdi
  const __m128i *v26; // rsi
  volatile signed __int32 *v27; // rax
  unsigned int v28; // ebx
  void *v30; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-88h] BYREF
  const __m128i *v32; // [rsp+10h] [rbp-78h]
  void *v33[4]; // [rsp+20h] [rbp-68h] BYREF
  void *v34[2]; // [rsp+40h] [rbp-48h] BYREF
  const __m128i *v35; // [rsp+50h] [rbp-38h]
  unsigned __int64 v36; // [rsp+58h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  v15 = a2;
  *a1 = 0;
  si128 = (__m128)_mm_loadu_si128(a2);
  v17 = a2[1].m128i_i64[0];
  *(__m128 *)ptr = si128;
  v32 = (const __m128i *)v17;
  if ( si128.m128_u64[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)si128.m128_u64[0], 1u);
    v17 = (__int64)v32;
    v18 = (const __m128i *)ptr[1];
  }
  else
  {
    a5 = _mm_movehl_ps(a5, si128);
    v18 = (const __m128i *)a5.m128_u64[0];
  }
  v19 = -v17;
  if ( -v17 >= 0 && v17 != 0 )
    goto LABEL_19;
  if ( v17 <= 0 )
    goto LABEL_19;
  v20 = 2 * v17;
  a2 = v18;
  v21 = &v18->m128i_i8[v20];
  v22 = QT::QtPrivate::qustrchr(v20 >> 1, v18, 43);
  if ( v21 == (char *)v22 )
    goto LABEL_19;
  v23 = (v22 - (__int64)v18) >> 1;
  if ( (_DWORD)v23 == -1 )
    goto LABEL_19;
  QT::QString::mid(v33, ptr, 0, (int)v23);
  QT::QString::toUpper_helper((QT::QString *)v34, (QT::QString *)v33);
  si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
  a4 = (__m128)_mm_load_si128((const __m128i *)v34);
  v24 = v32;
  *(__m128 *)ptr = a4;
  v32 = v35;
  v35 = v24;
  *(__m128 *)v34 = si128;
  if ( si128.m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128_u64[0], 1u) )
    free(v34[0]);
  if ( v33[0] && !_InterlockedSub((volatile signed __int32 *)v33[0], 1u) )
  {
    free(v33[0]);
    v25 = ptr[1];
    v26 = v32;
    if ( ptr[1] )
      goto LABEL_13;
  }
  else
  {
    v25 = ptr[1];
    v26 = v32;
    if ( ptr[1] )
      goto LABEL_13;
  }
  v25 = &QT::QString::_empty;
LABEL_13:
  if ( !(unsigned int)QT::QString::compare_helper(v25, v26, "CTRL", 4, 1) )
  {
    v27 = (volatile signed __int32 *)ptr[0];
    *a1 = 4;
    v28 = 16777249;
    if ( !v27 )
      return v28;
    goto LABEL_23;
  }
  v30 = ptr[1];
  a2 = v32;
  if ( !ptr[1] )
    v30 = &QT::QString::_empty;
  if ( !(unsigned int)QT::QString::compare_helper(v30, v32, "META", 4, 1) )
  {
    *a1 = 128;
    v28 = 16777250;
    goto LABEL_22;
  }
LABEL_19:
  if ( v15[1].m128i_i64[0] )
    sub_169700(
      (int)"to automatically close the windows list on release, set the shortcut to use either Ctrl or Meta as the main m"
           "odifier, e.g.: \"Ctrl-Tab\"\n",
      (__int64)a2,
      v19,
      a12,
      a13,
      a14,
      si128,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      (char)ptr[0]);
  v28 = 0;
LABEL_22:
  v27 = (volatile signed __int32 *)ptr[0];
  if ( !ptr[0] )
    return v28;
LABEL_23:
  if ( !_InterlockedSub(v27, 1u) )
    free(ptr[0]);
  return v28;
}
