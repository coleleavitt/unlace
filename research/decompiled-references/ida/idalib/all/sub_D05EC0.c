__int64 __fastcall sub_D05EC0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int v13; // r14d
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  _DWORD v17[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+20h] [rbp-48h]
  unsigned int v19; // [rsp+28h] [rbp-40h]

  v3 = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v5 = *(_QWORD *)(a1 + 1232);
    *(_QWORD *)(a1 + 1240) = *a3;
    v6 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
    v3 = sub_DC8930(a1 + 384, v5, v6, 0);
    if ( !(_BYTE)v3 )
      return 0;
    if ( *(_DWORD *)(v6 + 24) )
    {
      v7 = *(_QWORD *)(a1 + 560);
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 104LL))(*(_QWORD *)(a1 + 408));
      v9 = sub_E24F10(v6 + 32, v8, a2);
      v11 = v10;
      v12 = sub_E216C0(v7, 48);
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      *(_DWORD *)(v12 + 24) = 1;
      *(_QWORD *)(v12 + 32) = v9;
      *(_QWORD *)(v12 + 40) = v11;
      return v3;
    }
    v13 = sub_DC90B0(a1 + 384, v5, v6, 0);
    if ( !(_BYTE)v13 )
      return 0;
    sub_E23220(v17, *(_QWORD *)(v6 + 32), a2 + *(_DWORD *)v6, a2 + *(_DWORD *)v6);
    LOBYTE(v14) = sub_CFE870((__int64)v17);
    v3 = v14;
    if ( (_BYTE)v14 )
    {
      v3 = 0;
    }
    else if ( !v17[6] && !(unsigned __int8)sub_CFE580((__int64)v17) )
    {
      v15 = *(_QWORD *)sub_CFDF60((__int64)v17);
      if ( (v15 & 2) == 0 && (v15 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_BYTE *)(v18 + v19 + 28) & 4) != 0 )
      {
        v3 = v13;
        v16 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
        sub_E231E0(v16, v17);
      }
    }
    sub_E232A0(v17);
  }
  return v3;
}
