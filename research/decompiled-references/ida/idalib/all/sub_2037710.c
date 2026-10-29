void __fastcall sub_2037710(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v6; // zf
  _BYTE *v7; // rsi
  _BYTE *v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE *v13; // rsi
  _BYTE *v14; // rsi
  _QWORD v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_BYTE *)(a2 + 32) == 0;
  v7 = *(_BYTE **)(a2 + 40);
  if ( !v6 )
    goto LABEL_21;
  if ( v7 && (unsigned int)(unsigned __int8)*v7 - 5 <= 0x20 )
  {
    sub_2037330(a1, v7, a3, a4, a5);
    v8 = *(_BYTE **)(a2 + 72);
    if ( !v8 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v8 = *(_BYTE **)(a2 + 72);
  if ( v8 )
LABEL_5:
    sub_2037330(a1, v8, a3, a4, a5);
LABEL_6:
  if ( *(_BYTE *)(a2 + 64) == 2 )
  {
    v14 = *(_BYTE **)(a2 + 56);
    if ( !v14 || (sub_2037330(a1, v14, a3, a4, a5), *(_BYTE *)(a2 + 64) == 2) )
      v7 = *(_BYTE **)(a2 + 48);
    else
      v7 = *(_BYTE **)(a2 + 40);
    if ( v7 && (unsigned int)(unsigned __int8)*v7 - 5 <= 0x20 )
    {
LABEL_21:
      sub_2037330(a1, v7, a3, a4, a5);
      v9 = *(_QWORD *)(a2 + 24);
      v15[0] = v9;
      if ( !v9 )
        return;
      goto LABEL_8;
    }
  }
  v9 = *(_QWORD *)(a2 + 24);
  v15[0] = v9;
  if ( !v9 )
    return;
LABEL_8:
  sub_20B2EE0(v15, v9, 1);
  if ( v15[0] )
  {
    sub_20A0850(v15);
    v13 = *(_BYTE **)(a2 + 24);
    v15[0] = v13;
    if ( v13 )
    {
      sub_20B2EE0(v15, v13, 1);
      v13 = (_BYTE *)v15[0];
    }
    sub_2037330(a1, v13, v10, v11, v12);
    if ( v15[0] )
      sub_20A0850(v15);
  }
}
