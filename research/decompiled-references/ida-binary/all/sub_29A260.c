void __fastcall sub_29A260(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v7; // ebx
  _DWORD *i; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax

  if ( a3 > 0 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(a1 + 80);
    while ( a3 != (*(_DWORD *)(v6 + 4 * v5) & 0x7FFFFFFF) )
    {
      if ( ++v5 == a3 )
        return;
    }
    while ( 1 )
    {
      v7 = v5 + 1;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + (int)v5) & 1) != 0 && *(int *)(v6 + 4LL * (int)v5) >= 0 )
      {
        sub_29A260(a1, a2, (unsigned int)v5);
      }
      else
      {
        v9 = a2[1];
        v10 = *a2;
        if ( a2[2] < (unsigned __int64)(v9 + 1) )
        {
          v11 = qvector_reserve(a2, v10, v9 + 1, 4);
          *a2 = v11;
          v10 = v11;
          v9 = a2[1];
        }
        *(_DWORD *)(v10 + 4 * v9) = v5;
        ++a2[1];
      }
      if ( a3 <= v7 )
        break;
      v6 = *(_QWORD *)(a1 + 80);
      for ( i = (_DWORD *)(v6 + 4LL * v7); ; ++i )
      {
        LODWORD(v5) = v7++;
        if ( a3 == (*i & 0x7FFFFFFF) )
          break;
        if ( a3 <= v7 )
          return;
      }
    }
  }
}
