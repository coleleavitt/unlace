__int64 __fastcall sub_14F6480(__int64 a1, unsigned int a2, __m128i a3)
{
  __int64 v3; // rbp
  unsigned __int8 v5; // dl
  const char *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v15[15]; // [rsp+10h] [rbp-78h] BYREF

  v3 = a1 + 16;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) != 22 )
  {
    sub_1564840(v15, a1, v3, 1625);
    v5 = 1;
    v6 = "@synchronized";
    goto LABEL_3;
  }
  sub_146A990(a1);
  v8 = sub_14BFC10((const __m128i *)a1, 0, a3);
  v9 = v8;
  if ( *(_WORD *)(a1 + 32) == 23 )
  {
    sub_146A990(a1);
  }
  else
  {
    if ( v8 != 1 )
    {
      sub_1564840(v15, a1, v3, 14);
      sub_AE9DF0(v15, 23, 4u);
      sub_AEA040((__int64)v15);
    }
    LOWORD(v15[0]) = 24;
    sub_15680D0(a1, v15, 1, 3);
  }
  if ( *(_WORD *)(a1 + 32) != 24 )
  {
    if ( v9 == 1 )
      return 1;
    sub_1564840(v15, a1, v3, 14);
    v5 = 4;
    v6 = (const char *)&qword_18;
LABEL_3:
    sub_AE9DF0(v15, (__int64)v6, v5);
    sub_AEA040((__int64)v15);
    return 1;
  }
  if ( v9 == 1 )
  {
    sub_146B5E0((__int64 *)v15, a1, 0x400008u, 1, 0);
    sub_153CA60(a1, 0);
    if ( v15[0] )
      sub_1564F70(v15[0]);
    return 1;
  }
  v10 = sub_1A89000(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, v9 & 0xFFFFFFFFFFFFFFFELL);
  sub_146B5E0((__int64 *)v15, a1, 0x400008u, 1, 0);
  v11 = sub_153CA60(a1, 0);
  if ( v15[0] )
  {
    sub_1564F70(v15[0]);
    v15[0] = nullptr;
    if ( v10 == 1 )
      return 1;
  }
  else if ( v10 == 1 )
  {
    return 1;
  }
  v12 = *(_QWORD *)(a1 + 96);
  if ( v11 == 1 )
  {
    v13 = sub_1C36210(v12, *(unsigned int *)(a1 + 16), 0);
    v12 = *(_QWORD *)(a1 + 96);
    v11 = v13;
  }
  result = sub_1A861A0(*(_QWORD *)(v12 + 736), a2, v10 & 0xFFFFFFFFFFFFFFFELL, v11 & 0xFFFFFFFFFFFFFFFELL);
  if ( v15[0] )
  {
    v14 = result;
    sub_1564F70(v15[0]);
    return v14;
  }
  return result;
}
