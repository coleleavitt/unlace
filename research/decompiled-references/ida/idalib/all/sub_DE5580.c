__int64 __fastcall sub_DE5580(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebp
  _WORD *v5; // r13
  _DWORD v6[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v6);
  sub_E21790(v2, 48);
  v3 = sub_DCC160(a1, a2, (__int64)v6, 0);
  if ( (_BYTE)v3 )
  {
    if ( v6[6] )
    {
      v3 = 0;
    }
    else
    {
      v5 = (_WORD *)sub_D0CDE0((__int64)v6);
      *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *v5;
    }
  }
  sub_E232A0(v6);
  return v3;
}
