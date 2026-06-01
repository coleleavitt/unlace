__int64 __fastcall sub_751D50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = sub_186B270(0x160u);
  *(_QWORD *)v2 = qword_1C636A0;
  *(_QWORD *)(v2 + 16) = qword_1C63778;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_BYTE *)(v2 + 28) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = &off_1C62200;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = a1;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  sub_180C0A0(v2 + 136);
  *(_QWORD *)(v2 + 176) = a1;
  *(_QWORD *)v2 = &off_1C4C5D8;
  *(_QWORD *)(v2 + 16) = &off_1C4C6F0;
  sub_1858590(v2 + 184, a2);
  *(_OWORD *)(v2 + 192) = 0;
  sub_180C0A0(v2 + 208);
  v3 = *(_QWORD *)(a1 + 856);
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = a1;
  *(_QWORD *)(v2 + 264) = v3;
  *(_QWORD *)(v2 + 272) = 0;
  *(_QWORD *)(v2 + 280) = 0;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  *(_QWORD *)(v2 + 312) = a1;
  *(_QWORD *)(v2 + 320) = 0;
  *(_QWORD *)(v2 + 304) = sub_F54D70;
  *(_QWORD *)(v2 + 328) = 0;
  *(_QWORD *)(v2 + 336) = 0;
  *(_BYTE *)(v2 + 344) = 0;
  *(_OWORD *)(v2 + 288) = 0;
  return v2;
}

