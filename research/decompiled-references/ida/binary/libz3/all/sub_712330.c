__int64 __fastcall sub_712330(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 v3; // r8
  __int64 *v4; // r12
  __int64 v5; // rdx
  unsigned int v6; // r13d
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  bool v12; // zf
  __int64 *v13; // rax
  __int64 v16; // [rsp+18h] [rbp-50h]
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (__int64 *)a1[5];
  v3 = 2LL * *((unsigned int *)a1 + 12);
  v4 = &v2[v3];
  if ( &v2[v3] == v2 )
    return 1;
  while ( (unsigned __int64)*v2 <= 1 )
  {
    v2 += 2;
    if ( v4 == v2 )
      return 1;
  }
  if ( v4 == v2 )
  {
    return 1;
  }
  else
  {
    v5 = *v2;
    v6 = 1;
    do
    {
      v7 = v2[1];
      v16 = *a1;
      sub_1374250(v17, a2, v5);
      v8 = v17[0];
      sub_1374250(v17, a2, v7);
      v9 = v17[0];
      v10 = *(_QWORD *)(*a1 + 856);
      v11 = *(_QWORD *)(*a1 + 864);
      if ( v8 == v10 && v17[0] == v11 )
      {
        v6 = 0;
      }
      else
      {
        LOBYTE(v11) = v8 == v11;
        LOBYTE(v10) = v10 == v17[0];
        v6 &= v10 & v11 ^ 1;
      }
      if ( v17[0] )
      {
        v12 = (*(_DWORD *)(v17[0] + 8LL))-- == 1;
        if ( v12 )
          sub_15D7BC0(v16, v9);
      }
      if ( v8 )
      {
        v12 = (*(_DWORD *)(v8 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v16, v8);
      }
      v13 = v2 + 2;
      if ( v4 == v2 + 2 )
        break;
      while ( 1 )
      {
        v5 = *v13;
        v2 = v13;
        if ( (unsigned __int64)*v13 > 1 )
          break;
        v13 += 2;
        if ( v4 == v13 )
          return v6;
      }
    }
    while ( v4 != v13 );
  }
  return v6;
}

