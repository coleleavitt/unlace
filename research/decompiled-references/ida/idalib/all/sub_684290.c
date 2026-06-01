__int64 __fastcall sub_684290(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r14

  v3 = a3;
  if ( sub_510110((__int64)a1, *(_QWORD *)(a2 + 48)) == a3 )
    return 1;
  v5 = *(_QWORD *)(a2 + 48);
  if ( v3 > 0xFFFF && !*(_DWORD *)(a1[2] + 4) )
  {
    v6 = sub_50FCE0((__int64)a1);
    sub_50FE00((__int64)a1, v6, v3);
    v3 = v6;
  }
  *(_QWORD *)(a2 + 48) = v3;
  if ( !(unsigned __int8)sub_50FFA0((__int64)a1, v5) )
    sub_50FF70((__int64)a1, v5);
  sub_510270(*a1);
  return 1;
}
