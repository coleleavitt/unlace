__int64 __fastcall sub_D0ED00(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // r12
  _QWORD **v7; // rdi
  __int64 (*v8)(void); // rax
  char v9; // al
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  _BYTE v13[88]; // [rsp+0h] [rbp-58h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v3;
  v6 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a3;
  v7 = *(_QWORD ***)(a1 + 408);
  v8 = (__int64 (*)(void))(*v7)[3];
  if ( (char *)v8 == (char *)sub_CF0250 )
    v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v7[3] + 24LL))(v7[3]);
  else
    v9 = v8();
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a1 + 784);
    if ( (unsigned __int8)sub_DCA720(a1 + 384, v6, v10 + 40) )
    {
      sub_E23220(
        v13,
        *(_QWORD *)(v10 + 72),
        (unsigned int)(a2 + *(_DWORD *)(v10 + 40)),
        (unsigned int)(a2 + *(_DWORD *)(v10 + 40)));
      v3 = sub_DCC160(a1 + 384, v6, v13, 0);
      if ( (_BYTE)v3 )
      {
        v11 = sub_D0EA30((__int64)v13);
        v12 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
        sub_E231E0(v12, v11);
      }
      sub_E232A0(v13);
      return v3;
    }
  }
  return 0;
}
