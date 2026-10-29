__int64 __fastcall sub_C91DC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int16 v4; // bp
  __int64 v5; // r12
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v10; // [rsp+14h] [rbp-44h] BYREF
  _QWORD v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v5 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a2 + 8));
  if ( (_BYTE)v4 != 20 )
  {
    v9 = sub_CDB570(a1);
    v10 = sub_CDB570(a1);
    if ( (unsigned __int8)sub_C91CB0((_QWORD *)a1, v2)
      && (unsigned __int8)sub_CDB900(a1, &v9)
      && (unsigned __int8)sub_C91CB0((_QWORD *)a1, v3)
      && (unsigned __int8)sub_CDB970(a1, &v10) )
    {
      v7 = a2 | 4;
      sub_CDB560(a1, v9);
      v11[0] = a2 | 4;
      v8 = 0;
      goto LABEL_14;
    }
    return 0;
  }
  v9 = sub_CDB570(a1);
  v10 = sub_CDB570(a1);
  if ( !(unsigned __int8)sub_C91CB0((_QWORD *)a1, v2)
    || !(unsigned __int8)sub_CDB890(a1, &v9)
    || !(unsigned __int8)sub_C91CB0((_QWORD *)a1, v3)
    || !(unsigned __int8)sub_CDB970(a1, &v10) )
  {
    return 0;
  }
  v7 = a2 | 4;
  sub_CDB560(a1, v9);
  v11[0] = a2 | 4;
  v8 = 1;
LABEL_14:
  sub_CDCB10(a1, v8, v11);
  sub_CDB9A0(a1, &v10);
  sub_CDB560(a1, v10);
  if ( *(_BYTE *)(a1 + 1360) )
  {
    v11[0] = v7;
    return sub_CE3F50(a1, v11);
  }
  else if ( BYTE4(v5) != 1 || (result = 1, (_DWORD)v5 != 10) )
  {
    v11[0] = v7;
    return sub_D0BD20(a1, 10, (unsigned int)v5, v11);
  }
  return result;
}

