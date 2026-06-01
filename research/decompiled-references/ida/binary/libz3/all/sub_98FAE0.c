void __fastcall sub_98FAE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 *v6; // rdi
  unsigned int v7; // esi
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  __int64 *i; // rdx
  __int64 v14; // rax

  if ( a2 - a1 <= 224 )
  {
    if ( a2 != a1 )
    {
      v6 = (__int64 *)(a1 + 16);
      while ( (__int64 *)a2 != v6 )
      {
        while ( 1 )
        {
          v7 = *((_DWORD *)v6 + 2);
          v8 = v6;
          v6 += 2;
          v9 = *(v6 - 2);
          if ( *(_DWORD *)(a1 + 8) >= v7 )
            break;
          v10 = ((__int64)v8 - a1) >> 4;
          if ( (__int64)v8 - a1 > 0 )
          {
            do
            {
              v11 = *(v8 - 2);
              v8 -= 2;
              v8[2] = v11;
              *((_DWORD *)v8 + 6) = *((_DWORD *)v8 + 2);
              --v10;
            }
            while ( v10 );
          }
          *(_QWORD *)a1 = v9;
          *(_DWORD *)(a1 + 8) = v7;
          if ( (__int64 *)a2 == v6 )
            return;
        }
        v12 = *((_DWORD *)v6 - 6);
        for ( i = v6 - 4; v12 < v7; i -= 2 )
        {
          v14 = *i;
          *((_DWORD *)i + 6) = v12;
          i[2] = v14;
          v8 = i;
          v12 = *((_DWORD *)i - 2);
        }
        *v8 = v9;
        *((_DWORD *)v8 + 2) = v7;
      }
    }
  }
  else
  {
    v4 = 16 * ((a2 - a1) >> 5);
    v5 = a1 + v4;
    sub_98FAE0(a1, a1 + v4);
    sub_98FAE0(v5, a2);
    sub_98F350((char *)a1, v5, a2, (16 * ((a2 - a1) >> 5)) >> 4, (a2 - v5) >> 4);
  }
}

