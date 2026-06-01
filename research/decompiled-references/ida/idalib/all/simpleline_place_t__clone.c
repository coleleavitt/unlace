__int64 __fastcall simpleline_place_t__clone(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = qalloc_or_throw(16);
  v2 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)result = off_2B2DD20;
  *(_DWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a1 + 12);
  return result;
}
