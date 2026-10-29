__int64 __fastcall sub_1EA7BF0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 540) = a3;
  return result;
}
