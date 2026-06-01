__int64 __fastcall sub_DCCBD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v5; // ebp
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned __int8 **v9; // rax
  unsigned __int8 **v10; // rbx
  unsigned __int8 **v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  char v17; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a3 + 16);
  if ( (*(_WORD *)a3 & 0x1FF) != 0x6A )
  {
    LOBYTE(v8) = sub_B760E0(v3, nullptr, nullptr);
    v5 = v8;
    if ( (_BYTE)v8 )
      return 0;
LABEL_11:
    v16 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v9 = (unsigned __int8 **)sub_E33BA0(a1, &v16, 2449, 0);
    v10 = v9;
    if ( v9 )
    {
      sub_AE9DF0(v9, (*(_BYTE *)(v3 + 28) & 0x7Fu) - 35 <= 3, 2u);
      sub_AE9DF0(v10, v3, 0xAu);
    }
    return v5;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    if ( (*(_BYTE *)(sub_E32240(a1) + 2) & 2) == 0 )
    {
      v5 = sub_E20780(*(_QWORD *)(a1 + 400));
      if ( !(_BYTE)v5 )
      {
        v15 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
        v11 = (unsigned __int8 **)sub_E33BA0(a1, &v15, 2451, 0);
        if ( v11 )
        {
          v12 = 1;
LABEL_16:
          sub_AE9DF0(v11, v12, 2u);
          v13 = sub_EEC8C0(a3);
          v17 = 1;
          v16 = v13;
          sub_AEC610((__int64 *)v11, &v16);
        }
        return v5;
      }
    }
    return 1;
  }
  LOBYTE(v7) = sub_B760E0(v3, nullptr, nullptr);
  v5 = v7;
  if ( !(_BYTE)v7 )
    goto LABEL_11;
  if ( (*(_BYTE *)(sub_E32240(a1) + 2) & 2) == 0 && *(_DWORD *)(a3 + 4) == 1 )
  {
    LOBYTE(v14) = sub_B74AF0(v3);
    v5 = v14;
    if ( !(_BYTE)v14 )
    {
      if ( (*(_BYTE *)(sub_E32240(a1) + 2) & 2) == 0 )
      {
        v15 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
        v11 = (unsigned __int8 **)sub_E33BA0(a1, &v15, 2451, 0);
        if ( !v11 )
          return v5;
        v12 = 0;
        goto LABEL_16;
      }
      return 1;
    }
  }
  return 0;
}
