__int64 __fastcall sub_83100(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 8) = 257;
  *(_QWORD *)result = a2;
  return result;
}
