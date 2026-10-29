__int64 __fastcall sub_573180(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  _WORD *v12; // rax
  int v13; // eax
  __int64 result; // rax

  sub_573090(a1, a5, a6, a7);
  *(_QWORD *)(a1 + 200) = a5;
  *(_QWORD *)(a1 + 212) = 0;
  *(_QWORD *)(a1 + 240) = -1;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)a1 = &off_2BF9800;
  v12 = (_WORD *)(a1 + 264);
  *(_OWORD *)(a1 + 224) = -1;
  do
  {
    *v12 = 0;
    v12 += 20;
    *(v12 - 19) = 0;
    *(v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *(v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *((_QWORD *)v12 - 2) = 0;
  }
  while ( v12 != (_WORD *)(a1 + 584) );
  *(_OWORD *)(a1 + 592) = 0;
  *(_OWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 608) = a8;
  v13 = *(_DWORD *)(a1 + 144);
  *(_OWORD *)(a1 + 656) = 0;
  *(_OWORD *)(a1 + 672) = 0;
  *(_OWORD *)(a1 + 688) = 0;
  result = v13 & 0xFFF2FFFF | 0x90000;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 616) = a2;
  *(_QWORD *)(a1 + 624) = a3;
  *(_QWORD *)(a1 + 632) = a4;
  *(_QWORD *)(a1 + 720) = a6;
  *(_BYTE *)(a1 + 208) = 2;
  *(_DWORD *)(a1 + 144) = result;
  *(_OWORD *)(a1 + 704) = -1;
  return result;
}
