__int64 __fastcall sub_50C100(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rsi
  char v11; // [rsp+Fh] [rbp-39h] BYREF
  _BYTE v12[56]; // [rsp+10h] [rbp-38h] BYREF

  v4 = 0;
  if ( a1 == *(_QWORD *)(a2 + 8) )
  {
    v4 = sub_186B270(0x30u);
    v8 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 32) = 1;
    v9 = *(__int64 **)(v8 + 8);
    *(_DWORD *)(v4 + 8) = a4;
    *(_QWORD *)v4 = &off_1C505C0;
    v10 = *v9;
    *(_QWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 40) = 0;
    sub_16669D0(v12, v10);
    if ( !(unsigned __int8)sub_1666AE0(v12, *a3, v4 + 16, &v11) )
    {
      sub_1872CE0("");
      sub_1873130(114, 266);
    }
  }
  return v4;
}

