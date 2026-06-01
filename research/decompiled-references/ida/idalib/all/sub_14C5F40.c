bool __fastcall sub_14C5F40(__int64 a1, int *a2, int *a3)
{
  __int64 v4; // r12
  int v5; // eax
  int v6; // ebx
  int v7; // eax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v5 = *a2;
  if ( *a2 < 0 )
  {
    v6 = a2[1] + sub_1021B90(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL), v5);
    v7 = *a3;
    if ( *a3 >= 0 )
      return v6 == v7;
  }
  else
  {
    v6 = a2[1] + v5;
    v7 = *a3;
    if ( *a3 >= 0 )
      return v6 == v7;
  }
  return v6 == (unsigned int)sub_1021B90(v4, v7);
}
