__int64 __fastcall sub_77D6F0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int16 a9,
        __int16 a10,
        unsigned __int8 a11,
        char a12,
        __int64 a13)
{
  unsigned __int64 v14; // r14
  __int64 v15; // r13
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rax

  v14 = a3 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v15 = *a6;
  sub_779F10(a1, a2, a4, *((_DWORD *)a6 + 2));
  *(_QWORD *)(a1 + 40) = v15;
  *(_QWORD *)(a1 + 48) = a7;
  *(_DWORD *)(a1 + 64) = a5;
  *(_QWORD *)a1 = &off_47D9BD0;
  *(_QWORD *)(a1 + 56) = a8 & 0xFFFFFFFFFFFFFFFBLL;
  sub_79B760(a1 + 72, a2);
  *(_QWORD *)(a1 + 104) = v14;
  *(_QWORD *)(a1 + 112) = a1;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &off_47D9D38;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  v16 = sub_792B00(a6);
  if ( !v16 )
    v16 = *((_DWORD *)a6 + 2);
  *(_DWORD *)(a1 + 140) = v16;
  *(_DWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = a6[2];
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 80) & 0x1FFF
                       | (a11 << 17)
                       | (a11 << 16)
                       | (unsigned __int16)(a9 << 13)
                       | 0x200000;
  result = *(_WORD *)(a1 + 84) & 0xE000;
  *(_WORD *)(a1 + 84) = result | a12 & 3 | (a10 << 11) & 0x1FFF;
  if ( a13 )
  {
    v18 = *(_QWORD *)(a1 + 56);
    if ( (v18 & 4) == 0 )
    {
      v19 = sub_798D40(a1);
      v20 = sub_779170(v19 + 2192, 48, 3);
      *(_OWORD *)(v20 + 24) = 0;
      *(_DWORD *)(v20 + 16) = 0;
      *(_QWORD *)(v20 + 40) = 0;
      *(_OWORD *)v20 = 0;
      *(_QWORD *)(a1 + 56) = v20 | 4;
      *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v18 & 0xFFFFFFFFFFFFFFF8LL;
      v18 = *(_QWORD *)(a1 + 56);
    }
    *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFF8LL) + 40) = a13;
    return a13;
  }
  return result;
}

