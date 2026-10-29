__int64 __fastcall registry_persistent_t__::vfunc_3(__int64 a1, const QT::QString *a2)
{
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+Fh] [rbp-39h]
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)ptr, a2);
  result = reg_subkey_exists();
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v3 = result;
      free(ptr[0]);
      return v3;
    }
  }
  return result;
}
