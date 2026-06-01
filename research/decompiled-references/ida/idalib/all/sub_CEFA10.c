void *__fastcall sub_CEFA10(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  void *result; // rax
  void *v4; // rcx

  *(_DWORD *)a1 = a2;
  v2 = ((unsigned __int64)a2 + 63) >> 6;
  result = (void *)operator new[](8 * v2);
  v4 = result;
  if ( v2 )
  {
    result = memset(result, 0, 8 * v2);
    v4 = result;
  }
  *(_QWORD *)(a1 + 8) = v4;
  if ( v2 )
    return memset(v4, 0, 8 * v2);
  return result;
}
