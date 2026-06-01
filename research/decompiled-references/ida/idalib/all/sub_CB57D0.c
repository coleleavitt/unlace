__int64 __fastcall sub_CB57D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  unsigned int v6; // ebp
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) != 14 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) != 14 )
      BUG();
    v4 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v10, a4);
  }
  v5 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v4 + 32));
  v15[0] = a2 | 4;
  if ( !(unsigned __int8)sub_D32F00(a1, v5, 0, v15) )
    return 0;
  v15[0] = a2 | 4;
  if ( v5 == 12 )
  {
    v8 = sub_CE6170(*(_QWORD *)(a1 + 1264));
    v9 = sub_BFE5A0(a2, v8);
    if ( !(unsigned __int8)sub_D111E0(a1, 10, v9, v15) )
      return 0;
  }
  else if ( !(unsigned __int8)sub_D2FA60(a1, v5, 10, v15) )
  {
    return 0;
  }
  v13 = sub_CFF2B0(a1);
  if ( !(unsigned __int8)sub_CFF5D0(a1, &v13) )
    return 0;
  v15[0] = a2 | 4;
  if ( !(unsigned __int8)sub_D337E0(a1, v5, 1, v15) )
    return 0;
  v15[0] = a2 | 4;
  if ( v5 == 12 )
  {
    v11 = sub_CE6170(*(_QWORD *)(a1 + 1264));
    v12 = sub_BFE5A0(a2, v11);
    if ( !(unsigned __int8)sub_D111E0(a1, 10, v12, v15) )
      return 0;
  }
  else if ( !(unsigned __int8)sub_D2FA60(a1, v5, 10, v15) )
  {
    return 0;
  }
  v14 = sub_CFF2B0(a1);
  sub_CFF6B0(a1, &v14);
  sub_CFF2A0(a1, v13);
  v15[0] = a2 | 4;
  if ( (unsigned __int8)sub_D07CE0(a1, v15) )
  {
    v15[0] = a2 | 4;
    v6 = sub_D00850(a1, 1, v15);
    if ( (_BYTE)v6 )
    {
      sub_CFF6E0(a1, &v14);
      sub_CFF2A0(a1, v14);
      return v6;
    }
  }
  return 0;
}
