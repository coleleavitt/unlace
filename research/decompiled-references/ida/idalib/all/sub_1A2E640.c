__int64 __fastcall sub_1A2E640(__int64 a1, __m128i *a2, __int64 a3)
{
  char v5; // al
  unsigned int v6; // r13d
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 m128i_i64; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 (__fastcall **v23)(); // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+28h] [rbp-40h]

  v5 = *(_BYTE *)(a3 + 24);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_QWORD *)(a3 + 16);
  if ( (v5 & 8) != 0 )
    goto LABEL_10;
  if ( (v5 & 3) == 3 )
    goto LABEL_10;
  v8 = *(_QWORD *)a3;
  if ( !v8 )
    goto LABEL_10;
  v9 = *(_BYTE *)(v8 + 28) & 0x7F;
  if ( (unsigned int)v9 - 40 > 6 || v9 == 43 || (*(_BYTE *)(v8 + 98) & 1) == 0 )
    goto LABEL_10;
  v10 = *(_QWORD *)(v8 + 56);
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v10 & 4) != 0 )
    v11 = *(_QWORD *)(v11 + 32);
  if ( !v11 )
LABEL_10:
    v11 = (__int64)sub_A81910(*(_QWORD **)(a1 + 248), v7, v6);
  m128i_i64 = 0;
  if ( a2 )
    m128i_i64 = (__int64)a2[4].m128i_i64;
  v13 = sub_B7BC50(*(_QWORD *)(a1 + 248), m128i_i64, v6, v6, 0, v7, v11, 0, 0, 0);
  v17 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  v18 = v13;
  if ( (*(_BYTE *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    v24 = 3813;
    v23 = off_2BC6A30;
    if ( (unsigned __int8)sub_1E63C20(a1, v6, v7, 0, &v23)
      || (sub_F62670(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), (__int64 *)&v23, v20, v21, v22, v7 & 0xFFFFFFFFFFFFFFF0LL),
          v23)
      && *((char *)v23 + 28) < 0 )
    {
      sub_B88650((__int64)a2, 1);
      sub_B88650(v18, 1);
    }
  }
  *(_BYTE *)(v18 + 29) = *(_BYTE *)(v18 + 29) & 0x9D | 0x42;
  sub_B94AD0(a2 + 4, v18, v14, v15, v16, v17);
  if ( (*(_BYTE *)(a3 + 24) & 3) == 3 )
    sub_B782E0(v18, *(_QWORD *)a3);
  return v18;
}
