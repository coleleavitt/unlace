__int64 __fastcall sub_4EE540(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  LOBYTE(a3) = a3 == 0;
  v3 = a3;
  LOBYTE(v3) = (a2 >= 0) & a3;
  if ( (_BYTE)v3 )
  {
    QT::QString::fromUtf8(ptr, 1, "X");
    *a1 = sub_4F9CA0((QT::QString *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return v3;
}
