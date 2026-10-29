void __fastcall sub_1A08870(__int64 *a1, __int64 a2, const __m128i *a3)
{
  _BYTE *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  char v12; // al
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  __int64 *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rax
  __m128i *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  __int32 v34; // [rsp+Ch] [rbp-CCh] BYREF
  __int32 v35; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v36; // [rsp+14h] [rbp-C4h] BYREF
  __int64 v37; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v38[184]; // [rsp+20h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 )
  {
    v6 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)v6 + 8LL) & 0x7F) != 0x19 )
        goto LABEL_4;
    }
    else if ( (v6[8] & 0x7F) != 0x19 )
    {
      goto LABEL_4;
    }
    if ( !(unsigned __int8)sub_16211A0(*a1, a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v34, 0xFFFFFFFFLL, 0)
      || !(unsigned __int8)sub_16211A0(*a1, a3, a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL, &v35, 0xFFFFFFFFLL, 0) )
    {
      return;
    }
    v11 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    v12 = v11 | *(_QWORD *)(a2 + 48);
    v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    v14 = v13 | v12 & 7;
    v15 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u
      || sub_F612F0(v16, (__int64)a3, v13, v8, v9, v10) )
    {
      if ( !v35 )
        goto LABEL_14;
      v33 = sub_168B6C0((__int64)a1);
      sub_A97D20(v33, *v15);
    }
    else
    {
      if ( !v35 )
        goto LABEL_14;
      v24 = sub_168B6C0((__int64)a1);
      v25 = *v15;
      v26 = sub_A97D20(v24, *v15);
      if ( v26 <= 0x80 && v26 + 32 * v35 <= 0x80 )
      {
        v37 = v14;
        v28 = *v15;
        v29 = (unsigned int)*(unsigned __int8 *)(*v15 + 16) - 57;
        if ( (unsigned int)v29 <= 1 || (v28 = sub_19F5590(v28, v25, v29, v27)) != 0 )
          v37 = *(_QWORD *)(v28 + 32);
        v30 = sub_168B6C0((__int64)a1);
        sub_A97D20(v30, *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL));
        v36 = v31;
        if ( v31 > 0x20 && v35 == 1 )
        {
          sub_168B9F0((__int64)v38, a1, a3[1].m128i_u32[2], 0xF44u, 0);
          v32 = sub_1588370((__int64)v38, &v36);
          sub_1605D30(v32, &v37);
          sub_15F7200(v38);
          return;
        }
LABEL_14:
        v17 = sub_168B6C0((__int64)a1);
        v18 = sub_168B6C0((__int64)a1);
        v19 = (__m128i *)sub_19F7E40((__int64 *)(v18 + 2352), 48, 3u);
        sub_B134F0(v19, v17, a3, v34, v35);
        sub_B8CC60(a2, (__int64)v19, v20, v21, v22, v23);
        return;
      }
    }
    sub_168B9F0((__int64)v38, a1, a3[1].m128i_u32[2], 0xF45u, 0);
    sub_15F7200(v38);
    return;
  }
LABEL_4:
  sub_168B9F0((__int64)v38, a1, a3[1].m128i_u32[2], 0xF2Au, 0);
  v7 = sub_15DD120((__int64)v38, (__int64)a3);
  if ( *(_BYTE *)(v7 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v7 + 32), (__int64)"shader constant in a constant buffer", 1u);
  }
  else if ( *(_BYTE *)(v7 + 132) )
  {
    sub_19FC8D0(v7, (__int64)"shader constant in a constant buffer");
  }
  sub_15F7200(v38);
}
