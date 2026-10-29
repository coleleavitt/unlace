void __fastcall sub_181A110(__int64 a1, __int64 a2, const __m128i *a3, __m128 a4)
{
  __int8 v5; // al
  __int64 v6; // rdx
  unsigned int v7; // edx
  _DWORD *v8; // r13
  _QWORD *v9; // r13
  unsigned int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __m128i *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v19[23]; // [rsp+10h] [rbp-B8h] BYREF

  v5 = a3[3].m128i_i8[10];
  v6 = a3[3].m128i_u16[4];
  if ( (v5 & 0x20) != 0 )
  {
    sub_1E5F010(a3[5].m128i_i64[13 * ((v5 & 4) != 0) + 2 * ((v5 & 8) != 0) + v6], &v18);
    v7 = a3[3].m128i_u32[1];
    if ( v7 )
    {
      v11 = v18;
      if ( (*(_BYTE *)(*(_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
        goto LABEL_16;
    }
    else
    {
      v9 = v18;
      v19[0] = *v18;
      v19[1] = (__int64)(v18 + 1);
      v10 = sub_F6CCB0(v19, a4);
      if ( (unsigned __int8)sub_1E535C0(a1, v10, v9, 0) )
        return;
      v11 = v18;
      v7 = a3[3].m128i_u32[1];
    }
    sub_1819650(a1, a2, a3, v11, v7 != 0, a4);
    return;
  }
  if ( (unsigned int)v6 > 1 )
  {
    sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCAAu, 0);
    v12 = sub_15DD120((__int64)v19, (__int64)a3);
    LODWORD(v18) = 1;
    sub_1587D10(v12, (int *)&v18);
    sub_15F7200(v19);
    return;
  }
  if ( !(_DWORD)v6 )
  {
    v13 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
    sub_B08AB0(v13, *(_QWORD *)(a1 + 248), a3, 1, 0);
    sub_B8CC60(a2, (__int64)v13, v14, v15, v16, v17);
    return;
  }
  v7 = a3[3].m128i_u32[1];
  v8 = (_DWORD *)(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
  if ( v7 )
  {
    if ( (*v8 & 0x4000) != 0 )
    {
LABEL_6:
      sub_18199B0(a1, a2, a3, v8, v7 != 0, *(double *)a4.m128_u64);
      return;
    }
LABEL_16:
    sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), v7, 0x12ACu, 0);
    sub_15F7200(v19);
    return;
  }
  if ( !(unsigned __int8)sub_1E534E0(a1, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, 0) )
  {
    v7 = a3[3].m128i_u32[1];
    goto LABEL_6;
  }
}
