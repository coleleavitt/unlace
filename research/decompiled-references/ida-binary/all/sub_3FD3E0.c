unsigned __int64 __fastcall sub_3FD3E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+10h] [rbp-38h]
  __int64 v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 16) )
  {
    v5 = 0;
    v6 = 1;
    *(_OWORD *)ptr = 0;
    QT::QString::operator=(ptr, a2);
    v3 = *(_QWORD *)(a1 + 136);
    LOWORD(v6) = 1;
    HIDWORD(v6) = 0;
    sub_3FD080(v3, (QT::QString *)ptr, 0);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return v7 - __readfsqword(0x28u);
}
