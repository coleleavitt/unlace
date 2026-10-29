__int64 __fastcall sub_B448A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // eax
  _DWORD *v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 *v16; // r15
  __int64 v17; // r12
  int v18; // eax
  _DWORD *v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-40h]

  v2 = a1 + 56;
  v3 = sub_15F0200(a1 + 56);
  v4 = *(_DWORD **)(a2 + 24);
  if ( !v4 || v3 != *v4 || v4[1] != 3 )
    return 0;
  v6 = sub_15FCC40(v2, a2);
  v7 = *(_QWORD *)(a1 + 16);
  v20 = v6;
  v8 = *(_QWORD *)(v7 + 8696);
  v9 = *(_DWORD *)a2 + 0x80000000;
  if ( v8 && (unsigned int)v9 < *(_DWORD *)(v8 - 4) )
    v10 = (__int64 *)(v8 + 8 * v9);
  else
    v10 = (__int64 *)(v7 + 8704);
  v11 = *v10;
  if ( !*v10 )
    return 0;
  v12 = v11 + 8LL * *(unsigned int *)(v11 - 4);
  if ( v12 == v11 )
    return 0;
  while ( 1 )
  {
    v13 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 112LL) + 8LL), *(_DWORD *)(a1 + 8));
    if ( v13 != -1 )
    {
      do
      {
        v14 = v13;
        v15 = v13;
        v13 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL * v13);
      }
      while ( v15 != v13 );
      v16 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 8 * v14) + 8LL);
      if ( v16 )
      {
        v17 = *v16;
        v18 = sub_15F0200(v2);
        if ( !*(_WORD *)(v17 + 4) )
        {
          v19 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
          if ( v19 )
          {
            if ( v18 == *v19 && !v19[1] && v20 != *(_QWORD *)(*v16 + 16) )
              break;
          }
        }
      }
    }
    v11 += 8;
    if ( v12 == v11 )
      return 0;
  }
  return 1;
}

