__int64 __fastcall sub_2ECC10(__int64 a1, const char *a2)
{
  size_t v2; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) <= 1u || !a2 )
    return 0xFFFFFFFFLL;
  if ( !(unsigned __int16)sub_4B31A0() )
    return 4294967294LL;
  v2 = strlen(a2);
  QT::QString::fromUtf8(ptr, v2, a2);
  sub_180640(a1, (const QT::QString *)ptr);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return 0;
}
