unsigned __int64 __fastcall sub_16FE540(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *a1;
  result = 0;
  if ( (*a1 & 4) != 0 )
  {
    result = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      return (*(_QWORD *)result + 16LL * *(unsigned int *)(result + 8)) | 4;
  }
  return result;
}
