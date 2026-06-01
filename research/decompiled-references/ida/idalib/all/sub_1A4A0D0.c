void __fastcall sub_1A4A0D0(__int64 a1, __int64 *a2, int a3, double a4, double a5)
{
  __int64 v5; // r13
  size_t v6; // rax
  __int64 v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD *v16; // [rsp+8h] [rbp-D0h]
  __int64 v17; // [rsp+10h] [rbp-C8h]
  _OWORD v18[5]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-70h]
  __int64 v20; // [rsp+70h] [rbp-68h]
  __int64 v21; // [rsp+78h] [rbp-60h]
  int v22; // [rsp+80h] [rbp-58h]
  __int64 v23; // [rsp+88h] [rbp-50h] BYREF
  __m128i v24; // [rsp+90h] [rbp-48h]
  __int64 v25; // [rsp+A0h] [rbp-38h]

  if ( a3 == 1032 )
  {
    v5 = *(_QWORD *)(a1 + 248);
    v6 = j__strlen("objc_super");
    v7 = sub_6F3470(*(_QWORD *)(v5 + 17504), "objc_super", v6);
    v16 = v18;
    v17 = 0x800000000LL;
    v18[4] = 0;
    v21 = v7;
    v15 = 0;
    v19 = 0;
    v20 = a1;
    v22 = 0;
    sub_B85890(&v23, v7);
    si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    v25 = 0x101010000LL;
    v24 = si128;
    sub_1A395A0((__int64)&v15);
    sub_1A49A10(a1, (__int64)&v15, a2, 0, 0, v9, *(double *)si128.m128i_i64, a5);
    if ( (_DWORD)v15 == 2 )
    {
      v11 = sub_16C47B0(*v16 & 0xFFFFFFFFFFFFFFF8LL);
      v14 = (*(_BYTE *)(v11 + 28) & 0x7Fu) - 58;
      if ( (unsigned int)v14 <= 4 )
        *(_QWORD *)(v5 + 1624) = sub_A7AC20(v5, v11, v14, v10, v12, v13);
    }
    sub_169D230((__int64)&v15);
  }
}
