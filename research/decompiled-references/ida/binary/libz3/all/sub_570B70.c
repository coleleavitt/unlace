__int64 __fastcall sub_570B70(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  __int64 v3; // rbp
  int v4; // r15d
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 i; // rbx
  int v11; // eax
  int v12; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+8h] [rbp-40h]

  v2 = sub_17E8B20(**(_QWORD **)a1 + *a2, *(unsigned int *)(a1 + 8), 0);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  v5 = *(unsigned int *)(a1 + 40);
  v6 = v5 - 1;
  v5 *= 16;
  v7 = v3 + v5;
  v8 = 16LL * (v4 & v6);
  v9 = v3 + v8;
  if ( v8 != v5 )
  {
    for ( i = v3 + v8; v7 != i; i += 16 )
    {
      v11 = *(_DWORD *)(i + 4);
      if ( v11 == 2 )
      {
        if ( v4 == *(_DWORD *)i )
        {
          v16 = v9;
          v12 = memcmp(
                  (const void *)(*(_QWORD *)(i + 8) + **(_QWORD **)(a1 + 16)),
                  (const void *)(**(_QWORD **)(a1 + 16) + *a2),
                  *(unsigned int *)(a1 + 24));
          v9 = v16;
          if ( !v12 )
            return i;
        }
      }
      else if ( !v11 )
      {
        return 0;
      }
    }
  }
  for ( ; v9 != v3; v3 += 16 )
  {
    v14 = *(_DWORD *)(v3 + 4);
    if ( v14 == 2 )
    {
      if ( v4 == *(_DWORD *)v3 )
      {
        v17 = v9;
        v15 = memcmp(
                (const void *)(*(_QWORD *)(v3 + 8) + **(_QWORD **)(a1 + 16)),
                (const void *)(**(_QWORD **)(a1 + 16) + *a2),
                *(unsigned int *)(a1 + 24));
        v9 = v17;
        if ( !v15 )
          return v3;
      }
    }
    else if ( !v14 )
    {
      return 0;
    }
  }
  return 0;
}

