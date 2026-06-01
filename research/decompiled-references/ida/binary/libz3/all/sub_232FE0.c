__int64 __fastcall sub_232FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 result; // rax

  v7 = a1 + 136;
  *(_QWORD *)(v7 - 136) = qword_1C636A0;
  *(_QWORD *)(v7 - 120) = qword_1C63778;
  *(_DWORD *)(v7 - 128) = 0;
  *(_DWORD *)(v7 - 112) = 0;
  *(_BYTE *)(v7 - 108) = 0;
  *(_QWORD *)(v7 - 104) = 0;
  *(_DWORD *)(v7 - 96) = 0;
  *(_QWORD *)(v7 - 88) = &off_1C62200;
  *(_QWORD *)(v7 - 72) = 0;
  *(_QWORD *)(v7 - 64) = 0;
  *(_QWORD *)(v7 - 48) = 0;
  *(_QWORD *)(v7 - 40) = 0;
  *(_QWORD *)(v7 - 32) = a2;
  *(_QWORD *)(v7 - 24) = 0;
  *(_QWORD *)(v7 - 16) = 0;
  *(_QWORD *)(v7 - 8) = 0;
  ((void (*)(void))sub_180C0A0)();
  *(_QWORD *)(a1 + 176) = a2;
  *(_QWORD *)a1 = &off_1C4C5D8;
  *(_QWORD *)(a1 + 16) = &off_1C4C6F0;
  sub_1858590(a1 + 184, a3);
  *(_OWORD *)(a1 + 192) = 0;
  sub_180C0A0(a1 + 208);
  result = *(_QWORD *)(a2 + 856);
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = a2;
  *(_QWORD *)(a1 + 264) = result;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  if ( result )
    ++*(_DWORD *)(result + 8);
  *(_QWORD *)(a1 + 304) = a4;
  *(_QWORD *)(a1 + 312) = a2;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  return result;
}

