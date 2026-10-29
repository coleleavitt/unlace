__int64 __fastcall sub_677CD0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x20u);
  *(_QWORD *)result = a1;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 28) = 0;
  *(_OWORD *)(result + 12) = 0;
  return result;
}

