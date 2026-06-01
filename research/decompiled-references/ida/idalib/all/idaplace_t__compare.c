__int64 __fastcall idaplace_t__compare(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a2 + 16);
  result = 0;
  if ( v2 != v3 )
    return v3 < v2 ? 1 : -1;
  return result;
}
