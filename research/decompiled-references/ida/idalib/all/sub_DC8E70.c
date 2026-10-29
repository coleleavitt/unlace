__int64 __fastcall sub_DC8E70(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  __int64 v7; // rax
  _QWORD v8[6]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v9[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v8);
  sub_E21790(v4, 48);
  if ( (unsigned __int8)sub_DC8930(a1, a2, (__int64)v8, 2) && (v5 = sub_DC8DB0(a1, a2, v8, 2), (_BYTE)v5) )
  {
    sub_E23220(v9, v8[4], (unsigned int)(a3 + LODWORD(v8[0])), (unsigned int)(a3 + LODWORD(v8[0])));
    nullsub_501(v8);
    sub_E23CF0(v9);
    v7 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
    sub_E23260(v7);
    sub_E232A0(v9);
  }
  else
  {
    v5 = 0;
  }
  sub_E232A0(v8);
  return v5;
}
