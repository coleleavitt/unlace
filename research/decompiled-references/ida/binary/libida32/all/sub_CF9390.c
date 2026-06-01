__int64 __fastcall sub_CF9390(__int64 a1, __int64 a2, int a3)
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
    sub_CE6900((__int64)v9, *(_QWORD *)(a1 + 176));
    v6 = *(_QWORD *)(a1 + 400);
    v4 = sub_DA69E0(a1, a2, v6 + 40);
    if ( (_BYTE)v4 )
    {
      sub_DFF4E0(
        v8,
        *(_QWORD *)(v6 + 72),
        (unsigned int)(a3 + *(_DWORD *)(v6 + 40)),
        (unsigned int)(a3 + *(_DWORD *)(v6 + 40)));
      v4 = sub_DA8220(a1, a2, v8);
      if ( (_BYTE)v4 )
      {
        v7 = sub_CEB200((__int64)v8);
        sub_DFF5C0(v7, v9);
        *(_QWORD *)(v7 + 48) = v10;
        *(_DWORD *)(v7 + 56) = v11;
      }
      sub_DFF560(v8);
    }
    sub_DFF560(v9);
  }
  return v4;
}

