void __fastcall sub_1FA1D40(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  _DWORD *v5; // rbx
  __int64 i; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx

  v3 = (__int64)a2 - a1;
  v5 = a2;
  if ( (__int64)a2 - a1 > 8 )
  {
    for ( i = ((v3 >> 3) - 2) / 2; ; --i )
    {
      sub_1F6B660(a1, i, v3 >> 3, *(_QWORD *)(a1 + 8 * i));
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    v7 = v3 >> 3;
    v8 = (unsigned __int64)&a2[2 * ((a3 - 1 - (unsigned __int64)a2) >> 3) + 2];
    do
    {
      while ( *v5 >= *(_DWORD *)a1 )
      {
        v5 += 2;
        if ( (_DWORD *)v8 == v5 )
          return;
      }
      v9 = *(_QWORD *)v5;
      *v5 = *(_DWORD *)a1;
      v5 += 2;
      *((_BYTE *)v5 - 4) = *(_BYTE *)(a1 + 4);
      sub_1F6B660(a1, 0, v7, v9);
    }
    while ( (_DWORD *)v8 != v5 );
  }
}
