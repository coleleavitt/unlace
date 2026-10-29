__int64 __fastcall sub_3F4A70(__int64 a1, __int64 a2)
{
  double v2; // xmm0_8
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = QT::QString::fromUtf8(ptr, 16, "xref_tree: ea_%1");
  QT::QString::arg(a1, ptr, *(_QWORD *)(a2 + 280), 0, 16, 32, v2);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
