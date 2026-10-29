__int64 __fastcall sub_1565350(__int64 a1, unsigned __int8 a2, __m128i a3, __m128 a4)
{
  __int16 v5; // ax
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  _BOOL8 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-80h]
  int v13; // [rsp+10h] [rbp-78h] BYREF
  __int64 v14; // [rsp+14h] [rbp-74h] BYREF
  char v15; // [rsp+1Ch] [rbp-6Ch]
  unsigned __int8 *v16[13]; // [rsp+20h] [rbp-68h] BYREF

  v5 = *(_WORD *)(a1 + 32);
  if ( (unsigned __int16)(v5 - 14) > 1u && (unsigned __int16)(v5 - 17) > 2u )
  {
    if ( a2 )
    {
      sub_FC70B0((__int64)v16, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1546);
      v6 = 1;
      goto LABEL_7;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0 || v5 != 22 )
    {
      sub_FC70B0((__int64)v16, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1546);
      v6 = ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >> 4) ^ 1) & 1;
LABEL_7:
      sub_AE9DF0(v16, v6, 2u);
      sub_AEA040((__int64)v16);
      return sub_1C543A0(*(_QWORD *)(a1 + 96), 0, a2);
    }
    v10 = *(_QWORD *)(a1 + 96);
    v13 = 0;
    LODWORD(v14) = 0;
    v16[0] = nullptr;
    sub_18C74E0(v10, 4, 0, 4);
    v11 = sub_14C2860(a1, &v13, 1, 1, 2, (__int64 *)v16, a3, a4, (unsigned int *)&v14);
    if ( v11 == 1 || (v12 = sub_19146D0(*(_QWORD *)(a1 + 96), v11), v12 == 1) )
    {
      sub_190D5E0(v10);
      return 1;
    }
    sub_190D5E0(v10);
    v8 = v12 & 0xFFFFFFFFFFFFFFFELL;
    return sub_1C543A0(*(_QWORD *)(a1 + 96), v8, a2);
  }
  result = sub_14B6F80(a1, 0);
  if ( result != 1 )
  {
    v8 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_BYTE *)((result & 0xFFFFFFFFFFFFFFFELL) + 2) & 0x38) != 0 )
    {
      sub_FC70B0((__int64)v16, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1547);
      v9 = ((*(_BYTE *)(v8 + 2) >> 3) & 7) == 1;
      sub_AE9DF0(v16, v9, 2u);
      v15 = 1;
      v14 = sub_EEC8C0(v8, v9, *(double *)a3.m128i_i64);
      sub_AEC610((__int64 *)v16, &v14);
      sub_AEA040((__int64)v16);
      return 1;
    }
    return sub_1C543A0(*(_QWORD *)(a1 + 96), v8, a2);
  }
  return result;
}
