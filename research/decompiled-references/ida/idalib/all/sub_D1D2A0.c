__int64 __fastcall sub_D1D2A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rbx
  void *v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-40h]
  int v8; // [rsp+10h] [rbp-38h]

  sub_D0AF80((__int64)&v6, *(_QWORD *)(a1 + 176));
  v2 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DCBF60(a1, a2, v2);
  if ( (_BYTE)v3 )
  {
    if ( !*(_DWORD *)(v2 + 24) && *(_QWORD *)(v2 + 32) && *(_DWORD *)(v2 + 40) )
    {
      sub_E24D00(v2);
      sub_E23CF0(v2);
    }
    v4 = sub_D0F1C0(v2);
    sub_C20980(v4, (__int64 *)&v6);
    *(_DWORD *)(v4 + 16) = v8;
  }
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  return v3;
}
