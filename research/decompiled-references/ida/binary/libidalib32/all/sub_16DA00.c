__int64 __fastcall sub_16DA00(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax

  result = qalloc_or_throw();
  *(_QWORD *)result = off_234638;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 12) = a3;
  return result;
}

