__int64 __fastcall sub_532410(__int64 a1, __int64 a2)
{
  double v2; // xmm0_8
  __int64 v3; // rax
  size_t v4; // rax
  const char *v5; // r12
  size_t v6; // rdx
  double v7; // xmm0_8
  __int64 v8; // rax
  size_t v9; // rax
  const char *v10; // r14
  size_t v11; // rdx
  double v12; // xmm0_8
  void *ptr[4]; // [rsp+10h] [rbp-D8h] BYREF
  void *v15[4]; // [rsp+30h] [rbp-B8h] BYREF
  void *v16[4]; // [rsp+50h] [rbp-98h] BYREF
  void *v17[4]; // [rsp+70h] [rbp-78h] BYREF
  void *v18[11]; // [rsp+90h] [rbp-58h] BYREF

  v18[3] = (void *)__readfsqword(0x28u);
  v2 = QT::QString::fromUtf8(ptr, 8, a1_3);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = *(const char **)a2;
    v6 = v4 >> 63;
  }
  else
  {
    LOBYTE(v6) = 0;
    v4 = 0;
    v5 = &s1;
  }
  if ( !v5 || (_BYTE)v6 )
  {
    v4 = 0;
    if ( v5 )
      v4 = strlen(v5);
  }
  v7 = QT::QString::fromUtf8(v15, v4, v5, v2);
  QT::QString::arg(v16, ptr, v15, 0, 32, v7);
  v8 = *(_QWORD *)(a2 + 32);
  if ( v8 )
  {
    v9 = v8 - 1;
    v10 = *(const char **)(a2 + 24);
    v11 = v9 >> 63;
  }
  else
  {
    LOBYTE(v11) = 0;
    v9 = 0;
    v10 = &s1;
  }
  if ( !v10 || (_BYTE)v11 )
  {
    v9 = 0;
    if ( v10 )
      v9 = strlen(v10);
  }
  v12 = QT::QString::fromUtf8(v17, v9, v10);
  QT::QString::arg(v18, v16, v17, 0, 32, v12);
  QT::QString::arg(a1, v18, *(int *)(a2 + 48), 0, 10, 32);
  if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
    free(v18[0]);
  if ( v17[0] && !_InterlockedSub((volatile signed __int32 *)v17[0], 1u) )
    free(v17[0]);
  if ( v16[0] && !_InterlockedSub((volatile signed __int32 *)v16[0], 1u) )
    free(v16[0]);
  if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
    free(v15[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
