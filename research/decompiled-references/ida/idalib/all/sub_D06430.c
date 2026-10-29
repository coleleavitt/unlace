__int64 __fastcall sub_D06430(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  _BYTE v9[88]; // [rsp+0h] [rbp-58h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v3;
  v5 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a3;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408)) )
  {
    v6 = *(_QWORD *)(a1 + 784);
    v3 = sub_DCA720(a1 + 384, v5, v6 + 40);
    if ( (_BYTE)v3 )
    {
      v7 = *(_QWORD *)(a1 + 560);
      sub_E23220(
        v9,
        *(_QWORD *)(v6 + 72),
        (unsigned int)(a2 + *(_DWORD *)(v6 + 40)),
        (unsigned int)(a2 + *(_DWORD *)(v6 + 40)));
      v8 = sub_E216C0(v7, 48);
      sub_E23260(v8);
      sub_E232A0(v9);
      return v3;
    }
  }
  return 0;
}
