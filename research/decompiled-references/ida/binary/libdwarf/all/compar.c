__int64 __fastcall compar(const void *a1, const void *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  result = 0xFFFFFFFFLL;
  if ( v2 >= v3 )
    return v3 < v2;
  return result;
}

