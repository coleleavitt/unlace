__int64 __fastcall sub_CE7060(__int64 a1, int a2, _QWORD *a3)
{
  int v4; // eax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rdi
  bool v9; // bl
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  _QWORD v15[3]; // [rsp+0h] [rbp-58h] BYREF
  int v16; // [rsp+18h] [rbp-40h]
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]

  v4 = *(_DWORD *)(a1 + 1256);
  if ( a2 == 13 )
  {
    if ( *(_DWORD *)(a1 + 1252) != v4 )
      return 1;
    v10 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a3;
    sub_CE52D0((__int64)v15, v10);
    v11 = v16;
    if ( v16 != 2 )
    {
      if ( !v16 )
      {
        if ( !*(_BYTE *)(v17 + 29) )
        {
          v8 = *(_QWORD *)(a1 + 560);
LABEL_17:
          v9 = v17 != 0;
          goto LABEL_18;
        }
LABEL_22:
        v7 = 0;
        goto LABEL_19;
      }
      v8 = *(_QWORD *)(a1 + 560);
LABEL_24:
      v9 = 1;
      if ( v11 != 3 )
        v9 = (v15[0] | v18) != 0;
      goto LABEL_18;
    }
    v12 = v17;
    if ( v17 && (v13 = *(_QWORD *)(v17 + 16), (v13 & 4) == 0) && (v14 = v13 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (unsigned __int8)sub_B559C0(v14) )
        goto LABEL_22;
      v11 = v16;
      v8 = *(_QWORD *)(a1 + 560);
      if ( !v16 )
        goto LABEL_17;
      if ( v16 != 2 )
        goto LABEL_24;
      v12 = v17;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 560);
    }
    v9 = v12 != 0;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(a1 + 1252) != v4 )
    return 1;
  v6 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a3;
  sub_CE6900((__int64)v15, v6);
  if ( !v19 || (*(_BYTE *)(v19 + 28) & 0x7Fu) - 35 > 3 || (v7 = 0, !(unsigned __int8)sub_B559C0(v19)) )
  {
    v8 = *(_QWORD *)(a1 + 560);
    if ( !v16 || v16 == 2 )
    {
      v9 = 1;
      if ( v17 )
        goto LABEL_18;
    }
    else
    {
      v9 = 1;
      if ( v16 == 3 || v15[0] | v18 )
        goto LABEL_18;
    }
    v9 = v19 != 0;
LABEL_18:
    v7 = 1;
    *(_BYTE *)sub_DFD980(v8, 8) = v9;
  }
LABEL_19:
  sub_DFF560(v15);
  return v7;
}

