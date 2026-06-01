void __fastcall sub_641080(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbp
  __int64 *v4; // rbx
  __int64 *v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // rax

  v2 = *(_QWORD **)(a2 + 32);
  v3 = &v2[2 * *(unsigned int *)(a2 + 40)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v3 == v2 )
        return;
    }
    while ( v3 != v2 )
    {
      v4 = *(__int64 **)v2[1];
      if ( v4 )
      {
        v5 = &v4[*((unsigned int *)v4 - 1)];
        while ( v5 != v4 )
        {
          v6 = *v4++;
          sub_640660(a1, v6);
        }
      }
      v7 = v2 + 2;
      if ( v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v7;
        if ( *v7 > 1u )
          break;
        v7 += 2;
        if ( v3 == v7 )
          return;
      }
    }
  }
}

