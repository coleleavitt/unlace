__int64 __fastcall sub_1533300(__int64 a1, char a2)
{
  int v2; // esi
  __int64 v3; // rbx
  char v5; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v6; // [rsp+10h] [rbp-38h] BYREF
  __int64 v7; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a2;
  sub_146B5E0(&v6, a1, 0x400008u, 1, 0);
  v2 = *(_DWORD *)(a1 + 16);
  v8[1] = &v7;
  v8[0] = a1;
  v7 = 0;
  v8[2] = &v5;
  sub_1029410(a1 + 112, v2, (__int64 (__fastcall *)(__int64))sub_153D7F0, (__int64)v8);
  v3 = v7;
  if ( v6 )
    sub_1564F70(v6);
  return v3;
}
