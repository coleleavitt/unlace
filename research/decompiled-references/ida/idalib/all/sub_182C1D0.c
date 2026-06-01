void __fastcall sub_182C1D0(__int64 *a1, __int64 a2, const __m128i *a3, double a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r12
  __m128i *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // [rsp+Ch] [rbp-DCh] BYREF
  int v18; // [rsp+10h] [rbp-D8h] BYREF
  int v19; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v20; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v21[200]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = a1[29];
  if ( (*(_BYTE *)(v5 + 1) & 8) == 0 )
  {
    sub_168B9F0((__int64)v21, a1 + 1, a3[1].m128i_u32[2], 0x7Fu, 0);
    sub_15DD120((__int64)v21, (__int64)a3);
    sub_15F7200(v21);
    return;
  }
  if ( (*(_BYTE *)(v5 + 89) & 1) != 0 )
  {
    sub_168B9F0((__int64)v21, a1 + 1, a3[1].m128i_u32[2], 0xF3Bu, 0);
    sub_15F7200(v21);
    return;
  }
  if ( sub_15F16E0((__int64)a1) )
    goto LABEL_4;
  v6 = *(_QWORD *)(a2 + 48);
  if ( sub_A72040((_QWORD *)a1[31], v6) )
    v6 = sub_A71450(a1[31], v6);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
  {
LABEL_4:
    sub_168B9F0((__int64)v21, a1 + 1, a3[1].m128i_u32[2], 0xF9Au, 0);
    sub_15F7200(v21);
    a3[3].m128i_i8[10] |= 1u;
    return;
  }
  v7 = a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( !(unsigned __int8)sub_16211A0(a1, a3, v7, &v17, 0xFFFFFFFFLL, 0) )
    goto LABEL_16;
  if ( v17 > 0xFFFF )
  {
    sub_168B9F0((__int64)v21, a1 + 1, a3[1].m128i_u32[2], 0xC56u, 0);
    v20 = sub_EEC8C0(v7, (__int64)(a1 + 1), a4);
    v13 = sub_1587DB0((__int64)v21, &v20);
    v14 = sub_15DD120(v13, (__int64)a3);
    v18 = 0;
    v15 = sub_1587D10(v14, &v18);
    v19 = 0xFFFF;
    sub_1587D10(v15, &v19);
    sub_15F7200(v21);
LABEL_16:
    a3[3].m128i_i8[10] |= 1u;
    return;
  }
  if ( v17 <= 0x64 )
  {
    sub_168B9F0((__int64)v21, a1 + 1, a3[1].m128i_u32[2], 0x1B86u, 0);
    v20 = sub_EEC8C0(v7, (__int64)(a1 + 1), a4);
    v16 = sub_1587DB0((__int64)v21, &v20);
    sub_1588370(v16, &v17);
    sub_15F7200(v21);
  }
  v8 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 48, 3u);
  sub_B13D10(v8, a1[31], a3, v17);
  sub_B8CC60(a2, (__int64)v8, v9, v10, v11, v12);
}
