__int64 __fastcall sub_C9EF50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // eax
  unsigned int i; // r13d
  char v18; // al
  char v19; // al
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+8h] [rbp-60h]
  unsigned int v23; // [rsp+8h] [rbp-60h]
  int v24; // [rsp+14h] [rbp-54h]
  char v25; // [rsp+1Bh] [rbp-4Dh]
  int v26; // [rsp+1Ch] [rbp-4Ch]
  char v27; // [rsp+1Ch] [rbp-4Ch]
  __int64 v28[8]; // [rsp+28h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14 )
  {
    v24 = sub_C8E170((__int64)a1, v7, a3, a4);
    v28[0] = a2 | 2;
    v9 = sub_C9B2B0((__int64)a1, v28, 13, 1u, 0, 1, 0);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, a2) )
      return 0;
    v12 = a4 | 4;
    v28[0] = a4 | 4;
    v25 = sub_C81650((__int64)a1, 13, v9, v28);
    if ( !v25 )
      return 0;
  }
  else
  {
    v8 = sub_CC2440(a1[61], v7);
    v28[0] = a2 | 2;
    v22 = v8;
    v9 = sub_C9B2B0((__int64)a1, v28, v8, 1u, 0, 1, 0);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, a2) )
      return 0;
    v12 = a4 | 4;
    v28[0] = a4 | 4;
    if ( !(unsigned __int8)sub_C81650((__int64)a1, v22, v9, v28) )
      return 0;
    v25 = 0;
  }
  v15 = *(_QWORD *)(a3 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14 )
  {
    v24 = sub_C8E170((__int64)a1, v15, v13, v14);
    v28[0] = a3 | 2;
    v23 = sub_C9B2B0((__int64)a1, v28, 13, 1u, 0, 1, 0);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, a3) )
      return 0;
    v28[0] = v12;
    v27 = sub_C81650((__int64)a1, 13, v23, v28);
    if ( !v27 )
      return 0;
  }
  else
  {
    v16 = sub_C8D700((__int64)a1, v15);
    v28[0] = a3 | 2;
    v26 = v16;
    v23 = sub_C9B2B0((__int64)a1, v28, v16, 1u, 0, 1, 0);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, a3) )
      return 0;
    v28[0] = v12;
    if ( !(unsigned __int8)sub_C81650((__int64)a1, v26, v23, v28) )
      return 0;
    v27 = 0;
  }
  for ( i = 0; ; i = 1 )
  {
    v28[0] = v12;
    if ( v25 )
    {
      if ( !(unsigned __int8)sub_C80B80((__int64)a1, 13, v9, v28) )
        return 0;
      v28[0] = v12;
      v18 = sub_C80210((__int64)a1, v24, i, v28);
    }
    else
    {
      v18 = sub_C80B80((__int64)a1, v24, v9, v28);
    }
    if ( !v18 )
      break;
    v28[0] = v12;
    if ( v27 )
    {
      if ( !(unsigned __int8)sub_C80B80((__int64)a1, 13, v23, v28) )
        return 0;
      v28[0] = v12;
      v19 = sub_C80210((__int64)a1, v24, i, v28);
    }
    else
    {
      v19 = sub_C80B80((__int64)a1, v24, v23, v28);
    }
    if ( !v19 )
      break;
    v28[0] = v12;
    if ( !(unsigned __int8)sub_C7D340((__int64)a1, v24, v28) )
      break;
    v28[0] = v12;
    if ( !(unsigned __int8)sub_C87BA0((__int64)a1, v28) )
      break;
    if ( i == 1 )
    {
      v28[0] = v12;
      if ( !(unsigned __int8)sub_C7C1A0((__int64)a1, v28) )
        return 0;
      v28[0] = v12;
      v10 = sub_C853C0((__int64)a1, 2, v28);
      if ( !(_BYTE)v10 )
        return 0;
      v20 = (*(_WORD *)(a4 + 2) >> 3) & 0x3F;
      if ( v20 == 14 )
      {
        v28[0] = v12;
        if ( !(unsigned __int8)sub_C7D330((__int64)a1, v28) )
          return 0;
      }
      else
      {
        if ( v20 != 15 )
          return 0;
        v28[0] = v12;
        if ( !(unsigned __int8)sub_C87D20((__int64)a1, v28) )
          return 0;
      }
      v21 = sub_C8D700((__int64)a1, *(_QWORD *)(a4 + 8));
      if ( v21 != 10 )
      {
        v28[0] = v12;
        return (unsigned int)sub_C7C7D0((__int64)a1, 10, v21, v28);
      }
      return v10;
    }
  }
  return 0;
}

