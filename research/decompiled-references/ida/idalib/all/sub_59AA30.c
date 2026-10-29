__int64 __fastcall sub_59AA30(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // r13
  int v7; // eax
  __int64 *v9; // r15
  unsigned __int64 v10; // r14
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v5 = sub_3BDA80((__int64)a1, a2);
  if ( (unsigned __int64)v5 <= 0x3F )
    a3 &= ~(-1LL << v5);
  if ( (unsigned __int8)sub_3C0260(a1, a2) )
  {
    sub_3BEFF0(a1, v14, a2);
    v6 = v14[0];
    if ( a3 == v14[0] )
      return 0;
  }
  else
  {
    v6 = -1;
  }
  v7 = sub_3CEB40(*(_QWORD *)(*a1 + 1672), a2, a3, 3);
  if ( !v7 )
    return 0;
  if ( (v7 & 1) != 0 )
  {
    v9 = a1 + 300;
    v10 = sub_3BDD60(a1, a2);
    v11 = sub_7BE710(a1 + 300, *a1, v10, 4176);
    v12 = *a1;
    if ( v11 )
    {
      if ( a3 == sub_7BE710(a1 + 300, v12, v10, 65) )
      {
        v13 = *a1;
        sub_7BE850(v9, *a1, v10, 4176);
        sub_7BE850(v9, v13, v10, 65);
      }
    }
    else
    {
      LOBYTE(v14[0]) = 1;
      sub_7BE7C0(v9, v12, v10, v14, 1, 80);
      v14[0] = v6;
      sub_7BE7C0(v9, v12, v10, v14, 8, 65);
    }
  }
  sub_39ADA0(0x35u, a2, v6);
  return 1;
}
