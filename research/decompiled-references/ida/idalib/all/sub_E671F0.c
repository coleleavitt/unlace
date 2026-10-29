__int64 __fastcall sub_E671F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+8h] [rbp-60h]
  int v10; // [rsp+10h] [rbp-58h]
  __int16 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]

  v2 = a1 + 1048;
  sub_E5B230(a1, a2);
  v3 = *(_QWORD *)(a2 + 80);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  sub_E63A60((__int64)&v8, a1, v4, 1);
  v11 = 7;
  v5 = v8;
  v8 = 0;
  v12 = v5;
  v6 = v9;
  v9 = 0;
  v13 = v6;
  LODWORD(v6) = v10;
  v10 = 0;
  v14 = v6;
  sub_222AB70(v2, "type", 4);
  sub_222CAC0(v2, &v11);
  sub_2229BF0(v2);
  sub_222B2A0(&v11);
  return sub_E5D2E0(&v8);
}
