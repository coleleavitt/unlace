unsigned __int64 __fastcall sub_2106B00(__int64 a1, char a2, _BYTE *a3, __int64 a4, __int16 a5)
{
  int v5; // r12d
  __int64 *v6; // r14
  char v7; // dl
  char v8; // r15
  unsigned __int64 v9; // r15
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  void *v14[2]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v15[16]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v16; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-48h]

  v5 = a4;
  v14[0] = v15;
  sub_2100260(v14, a3, (__int64)&a3[a4]);
  v16.m128i_i64[0] = (__int64)v17;
  sub_2100320(&v16, (_BYTE *)v14[0], (__int64)v14[0] + (unsigned __int64)v14[1]);
  v18 = 0;
  v6 = sub_21063E0((_QWORD *)(a1 + 2048), &v16);
  v8 = v7;
  if ( (_BYTE *)v16.m128i_i64[0] != v17 )
    operator delete((void *)v16.m128i_i64[0]);
  if ( v8 )
  {
    v11 = v6[4];
    v9 = sub_2105F40((__int64 *)(a1 + 768), 200, 3u);
    sub_2113B00(v9, 2, v11, v5, (unsigned __int8)(a2 - 2) <= 1u, 1, 0);
    *(_QWORD *)(v9 + 176) = 0;
    *(_QWORD *)v9 = off_2C730A0;
    *(_WORD *)(v9 + 184) = a5;
    *(_BYTE *)(v9 + 197) = ((unsigned __int8)(a2 - 15) <= 2u) | *(_BYTE *)(v9 + 197) & 0xFE;
    *(_WORD *)(v9 + 196) &= 0xF900u;
    v6[8] = v9;
    v12 = sub_2105F80(a1);
    *(_QWORD *)(v12 + 8) = v9;
    **(_QWORD **)(v9 + 8) = v12;
    *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL) = v12;
  }
  else
  {
    v9 = v6[8];
  }
  if ( v14[0] != v15 )
    operator delete(v14[0]);
  return v9;
}
