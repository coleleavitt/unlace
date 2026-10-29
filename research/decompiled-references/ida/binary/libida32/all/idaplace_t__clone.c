__int64 __fastcall idaplace_t__clone(__int64 a1, const char *a2)
{
  __int64 result; // rax
  int v3; // edx

  result = qalloc_or_throw(16, a2);
  v3 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)result = off_2AFC770;
  *(_DWORD *)(result + 8) = v3;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a1 + 12);
  return result;
}

