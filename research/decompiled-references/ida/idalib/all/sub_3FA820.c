unsigned __int64 __fastcall sub_3FA820(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebp
  __m128i si128; // xmm0
  __int64 v8; // rax
  _QWORD *v9; // rbp
  __int64 *v10; // r12
  char v11; // al
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  int v16; // ebp
  __m128i v17; // xmm0
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  unsigned __int64 v23; // rdx
  int v24[4]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25[2]; // [rsp+10h] [rbp-48h] BYREF
  int v26; // [rsp+20h] [rbp-38h]
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]
  __int64 v28; // [rsp+30h] [rbp-28h]

  v1 = qword_2CCB5B0;
  v27 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v3 = xmmword_2CCB5B8;
  if ( (_QWORD)xmmword_2CCB5B8 )
  {
    v4 = (_QWORD *)v1;
    v5 = 0;
    do
    {
      if ( !*v4 )
      {
        *v4 = a1;
        v6 = v5;
        goto LABEL_6;
      }
      ++v5;
      ++v4;
    }
    while ( v5 != (_QWORD)xmmword_2CCB5B8 );
    v6 = xmmword_2CCB5B8;
    v23 = xmmword_2CCB5B8 + 1;
  }
  else
  {
    v23 = 1;
    v6 = 0;
  }
  if ( *((_QWORD *)&xmmword_2CCB5B8 + 1) < v23 )
  {
    qword_2CCB5B0 = qvector_reserve(&qword_2CCB5B0, v1, v23, 8);
    v3 = xmmword_2CCB5B8;
    v1 = qword_2CCB5B0;
  }
  *(_QWORD *)(v1 + 8 * v3) = a1;
  *(_QWORD *)&xmmword_2CCB5B8 = xmmword_2CCB5B8 + 1;
