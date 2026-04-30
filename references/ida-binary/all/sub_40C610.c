__m128i *__fastcall sub_40C610(__m128i *this, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  size_t v8; // rax
  const char *v9; // r14
  size_t v10; // rdx
  double v11; // xmm0_8
  double v12; // xmm0_8
  __m128i si128; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rax
  volatile signed __int32 *v17; // rax
  volatile signed __int32 *v18; // rax
  void *ptr[2]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-C8h]
  void *v22[4]; // [rsp+30h] [rbp-B8h] BYREF
  void *v23[4]; // [rsp+50h] [rbp-98h] BYREF
  void *v24[4]; // [rsp+70h] [rbp-78h] BYREF
  void *v25[2]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v27; // [rsp+A8h] [rbp-40h]

  v5 = a2 + 48;
  v27 = __readfsqword(0x28u);
  if ( (a3 & 0x10) != 0 )
    v5 = a2 + 72;
  v7 = *(_QWORD *)(v5 + 8);
  if ( v7 )
  {
    v8 = v7 - 1;
    v9 = *(const char **)v5;
    v10 = v8 >> 63;
  }
  else
  {
    LOBYTE(v10) = 0;
    v8 = 0;
    v9 = &s1;
  }
  if ( !v9 || (_BYTE)v10 )
  {
    v8 = 0;
    if ( v9 )
      v8 = strlen(v9);
  }
  v11 = QT::QString::fromUtf8(ptr, v8, v9);
  if ( !v21 )
  {
    v12 = QT::QString::fromUtf8(v22, 6, "off_%1", v11);
    QT::QString::number((QT::QString *)v23, *(_QWORD *)a2, 16);
    QT::QString::toUpper_helper((QT::QString *)v24, (QT::QString *)v23);
    QT::QString::arg(v25, v22, v24, 0, 32, v12);
    si128 = _mm_load_si128((const __m128i *)ptr);
    v14 = _mm_load_si128((const __m128i *)v25);
    v15 = v26;
    v26 = v21;
    v21 = v15;
    *(__m128i *)ptr = v14;
    *(__m128i *)v25 = si128;
    if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
    {
      free(v25[0]);
      v16 = (volatile signed __int32 *)v24[0];
      if ( !v24[0] )
        goto LABEL_12;
    }
    else
    {
      v16 = (volatile signed __int32 *)v24[0];
      if ( !v24[0] )
        goto LABEL_12;
    }
    if ( !_InterlockedSub(v16, 1u) )
    {
      free(v24[0]);
      v17 = (volatile signed __int32 *)v23[0];
      if ( !v23[0] )
        goto LABEL_14;
      goto LABEL_13;
    }
LABEL_12:
    v17 = (volatile signed __int32 *)v23[0];
    if ( !v23[0] )
      goto LABEL_14;
LABEL_13:
    if ( !_InterlockedSub(v17, 1u) )
    {
      free(v23[0]);
      v18 = (volatile signed __int32 *)v22[0];
      if ( !v22[0] )
        goto LABEL_17;
LABEL_15:
      if ( !_InterlockedSub(v18, 1u) )
        free(v22[0]);
      goto LABEL_17;
    }
LABEL_14:
    v18 = (volatile signed __int32 *)v22[0];
    if ( !v22[0] )
      goto LABEL_17;
    goto LABEL_15;
  }
LABEL_17:
  sub_40C430(this, (const __m128i *)ptr, 6, a3, a4);
  if ( *(_BYTE *)(a2 + 204) )
  {
    if ( *(_QWORD *)(a2 + 224) )
    {
      sub_40C210((__int64)v25, a2, a3, a4);
      QT::QString::append((QT::QString *)this, (const QT::QString *)v25);
      if ( v25[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v25[0], 1u) )
          free(v25[0]);
      }
    }
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return this;
}
