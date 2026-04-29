__int64 __fastcall sub_27E740(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbp
  unsigned int v4; // r13d
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // rax

  v2 = *(_DWORD *)(a1 + 24) - 1;
  if ( v2 < 0 )
  {
    return 0;
  }
  else
  {
    v3 = 8LL * v2;
    v4 = 0;
    v5 = 8 * (v2 - (unsigned __int64)(unsigned int)v2);
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + v3);
      v7 = *(_DWORD *)(v6 + 8);
      if ( v7 > 69 )
        break;
      if ( v7 == 48 )
        return v4;
      v4 |= sub_27CB50(
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + v3),
              *(_QWORD *)(a2 + 96),
              0,
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + v3));
      sub_23EE00(v6, a2, 0);
      if ( v3 == v5 )
        return v4;
      v3 -= 8;
    }
    if ( v7 == 73 )
    {
      v9 = sub_23C4F0(*(_QWORD *)(v6 + 24));
      if ( v9 != -1 )
        *(_QWORD *)v6 = v9;
    }
  }
  return v4;
}
