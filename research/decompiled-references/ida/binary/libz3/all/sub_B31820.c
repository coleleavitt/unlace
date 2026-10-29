__int64 __fastcall sub_B31820(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 *v3; // r13
  _QWORD *v4; // rcx
  unsigned int v5; // r14d
  _QWORD *v6; // rbp
  __int64 v7; // r12
  _QWORD *v8; // r15
  unsigned int v9; // eax
  __int64 *v11; // [rsp+0h] [rbp-48h]
  __int64 v12; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * a2);
  v3 = *(__int64 **)(v2 + 16);
  v12 = v2;
  if ( !v3 )
    return 0;
  v11 = &v3[*((unsigned int *)v3 - 1)];
  if ( v11 == v3 )
  {
    return 0;
  }
  else
  {
    v4 = *(_QWORD **)(v2 + 8);
    v5 = 0;
    do
    {
      if ( !v4 )
        break;
      while ( 1 )
      {
        v6 = &v4[*((unsigned int *)v4 - 1)];
        if ( v6 == v4 )
          break;
        v7 = *v3;
        v8 = v4;
        do
        {
          v9 = sub_BE3B20(a1, v7, *v8);
          if ( (_BYTE)v9 )
          {
            ++*(_DWORD *)(a1 + 280);
            v5 = v9;
          }
          ++v8;
        }
        while ( v6 != v8 );
        if ( ++v3 != v11 )
        {
          v4 = *(_QWORD **)(v12 + 8);
          if ( v4 )
            continue;
        }
        return v5;
      }
      ++v3;
    }
    while ( v11 != v3 );
  }
  return v5;
}

