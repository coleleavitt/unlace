/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474810
// Address: 0x0000000000474810

//----- (0000000000474810) ----------------------------------------------------
char *__fastcall sub_474810(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD); // rax
  char *result; // rax

  v1 = (__int64 (__fastcall *)(_QWORD))dlsym(*(void **)(a1 + 32), "OpenSSL_version");
  if ( !v1 )
  {
    v1 = (__int64 (__fastcall *)(_QWORD))dlsym(*(void **)(a1 + 32), "SSLeay_version");
    if ( !v1 )
      return nullptr;
  }
  result = (char *)v1(0);
  if ( !result )
    return "";
  return result;
}
