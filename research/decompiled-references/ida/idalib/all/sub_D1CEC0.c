__int64 __fastcall sub_D1CEC0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebp
  __int64 v6; // r15
  __int64 v7; // rbx
  void *v8; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-80h]
  int v10; // [rsp+10h] [rbp-78h]
  _BYTE v11[104]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24)) )
  {
    sub_D0AF80((__int64)&v8, *(_QWORD *)(a1 + 176));
    v6 = *(_QWORD *)(a1 + 400);
    v4 = sub_DCA720(a1, a2, v6 + 40);
    if ( (_BYTE)v4 )
    {
      sub_E23220(
        v11,
        *(_QWORD *)(v6 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v6 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v6 + 40)));
      v4 = sub_DCBF60(a1, a2, v11);
      if ( (_BYTE)v4 )
      {
        v7 = sub_D0F1C0((__int64)v11);
        sub_C20980(v7, (__int64 *)&v8);
        *(_DWORD *)(v7 + 16) = v10;
      }
      sub_E232A0(v11);
    }
    if ( v9 > 0x40 && v8 )
      operator delete[](v8);
  }
  return v4;
}
