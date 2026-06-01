__int64 __fastcall sub_569EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v4[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_180C5A0(v4, "sparse");
  v2 = v4[0];
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)a1 = &off_1C51318;
  result = sub_186B270(0x100u);
  *(_QWORD *)(a1 + 40) = 8;
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_DWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 128) = 0;
  *(_QWORD *)(result + 136) = 0;
  *(_DWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 168) = 0;
  *(_DWORD *)(result + 176) = 0;
  *(_QWORD *)(result + 192) = 0;
  *(_QWORD *)(result + 200) = 0;
  *(_DWORD *)(result + 208) = 0;
  *(_QWORD *)(result + 224) = 0;
  *(_QWORD *)(result + 232) = 0;
  *(_DWORD *)(result + 240) = 0;
  *(_QWORD *)(a1 + 32) = result;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}

