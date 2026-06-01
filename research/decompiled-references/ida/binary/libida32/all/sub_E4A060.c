__int64 __fastcall sub_E4A060(__int64 a1, __int64 a2)
{
  char v2; // bl
  size_t v3; // rax
  char v4; // bl
  size_t v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // rax
  __int64 v10; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+8h] [rbp-70h]
  int v12; // [rsp+10h] [rbp-68h]
  __int16 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+38h] [rbp-40h]

  sub_E374F0(a1, a2);
  v2 = *(_BYTE *)(a2 + 57);
  v3 = j__strlen("isInline");
  sub_E35E50(a1, (__int64)"isInline", v3, (v2 & 0x20) != 0);
  v4 = *(_BYTE *)(a2 + 57);
  v5 = j__strlen("isNested");
  sub_E35E50(a1, (__int64)"isNested", v5, (v4 & 0x40) != 0);
  result = *(_QWORD *)(a2 + 80) | (*(__int64 *)(a2 + 80) >> 1);
  if ( (result & 1) == 0 )
  {
    sub_E43670((__int64)&v10, a1, *(_QWORD *)(a2 + 88));
    v13 = 7;
    v7 = v10;
    v10 = 0;
    v14 = v7;
    v8 = v11;
    v11 = 0;
    v15 = v8;
    LODWORD(v8) = v12;
    v12 = 0;
    v16 = v8;
    v9 = j__strlen("originalNamespace");
    sub_2206E30(a1 + 1048, "originalNamespace", v9);
    sub_2208D80(a1 + 1048, &v13);
    sub_2205EB0(a1 + 1048);
    sub_2207560(&v13);
    return sub_E395A0(&v10);
  }
  return result;
}

