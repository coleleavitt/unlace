__int64 __fastcall sub_516510(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x48u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = a1;
  *(_QWORD *)(result + 40) = 0;
  *(_BYTE *)(result + 64) = 1;
  *(_DWORD *)(result + 68) = -1;
  *(_OWORD *)(result + 16) = 0;
  *(_OWORD *)(result + 48) = 0;
  return result;
}

