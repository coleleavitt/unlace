__int64 __fastcall sub_3E2810(__int64 *a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  char *v9; // rdi
  char *v10; // rdx

  result = 0;
  if ( a2 > 0 && a2 < (unsigned __int64)a1[15] && *(_QWORD *)(a1[14] + 16LL * a2) )
  {
    v7 = *a1;
    v8 = *a1 + 40 * a1[1];
    if ( v8 != *a1 )
    {
      do
      {
        v9 = *(char **)(v7 + 16);
        v10 = &v9[4 * *(_QWORD *)(v7 + 24)];
        if ( v9 != v10 )
        {
          while ( *(_DWORD *)v9 != a2 )
          {
            v9 += 4;
            if ( v10 == v9 )
              goto LABEL_11;
          }
          if ( v10 != v9 )
          {
            memmove(v9, v9 + 4, v10 - v9 - 4);
            --*(_QWORD *)(v7 + 24);
          }
        }
LABEL_11:
        v7 += 40;
      }
      while ( v7 != v8 );
    }
    callui(94, a2, 0, (int)&callui, a5, a6);
  }
  return result;
}

