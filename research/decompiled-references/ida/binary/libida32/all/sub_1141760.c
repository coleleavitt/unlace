__int64 __fastcall sub_1141760(__int64 a1, const void *a2, size_t a3)
{
  __int64 result; // rax
  const void *v4; // rdi

  result = -1;
  if ( *(_QWORD *)(a1 + 8) >= a3 )
  {
    v4 = *(const void **)a1;
    result = 0;
    if ( a3 )
      return -(__int64)(memcmp(v4, a2, a3) != 0);
  }
  return result;
}

