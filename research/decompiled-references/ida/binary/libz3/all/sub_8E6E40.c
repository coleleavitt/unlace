void __fastcall sub_8E6E40(char *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rbp
  __int64 v6; // rbx
  char *i; // rbx
  __int64 v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rdx
  char *v11; // rax
  char *v12; // rdi

  if ( a2 - (__int64)a1 <= 112 )
  {
    if ( (char *)a2 != a1 )
    {
      for ( i = a1 + 8; (char *)a2 != i; *(_QWORD *)a1 = v8 )
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)i;
          v9 = *(_DWORD *)(*(_QWORD *)i + 4LL * (*(_DWORD *)(*(_QWORD *)i + 4LL) & 0xFFFFFF) + 8);
          if ( *(_DWORD *)(*(_QWORD *)a1 + 4LL * (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0xFFFFFF) + 8) < v9 )
            break;
          v10 = *((_QWORD *)i - 1);
          v11 = i - 8;
          if ( *(_DWORD *)(v10 + 4LL * (*(_DWORD *)(v10 + 4) & 0xFFFFFF) + 8) >= v9 )
          {
            *(_QWORD *)i = v8;
          }
          else
          {
            do
            {
              *((_QWORD *)v11 + 1) = v10;
              v12 = v11;
              v10 = *((_QWORD *)v11 - 1);
              v11 -= 8;
            }
            while ( *(_DWORD *)(v10 + 4LL * (*(_DWORD *)(v10 + 4) & 0xFFFFFF) + 8) < v9 );
            *(_QWORD *)v12 = v8;
          }
          i += 8;
          if ( (char *)a2 == i )
            return;
        }
        if ( i - a1 <= 8 )
        {
          if ( i - a1 == 8 )
            *(_QWORD *)i = *(_QWORD *)a1;
        }
        else
        {
          memmove(a1 + 8, a1, i - a1);
        }
        i += 8;
      }
    }
  }
  else
  {
    v4 = (a2 - (__int64)a1) >> 4;
    v5 = (__int64 *)&a1[8 * v4];
    v6 = (8 * v4) >> 3;
    sub_8E6E40(a1, v5);
    sub_8E6E40(v5, a2);
    sub_8E6800((__int64 *)a1, v5, a2, v6, (a2 - (__int64)v5) >> 3);
  }
}

