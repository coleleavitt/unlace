__int64 __fastcall sub_1F5CCC0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  *(_DWORD *)(a2 + 84) = v5;
  v6 = sub_C03920(v5);
  *(_DWORD *)(a2 + 72) = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(*a1 + 8);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v7 + 13072))-- - 8);
    v9 = *(_DWORD *)(a2 + 72) == 1;
    *(_QWORD *)(a2 + 16) = v8;
    if ( !v9 )
    {
      v10 = *(_QWORD *)(*a1 + 8);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v10 + 13072))-- - 8);
      v9 = *(_DWORD *)(a2 + 72) == 2;
      *(_QWORD *)(a2 + 24) = v11;
      if ( !v9 )
      {
        v12 = *(_QWORD *)(*a1 + 8);
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 13072))-- - 8);
        v9 = *(_DWORD *)(a2 + 72) == 3;
        *(_QWORD *)(a2 + 32) = v13;
        if ( !v9 )
        {
          v14 = *(_QWORD *)(*a1 + 8);
          v15 = *(_QWORD *)(*(_QWORD *)(v14 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v14 + 13072))-- - 8);
          v9 = *(_DWORD *)(a2 + 72) == 4;
          *(_QWORD *)(a2 + 40) = v15;
          if ( !v9 )
          {
            v16 = *(_QWORD *)(*a1 + 8);
            v17 = *(_QWORD *)(*(_QWORD *)(v16 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v16 + 13072))-- - 8);
            v9 = *(_DWORD *)(a2 + 72) == 5;
            *(_QWORD *)(a2 + 48) = v17;
            if ( !v9 )
            {
              v18 = *(_QWORD *)(*a1 + 8);
              v19 = *(_QWORD *)(*(_QWORD *)(v18 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v18 + 13072))-- - 8);
              v9 = *(_DWORD *)(a2 + 72) == 6;
              *(_QWORD *)(a2 + 56) = v19;
              if ( !v9 )
              {
                v20 = *(_QWORD *)(*a1 + 8);
                v21 = *(_QWORD *)(*(_QWORD *)(v20 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v20 + 13072))-- - 8);
                *(_QWORD *)(a2 + 64) = v21;
              }
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 76) = sub_1EE7490(*a1);
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 80) = result;
  return result;
}
