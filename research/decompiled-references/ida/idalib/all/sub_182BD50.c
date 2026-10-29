void __fastcall sub_182BD50(__int64 *a1, __int64 a2, const __m128i *a3, double a4)
{
  _WORD *v5; // r13
  int v6; // eax
  __m128i *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+8h] [rbp-E0h] BYREF
  _BYTE v13[8]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-D0h]
  unsigned int v15; // [rsp+24h] [rbp-C4h]
  _BYTE v16[184]; // [rsp+30h] [rbp-B8h] BYREF

  if ( (unsigned __int8)sub_182B6A0(a1, a2, (__int64)a3, (__int64)v13, a4) )
  {
    v5 = (_WORD *)sub_BFBAE0(a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*v5 & 0x1FF) == 9 )
    {
      v6 = sub_16CA550(*(_QWORD *)(v14 + 16) + 16LL, **(unsigned int **)(v14 + 16));
      if ( (unsigned __int8)sub_16DFE40((__int64)a1, v6, (unsigned __int64)v5, a4) )
      {
        v7 = sub_18088B0((__int64)a1, a2, a3, v14, v15, (unsigned __int64)v5, a4);
        if ( v7 )
          sub_B8CC60(a2, (__int64)v7, v8, v9, v10, v11);
      }
    }
    else
    {
      sub_168B9F0((__int64)v16, a1 + 1, a3[1].m128i_u32[2], 0xF03u, 0);
      v12 = sub_EEC8C0((unsigned __int64)v5, (__int64)(a1 + 1), a4);
      sub_1587DB0((__int64)v16, &v12);
      sub_15F7200(v16);
    }
  }
}
