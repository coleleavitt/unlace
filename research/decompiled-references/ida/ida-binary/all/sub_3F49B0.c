__int64 __fastcall sub_3F49B0(__int64 a1, __int64 a2)
{
  _QWORD *func; // rax
  __int64 v4; // rbp
  double v5; // xmm0_8
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( a2 == -1 || (func = (_QWORD *)get_func(a2)) == nullptr )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
  }
  else
  {
    v4 = a2 - *func;
    v5 = QT::QString::fromUtf8(ptr, 5, "+0x%1");
    QT::QString::arg(a1, ptr, v4, 0, 16, 48, v5);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return a1;
}
