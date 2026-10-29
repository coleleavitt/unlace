__int64 __fastcall sub_D0EE20(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  _BYTE v10[88]; // [rsp+0h] [rbp-58h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v3;
  v5 = *(_QWORD *)(a1 + 1232);
  v6 = a1 + 384;
  *(_QWORD *)(a1 + 1240) = *a3;
  v7 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
  if ( (unsigned __int8)sub_DC8930(a1 + 384, v5, v7, 2) && (unsigned __int8)sub_DC8DB0(v6, v5, v7, 2) )
  {
    sub_E23220(v10, *(_QWORD *)(v7 + 32), (unsigned int)(a2 + *(_DWORD *)v7), (unsigned int)(a2 + *(_DWORD *)v7));
    v3 = sub_DCC160(v6, v5, v10, 0);
    if ( (_BYTE)v3 )
    {
      v8 = sub_D0EA30((__int64)v10);
      v9 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
      sub_E231E0(v9, v8);
    }
    sub_E232A0(v10);
    return v3;
  }
  return 0;
}
