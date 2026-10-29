__int64 __fastcall sub_694710(__int64 a1)
{
  __int64 result; // rax

  result = operator new(0x68u);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 32) = result + 16;
  *(_QWORD *)(result + 40) = result + 16;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = result + 64;
  *(_QWORD *)(result + 88) = result + 64;
  *(_QWORD *)(result + 96) = 0;
  return result;
}
