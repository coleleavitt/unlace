__int64 __fastcall sub_437700(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  v2 = (_OWORD *)sub_186B270(0x80u);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = 8;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  result = sub_186B270(0xC0u);
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_DWORD *)(result + 112) = 0;
  *(_DWORD *)(result + 136) = 0;
  *(_DWORD *)(result + 160) = 0;
  *(_DWORD *)(result + 184) = 0;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 40) = 8;
  *(_DWORD *)(a1 + 48) = 0;
  *(_OWORD *)result = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 72) = 0;
  *(_OWORD *)(result + 96) = 0;
  *(_OWORD *)(result + 120) = 0;
  *(_OWORD *)(result + 144) = 0;
  *(_OWORD *)(result + 168) = 0;
  return result;
}

