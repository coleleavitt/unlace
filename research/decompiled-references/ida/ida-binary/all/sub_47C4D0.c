__int64 __fastcall sub_47C4D0(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  size_t v4; // rax
  __int64 v5; // rbx
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  if ( !*(_BYTE *)(v2 + 520) )
    v3 = *(_QWORD *)(v2 + 512);
  v4 = strlen(a2);
  QT::QString::fromUtf8(ptr, v4, a2);
  v5 = sub_4C6D30(v3, ptr);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  if ( v5 )
    return sub_4CD6B0(v5, 0);
  else
    return 0;
}
