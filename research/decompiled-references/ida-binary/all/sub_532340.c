__int64 __fastcall sub_532340(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // rax
  const char *v4; // rbp
  size_t v5; // rdx
  double v6; // xmm0_8
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  ptr[3] = (void *)__readfsqword(0x28u);
  if ( v2 )
  {
    v3 = v2 - 1;
    v4 = *(const char **)a2;
    v5 = v3 >> 63;
  }
  else
  {
    LOBYTE(v5) = 0;
    v3 = 0;
    v4 = &s1;
  }
  if ( !v4 || (_BYTE)v5 )
  {
    v3 = 0;
    if ( v4 )
      v3 = strlen(v4);
  }
  v6 = QT::QString::fromUtf8(ptr, v3, v4);
  QT::QKeySequence::QKeySequence(a1, ptr, 0, v6);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
