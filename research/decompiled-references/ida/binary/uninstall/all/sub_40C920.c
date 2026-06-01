__int64 __fastcall sub_40C920(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v14[40]; // [rsp+10h] [rbp-48h] BYREF

  if ( (unsigned int)sub_40C820(0, a2, a3, a4) )
    return 1;
  v5 = sub_48B5D0(a2);
  v6 = v5;
  if ( *(_UNKNOWN ***)(v5 + 24) == &off_6560E0 )
  {
    v7 = *(_QWORD *)(v5 + 32);
    v13 = v7;
  }
  else
  {
    if ( (unsigned int)sub_47BF00(0, v5, &v13) )
    {
      sub_47C9E0(0, v6, v14);
      sub_4B1D30(v14, 64, v14);
      v10 = sub_47CCC0(v14, 64, v9);
      v11 = *(_DWORD *)v10 + 1;
      if ( *(_UNKNOWN ***)(v10 + 24) == &off_6560E0 )
      {
        v13 = *(_QWORD *)(v10 + 32);
      }
      else
      {
        *(_DWORD *)v10 = v11;
        sub_47BF00(0, v10, &v13);
        v11 = *(_DWORD *)v10;
      }
      v12 = v11 - 1;
      *(_DWORD *)v10 = v12;
      if ( v12 <= 0 )
        sub_47B120(v10);
    }
    v7 = v13;
  }
  v8 = sub_47BE30(v7);
  sub_48AFD0(a2, v8);
  return 0;
}

