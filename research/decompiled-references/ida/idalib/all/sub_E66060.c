char __fastcall sub_E66060(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  char v8; // r15
  size_t v9; // rax
  char result; // al
  const char *v11; // rsi
  size_t v12; // rax
  __int16 *v13; // [rsp+0h] [rbp-88h] BYREF
  __int64 v14; // [rsp+8h] [rbp-80h]
  int v15; // [rsp+10h] [rbp-78h]
  __int16 v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+38h] [rbp-50h]

  v2 = a1 + 1048;
  sub_E5B230(a1, a2);
  v3 = *(_QWORD *)(a2 + 80);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  sub_E63A60((__int64)&v13, a1, v4, 1);
  v16 = 7;
  v5 = (__int64)v13;
  v13 = nullptr;
  v17 = v5;
  v6 = v14;
  v14 = 0;
  v18 = v6;
  LODWORD(v6) = v15;
  v15 = 0;
  v19 = v6;
  v7 = j__strlen("type");
  sub_222AB70(v2, "type", v7);
  sub_222CAC0(v2, &v16);
  sub_2229BF0(v2);
  sub_222B2A0(&v16);
  sub_E5D2E0((__int64 *)&v13);
  v8 = *(_DWORD *)(a2 + 96) != 0;
  v9 = j__strlen("bounded");
  sub_E59B90(a1, (__int64)"bounded", v9, v8);
  result = *(_BYTE *)(a2 + 89) >> 6;
  if ( result == 1 )
  {
    v11 = "covariant";
  }
  else
  {
    if ( result != 2 )
      return result;
    v11 = "contravariant";
  }
  sub_E598C0((__int64)&v16, v11);
  v12 = j__strlen("variance");
  v13 = &v16;
  v14 = a1 + 1048;
  sub_E585D0(v2, (__int64)"variance", v12, (__int64)sub_E58580, &v13);
  return sub_222B2A0(&v16);
}
