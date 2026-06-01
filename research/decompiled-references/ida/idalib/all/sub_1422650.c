void __fastcall sub_1422650(__int64 *a1, __m128i a2, double a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // rax
  int v9; // r12d
  unsigned __int64 v10; // rdx
  char v11; // al
  int v12; // [rsp+0h] [rbp-88h] BYREF
  __int64 v13; // [rsp+8h] [rbp-80h]
  __int16 v14; // [rsp+10h] [rbp-78h]
  unsigned __int8 *v15[13]; // [rsp+20h] [rbp-68h] BYREF

  sub_141B710((__int64)a1, (__int64)&v12, 2, nullptr, a2, a3);
  if ( v14 != 2 )
  {
    sub_1421C50((__int64)a1, (__int64)"__private_macro", 0);
    if ( (unsigned __int16)(v14 - 7) <= 0xCu || v14 == 1 )
      BUG();
    v3 = v13;
    if ( (*(_BYTE *)(v13 + 3) & 2) != 0 && (v4 = (__int64 *)sub_1445160(a1, v13)) != nullptr && (sub_13F1C60(v4), !v7) )
    {
      v8 = a1[16];
      v9 = v12;
      a1[26] += 16;
      v10 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( a1[17] >= v10 + 16 && v8 )
        a1[16] = v10 + 16;
      else
        v10 = sub_986170((__int64)(a1 + 16), 16, 16, 4, v5, v6);
      v11 = *(_BYTE *)(v10 + 12);
      *(_DWORD *)(v10 + 8) = v9;
      *(_QWORD *)v10 = 0;
      *(_BYTE *)(v10 + 12) = v11 & 0xF0 | 2;
      sub_144BC70(a1, v3);
    }
    else
    {
      sub_FC70B0((__int64)v15, a1[6], v12, 1180);
      sub_AE9DF0(v15, v3, 5u);
      sub_AEA040((__int64)v15);
    }
  }
}
