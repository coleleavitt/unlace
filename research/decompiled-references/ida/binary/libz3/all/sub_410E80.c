__int64 __fastcall sub_410E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( a3 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    v11[0] = a3;
    v11[1] = 0;
    v8 = sub_41F0C0(v6 + 64, v11);
    v9 = v8;
    if ( v8 )
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
    if ( (unsigned __int8)sub_1374270(a4, v9)
      && (unsigned __int8)sub_1374270(a4, *(_QWORD *)(a2 + 24))
      && !*(_DWORD *)(a3 + 68) )
    {
      return (unsigned __int8)sub_4039A0(*(_QWORD **)(a2 + 16), a3, a4);
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_1374270(a4, *(_QWORD *)(a2 + 24)) )
    return 0;
  return (unsigned __int8)sub_4034B0(a1, a4);
}

