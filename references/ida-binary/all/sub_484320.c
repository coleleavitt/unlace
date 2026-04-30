__int64 sub_484320(__int64 a1, const char *a2, __int64 a3, ...)
{
  void **v4; // r12
  double v6; // xmm0_8
  size_t v7; // rax
  double v8; // xmm0_8
  size_t v9; // rax
  double v10; // xmm0_8
  void **v11; // rsi
  char *v12; // r15
  size_t v13; // r9
  __int64 v14; // rdx
  void *v15; // rdi
  void *v16; // rdx
  __int64 v17; // rcx
  __m128 v18; // xmm0
  __int64 v19; // [rsp+10h] [rbp-5D8h]
  size_t n; // [rsp+18h] [rbp-5D0h]
  void *v21; // [rsp+20h] [rbp-5C8h] BYREF
  __int128 v22; // [rsp+28h] [rbp-5C0h] BYREF
  void *v23[4]; // [rsp+40h] [rbp-5A8h] BYREF
  void *ptr[4]; // [rsp+60h] [rbp-588h] BYREF
  void *v25[4]; // [rsp+80h] [rbp-568h] BYREF
  void *v26[4]; // [rsp+A0h] [rbp-548h] BYREF
  void *v27; // [rsp+C0h] [rbp-528h] BYREF
  char *v28; // [rsp+C8h] [rbp-520h]
  gcc_va_list va; // [rsp+D8h] [rbp-510h] BYREF
  char s[1032]; // [rsp+F0h] [rbp-4F8h] BYREF
  unsigned __int64 v31; // [rsp+4F8h] [rbp-F0h]
  __int64 v32; // [rsp+518h] [rbp-D0h]
  __int64 v33; // [rsp+520h] [rbp-C8h]
  __int64 v34; // [rsp+528h] [rbp-C0h]

  va_start(va, a3);
  v32 = va_arg(va, _QWORD);
  v33 = va_arg(va, _QWORD);
  v34 = va_arg(va, _QWORD);
  va_end(va);
  v31 = __readfsqword(0x28u);
  LODWORD(v4) = batch;
  if ( batch )
    return (unsigned int)v4;
  va_start(va, a3);
  qvsnprintf(s, 1024, a3, va, v33, v34);
  v6 = sub_4BEF60(0, 0, s);
  v7 = 0;
  if ( a2 )
    v7 = strlen(a2);
  v8 = QT::QString::fromUtf8(ptr, v7, a2, v6);
  v9 = strlen(s);
  v4 = v23;
  v10 = QT::QString::fromUtf8(v23, v9, s, v8);
  sub_53B920(v25, 0, v23, ptr, 1, v10);
  QT::QDir::toNativeSeparators((QT::QDir *)v26, (const QT::QString *)v25);
  v11 = v26;
  QT::QString::toUtf8_helper((QT::QString *)&v27, (const QT::QString *)v26);
  v12 = v28;
  v21 = nullptr;
  v22 = 0;
  if ( v28 )
  {
    v13 = strlen(v28);
    v14 = v13 + 1;
LABEL_7:
    n = v13;
    v19 = v14;
    v11 = (void **)v12;
    v21 = (void *)qvector_reserve(&v21, 0, v14, 1);
    *(_QWORD *)&v22 = v19;
    memmove(v21, v12, n);
    *((_BYTE *)v21 + n) = 0;
    goto LABEL_8;
  }
  if ( &QT::QByteArray::_empty )
  {
    v14 = 1;
    v13 = 0;
    v12 = (char *)&QT::QByteArray::_empty;
    goto LABEL_7;
  }
LABEL_8:
  if ( v27 && !_InterlockedSub((volatile signed __int32 *)v27, 1u) )
    free(v27);
  if ( v26[0] && !_InterlockedSub((volatile signed __int32 *)v26[0], 1u) )
    free(v26[0]);
  if ( v25[0] && !_InterlockedSub((volatile signed __int32 *)v25[0], 1u) )
    free(v25[0]);
  if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
    free(v23[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v15 = v21;
  LOBYTE(v4) = (unsigned __int64)v22 > 1;
  if ( (unsigned __int64)v22 > 1 )
  {
    v16 = *(void **)a1;
    v17 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v21;
    v18 = _mm_loadh_ps((const double *)&v22 + 1);
    v21 = v16;
    v15 = v16;
    *((_QWORD *)&v22 + 1) = v17;
    *(__m128 *)(a1 + 8) = v18;
  }
  if ( v15 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v15, (const char *)v11);
  }
  return (unsigned int)v4;
}
