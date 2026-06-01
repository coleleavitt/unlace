__int64 __fastcall sub_B58BF0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        char a12,
        __int64 a13)
{
  unsigned __int64 v14; // r14
  int v15; // eax
  char v16; // dl
  char v17; // al
  __int64 result; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-48h]

  v14 = a3 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v22 = *a6;
  sub_B4E870(a1, a2, a4, *((_DWORD *)a6 + 2));
  *(_QWORD *)(a1 + 40) = v22;
  *(_DWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 48) = a7;
  *(_QWORD *)a1 = &off_2B20728;
  *(_QWORD *)(a1 + 56) = a8 & 0xFFFFFFFFFFFFFFFBLL;
  sub_B6A340(a1 + 72, a2);
  *(_QWORD *)(a1 + 104) = v14;
  *(_QWORD *)(a1 + 112) = a1;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &off_2B20890;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  v15 = sub_B61CD0(a6, a2);
  if ( !v15 )
    v15 = *((_DWORD *)a6 + 2);
  *(_DWORD *)(a1 + 140) = v15;
  v16 = *(_BYTE *)(a1 + 81);
  *(_QWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 160) = a6[2];
  v17 = *(_BYTE *)(a1 + 82);
  *(_BYTE *)(a1 + 81) = (32 * a9) | v16 & 0x1F;
  *(_BYTE *)(a1 + 82) = (2 * (a11 & 1)) | a11 & 1 | v17 & 0xFC;
  *(_BYTE *)(a1 + 84) = a12 & 3 | *(_BYTE *)(a1 + 84) & 0xFC;
  *(_BYTE *)(a1 + 85) = (8 * (a10 & 1)) | *(_BYTE *)(a1 + 85) & 0xF7;
  result = *(_DWORD *)(a1 + 82) & 0xE8030003 | 0x20;
  *(_DWORD *)(a1 + 82) = result;
  if ( *(_QWORD *)a13 )
  {
    v19 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 56) & 4) == 0 )
    {
      v20 = sub_B685F0(a1);
      v21 = sub_B57ED0((__int64 *)(v20 + 2352), 56, 3u);
      *(_OWORD *)(v21 + 24) = 0;
      *(_OWORD *)v21 = 0;
      *(_DWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 40) = 0;
      *(_DWORD *)(v21 + 48) = 0;
      *(_QWORD *)(a1 + 56) = v21 | 4;
      *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v19;
      v19 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    }
    *(_QWORD *)(v19 + 40) = *(_QWORD *)a13;
    result = *(unsigned int *)(a13 + 8);
    *(_DWORD *)(v19 + 48) = result;
  }
  return result;
}

