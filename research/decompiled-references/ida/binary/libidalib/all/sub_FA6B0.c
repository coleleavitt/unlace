bool __fastcall sub_FA6B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r12
  int v6; // eax
  bool v7; // zf
  bool result; // al

  v3 = a1[36];
  if ( v3 == a1[32] )
    return 0;
  if ( v3 == a1[37] )
    v3 = *(_QWORD *)(a1[39] - 8LL) + 400LL;
  v5 = a1[1];
  v6 = sub_162810(v5, *(_QWORD *)(v3 - 200), a2);
  v7 = v6 == 0;
  if ( v6 < 0 )
    return 0;
  result = 1;
  if ( !v7 )
    return (int)sub_162810(v5, *(_QWORD *)a1[32], a3) <= 0;
  return result;
}

