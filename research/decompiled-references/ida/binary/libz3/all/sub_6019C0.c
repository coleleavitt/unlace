__int64 __fastcall sub_6019C0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 *v4; // rbp
  __int64 *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned __int8 v11; // [rsp+7h] [rbp-41h]

  v4 = *(__int64 **)(a2 + 24);
  if ( !v4 )
    return 0;
  v5 = &v4[*((unsigned int *)v4 - 1)];
  if ( v4 == v5 )
    return 0;
  v11 = 0;
  do
  {
    v6 = *v4;
    v7 = *(_QWORD *)(a1 + 32);
    if ( *v4 )
      sub_62A000(*(_QWORD *)(a1 + 32), *v4);
    if ( !(unsigned __int8)sub_5FBCB0(a1, a2, *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL)) )
      v11 |= sub_6015D0(a1, a2, v6, a3, a4);
    ++v4;
    sub_62A410(v7, v6);
  }
  while ( v5 != v4 );
  if ( v11 )
  {
    if ( *(_QWORD *)(a1 + 464) )
    {
      v8 = *(_QWORD *)(a2 + 24);
      if ( v8 )
      {
        v9 = v8 + 8LL * *(unsigned int *)(v8 - 4);
        while ( v9 != v8 )
        {
          while ( !(unsigned __int8)sub_5FBCB0(a1, a2, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 40LL) + 16LL)) )
          {
            v8 += 8;
            if ( v9 == v8 )
              return v11;
          }
          v8 += 8;
          sub_6481D0(*(_QWORD *)(a1 + 464));
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v11;
}

