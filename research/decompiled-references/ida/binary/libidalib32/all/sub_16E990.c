__int64 __fastcall sub_16E990(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax

  result = qalloc_or_throw();
  *(_QWORD *)result = off_2346F8;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 8) = a4;
  return result;
}

