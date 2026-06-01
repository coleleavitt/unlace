__int64 __fastcall sub_2150370(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 (*v7)(); // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  char v11; // al
  __int64 v13; // rdi
  void **v14; // [rsp+0h] [rbp-68h] BYREF
  void **v15; // [rsp+8h] [rbp-60h]
  void **v16[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v17; // [rsp+30h] [rbp-38h]

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
LABEL_27:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = nullptr;
        v15 = nullptr;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, void ***))(*(_QWORD *)v6 + 160LL))(v6, &v14) )
        {
          v13 = *(_QWORD *)(a1 + 8);
          v17 = 259;
          v16[0] = (void **)"expected identifier";
          return sub_21543E0(v13, v16, 0, 0);
        }
        v6 = *(_QWORD *)(a1 + 8);
        v7 = *(__int64 (**)())(*(_QWORD *)v6 + 72LL);
        if ( v7 == sub_214FF70 )
          break;
        v11 = ((__int64 (__fastcall *)(__int64, void **, void **))v7)(v6, v14, v15);
        v6 = *(_QWORD *)(a1 + 8);
        if ( !v11 )
          break;
        if ( **(_DWORD **)(v6 + 48) == 9 )
          goto LABEL_27;
      }
      v8 = *(_QWORD *)(v6 + 16);
      v17 = 261;
      v16[0] = v14;
      v16[1] = v15;
      v9 = sub_21093A0(v8, v16);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 296LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
        v9,
        v5);
      v6 = *(_QWORD *)(a1 + 8);
      v10 = **(_DWORD **)(v6 + 48);
      if ( v10 == 9 )
        goto LABEL_27;
      if ( v10 != 26 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6);
      v6 = *(_QWORD *)(a1 + 8);
    }
    v16[0] = (void **)"expected comma";
    v17 = 259;
    return sub_21543E0(v6, v16, 0, 0);
  }
}
