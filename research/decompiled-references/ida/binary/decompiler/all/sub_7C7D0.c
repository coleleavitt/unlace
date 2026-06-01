__int64 __fastcall sub_7C7D0(_QWORD *a1, __int64 *a2)
{
  int v3; // eax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  _DWORD *v6; // rbp
  __int64 i; // r12
  _DWORD *v9; // rsi
  __int64 v10; // rax

  v3 = sub_7C790(a1);
  if ( v3 < 0 )
    return 0;
  v4 = a2[1];
  v5 = v3;
  if ( v4 < v3 )
  {
    v9 = (_DWORD *)*a2;
    if ( a2[2] < (unsigned __int64)v3 )
    {
      v10 = qvector_reserve();
      v4 = a2[1];
      *a2 = v10;
      v9 = (_DWORD *)v10;
    }
    memset(&v9[2 * v4], 0, 8 * (v5 - v4));
    goto LABEL_4;
  }
  if ( v3 != v4 )
  {
LABEL_4:
    a2[1] = v5;
    v4 = v5;
  }
  v6 = (_DWORD *)*a2;
  for ( i = *a2 + 8 * v4; (_DWORD *)i != v6; *(v6 - 1) = unpack_dd() )
  {
    if ( *a1 >= a1[1] || (*v6 = unpack_dd(), *a1 >= a1[1]) )
    {
      if ( !under_debugger )
        sub_37EA20(50583);
      BUG();
    }
    v6 += 2;
  }
  return 1;
}
