QT::QString *__fastcall sub_40FCF0(QT::QString *a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  size_t v7; // rax
  const char *v8; // r13
  size_t v9; // rdx
  double v10; // xmm0_8
  __int64 v11; // rax
  size_t v12; // rax
  const char *v13; // r14
  size_t v14; // rdx
  double v15; // xmm0_8
  const char *v16; // r15
  unsigned __int64 v17; // rdx
  size_t v18; // rax
  double v19; // xmm0_8
  __m128i v21[2]; // [rsp+20h] [rbp-F0h] BYREF
  void *v22[4]; // [rsp+40h] [rbp-D0h] BYREF
  const char *v23; // [rsp+60h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A8h]
  void *v25[4]; // [rsp+80h] [rbp-90h] BYREF
  void *v26[4]; // [rsp+A0h] [rbp-70h] BYREF
  void *ptr[2]; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v29; // [rsp+D8h] [rbp-38h]

  v4 = a3;
  v5 = a2[57];
  v29 = __readfsqword(0x28u);
  if ( v5 )
  {
    v7 = v5 - 1;
    v8 = (const char *)a2[56];
    v9 = v7 >> 63;
  }
  else
  {
    LOBYTE(v9) = 0;
    v7 = 0;
    v8 = &s1;
  }
  if ( !v8 || (_BYTE)v9 )
  {
    v7 = 0;
    if ( v8 )
      v7 = strlen(v8);
  }
  v10 = QT::QString::fromUtf8(v21, v7, v8);
  v11 = a2[34];
  if ( v11 )
  {
    v12 = v11 - 1;
    v13 = (const char *)a2[33];
    v14 = v12 >> 63;
  }
  else
  {
    LOBYTE(v14) = 0;
    v12 = 0;
    v13 = &s1;
  }
  if ( !v13 || (_BYTE)v14 )
  {
    v12 = 0;
    if ( v13 )
      v12 = strlen(v13);
  }
  QT::QString::fromUtf8(v22, v12, v13, v10);
  if ( (v4 & 0x40) != 0 )
  {
    v24 = 0;
    v23 = nullptr;
    print_tinfo(&v23, 0, 0, 0, 32, a2 + 39, 0, 0);
    v15 = QT::QString::fromUtf8(v26, 4, "(%1)");
    if ( (_QWORD)v24 )
    {
      v18 = v24 - 1;
      v16 = v23;
      v17 = (unsigned __int64)(v24 - 1) >> 63;
      if ( !v23 )
        goto LABEL_41;
    }
    else
    {
      v16 = &s1;
      LOBYTE(v17) = 0;
      v18 = 0;
      if ( !&s1 )
        goto LABEL_41;
    }
    if ( !(_BYTE)v17 )
    {
LABEL_13:
      v19 = QT::QString::fromUtf8(ptr, v18, v16, v15);
      QT::QString::arg(v25, v26, ptr, 0, 32, v19);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v26[0] && !_InterlockedSub((volatile signed __int32 *)v26[0], 1u) )
        free(v26[0]);
      sub_40F630(a1, v21, (const QT::QString *)v22, (const QT::QString *)v25, 32, 25, 32, v4, a4);
      if ( v25[0] && !_InterlockedSub((volatile signed __int32 *)v25[0], 1u) )
        free(v25[0]);
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v23, v21[0].m128i_i8);
      }
      goto LABEL_24;
    }
LABEL_41:
    v18 = 0;
    if ( v16 )
      v18 = strlen(v16);
    goto LABEL_13;
  }
  *(_OWORD *)ptr = 0;
  v28 = 0;
  sub_40F630(a1, v21, (const QT::QString *)v22, (const QT::QString *)ptr, 32, 25, 32, v4, a4);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
LABEL_24:
  if ( v22[0] && !_InterlockedSub((volatile signed __int32 *)v22[0], 1u) )
    free(v22[0]);
  if ( v21[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v21[0].m128i_i64[0], 1u) )
    free((void *)v21[0].m128i_i64[0]);
  return a1;
}
