__int64 __fastcall sub_DCC160(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  unsigned int v6; // r13d
  __int64 v8; // rax
  int v9; // r14d
  char v10; // al
  __int64 v11; // rdx
  char v12; // al
  _BYTE *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v17; // eax
  unsigned __int8 **v18; // rax
  unsigned __int8 **v19; // rbp
  unsigned __int8 **v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned int v26; // [rsp+Ch] [rbp-9Ch]
  _BYTE v27[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v28[104]; // [rsp+40h] [rbp-68h] BYREF

  if ( !(unsigned __int8)sub_DC83C0(a1, (__int64)a2, a3, a4) )
    return 0;
  if ( !(unsigned __int8)sub_DC81A0(a1, a2, a3) )
    return 0;
  if ( !*(_DWORD *)(a3 + 24) )
  {
    v8 = *(_QWORD *)(a3 + 32);
    if ( *(_BYTE *)(v8 + 24) )
    {
      if ( *(_BYTE *)(v8 + 20) && !(unsigned __int8)sub_DC8690(a1, a2, *(__int64 **)(v8 + 32)) )
        return 0;
    }
  }
  if ( !(unsigned __int8)sub_DCBE90(a1, a2, a3, a4) )
    return 0;
  if ( !(unsigned __int8)sub_DC8C00(a1, (__int64)a2, a3, a4) )
    return 0;
  if ( !(unsigned __int8)sub_DC7E40(a1, (__int64)a2, a3, a4) )
    return 0;
  if ( !(unsigned __int8)sub_DC2530(a1, (__int64)a2, a3, a4) )
    return 0;
  if ( !(unsigned __int8)sub_DC9B40(a1, a2, a3, a4) )
    return 0;
  if ( !(unsigned __int8)sub_DC13A0(a1, (__int64)a2, a3, a4) )
    return 0;
  if ( !(unsigned __int8)sub_DC1250(a1, (__int64)a2, a3) )
    return 0;
  v6 = sub_DC9A20(a1, (__int64)a2, a3);
  if ( !(_BYTE)v6 )
    return 0;
  v9 = *(_DWORD *)(a3 + 24);
  if ( !v9 )
  {
    v10 = sub_CFE580(a3);
    v11 = *(_QWORD *)(a3 + 32);
    v12 = v10 ? *(_BYTE *)(*(_QWORD *)(v11 + 32) + 59LL) : *(_BYTE *)(v11 + *(unsigned int *)(a3 + 40) + 29) & 1;
    if ( v12 )
    {
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) == 0 )
        return (unsigned int)sub_CFEE20(a1, (__int64)a2);
      v13 = (_BYTE *)a3;
      sub_E231E0(v27, a3);
      while ( !(unsigned __int8)sub_CFE580((__int64)v27) )
      {
        v14 = sub_CFE250((__int64)v27, (__int64)v13);
        if ( (v14 & 4) != 0 || (byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
          break;
        sub_D8B030((__int64)v28, (__int64)v27);
        v13 = v28;
        sub_E23400(v27, v28);
        sub_E232A0(v28);
      }
      v26 = 0;
      v15 = sub_CFE5B0((__int64)v27);
      v16 = v15;
      if ( v15 )
      {
        v9 = 2;
        v26 = *(_DWORD *)(v15 + 24);
      }
      else
      {
        v21 = *(_QWORD *)sub_CFDF60((__int64)v27);
        if ( (v21 & 2) != 0 )
        {
          if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            v26 = sub_C00A40(v21 & 0xFFFFFFFFFFFFFFFCLL, (__int64)v13, v22, v23, v24);
        }
        else
        {
          v25 = v21 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v25 && (*(_BYTE *)(v25 + 28) & 0x7Fu) - 26 <= 0x1A )
          {
            v16 = v25;
            v9 = 1;
            v26 = *(_DWORD *)(v25 + 24);
          }
        }
      }
      v17 = sub_E206C0(*(_QWORD *)(a1 + 400));
      v18 = (unsigned __int8 **)sub_E33C80(a1, v17, 2376, 1);
      v19 = v18;
      if ( v18 )
      {
        sub_AE9DF0(v18, a4, 2u);
        sub_AE9DF0(v19, v9, 2u);
        sub_AE9DF0(v19, v16, 0xAu);
      }
      v20 = (unsigned __int8 **)sub_E33DB0(a1, v26, 2506);
      if ( v20 )
        sub_AE9DF0(v20, v9, 2u);
      sub_E232A0(v27);
      return 0;
    }
  }
  return v6;
}
