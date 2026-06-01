QT::QString *__fastcall sub_410120(QT::QString *this, _QWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rax
  size_t v5; // rax
  const char *v6; // r13
  size_t v7; // rdx
  double v8; // xmm0_8
  __int64 v9; // rax
  size_t v10; // rax
  const char *v11; // r14
  size_t v12; // rdx
  double v13; // xmm0_8
  double v14; // xmm0_8
  unsigned int v17; // [rsp+1Ch] [rbp-B4h]
  __m128i v18[2]; // [rsp+20h] [rbp-B0h] BYREF
  void *v19[4]; // [rsp+40h] [rbp-90h] BYREF
  void *v20[4]; // [rsp+60h] [rbp-70h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-50h] BYREF
  __int64 v22; // [rsp+90h] [rbp-40h]
  unsigned __int64 v23; // [rsp+98h] [rbp-38h]

  v17 = a3;
  v23 = __readfsqword(0x28u);
  v4 = a2[57];
  if ( v4 )
  {
    v5 = v4 - 1;
    v6 = (const char *)a2[56];
    v7 = v5 >> 63;
  }
  else
  {
    LOBYTE(v7) = 0;
    v5 = 0;
    v6 = &s1;
  }
  if ( !v6 || (_BYTE)v7 )
  {
    v5 = 0;
    if ( v6 )
      v5 = strlen(v6);
  }
  v8 = QT::QString::fromUtf8(v18, v5, v6);
  v9 = a2[50];
  if ( v9 )
  {
    v10 = v9 - 1;
    v11 = (const char *)a2[49];
    v12 = v10 >> 63;
  }
  else
  {
    LOBYTE(v12) = 0;
    v10 = 0;
    v11 = &s1;
  }
  if ( !v11 || (_BYTE)v12 )
  {
    v10 = 0;
    if ( v11 )
      v10 = strlen(v11);
  }
  v13 = QT::QString::fromUtf8(v19, v10, v11, v8);
  if ( (v17 & 0x20) != 0 )
  {
    v14 = QT::QString::fromUtf8(ptr, 6, "(= %1)", v13);
    QT::QString::arg(v20, ptr, a2[55], 0, 10, 32, v14);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    sub_40F630(this, v18, (const QT::QString *)v19, (const QT::QString *)v20, 32, 32, 12, v17, a4);
    if ( v20[0] && !_InterlockedSub((volatile signed __int32 *)v20[0], 1u) )
      free(v20[0]);
  }
  else
  {
    *(_OWORD *)ptr = 0;
    v22 = 0;
    sub_40F630(this, v18, (const QT::QString *)v19, (const QT::QString *)ptr, 32, 32, 32, v17, a4);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  if ( v19[0] && !_InterlockedSub((volatile signed __int32 *)v19[0], 1u) )
    free(v19[0]);
  if ( v18[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v18[0].m128i_i64[0], 1u) )
    free((void *)v18[0].m128i_i64[0]);
  return this;
}
