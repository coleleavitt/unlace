__int64 __fastcall sub_2518F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = off_1C4CA00;
  *(_DWORD *)(a1 + 8) = 0;
  result = sub_251560(a2, a1);
  *(_DWORD *)(a1 + 12) = result;
  return result;
}

