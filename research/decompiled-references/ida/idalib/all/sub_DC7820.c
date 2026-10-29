__int64 __fastcall sub_DC7820(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  unsigned int v3; // eax

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(unsigned __int8 *)sub_E21760(v1, 8);
  sub_E21790(v1, 8);
  if ( !(_BYTE)v2 )
  {
    v3 = sub_E206C0(*(_QWORD *)(a1 + 400));
    sub_E33B30(a1, v3, 2382, 0);
  }
  return v2;
}
