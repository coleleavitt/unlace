__int64 __fastcall sub_169D590(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 v10; // al
  __int64 v11; // [rsp+0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+8h] [rbp-D0h]
  __int64 v13; // [rsp+10h] [rbp-C8h]
  _BYTE v14[64]; // [rsp+18h] [rbp-C0h] BYREF
  void *v15[2]; // [rsp+58h] [rbp-80h]
  __int64 v16; // [rsp+68h] [rbp-70h]
  _QWORD *v17; // [rsp+70h] [rbp-68h]
  unsigned __int64 v18; // [rsp+78h] [rbp-60h]
  int v19; // [rsp+80h] [rbp-58h]
  __int64 v20; // [rsp+88h] [rbp-50h] BYREF
  __m128i si128; // [rsp+90h] [rbp-48h]
  __int64 v22; // [rsp+A0h] [rbp-38h]

  if ( !a2 )
    return 0;
  v3 = a3;
  if ( !a3 )
    return 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v4 )
      break;
    v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( (unsigned int)sub_E90000(v3) )
    return 0;
  if ( (*(_BYTE *)(v3 + 8) & 6) == 0 )
    v4 = *(_QWORD *)(v3 + 16);
  v17 = a1;
  *(_OWORD *)v15 = 0;
  ptr = v14;
  v13 = 0x800000000LL;
  v11 = 0;
  v16 = 0;
  v18 = v4;
  v19 = 0;
  sub_B85890(&v20, v4);
  v22 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8C0);
  sub_1A395A0(&v11);
  sub_1A49A10(a1, &v11, a2, 0, 0);
  if ( (_DWORD)v11 != 2 )
    goto LABEL_10;
  v8 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v10 = *(_BYTE *)(v8 + 28) & 0x7F;
  if ( (unsigned int)v10 - 53 <= 1 || ((v10 + 52) & 0x7Fu) <= 1 )
    v8 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
  if ( !(unsigned __int8)sub_169D3F0((__int64)a1, v8, nullptr, v5, v6, v7) )
LABEL_10:
    v8 = 0;
  if ( BYTE3(v22) )
  {
    if ( (_DWORD)v11 == 5 )
    {
      if ( !BYTE4(v22) )
        goto LABEL_17;
      goto LABEL_29;
    }
    if ( !v15[1] || (*(_BYTE *)(v17[29] + 46LL) & 0x20) == 0 )
      goto LABEL_17;
    sub_1663B80(v17, (__int64)&v11);
  }
  if ( !BYTE4(v22) || (_DWORD)v11 != 5 )
    goto LABEL_17;
LABEL_29:
  sub_1A445B0(v17, &v11);
LABEL_17:
  if ( v15[0] )
    sub_1A39780(v15[0]);
  if ( ptr != v14 )
    free(ptr);
  return v8;
}
