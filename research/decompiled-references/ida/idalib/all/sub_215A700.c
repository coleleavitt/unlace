__int64 __fastcall sub_215A700(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  char *v12; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h]
  __int64 v15; // [rsp+18h] [rbp-30h]
  __int64 v16; // [rsp+20h] [rbp-28h]

  v3 = *(_QWORD *)(a2 + 16);
  v13 = 10;
  v12 = (char *)(v3 + 48);
  v4 = sub_2247130(&v12, " ", 1, -1);
  v7 = v13;
  v8 = v4 + 1;
  v9 = (__int64)v12;
  LOWORD(v16) = 259;
  if ( v8 > v13 )
    v8 = v13;
  v10 = v13 + v8 - 10;
  if ( v10 <= v13 )
    v7 = v10;
  v12 = "size";
  sub_215A300(a1, v9, v7, a2, v5, v6, (__int64 *)"size", v13, v14, v15, v16);
  return a1;
}
