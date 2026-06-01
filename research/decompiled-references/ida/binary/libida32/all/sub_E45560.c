__int64 __fastcall sub_E45560(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  size_t v3; // rax
  __int64 v4; // rax
  size_t v5; // rax
  __int64 v6; // rbp
  size_t v7; // rax
  size_t v8; // rax
  __int64 v10; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+8h] [rbp-80h]
  int v12; // [rsp+10h] [rbp-78h]
  __int16 v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+30h] [rbp-58h]
  int v16; // [rsp+38h] [rbp-50h]

  v2 = *(_WORD *)(a2 + 20);
  v13 = 3;
  v14 = v2 & 0x7FFF;
  v3 = j__strlen("depth");
  sub_2206E30(a1 + 1048, "depth", v3);
  sub_2208D80(a1 + 1048, &v13);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v13);
  v4 = *(unsigned __int16 *)(a2 + 22);
  v13 = 3;
  v14 = v4;
  v5 = j__strlen("index");
  sub_2206E30(a1 + 1048, "index", v5);
  sub_2208D80(a1 + 1048, &v13);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v13);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = j__strlen("isPack");
  sub_E35E50(a1, (__int64)"isPack", v7, BYTE5(v6) >> 7);
  sub_E43670((__int64)&v10, a1, *(_QWORD *)(a2 + 32));
  v13 = 7;
  v14 = v10;
  v10 = 0;
  v15 = v11;
  v11 = 0;
  v16 = v12;
  v12 = 0;
  v8 = j__strlen("decl");
  sub_2206E30(a1 + 1048, "decl", v8);
  sub_2208D80(a1 + 1048, &v13);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v13);
  return sub_E395A0(&v10);
}

