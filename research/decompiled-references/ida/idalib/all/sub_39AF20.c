__int64 __fastcall sub_39AF20(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x48u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = 0;
  *(_WORD *)(result + 68) = 0;
  *(_BYTE *)(result + 48) = 0;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 32) = 0;
  return result;
}
