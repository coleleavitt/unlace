__int64 __fastcall hexplace_t__clone(_DWORD *a1, const char *a2)
{
  __int64 result; // rax
  int v3; // edx

  result = qalloc_or_throw(24, a2);
  *(_DWORD *)(result + 8) = a1[2];
  v3 = a1[3];
  *(_QWORD *)result = off_2AFE250;
  *(_DWORD *)(result + 12) = v3;
  *(_DWORD *)(result + 16) = a1[4];
  return result;
}

