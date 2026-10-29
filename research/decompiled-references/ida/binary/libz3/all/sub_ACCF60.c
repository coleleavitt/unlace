__int64 __fastcall sub_ACCF60(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD v17[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( *(_WORD *)(a2 + 4) == 1 && *(_WORD *)(a3 + 4) == 1 )
  {
    *a4 = a2;
    *a5 = a3;
    return 1;
  }
  v9 = a1 + 16;
  if ( (unsigned __int8)sub_1392550(a1 + 16, a2) )
  {
    v10 = *(_QWORD *)(a2 + 32);
    v11 = *(_QWORD *)(a2 + 40);
    if ( *(_WORD *)(v10 + 4) != 1 )
    {
      if ( *(_WORD *)(v11 + 4) != 1 )
        goto LABEL_6;
      v11 = *(_QWORD *)(a2 + 32);
      v10 = *(_QWORD *)(a2 + 40);
    }
    if ( !(unsigned __int8)sub_13925A0(v9, v11, v17) )
      goto LABEL_6;
    v15 = v17[0];
    if ( *(_WORD *)(v17[0] + 4LL) != 1 )
      goto LABEL_6;
    *a4 = v10;
    *a5 = v15;
    if ( !(unsigned __int8)sub_13926F0(v9, a3) )
      goto LABEL_6;
    return 1;
  }
LABEL_6:
  if ( !(unsigned __int8)sub_1392550(v9, a3) )
    return 0;
  v12 = *(_QWORD *)(a3 + 32);
  v13 = *(_QWORD *)(a3 + 40);
  if ( *(_WORD *)(v12 + 4) != 1 )
  {
    if ( *(_WORD *)(v13 + 4) != 1 )
      return 0;
    v13 = *(_QWORD *)(a3 + 32);
    v12 = *(_QWORD *)(a3 + 40);
  }
  if ( !(unsigned __int8)sub_13925A0(v9, v13, v17) )
    return 0;
  v16 = v17[0];
  if ( *(_WORD *)(v17[0] + 4LL) != 1 )
    return 0;
  *a4 = v12;
  *a5 = v16;
  return sub_13926F0(v9, a2);
}

