unsigned __int64 __fastcall sub_39CE80(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 j; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 k; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v14; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1344);
  v2 = v1 + 1608;
  if ( *(_DWORD *)(v1 + 92) )
  {
    v3 = v1 + 152;
    do
    {
      sub_79BF70(v3 - 24, *(_QWORD *)(v3 + 64), 65);
      for ( i = *(_QWORD *)(v3 + 16); i != v3; i = std::_Rb_tree_increment() )
      {
        v5 = *(unsigned int *)(i + 32);
        v6 = *(_QWORD *)(v3 + 64);
        v14 = *(_DWORD *)(i + 36);
        sub_79B440(v3 - 24, v6, v5, &v14, 4, 65);
      }
      v3 += 104;
    }
    while ( v3 != v2 );
  }
  sub_79BF70(v1 + 1584, *(_QWORD *)(v1 + 1672), 65);
  for ( j = *(_QWORD *)(v1 + 1624); v2 != j; j = std::_Rb_tree_increment() )
  {
    v8 = *(unsigned int *)(j + 32);
    v9 = *(_QWORD *)(v1 + 1672);
    v14 = *(_DWORD *)(j + 36);
    sub_79B440(v1 + 1584, v9, v8, &v14, 4, 65);
  }
  sub_79BF70(v1 + 1688, *(_QWORD *)(v1 + 1776), 65);
  for ( k = *(_QWORD *)(v1 + 1728); v1 + 1712 != k; k = std::_Rb_tree_increment() )
  {
    v11 = *(unsigned int *)(k + 32);
    v12 = *(_QWORD *)(v1 + 1776);
    v14 = *(_DWORD *)(k + 36);
    sub_79B440(v1 + 1688, v12, v11, &v14, 4, 65);
  }
  return v15 - __readfsqword(0x28u);
}

