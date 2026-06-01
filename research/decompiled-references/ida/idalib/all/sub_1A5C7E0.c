__int64 __fastcall sub_1A5C7E0(__int64 *a1, __int64 a2, int a3, int a4, double a5, double a6)
{
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v12; // rbp
  __m128i si128; // xmm0
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD *v20; // [rsp+8h] [rbp-D0h]
  __int64 v21; // [rsp+10h] [rbp-C8h]
  _OWORD v22[5]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-70h]
  __int64 *v24; // [rsp+70h] [rbp-68h]
  __int64 v25; // [rsp+78h] [rbp-60h]
  int v26; // [rsp+80h] [rbp-58h]
  __int64 v27; // [rsp+88h] [rbp-50h] BYREF
  __m128i v28; // [rsp+90h] [rbp-48h]
  __int64 v29; // [rsp+A0h] [rbp-38h]

  if ( a4 )
  {
    v8 = sub_B795B0(a1[31], a1[68], a3, a2, a4);
    sub_17B7670((__int64)a1, v8, a1[76], 1, v9, v10);
    return v8;
  }
  v12 = (__int64 *)a1[76];
  v24 = a1;
  v25 = a2;
  v20 = v22;
  v26 = a3;
  v21 = 0x800000000LL;
  v22[4] = 0;
  v19 = 0;
  v23 = 0;
  sub_B85890(&v27, a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DA0);
  v29 = 0x101010000LL;
  v28 = si128;
  sub_1A395A0((__int64)&v19);
  sub_1A49A10((__int64)a1, (__int64)&v19, v12, 0, 0, v14, *(double *)si128.m128i_i64, a6);
  if ( (_DWORD)v19 != 2 )
  {
    sub_169D230((__int64)&v19);
    v16 = a1[68];
LABEL_9:
    v8 = sub_B79540(a1[31], v16, a3, a2);
    sub_17B7670((__int64)a1, v8, *(_QWORD *)(a1[76] + 24), 1, v17, v18);
    return v8;
  }
  v8 = sub_16C47B0(*v20 & 0xFFFFFFFFFFFFFFF8LL);
  sub_169D230((__int64)&v19);
  if ( !v8 )
  {
    v16 = a1[68];
    goto LABEL_9;
  }
  v15 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    v15 = (_QWORD *)*v15;
  v16 = a1[68];
  if ( (_QWORD *)v16 != v15 )
    goto LABEL_9;
  return v8;
}
