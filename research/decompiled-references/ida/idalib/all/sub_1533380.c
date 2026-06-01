__int64 __fastcall sub_1533380(__int64 a1, char a2, unsigned int a3)
{
  int v3; // esi
  __int64 v4; // rbx
  char v6; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a2;
  sub_146B5E0(&v7, a1, a3, 1, 0);
  v3 = *(_DWORD *)(a1 + 16);
  v9[1] = &v8;
  v9[0] = a1;
  v8 = 0;
  v9[2] = &v6;
  sub_1029410(a1 + 112, v3, (__int64 (__fastcall *)(__int64))sub_153D7F0, (__int64)v9);
  v4 = v8;
  if ( v7 )
    sub_1564F70(v7);
  return v4;
}
