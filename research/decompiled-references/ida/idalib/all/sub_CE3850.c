__int64 __fastcall sub_CE3850(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+10h] [rbp-48h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  unsigned int v13; // [rsp+34h] [rbp-24h]
  char v14; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 1328);
  v9 = a1;
  v10 = v3;
  *(_QWORD *)(a1 + 1328) = &v8;
  v4 = *(_QWORD *)(a2 + 16);
  v12 = 1;
  v11 = 0;
  v8 = &off_2B4B698;
  v14 = 0;
  v5 = sub_CDF950(a1, v4);
  if ( (_BYTE)v5 && v14 )
  {
    v5 = sub_CBB7D0((__int64)&v8, a2);
    v7 = a2 | 4;
    sub_CFF770(v9, v13, &v7);
  }
  sub_CBB4F0((__int64)&v8);
  return v5;
}
