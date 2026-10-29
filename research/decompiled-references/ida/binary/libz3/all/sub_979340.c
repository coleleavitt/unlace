__int64 __fastcall sub_979340(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = 0;
  result = sub_186B270(0x80u);
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_DWORD *)(result + 120) = 0;
  *(_QWORD *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 32) = 8;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}

