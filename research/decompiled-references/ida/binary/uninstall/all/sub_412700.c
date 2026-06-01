__int64 __fastcall sub_412700(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // ebx
  int v10; // r8d
  int v11; // r9d
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  _QWORD *v20; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v21[5]; // [rsp+14h] [rbp-14h] BYREF

  if ( a3 > 1 )
  {
    if ( a3 == 2 )
    {
      v13 = *(_QWORD **)(a2 + 952);
      v14 = *(_QWORD *)(a4 + 8);
      v21[0] = 1;
      v20 = v13;
      sub_40A230(a2, v14, &v20, v21);
      v9 = sub_40B720(a2, *(_QWORD *)(a4 + 8), 0x40000, v20, v21[0]);
      if ( v9 != 1 )
        return v9;
    }
    else
    {
      v6 = sub_49E2D0((unsigned int)(a3 - 1), a4 + 8);
      v9 = sub_40B720(a2, v6, 0x40000, nullptr, 0);
      if ( v9 != 1 )
        return v9;
    }
    v15 = sub_48F930((unsigned int)"\n    (\"eval\" body line %d)", *(_DWORD *)(a2 + 16), v7, v8, v10, v11);
    sub_40ABA0(a2, v15, v16, v17, v18, v19);
    return v9;
  }
  sub_458930(a2, 1, a4, "arg ?arg ...?");
  return 1;
}

