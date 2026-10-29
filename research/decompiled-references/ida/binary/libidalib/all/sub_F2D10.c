__int64 (__fastcall **__fastcall sub_F2D10(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6))()
{
  __int64 v6; // r12
  __int64 v7; // rbx

  v6 = 2;
  v7 = a1;
  do
  {
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 32) = v7 + 16;
    *(_QWORD *)(v7 + 40) = v7 + 16;
    *(_QWORD *)(v7 + 48) = 0;
    *(_QWORD *)v7 = &off_235A00;
    *(_QWORD *)(v7 + 56) = 0;
    sub_1770B0(v7, 0, a3, a4, a5, a6);
    v7 += 72;
  }
  while ( v6-- != 0 );
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 296) = a1 + 288;
  *(_QWORD *)(a1 + 288) = a1 + 288;
  *(_QWORD *)(a1 + 280) = &off_22F2F8;
  *(_QWORD *)(a1 + 320) = a1 + 312;
  *(_QWORD *)(a1 + 312) = a1 + 312;
  *(_QWORD *)(a1 + 304) = &off_230D58;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 224) = -1;
  *(_QWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 240) = 1;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 328) = &off_230DD8;
  *(_OWORD *)(a1 + 256) = 0;
  return &off_230DD8;
}

