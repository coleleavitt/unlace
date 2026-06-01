__int64 __fastcall hexplace_t__clone(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = qalloc_or_throw(32);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)result = off_2B28210;
  *(_QWORD *)(result + 16) = v2;
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
