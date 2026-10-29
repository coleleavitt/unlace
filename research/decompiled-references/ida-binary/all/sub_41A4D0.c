__int64 __fastcall sub_41A4D0(char *s)
{
  __int64 v1; // rbp
  size_t v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-40h]
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v1 = sub_47A690(QT::QCoreApplication::self);
  v2 = 0;
  if ( s )
    v2 = strlen(s);
  QT::QString::fromUtf8(ptr, v2, s);
  result = sub_4C6D30(v1, ptr);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v4 = result;
      free(ptr[0]);
      return v4;
    }
  }
  return result;
}
