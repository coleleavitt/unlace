__int64 __fastcall sub_1887390(
        __int64 a1,
        unsigned __int32 a2,
        __int64 a3,
        __int64 a4,
        __m128 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        unsigned __int8 a12,
        char a13,
        __int64 a14)
{
  char v14; // r10
  __m128 *v15; // rbx
  char v16; // r11
  char v17; // al
  unsigned __int64 v19; // rax
  char v21; // [rsp+18h] [rbp-50h]
  char v22; // [rsp+18h] [rbp-50h]
  char v23; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int32 v24; // [rsp+2Ch] [rbp-3Ch] BYREF

  v14 = a6;
  v15 = a5;
  v16 = a9;
  if ( (*(_BYTE *)(a4 + 28) & 0x7F) == 0x36 )
  {
    v21 = a6;
    v24 = a2;
    v15 = sub_1886CC0(a1, a2, a5, a4, (__int64)a5, a6);
    v17 = sub_18F5260(a1, (_DWORD)v15, (unsigned int)&v24, 1, 0, 0, 0, 0, 1);
    v14 = v21;
    v16 = a9;
    if ( v17 )
      return 1;
  }
  v22 = v16;
  v23 = v14;
  sub_1910D40(a1, a2, v15, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0
    && !(unsigned __int8)sub_1799D00(*(__int64 **)(a1 + 664), a2, (__int64)v15) )
  {
    return 1;
  }
  v19 = sub_C982A0(*(_QWORD **)(a1 + 248), a3, a2, (__int64)v15, v23, v22, a7, a8, a10, a11, a12, a13, a14);
  return sub_18C3A50(a1, v19, v15);
}
