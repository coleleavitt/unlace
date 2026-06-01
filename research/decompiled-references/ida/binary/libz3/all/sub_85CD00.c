__int64 __fastcall sub_85CD00(__int64 a1, unsigned int a2)
{
  int v2; // r11d
  __int64 *v3; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 **v7; // rdx
  __int64 **v8; // r9
  int v9; // r8d
  int v10; // esi
  int v11; // edi
  __int64 *v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rax
  int v15; // ebx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx

  v2 = *(_DWORD *)(a1 + 112);
  v3 = *(__int64 **)(*(_QWORD *)(a1 + 88) + 8LL * a2);
  v4 = v3[8];
  v5 = *v3;
  if ( *(_WORD *)(v5 + 4)
    || (v6 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) == nullptr
    || *v6 != v2
    || (result = 1, v6[1] != 3) )
  {
    v7 = *(__int64 ***)(v4 + 48);
    if ( !v7 )
      return 0;
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v8 == v7 )
    {
      return 0;
    }
    else
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = *v7;
        v13 = **v7;
        if ( !*(_WORD *)(v13 + 4) )
        {
          v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
          if ( v14 )
          {
            if ( v2 == *v14 )
            {
              v15 = *((_DWORD *)v12 + 38);
              if ( v14[1] )
              {
                if ( v14[1] == 1 )
                {
                  v24 = v12[22];
                  LOBYTE(v24) = *(_QWORD *)(v24 + 64) == v4;
                  v11 |= v24;
                  if ( (unsigned int)(v15 - 1) > 1 )
                  {
                    v25 = v12 + 23;
                    v26 = (__int64)&v12[(unsigned int)(v15 - 3) + 24];
                    do
                    {
                      v27 = *v25;
                      LOBYTE(v27) = *(_QWORD *)(*v25++ + 64) == v4;
                      v10 |= v27;
                    }
                    while ( (__int64 *)v26 != v25 );
                  }
                }
                else if ( v14[1] == 2 )
                {
                  v16 = v12[22];
                  LOBYTE(v16) = *(_QWORD *)(v16 + 64) == v4;
                  v9 |= v16;
                }
              }
              else
              {
                v18 = v12[22];
                v19 = (unsigned int)(v15 - 1);
                LOBYTE(v18) = *(_QWORD *)(v18 + 64) == v4;
                v11 |= v18;
                if ( (unsigned int)v19 > 1 )
                {
                  v20 = v12 + 23;
                  v21 = (__int64)&v12[(unsigned int)(v15 - 3) + 24];
                  do
                  {
                    v22 = *v20;
                    LOBYTE(v22) = *(_QWORD *)(*v20++ + 64) == v4;
                    v10 |= v22;
                  }
                  while ( (__int64 *)v21 != v20 );
                }
                v23 = v12[v19 + 22];
                LOBYTE(v23) = *(_QWORD *)(v23 + 64) == v4;
                v9 |= v23;
              }
            }
          }
        }
        if ( (unsigned __int8)v9 + (unsigned __int8)v10 + (unsigned __int8)v11 > 1 )
          return 1;
        ++v7;
      }
      while ( v8 != v7 );
      return 0;
    }
  }
  return result;
}

