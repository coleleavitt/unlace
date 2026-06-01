__int64 __fastcall sub_DD52E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  _DWORD v5[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v5);
  sub_E21790(v2, 48);
  v3 = sub_DCC160(a1, a2, (__int64)v5, 4);
  if ( (_BYTE)v3 )
  {
    v3 = sub_E21C70(a1);
    if ( (_BYTE)v3 || v5[6] || !sub_DB0AB0((__int64)v5) )
    {
      sub_E32240(a1);
      v3 = sub_CFEE20(a1, (__int64)a2);
    }
  }
  sub_E232A0(v5);
  return v3;
}
