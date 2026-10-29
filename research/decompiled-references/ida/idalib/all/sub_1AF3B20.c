__int64 __fastcall sub_1AF3B20(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 27456) = a2;
  return result;
}
