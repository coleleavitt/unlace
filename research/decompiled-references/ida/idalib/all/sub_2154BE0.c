__int64 __fastcall sub_2154BE0(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  unsigned int v5; // ebp
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v11[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v12; // [rsp+30h] [rbp-28h]

  if ( a3 != 5 )
  {
    switch ( a3 )
    {
      case 6LL:
        if ( *(_DWORD *)a2 != 1668246574 )
          goto LABEL_8;
        v5 = 17;
        if ( *(_WORD *)(a2 + 4) != 27745 )
          goto LABEL_8;
        goto LABEL_9;
      case 7LL:
        if ( *(_DWORD *)a2 != 1684629550 )
          goto LABEL_8;
        if ( *(_WORD *)(a2 + 4) != 25956 )
          goto LABEL_8;
        v5 = 12;
        if ( *(_BYTE *)(a2 + 6) != 110 )
          goto LABEL_8;
        goto LABEL_9;
      case 9LL:
        if ( *(_QWORD *)a2 != 0x616E7265746E692ELL )
          goto LABEL_8;
        v5 = 15;
        if ( *(_BYTE *)(a2 + 8) != 108 )
          goto LABEL_8;
        goto LABEL_9;
    }
    goto LABEL_3;
  }
  if ( *(_DWORD *)a2 != 1634039598 || (v4 = 1, *(_BYTE *)(a2 + 4) != 107) )
LABEL_3:
    v4 = 0;
  if ( a3 != 10 )
  {
    if ( !v4 )
    {
LABEL_8:
      v5 = 0;
      goto LABEL_9;
    }
    goto LABEL_34;
  }
  if ( v4 )
  {
LABEL_34:
    v5 = 24;
    goto LABEL_9;
  }
  if ( *(_QWORD *)a2 != 0x746365746F72702ELL )
    goto LABEL_8;
  v5 = 22;
  if ( *(_WORD *)(a2 + 8) != 25701 )
    goto LABEL_8;
LABEL_9:
  v6 = *(_QWORD *)(a1 + 8);
  if ( **(_DWORD **)(v6 + 48) == 9 )
  {
LABEL_22:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_2153CB0((__int64 *)v6, &v10) )
      {
        v8 = *(_QWORD *)(a1 + 8);
        v12 = 259;
        v11[0] = "expected identifier in directive";
        return sub_21543E0(v8, (__int64)v11, 0, 0);
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 296LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
        v10,
        v5);
      v6 = *(_QWORD *)(a1 + 8);
      v7 = **(_DWORD **)(v6 + 48);
      if ( v7 == 9 )
        goto LABEL_22;
      if ( v7 != 26 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6);
      v6 = *(_QWORD *)(a1 + 8);
    }
    v11[0] = "unexpected token in directive";
    v12 = 259;
    return sub_21543E0(v6, (__int64)v11, 0, 0);
  }
}
