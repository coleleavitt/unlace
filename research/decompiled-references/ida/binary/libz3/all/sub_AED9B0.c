void __fastcall sub_AED9B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 v3; // r8
  _QWORD *v4; // rbp
  unsigned int *v5; // r13
  _QWORD *v6; // rax

  v2 = *(_QWORD **)(a1 + 96);
  v3 = 2LL * *(unsigned int *)(a1 + 104);
  v4 = &v2[v3];
  if ( v2 != &v2[v3] )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v4 == v2 )
        return;
    }
    if ( v4 != v2 )
    {
      do
      {
        v5 = (unsigned int *)v2[1];
        sub_18183E0(a2, "dl prop steps", v5[16]);
        sub_18183E0(a2, "dl impl steps", v5[17]);
        sub_18183E0(a2, "dl impl lits", v5[18]);
        sub_18183E0(a2, "dl impl conf lits", v5[19]);
        sub_18183E0(a2, "dl bound relax", v5[20]);
        v6 = v2 + 2;
        if ( v4 == v2 + 2 )
          break;
        while ( 1 )
        {
          v2 = v6;
          if ( *v6 > 1u )
            break;
          v6 += 2;
          if ( v4 == v6 )
            return;
        }
      }
      while ( v4 != v6 );
    }
  }
}

