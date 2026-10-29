__int64 __fastcall sub_CAFCF0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // r11
  unsigned int v8; // eax
  __int16 v9; // ax
  unsigned int v10; // eax
  __int64 v11; // r12
  unsigned int v12; // eax
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // [rsp-10h] [rbp-78h]
  __int64 v18; // [rsp+0h] [rbp-68h]
  __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned int v20; // [rsp+8h] [rbp-60h]
  unsigned int v21; // [rsp+10h] [rbp-58h]
  unsigned int v22; // [rsp+1Ch] [rbp-4Ch]
  __int64 v23[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 32);
  v18 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 40);
  v19 = *(_QWORD *)(v2 + 8);
  v5 = (unsigned __int64)sub_CC2440(*(_QWORD *)(a1 + 1264), v3) >> 32;
  v6 = sub_CC2440(*(_QWORD *)(a1 + 1264), v4);
  if ( !(_BYTE)v5 )
    return 0;
  v21 = v6;
  if ( !BYTE4(v6) )
    return 0;
  v20 = sub_CC2440(*(_QWORD *)(a1 + 1264), v19);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v18) )
    return 0;
  v23[0] = a2 | 2;
  v22 = sub_CAE4E0(a1, v23, v21, 1u, 0, 1, 0);
  v23[0] = a2 | 4;
  if ( !(unsigned __int8)sub_D01960(a1, v21, v22, v23) )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v2, v17) )
    return 0;
  v23[0] = a2 | 4;
  if ( !(unsigned __int8)sub_D10AA0(a1, v20, v23) )
    return 0;
  v8 = sub_C90F60(a1, v3);
  if ( !(unsigned __int8)sub_C91730(a1, v20, v8, v3, a2) )
    return 0;
  v23[0] = a2 | 4;
  if ( !(unsigned __int8)sub_D0EEB0(a1, v21, v22, v23) )
    return 0;
  v9 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x17 )
  {
    v23[0] = a2 | 4;
    v15 = sub_C91710(a1, a2);
    if ( !(unsigned __int8)sub_D1FFE0(a1, v15, v23) )
      return 0;
  }
  else if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 0x17 )
  {
    if ( (_BYTE)v9 != 22 )
      return 0;
    v23[0] = a2 | 4;
    v14 = sub_C91710(a1, a2);
    if ( !(unsigned __int8)sub_D205F0(a1, v14, v23) )
      return 0;
  }
  else if ( (_BYTE)v9 == 25 )
  {
    v23[0] = a2 | 4;
    v16 = sub_C91710(a1, a2);
    if ( !(unsigned __int8)sub_D1E560(a1, v16, v23) )
      return 0;
  }
  else
  {
    if ( (_BYTE)v9 != 26 )
      return 0;
    v23[0] = a2 | 4;
    v10 = sub_C91710(a1, a2);
    if ( !(unsigned __int8)sub_D207A0(a1, v10, v23) )
      return 0;
  }
  v11 = *(_QWORD *)(v2 + 8);
  v12 = sub_C90F60(a1, v4);
  if ( !(unsigned __int8)sub_C91730(a1, v12, v20, v11, a2) )
    return 0;
  v13 = *(_BYTE *)(a1 + 1360) == 0;
  v23[0] = a2 | 4;
  if ( v13 )
    return sub_D026C0(a1, v20, v23);
  else
    return sub_D037E0(a1, v20, v23);
}

