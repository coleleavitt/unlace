__int64 __fastcall sub_922E0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x38u);
  *(_DWORD *)result = 1;
  *(_QWORD *)(result + 8) = a1;
  return result;
}

