__int64 __fastcall sub_2E3510(__int64 a1)
{
  double v1; // xmm0_8
  unsigned int v2; // ebx
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v1 = QT::QString::fromUtf8(ptr, 9, "IDA View-");
  v2 = QT::QString::startsWith(a1, ptr, 1, v1);
  if ( (_BYTE)v2 )
    LOBYTE(v2) = *(_QWORD *)(a1 + 16) == 10;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v2;
}
