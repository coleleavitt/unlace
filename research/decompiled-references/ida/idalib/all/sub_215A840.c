__int64 __fastcall sub_215A840(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  char *v8; // rax
  char v9; // dl
  __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  char v11; // [rsp+8h] [rbp-60h]
  char *v12; // [rsp+10h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]

  v2 = sub_2157B00(*(_QWORD *)(a2 + 16));
  v12 = "size";
  LOWORD(v16) = 259;
  sub_215A300((__int64)&v10, v2, v3, a2, v4, v5, (__int64 *)"size", v13, v14, v15, 259);
  if ( (v11 & 1) != 0 )
  {
    v6 = v10;
    *(_BYTE *)(a1 + 8) |= 1u;
    v10 = 0;
    *(_QWORD *)a1 = v6;
  }
  else
  {
    sub_215A7A0((__int64)&v12, a2);
    v8 = v12;
    v9 = v13 & 1;
    if ( (v13 & 1) != 0 )
      v12 = nullptr;
    else
      v8 = (char *)(v10 + 2 * ((v12 != nullptr) + ((unsigned __int64)&v12[-(v12 != nullptr)] >> 1)));
    *(_QWORD *)a1 = v8;
    *(_BYTE *)(a1 + 8) = v9 | *(_BYTE *)(a1 + 8) & 0xFE;
    sub_A0AE70((__int64 *)&v12);
  }
  sub_A0AE70(&v10);
  return a1;
}
