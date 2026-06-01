void *__fastcall sub_72B030(__int64 a1)
{
  __int64 v1; // r12
  void *result; // rax
  unsigned int v3; // ebp
  bool v4; // zf

  v1 = *(_QWORD *)(a1 + 56);
  sub_731E10(v1);
  result = *(void **)(v1 + 40);
  v3 = (unsigned int)result;
  if ( *(_DWORD *)(a1 + 32) <= (unsigned int)result )
    v3 = *(_DWORD *)(a1 + 32);
  if ( v3 )
  {
    result = memcpy(*(void **)(a1 + 24), *(const void **)(v1 + 32), v3);
    *(_QWORD *)(a1 + 24) += v3;
    *(_QWORD *)(v1 + 32) += v3;
    *(_QWORD *)(a1 + 40) += v3;
    *(_DWORD *)(a1 + 32) -= v3;
    v4 = *(_QWORD *)(v1 + 40) == v3;
    *(_QWORD *)(v1 + 40) -= v3;
    if ( v4 )
    {
      result = *(void **)(v1 + 16);
      *(_QWORD *)(v1 + 32) = result;
    }
  }
  return result;
}

