__int64 __fastcall sub_CFFAE0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // r12
  unsigned int v5; // eax

  v2 = 1;
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return v2;
  v4 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v2 = *(unsigned __int8 *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  if ( (_BYTE)v2 )
    return v2;
  v5 = sub_E206C0(*(_QWORD *)(a1 + 784));
  sub_E33B30(a1 + 384, v5, 2382, 0);
  return v2;
}
