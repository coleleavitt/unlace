__int64 __fastcall sub_D1D0D0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebp
  __int64 v6; // r15
  __int64 v7; // rbx
  _BYTE v8[48]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v9[48]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v10; // [rsp+60h] [rbp-48h]
  int v11; // [rsp+68h] [rbp-40h]

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24)) )
  {
    sub_D0A640((__int64)v9, *(_QWORD *)(a1 + 176));
    v6 = *(_QWORD *)(a1 + 400);
    v4 = sub_DCA720(a1, a2, v6 + 40);
    if ( (_BYTE)v4 )
    {
      sub_E23220(
        v8,
        *(_QWORD *)(v6 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v6 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v6 + 40)));
      v4 = sub_DCBF60(a1, a2, v8);
      if ( (_BYTE)v4 )
      {
        v7 = sub_D0EF40((__int64)v8);
        sub_E23300(v7, v9);
        *(_QWORD *)(v7 + 48) = v10;
        *(_DWORD *)(v7 + 56) = v11;
      }
      sub_E232A0(v8);
    }
    sub_E232A0(v9);
  }
  return v4;
}
