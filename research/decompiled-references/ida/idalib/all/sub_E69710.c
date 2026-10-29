__int64 __fastcall sub_E69710(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v9; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+18h] [rbp-70h]
  int v11; // [rsp+20h] [rbp-68h]
  __int16 v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-40h]

  sub_E673B0((__int64)&v9, a1, *(_QWORD *)(a2 + 32));
  v12 = 7;
  v13 = v9;
  v9 = 0;
  v14 = v10;
  v10 = 0;
  v15 = v11;
  v11 = 0;
  v2 = j__strlen("decl");
  sub_222AB70(a1 + 1048, "decl", v2);
  sub_222CAC0(a1 + 1048, &v12);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v12);
  result = sub_E5D2E0(&v9);
  if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
  {
    v4 = sub_F5DAC0(a2);
    sub_E63A60((__int64)&v9, a1, v4, 1);
    v12 = 7;
    v5 = v9;
    v9 = 0;
    v13 = v5;
    v6 = v10;
    v10 = 0;
    v14 = v6;
    LODWORD(v6) = v11;
    v11 = 0;
    v15 = v6;
    v7 = j__strlen("type");
    v8[0] = &v12;
    v8[1] = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"type", v7, (__int64)sub_E58580, v8);
    sub_222B2A0(&v12);
    return sub_E5D2E0(&v9);
  }
  return result;
}
