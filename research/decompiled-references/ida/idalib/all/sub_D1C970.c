__int64 __fastcall sub_D1C970(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 v7; // r12
  void *v8; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-70h]
  int v10; // [rsp+10h] [rbp-68h]
  _BYTE v11[88]; // [rsp+20h] [rbp-58h] BYREF

  sub_D0AF80((__int64)&v8, *(_QWORD *)(a1 + 176));
  v4 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( (unsigned __int8)sub_DC8930(a1, a2, v4, 2) && (unsigned __int8)sub_DC8DB0(a1, a2, v4, 2) )
  {
    sub_E23220(v11, *(_QWORD *)(v4 + 32), (unsigned int)(a3 + *(_DWORD *)v4), (unsigned int)(a3 + *(_DWORD *)v4));
    v5 = sub_DCBF60(a1, a2, v11);
    if ( (_BYTE)v5 )
    {
      sub_E24D00(v11);
      v7 = sub_D0F1C0((__int64)v11);
      sub_C20980(v7, (__int64 *)&v8);
      *(_DWORD *)(v7 + 16) = v10;
    }
    sub_E232A0(v11);
  }
  else
  {
    v5 = 0;
  }
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  return v5;
}
