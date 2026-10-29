unsigned __int64 __fastcall sub_1A49F80(__int64 a1, _BYTE *a2, size_t a3, double a4, double a5)
{
  __int64 v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  size_t v15; // rax
  __int64 v17; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD *v18; // [rsp+8h] [rbp-D0h]
  __int64 v19; // [rsp+10h] [rbp-C8h]
  _OWORD v20[5]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-70h]
  __int64 v22; // [rsp+70h] [rbp-68h]
  __int64 v23; // [rsp+78h] [rbp-60h]
  int v24; // [rsp+80h] [rbp-58h]
  __int64 v25; // [rsp+88h] [rbp-50h] BYREF
  __m128i v26; // [rsp+90h] [rbp-48h]
  __int64 v27; // [rsp+A0h] [rbp-38h]

  v6 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), a2, a3);
  v18 = v20;
  v19 = 0x800000000LL;
  v20[4] = 0;
  v23 = v6;
  v17 = 0;
  v21 = 0;
  v22 = a1;
  v24 = 0;
  sub_B85890(&v25, v6);
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v27 = 0x101010000LL;
  v26 = si128;
  sub_1A395A0((__int64)&v17);
  sub_1A49A10(a1, (__int64)&v17, *(__int64 **)(a1 + 192), 0, 0, v8, *(double *)si128.m128i_i64, a5);
  if ( (_DWORD)v19
    && (_DWORD)v17 == 2
    && (v9 = sub_16C47B0(*v18 & 0xFFFFFFFFFFFFFFF8LL), v13 = *(_BYTE *)(v9 + 28) & 0x7F, (_BYTE)v13 == 62) )
  {
    v14 = sub_A7A930(*(_QWORD *)(a1 + 248), v9, v13, v10, v11, v12);
  }
  else
  {
    v15 = j__strlen("enum");
    v14 = sub_1A41570(a1, "enum", v15, a2, a3);
  }
  sub_169D230((__int64)&v17);
  return v14;
}
