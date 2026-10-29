__int64 __fastcall sub_82A400(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // r14

  v6 = sub_FF9E10(*(_QWORD *)(a1 + 496), a2);
  v7 = v6;
  if ( v6 != -1 )
  {
    v8 = *(_DWORD *)(a1 + 392);
    if ( v8 < *(_DWORD *)(sub_7E4EB0(a1) + 344)
      && *(_DWORD *)(sub_7E4EB0(a1) + 268) == 2
      && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 3616LL) == *(_DWORD *)(*(_QWORD *)(a1 + 24) + 3612LL) )
    {
      return 1;
    }
    v9 = *(_QWORD *)(a1 + 320);
    if ( v9 )
    {
      if ( (unsigned int)v7 < *(_DWORD *)(v9 - 4) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 328) + 4 * v7) )
        {
          v10 = *(__int64 **)(v9 + 8 * v7);
          if ( v10 )
          {
            v11 = &v10[*((unsigned int *)v10 - 1)];
            if ( v11 != v10 )
            {
              while ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * *(unsigned int *)(*v10 + 8))
                   || (unsigned int)sub_82A290(a1, a3, a4, *v10) == -2 )
              {
                if ( v11 == ++v10 )
                  return 0;
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

