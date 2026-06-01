__int64 __fastcall sub_21485B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  _DWORD **v5; // rdi
  int v6; // eax
  __int64 v7; // rdi
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v10[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]

  if ( a3 != 5 )
  {
    if ( a3 == 14
      && *(_QWORD *)a2 == 0x6E615F6B6165772ELL
      && *(_DWORD *)(a2 + 8) == 1683974516
      && *(_WORD *)(a2 + 12) == 28773 )
    {
      v4 = 28;
      goto LABEL_4;
    }
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  if ( *(_DWORD *)a2 != 1634039598 )
    goto LABEL_3;
  v4 = 24;
  if ( *(_BYTE *)(a2 + 4) != 107 )
    goto LABEL_3;
LABEL_4:
  v5 = *(_DWORD ***)(a1 + 8);
  if ( *v5[6] == 9 )
  {
LABEL_11:
    (*((void (__fastcall **)(_DWORD **))*v5 + 19))(v5);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_2153CB0(v5, &v9) )
      {
        v7 = *(_QWORD *)(a1 + 8);
        v11 = 259;
        v10[0] = "expected identifier in directive";
        return sub_21543E0(v7, v10, 0, 0);
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 296LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
        v9,
        v4);
      v5 = *(_DWORD ***)(a1 + 8);
      v6 = *v5[6];
      if ( v6 == 9 )
        goto LABEL_11;
      if ( v6 != 26 )
        break;
      (*((void (__fastcall **)(_DWORD **))*v5 + 19))(v5);
      v5 = *(_DWORD ***)(a1 + 8);
    }
    v10[0] = "unexpected token in directive";
    v11 = 259;
    return sub_21543E0(v5, v10, 0, 0);
  }
}
