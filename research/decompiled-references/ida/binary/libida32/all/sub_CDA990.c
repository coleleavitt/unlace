__int64 __fastcall sub_CDA990(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // r12
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rcx
  int v6; // edi
  int v7; // esi
  int v8; // esi

  v1 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
    {
      v3 = sub_CDA220(a1);
      v4 = *(_DWORD *)(v3 + 20);
      if ( v4 != -1 )
      {
        v5 = *(_QWORD *)a1;
        v1 = 1;
        if ( *(_QWORD *)a1 <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v2 + 32) + 28LL) )
        {
          v6 = *(_DWORD *)(a1 + 40);
          v7 = v5;
          if ( v6 != -1 )
          {
            v8 = 0;
            if ( v5 != v6 )
              v8 = *(_QWORD *)(v3 + 40) == 0 ? 32 : 16;
            v7 = v5 - v6 - v8;
          }
          LOBYTE(v1) = v4 != v7;
          LOBYTE(v3) = v4 == 0;
          return ((unsigned int)v3 | v1) ^ 1;
        }
      }
    }
  }
  return v1;
}

