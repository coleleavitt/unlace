__int64 __fastcall sub_1533400(const __m128i *a1, unsigned int a2, __m128i a3)
{
  __int64 v4; // rbx
  char v5; // dl
  __int64 v6; // r14
  bool v7; // r12
  __int64 v8; // rdi
  char v9; // r12
  __int64 v10; // r15
  bool v11; // r13
  __int64 v12; // rdi
  char v13; // r13
  __int64 v14; // rbp
  char v15; // al
  char v16; // al
  char v17; // al
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  bool v23; // [rsp+Bh] [rbp-ADh]
  __int64 v24; // [rsp+18h] [rbp-A0h]
  __int64 v25; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int8 *v26[17]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a1[16].m128i_i64[1];
  v23 = 0;
  if ( v4 )
  {
    v5 = *(_BYTE *)(v4 + 3);
    *(_BYTE *)(v4 + 3) = v5 & 0xDF;
    v23 = (v5 & 0x20) != 0;
    sub_145BE00(v4);
  }
  v6 = a1[17].m128i_i64[0];
  v7 = 0;
  if ( v6 )
  {
    v8 = a1[17].m128i_i64[0];
    v9 = *(_BYTE *)(v6 + 3);
    *(_BYTE *)(v6 + 3) = v9 & 0xDF;
    v7 = (v9 & 0x20) != 0;
    sub_145BE00(v8);
  }
  v10 = a1[17].m128i_i64[1];
  v11 = 0;
  if ( v10 )
  {
    v12 = a1[17].m128i_i64[1];
    v13 = *(_BYTE *)(v10 + 3);
    *(_BYTE *)(v10 + 3) = v13 & 0xDF;
    v11 = (v13 & 0x20) != 0;
    sub_145BE00(v12);
  }
  if ( (unsigned __int8)sub_1569A00(a1, 22, 14, &byte_22F0C30, 0) )
  {
    v14 = 1;
    goto LABEL_9;
  }
  sub_146B5E0(&v25, (__int64)a1, 0x100018u, 1, 0);
  if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 4) != 0 )
  {
    v19 = a1[18].m128i_i64[0];
    *(_BYTE *)(v19 + 3) &= ~0x20u;
    sub_145BE00(v19);
    v20 = a1[18].m128i_i64[1];
    *(_BYTE *)(v20 + 3) &= ~0x20u;
    sub_145BE00(v20);
    v21 = a1[19].m128i_i64[0];
    *(_BYTE *)(v21 + 3) &= ~0x20u;
    sub_145BE00(v21);
  }
  *(double *)a3.m128i_i64 = sub_1565030(
                              v26,
                              a1,
                              *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 608) + 8LL) | 0x200000u,
                              1);
  v24 = sub_14BFC10(a1, 0, a3);
  sub_1565080(v26);
  if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 4) != 0 )
  {
    *(_BYTE *)(a1[18].m128i_i64[0] + 3) |= 0xA0u;
    *(_BYTE *)(a1[18].m128i_i64[1] + 3) |= 0xA0u;
    *(_BYTE *)(a1[19].m128i_i64[0] + 3) |= 0xA0u;
  }
  if ( v24 == 1 || (unsigned __int8)sub_1569A00(a1, 23, 14, &byte_22F0C30, 0) )
    goto LABEL_27;
  if ( a1[2].m128i_i16[0] != 24 )
  {
    sub_1564840(v26, a1, &a1[1], 14);
    v14 = 1;
    sub_AE9DF0(v26, 24, 4u);
    sub_AEA040((__int64)v26);
    goto LABEL_28;
  }
  v22 = sub_1533380((__int64)a1, 0, 0x400008u);
  if ( v22 == 1 )
  {
LABEL_27:
    v14 = 1;
    goto LABEL_28;
  }
  v14 = sub_1C3AFE0(a1[6].m128i_i64[0], a2, v24 & 0xFFFFFFFFFFFFFFFELL, v22 & 0xFFFFFFFFFFFFFFFELL);
LABEL_28:
  if ( v25 )
    sub_1564F70(v25);
LABEL_9:
  if ( v10 )
  {
    v15 = (32 * v11) | *(_BYTE *)(v10 + 3) & 0xDF;
    *(_BYTE *)(v10 + 3) = v15;
    if ( v11 )
      *(_BYTE *)(v10 + 3) = v15 | 0x80;
    else
      sub_145BE00(v10);
  }
  if ( v6 )
  {
    v16 = (32 * v7) | *(_BYTE *)(v6 + 3) & 0xDF;
    *(_BYTE *)(v6 + 3) = v16;
    if ( v7 )
      *(_BYTE *)(v6 + 3) = v16 | 0x80;
    else
      sub_145BE00(v6);
  }
  if ( v4 )
  {
    v17 = (32 * v23) | *(_BYTE *)(v4 + 3) & 0xDF;
    *(_BYTE *)(v4 + 3) = v17;
    if ( v23 )
      *(_BYTE *)(v4 + 3) = v17 | 0x80;
    else
      sub_145BE00(v4);
  }
  return v14;
}
