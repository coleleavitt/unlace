__int64 __fastcall sub_56DFD0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbp
  int v3; // r15d
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 i; // rbx
  int v10; // eax
  int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-40h]

  v13 = *(_QWORD *)(a1 + 80);
  v1 = sub_17E8B20(**(_QWORD **)(a1 + 24) + v13, *(unsigned int *)(a1 + 32), 0);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = v1;
  v4 = *(unsigned int *)(a1 + 64);
  v5 = v4 - 1;
  v4 *= 16;
  v6 = v2 + v4;
  v7 = 16LL * (v3 & v5);
  v8 = v2 + v7;
  if ( v7 != v4 )
  {
    for ( i = v2 + v7; v6 != i; i += 16 )
    {
      v10 = *(_DWORD *)(i + 4);
      if ( v10 == 2 )
      {
        if ( v3 == *(_DWORD *)i
          && !memcmp(
                (const void *)(*(_QWORD *)(i + 8) + **(_QWORD **)(a1 + 40)),
                (const void *)(**(_QWORD **)(a1 + 40) + v13),
                *(unsigned int *)(a1 + 48)) )
        {
LABEL_8:
          sub_56D9F0((unsigned int *)a1, *(_QWORD *)(i + 8));
          return 1;
        }
      }
      else if ( !v10 )
      {
        return 0;
      }
    }
  }
  for ( ; v8 != v2; v2 += 16 )
  {
    v12 = *(_DWORD *)(v2 + 4);
    if ( v12 == 2 )
    {
      if ( v3 == *(_DWORD *)v2
        && !memcmp(
              (const void *)(*(_QWORD *)(v2 + 8) + **(_QWORD **)(a1 + 40)),
              (const void *)(**(_QWORD **)(a1 + 40) + v13),
              *(unsigned int *)(a1 + 48)) )
      {
        i = v2;
        goto LABEL_8;
      }
    }
    else if ( !v12 )
    {
      return 0;
    }
  }
  return 0;
}

