unsigned __int64 __fastcall sub_1C16210(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  _WORD *v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  _QWORD *v11; // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)(a1[10] + 40LL);
  if ( (v3 & 6) == 0 )
  {
    v7 = a1;
    a1[12] = sub_1C160F0((__int64)a1, v3 & 0xFFFFFFFFFFFFFFF8LL);
    v8[0] = sub_1C153E0;
    v8[1] = &v7;
    v6 = a1[1];
    v10 = 0;
    v9 = v6;
    v11 = v8;
    a2 = sub_1C15630((__int64)&v9, a2);
  }
  v4 = (_WORD *)sub_BFB9F0(a2);
  if ( (*v4 & 0x1FF) == 0x20 )
    a1[11] = v4;
  return a2;
}
