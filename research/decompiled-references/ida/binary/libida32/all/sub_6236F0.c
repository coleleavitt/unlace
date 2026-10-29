__int64 __fastcall sub_6236F0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x10u);
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 8) = 0;
  return result;
}

