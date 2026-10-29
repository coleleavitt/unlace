__int64 __fastcall sub_C8CB30(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  int v4; // ebx
  __int64 v5; // r13
  __int64 v6; // rcx
  int v8; // [rsp+8h] [rbp-50h]
  __int64 v9[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v5 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(v2 + 8));
  v6 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(v3 + 8));
  if ( (unsigned int)(v4 - 25) > 1 )
    return 0;
  v8 = v6;
  if ( !BYTE4(v5) )
    return 0;
  if ( !BYTE4(v6) )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v2) )
    return 0;
  v9[0] = v2 | 4;
  if ( !(unsigned __int8)sub_C7E4C0(a1, v5, v9)
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v3) )
  {
    return 0;
  }
  v9[0] = a2 | 4;
  if ( v4 != 25 )
  {
    if ( (unsigned __int8)sub_C7FDD0(a1, v8, v9) )
      goto LABEL_10;
    return 0;
  }
  if ( !(unsigned __int8)sub_C7C2A0(a1, v8, v9) )
    return 0;
LABEL_10:
  if ( *(_BYTE *)(a1 + 584) )
  {
    v9[0] = a2 | 4;
    return sub_C7FBB0(a1, v9);
  }
  else
  {
    v9[0] = a2 | 4;
    return sub_C7F8C0(a1, v9);
  }
}

