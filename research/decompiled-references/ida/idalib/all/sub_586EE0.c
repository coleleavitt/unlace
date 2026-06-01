__int64 __fastcall sub_586EE0(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x40u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = result + 24;
  *(_QWORD *)(result + 48) = result + 24;
  *(_QWORD *)(result + 56) = 0;
  return result;
}
