__int64 __fastcall sub_B141F0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 8) ^= 1u;
  return result;
}

