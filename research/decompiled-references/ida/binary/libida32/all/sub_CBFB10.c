__int64 __fastcall sub_CBFB10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  unsigned int v16; // [rsp+34h] [rbp-24h]
  char v17; // [rsp+38h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 1328);
  v12 = a1;
  v13 = v6;
  *(_QWORD *)(a1 + 1328) = &v11;
  v7 = *(_QWORD *)(a2 + 16);
  v15 = 1;
  v14 = 0;
  v11 = &off_2B216F8;
  v17 = 0;
  v8 = sub_CBBC10(a1, v7, a3, a4, a5);
  if ( (_BYTE)v8 && v17 )
  {
    v8 = sub_C97A90((__int64)&v11, a2);
    v10 = a2 | 4;
    sub_CDBA30(v12, v16, &v10);
  }
  sub_C977B0((__int64)&v11);
  return v8;
}

