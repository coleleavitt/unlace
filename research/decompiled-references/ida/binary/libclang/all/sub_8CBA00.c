__int64 __fastcall sub_8CBA00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v9; // [rsp+8h] [rbp-40h]

  v3 = 0;
  v9 = a3;
  v4 = sub_A270C0(*(_QWORD *)(a1 + 24), a3);
LABEL_2:
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    v6 = v5 + 32LL * *(unsigned int *)(v4 + 16);
    if ( v5 == v6 )
      break;
    do
    {
      v7 = *(_QWORD *)v5;
      if ( *(_QWORD *)v5 == a2 )
      {
        v3 += *(_DWORD *)(v5 + 8);
        return v3;
      }
      if ( (unsigned __int8)sub_777930(*(_QWORD *)v5, a2) )
      {
        v4 = *(_QWORD *)(v5 + 24);
        v3 += *(_DWORD *)(v5 + 8);
        v9 = v7;
        goto LABEL_2;
      }
      v5 += 32;
    }
    while ( v6 != v5 );
    if ( v9 == a2 )
      return v3;
  }
  if ( v9 != a2 )
  {
    while ( 1 )
      ;
  }
  return v3;
}

