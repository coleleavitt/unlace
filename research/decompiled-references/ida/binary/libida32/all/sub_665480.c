__int64 __fastcall sub_665480(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // r13d
  unsigned int v6; // r14d

  v3 = a3;
  if ( (unsigned int)sub_4F8800((__int64)a1, *(_DWORD *)(a2 + 28)) == a3 )
    return 1;
  v5 = *(_DWORD *)(a2 + 28);
  if ( v3 > 0xFFFF && !*(_DWORD *)(a1[2] + 4) )
  {
    v6 = sub_4F8420((__int64)a1);
    sub_4F8530((__int64)a1, v6, v3);
    v3 = v6;
  }
  *(_DWORD *)(a2 + 28) = v3;
  if ( !(unsigned __int8)sub_4F86C0((__int64)a1, v5) )
    sub_4F8690((__int64)a1, v5);
  sub_4F8940(*a1);
  return 1;
}

