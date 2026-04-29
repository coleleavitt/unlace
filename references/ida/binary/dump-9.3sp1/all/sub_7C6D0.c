__int64 __fastcall sub_7C6D0(_QWORD *a1, __int64 *a2)
{
  int v3; // eax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rcx
  _DWORD *v6; // rbp
  _DWORD *i; // r12
  __int64 v9; // rsi
  __int64 v10; // rax

  if ( *a1 >= a1[1] )
    sub_7A510();
  v3 = unpack_dd();
  v4 = v3;
  if ( a1[1] - *a1 < (unsigned __int64)v3 || v3 < 0 )
    return 0;
  v5 = a2[1];
  if ( v5 < v3 )
  {
    v9 = *a2;
    if ( a2[2] < (unsigned __int64)v3 )
    {
      v10 = qvector_reserve((__int64)a2, v9, v3, 8);
      v5 = a2[1];
      *a2 = v10;
      v9 = v10;
    }
    memset((void *)(v9 + 8 * v5), 0, 8 * (v4 - v5));
    goto LABEL_6;
  }
  if ( v3 != v5 )
  {
LABEL_6:
    a2[1] = v4;
    v5 = v4;
  }
  v6 = (_DWORD *)*a2;
  for ( i = &v6[2 * v5]; i != v6; *(v6 - 1) = unpack_dd() )
  {
    if ( *a1 >= a1[1] || (*v6 = unpack_dd(), *a1 >= a1[1]) )
    {
      if ( !under_debugger )
        sub_383060(50583);
      BUG();
    }
    v6 += 2;
  }
  return 1;
}
