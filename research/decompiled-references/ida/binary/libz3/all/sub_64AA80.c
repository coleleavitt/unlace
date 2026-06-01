__int64 __fastcall sub_64AA80(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  int v5; // eax
  __int64 v6; // rbx
  int v7; // r15d
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  char v15; // al
  int v16; // eax
  char v17; // al
  __int64 v18; // [rsp+0h] [rbp-48h]
  __int64 v19; // [rsp+8h] [rbp-40h]
  __int64 v20; // [rsp+8h] [rbp-40h]

  LOBYTE(v2) = sub_64A930(a1, *(_QWORD *)(a2 + 40));
  v3 = v2;
  if ( !(_BYTE)v2 )
  {
    v18 = a1 + 48;
    v5 = sub_62A680(a1 + 48, a2);
    v6 = *(_QWORD *)(a1 + 48);
    v7 = v5;
    v8 = *(unsigned int *)(a1 + 56);
    v9 = v8 - 1;
    v8 *= 16;
    v10 = v6 + v8;
    v11 = 16LL * (v7 & v9);
    v12 = v6 + v11;
    if ( v11 != v8 )
    {
      v13 = v6 + v11;
      do
      {
        v14 = *(_DWORD *)(v13 + 4);
        if ( v14 == 2 )
        {
          if ( v7 == *(_DWORD *)v13 )
          {
            v19 = v12;
            v15 = sub_62A560(v18, *(_QWORD *)(v13 + 8), a2);
            v12 = v19;
            if ( v15 )
              return 1;
          }
        }
        else if ( !v14 )
        {
          return v3;
        }
        v13 += 16;
      }
      while ( v10 != v13 );
      v6 = *(_QWORD *)(a1 + 48);
    }
    for ( ; v12 != v6; v6 += 16 )
    {
      v16 = *(_DWORD *)(v6 + 4);
      if ( v16 == 2 )
      {
        if ( v7 == *(_DWORD *)v6 )
        {
          v20 = v12;
          v17 = sub_62A560(v18, *(_QWORD *)(v6 + 8), a2);
          v12 = v20;
          if ( v17 )
            return 1;
        }
      }
      else if ( !v16 )
      {
        return v3;
      }
    }
  }
  return v3;
}

