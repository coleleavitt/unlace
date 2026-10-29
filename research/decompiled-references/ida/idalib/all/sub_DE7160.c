__int64 __fastcall sub_DE7160(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebp
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned int v7; // eax
  _DWORD v8[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v8);
  sub_E21790(v2, 48);
  v3 = sub_DCC160(a1, a2, (__int64)v8, 0);
  if ( (_BYTE)v3 )
  {
    if ( v8[6] )
    {
      v3 = 0;
    }
    else
    {
      v5 = sub_D0F1C0((__int64)v8);
      v6 = sub_E216C0(*(_QWORD *)(a1 + 176), 24);
      v7 = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(v6 + 8) = v7;
      if ( v7 > 0x40 )
        sub_2205510(v6);
      else
        *(_QWORD *)v6 = *(_QWORD *)v5;
      *(_BYTE *)(v6 + 12) = *(_BYTE *)(v5 + 12);
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 16);
    }
  }
  sub_E232A0(v8);
  return v3;
}
