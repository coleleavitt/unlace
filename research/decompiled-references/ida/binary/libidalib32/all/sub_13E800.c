__int64 __fastcall sub_13E800(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = operator new(0x58u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = result + 16;
  *(_QWORD *)(result + 40) = result + 16;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = a2;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)result = &off_237A30;
  *(_OWORD *)(result + 72) = 0;
  return result;
}

