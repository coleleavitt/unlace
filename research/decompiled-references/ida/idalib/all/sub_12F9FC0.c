char __fastcall sub_12F9FC0(__int64 a1, const void **a2)
{
  char *v2; // r8
  size_t v3; // rdx
  char result; // al

  v2 = (char *)*a2;
  if ( *(_QWORD *)a1 == -4096 )
    return v2 + 4096 == nullptr;
  if ( *(_QWORD *)a1 == -8192 )
    return v2 + 0x2000 == nullptr;
  v3 = *(unsigned int *)(a1 + 8);
  result = 0;
  if ( *((_DWORD *)a2 + 2) == (_DWORD)v3 )
  {
    result = 1;
    if ( *(_DWORD *)(a1 + 8) )
      return memcmp(*(const void **)a1, *a2, v3) == 0;
  }
  return result;
}
