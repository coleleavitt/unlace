void *__fastcall sub_81CB40(__int64 a1, void **a2, __int64 a3)
{
  signed __int64 v3; // rdx
  void *result; // rax

  v3 = 8 * a3;
  result = (void *)(a1 + 32);
  if ( v3 > 8 )
    return memmove((void *)(a1 + 32), a2, v3);
  if ( v3 == 8 )
  {
    result = *a2;
    *(_QWORD *)(a1 + 32) = *a2;
  }
  return result;
}

