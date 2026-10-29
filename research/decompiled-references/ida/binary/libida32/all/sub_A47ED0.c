unsigned __int64 __fastcall sub_A47ED0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int8 v7; // al

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 16);
  if ( a2 )
    v4 = a2 - 24;
  v6 = sub_F33E10(v4);
  v7 = sub_F33E00(v4);
  sub_F33E20(a3, v5, v7, v6);
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

