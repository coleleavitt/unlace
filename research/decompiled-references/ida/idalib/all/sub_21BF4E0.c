char __fastcall sub_21BF4E0(char ****a1, __int64 a2)
{
  char **v2; // rax
  char *v3; // rdi
  size_t v4; // rdx
  char result; // al

  v2 = **a1;
  v3 = *v2;
  if ( *(_QWORD *)a2 == -1 )
    return v3 + 1 == nullptr;
  if ( *(_QWORD *)a2 == -2 )
    return v3 + 2 == nullptr;
  v4 = (size_t)v2[1];
  result = 0;
  if ( *(_QWORD *)(a2 + 8) == v4 )
  {
    result = 1;
    if ( v4 )
      return memcmp(v3, *(const void **)a2, v4) == 0;
  }
  return result;
}