LABEL_6:
  *(_DWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 296) = a1 + 280;
  *(_QWORD *)(a1 + 304) = a1 + 280;
  *(_WORD *)(a1 + 600) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 496) = 0;
  *(_OWORD *)(a1 + 624) = 0;
  *(_OWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_WORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 158) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 216) = -1;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_BYTE *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_DWORD *)(a1 + 604) = 0;
  *(_QWORD *)(a1 + 896) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7900);
  *(_WORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 908) = 0;
  *(_QWORD *)(a1 + 1504) = -1;
  *(_DWORD *)(a1 + 1512) = 8;
  *(_BYTE *)(a1 + 1516) = 1;
  *(_QWORD *)(a1 + 1520) = -1;
  *(__m128i *)(a1 + 1488) = si128;
  *(_QWORD *)(a1 + 1528) = sub_39AF20(a1);
  *(_QWORD *)(a1 + 1536) = sub_3A0B90(a1);
  *(_QWORD *)(a1 + 1544) = sub_590FA0(a1);
  *(_QWORD *)(a1 + 1552) = sub_3E8700(a1);
  *(_QWORD *)(a1 + 1560) = sub_3DCE90(a1);
  *(_QWORD *)(a1 + 1568) = sub_754D50(a1);
  *(_QWORD *)(a1 + 1576) = sub_3AE860(a1);
  *(_QWORD *)(a1 + 1584) = sub_52CB90(a1);
  *(_QWORD *)(a1 + 1592) = sub_5AC0E0(a1);
  *(_QWORD *)(a1 + 1600) = sub_41B020(a1);
  *(_QWORD *)(a1 + 1608) = sub_37D3E0(a1);
  *(_QWORD *)(a1 + 1616) = sub_5C7040(a1);
  *(_QWORD *)(a1 + 1624) = sub_5D9DF0(a1);
  *(_QWORD *)(a1 + 1632) = sub_380660(a1);
  *(_QWORD *)(a1 + 1640) = sub_421F60(a1);
  *(_QWORD *)(a1 + 1648) = sub_608AA0(a1);
  *(_QWORD *)(a1 + 1656) = sub_559ED0(a1);
  *(_QWORD *)(a1 + 1664) = sub_63C640(a1);
  *(_QWORD *)(a1 + 1672) = sub_3CC140(a1);
  v8 = operator new(0x30u);
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)(a1 + 1680) = v8;
  *(_OWORD *)(v8 + 8) = 0;
  *(_OWORD *)(v8 + 32) = 0;
  *(_QWORD *)(a1 + 1688) = sub_63D040(a1);
  *(_QWORD *)(a1 + 1696) = sub_640970(a1);
  *(_QWORD *)(a1 + 1704) = sub_64C8B0(a1);
  *(_QWORD *)(a1 + 1712) = sub_4B3D00(a1);
  *(_QWORD *)(a1 + 1720) = sub_4C9AC0(a1);
  *(_QWORD *)(a1 + 1728) = sub_4DFAD0(a1);
  *(_QWORD *)(a1 + 1736) = sub_7AECE0(a1);
  *(_QWORD *)(a1 + 1744) = sub_4E6710(a1);
  *(_QWORD *)(a1 + 1752) = sub_4F22F0(a1);
  *(_QWORD *)(a1 + 1760) = sub_50E020(a1);
  *(_QWORD *)(a1 + 1768) = sub_518000(a1);
  *(_QWORD *)(a1 + 1776) = sub_688610(a1);
  *(_QWORD *)(a1 + 1784) = sub_521020(a1);
  *(_QWORD *)(a1 + 1792) = sub_359A30(a1);
  *(_QWORD *)(a1 + 1800) = sub_6915F0(a1);
  *(_QWORD *)(a1 + 1808) = sub_52E950(a1);
  *(_QWORD *)(a1 + 1816) = sub_694710(a1);
  *(_QWORD *)(a1 + 1824) = sub_533D90(a1);
  *(_QWORD *)(a1 + 1832) = sub_697AD0(a1);
  *(_QWORD *)(a1 + 1840) = sub_69A840(a1);
  *(_QWORD *)(a1 + 1848) = sub_57EF00(a1);
  *(_QWORD *)(a1 + 1856) = sub_586EE0(a1);
  *(_QWORD *)(a1 + 1864) = sub_6B8B40(a1);
  *(_QWORD *)(a1 + 1872) = sub_6CA510(a1);
  *(_QWORD *)(a1 + 1880) = sub_433690(a1);
  *(_QWORD *)(a1 + 1888) = sub_7293A0(a1);
  *(_QWORD *)(a1 + 1896) = sub_6D64D0(a1);
  *(_OWORD *)(a1 + 1904) = 0;
  sub_62FF70(a1 + 640, a1);
  v9 = *(_QWORD **)(a1 + 1672);
  v10 = (__int64 *)v9[3];
  v11 = sub_631C90(*v9, 3, 4);
  if ( *((_BYTE *)v10 + 28) )
  {
    v13 = *v10;
    v12 = 4;
    if ( v11 )
    {
      v13 = v10[1];
      v12 = 8;
    }
    v10[2] = v13;
    *((_DWORD *)v10 + 6) = v12;
  }
  v16 = (_DWORD)v9 + 1080;
  *(__m128i *)v24 = _mm_load_si128((const __m128i *)&xmmword_23A7910);
  rangeset_t_add(v16, (int)v24, v12, v13, v14, v15, v24[0], *(void **)&v24[2], v25[0], v25[1], v26, v27, v28);
  v17 = _mm_load_si128((const __m128i *)&xmmword_23A7920);
  rangeset_t_add(
    v16,
    (int)v25,
    v18,
    v19,
    v20,
    v21,
    v24[0],
    *(void **)&v24[2],
    v17.m128i_i64[0],
    v17.m128i_i32[2],
    v26,
    v27,
    v28);
  *(_QWORD *)(a1 + 928) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  memset(
    (void *)((a1 + 936) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 936) & 0xFFFFFFF8) + 1072) >> 3));
  *(_QWORD *)(a1 + 1072) = 0;
  *(_QWORD *)(a1 + 1480) = 0;
  memset(
    (void *)((a1 + 1080) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 1080) & 0xFFFFFFF8) + 1488) >> 3));
  byte_2CCB5A4 = 1;
  off_2C81CA0 = sub_3FA400;
  return v27 - __readfsqword(0x28u);
}
