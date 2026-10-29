unsigned __int64 __fastcall sub_10C1170(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rbp
  void *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  unsigned int v13; // eax

  v3 = 16 * a3;
  v4 = a2 + v3;
  if ( a2 + v3 == a2 )
    return 0;
  v5 = a2;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 + 8);
      if ( v7 )
        break;
      v5 += 16;
      if ( v4 == v5 )
        return v6;
    }
    v8 = *(void **)v5;
    v9 = sub_22BE180(*(void **)v5, *(_QWORD *)(v5 + 8));
    if ( v9 )
    {
      v10 = sub_22BE560(v9);
      v11 = 2 * (unsigned int)sub_22BEAC0(v10) + 1;
    }
    else
    {
      v13 = sub_10C0560((__int64)v8, v7);
      v11 = 2 * (unsigned int)sub_22BEAC0(v13);
    }
    if ( v6 < v11 )
      v6 = v11;
    v5 += 16;
  }
  while ( v4 != v5 );
  return v6;
}
