__int64 __fastcall sub_B7D920(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rbp
  int v4; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbp
  unsigned int v9; // ebp
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // eax
  char v13[32]; // [rsp+0h] [rbp-68h] BYREF
  char v14[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v2 )
    return 0;
  if ( *v2 == 5 )
  {
    v6 = v2[1];
    switch ( v6 )
    {
      case 2:
        if ( *(_DWORD *)(a2 + 24) != 2 )
          return 0;
        v10 = *(_QWORD *)(a2 + 32);
        v11 = *(_QWORD *)(a2 + 40);
        break;
      case 3:
        if ( *(_DWORD *)(a2 + 24) != 2 )
          return 0;
        v11 = *(_QWORD *)(a2 + 32);
        v10 = *(_QWORD *)(a2 + 40);
        break;
      case 4:
        if ( *(_DWORD *)(a2 + 24) == 2 )
        {
          v8 = *(_QWORD *)(a2 + 32);
          v7 = *(_QWORD *)(a2 + 40);
          goto LABEL_15;
        }
        return 0;
      default:
        if ( v6 != 5 || *(_DWORD *)(a2 + 24) != 2 )
          return 0;
        v7 = *(_QWORD *)(a2 + 32);
        v8 = *(_QWORD *)(a2 + 40);
LABEL_15:
        sub_B7CE40((__int64)v14, a1, v7);
        sub_B7CE40((__int64)v13, a1, v8);
        LOBYTE(v4) = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v13, (__int64)v14);
        goto LABEL_16;
    }
    sub_B7CE40((__int64)v14, a1, v11);
    sub_B7CE40((__int64)v13, a1, v10);
    LOBYTE(v12) = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v14, (__int64)v13);
    v4 = v12 ^ 1;
    goto LABEL_16;
  }
  if ( *v2 || v2[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
    return 0;
  v3 = *(_QWORD *)(a2 + 32);
  sub_B7CE40((__int64)v14, a1, *(_QWORD *)(a2 + 40));
  sub_B7CE40((__int64)v13, a1, v3);
  LOBYTE(v4) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v13, (__int64)v14);
LABEL_16:
  v9 = v4;
  sub_25A130(v13);
  sub_25A130(v14);
  return v9;
}

