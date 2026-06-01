__int64 sub_3A5E40()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rdx
  __int64 *v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v9; // rax

  v0 = *(_QWORD *)(qword_2CA1698 + 1384);
  *(_QWORD *)(v0 + 32) = 0;
  v1 = *(_QWORD *)(v0 + 8);
  if ( *(_QWORD *)(v0 + 40) < v1 )
  {
    v9 = qvector_reserve(v0 + 24, *(_QWORD *)(v0 + 24), v1, 8);
    v1 = *(_QWORD *)(v0 + 8);
    *(_QWORD *)(v0 + 24) = v9;
  }
  v2 = *(__int64 **)v0;
  v3 = *(_QWORD *)v0 + 8 * v1;
  if ( v3 != *(_QWORD *)v0 )
  {
    v4 = *(_QWORD *)(v0 + 32);
    do
    {
      v5 = *v2;
      v6 = *(_QWORD *)(v0 + 24);
      if ( *(_QWORD *)(v0 + 40) < (unsigned __int64)(v4 + 1) )
      {
        v7 = qvector_reserve(v0 + 24, v6, v4 + 1, 8);
        v4 = *(_QWORD *)(v0 + 32);
        *(_QWORD *)(v0 + 24) = v7;
        v6 = v7;
      }
      *(_QWORD *)(v6 + 8 * v4) = v5;
      ++v2;
      v4 = *(_QWORD *)(v0 + 32) + 1LL;
      *(_QWORD *)(v0 + 32) = v4;
    }
    while ( (__int64 *)v3 != v2 );
  }
  return v0 + 24;
}

