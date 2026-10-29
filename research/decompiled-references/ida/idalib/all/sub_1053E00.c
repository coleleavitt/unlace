__int64 __fastcall sub_1053E00(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r13d
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  int v7; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-48h] BYREF
  int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+24h] [rbp-34h]

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 480LL))(a1, *a2, a2[1]);
  if ( !(_BYTE)v2 )
    return v2;
  sub_9EE8A0(a1 + 520, (__int64)a2);
  v4 = *(_QWORD *)(a1 + 520);
  v5 = *(_QWORD *)(a1 + 528);
  v10 = 0;
  v8[0] = v4;
  v8[1] = v5;
  v7 = 1;
  sub_FAE9A0((__int64)v8, &v7, "440", 3);
  v7 = 9;
  sub_FAE9A0((__int64)v8, &v7, "450", 3);
  v7 = 1;
  sub_FAE9A0((__int64)v8, &v7, "601", 3);
  v7 = 3;
  sub_FAE9A0((__int64)v8, &v7, "602", 3);
  v7 = 3;
  sub_FAE9A0((__int64)v8, &v7, "603", 3);
  v7 = 19;
  sub_FAE9A0((__int64)v8, &v7, "603e", 4);
  v7 = 19;
  sub_FAE9A0((__int64)v8, &v7, "603ev", 5);
  v7 = 3;
  sub_FAE9A0((__int64)v8, &v7, "604", 3);
  v7 = 35;
  sub_FAE9A0((__int64)v8, &v7, "604e", 4);
  v7 = 3;
  sub_FAE9A0((__int64)v8, &v7, "620", 3);
  v7 = 3;
  sub_FAE9A0((__int64)v8, &v7, "630", 3);
  v7 = 3;
  sub_FAE9A0((__int64)v8, &v7, "7400", 4);
  v7 = 3;
  sub_FAE9A0((__int64)v8, &v7, "7450", 4);
  v7 = 3;
  sub_FAE9A0((__int64)v8, &v7, "750", 3);
  v7 = 71;
  sub_FAE9A0((__int64)v8, &v7, "970", 3);
  v7 = (int)&stru_20000;
  sub_FAE9A0((__int64)v8, &v7, "a2", 2);
  v7 = 2;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power3", 6) )
    sub_FAE9A0((__int64)v8, &v7, "pwr3", 4);
  v7 = 70;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power4", 6) )
    sub_FAE9A0((__int64)v8, &v7, "pwr4", 4);
  v7 = 198;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power5", 6) )
    sub_FAE9A0((__int64)v8, &v7, "pwr5", 4);
  v7 = 454;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power5x", 7) )
    sub_FAE9A0((__int64)v8, &v7, "pwr5x", 5);
  v7 = 966;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power6", 6) )
    sub_FAE9A0((__int64)v8, &v7, "pwr6", 4);
  v7 = 1990;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power6x", 7) )
    sub_FAE9A0((__int64)v8, &v7, "pwr6x", 5);
  v7 = 3014;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power7", 6) )
    sub_FAE9A0((__int64)v8, &v7, "pwr7", 4);
  v7 = 7110;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power8", 6)
    && !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "pwr8", 4) )
  {
    sub_FAE9A0((__int64)v8, &v7, "ppc64le", 7);
  }
  v7 = 15302;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power9", 6) )
    sub_FAE9A0((__int64)v8, &v7, "pwr9", 4);
  v7 = 31686;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power10", 7) )
    sub_FAE9A0((__int64)v8, &v7, "pwr10", 5);
  v7 = 64454;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "power11", 7) )
    sub_FAE9A0((__int64)v8, &v7, "pwr11", 5);
  v7 = 129990;
  sub_FAE9A0((__int64)v8, &v7, "future", 6);
  v7 = 0x40000;
  if ( !(unsigned __int8)sub_FAE9A0((__int64)v8, &v7, "8548", 4) )
    sub_FAE9A0((__int64)v8, &v7, "e500", 4);
  v6 = 0;
  if ( (_BYTE)v10 )
    v6 = v9;
  *(_DWORD *)(a1 + 512) = v6;
  return v2;
}
