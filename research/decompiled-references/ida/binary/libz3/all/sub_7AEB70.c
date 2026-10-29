void __fastcall sub_7AEB70(char *a1, __int64 a2)
{
  __int64 v3; // rcx
  char *v4; // r13
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int v9; // edx
  _QWORD *i; // rax
  _DWORD *v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // esi

  if ( a2 - (__int64)a1 <= 112 )
  {
    if ( (char *)a2 != a1 )
    {
      v6 = a1 + 8;
      if ( (char *)a2 != a1 + 8 )
      {
        do
        {
          while ( 1 )
          {
            v7 = *v6;
            v8 = *(_QWORD *)a1;
            v9 = *(_DWORD *)(*v6 + 24LL);
            if ( v9 < *(_DWORD *)(*(_QWORD *)a1 + 24LL) )
              break;
            if ( v9 == *(_DWORD *)(*(_QWORD *)a1 + 24LL) )
            {
              v12 = *(_DWORD *)(v8 + 28);
              if ( *(_DWORD *)(v7 + 28) < v12
                || *(_DWORD *)(v7 + 28) == v12 && *(_DWORD *)(v7 + 32) < *(_DWORD *)(v8 + 32) )
              {
                break;
              }
            }
            for ( i = v6; ; --i )
            {
              v11 = (_DWORD *)*(i - 1);
              if ( v9 >= v11[6] )
              {
                if ( v9 != v11[6] )
                  break;
                v13 = v11[7];
                if ( *(_DWORD *)(v7 + 28) >= v13 && (*(_DWORD *)(v7 + 28) != v13 || *(_DWORD *)(v7 + 32) >= v11[8]) )
                  break;
              }
              *i = v11;
            }
            ++v6;
            *i = v7;
            if ( (_QWORD *)a2 == v6 )
              return;
          }
          if ( (char *)v6 - a1 <= 8 )
          {
            if ( (char *)v6 - a1 == 8 )
              *v6 = v8;
          }
          else
          {
            memmove(a1 + 8, a1, (char *)v6 - a1);
          }
          ++v6;
          *(_QWORD *)a1 = v7;
        }
        while ( (_QWORD *)a2 != v6 );
      }
    }
  }
  else
  {
    v3 = (a2 - (__int64)a1) >> 4;
    v4 = &a1[8 * v3];
    v5 = (8 * v3) >> 3;
    sub_7AEB70(a1, v4);
    sub_7AEB70(v4, a2);
    sub_7AE460(a1, v4, a2, v5, (a2 - (__int64)v4) >> 3);
  }
}

