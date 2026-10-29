unsigned __int64 __fastcall sub_3A1A90(__int64 a1)
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
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1536);
  v2 = v1 + 1640;
  if ( *(_DWORD *)(v1 + 120) )
  {
    v3 = v1 + 184;
    do
    {
      sub_7BF370(v3 - 24, *(_QWORD *)(v3 + 64), 65);
      for ( i = *(_QWORD *)(v3 + 16); i != v3; i = std::_Rb_tree_increment(i) )
      {
        v5 = *(_QWORD *)(i + 32);
        v6 = *(_QWORD *)(v3 + 64);
        v14 = *(_QWORD *)(i + 40);
        sub_7BE7C0(v3 - 24, v6, v5, &v14, 8, 65);
      }
      v3 += 104;
    }
    while ( v3 != v2 );
  }
  sub_7BF370(v1 + 1616, *(_QWORD *)(v1 + 1704), 65);
  for ( j = *(_QWORD *)(v1 + 1656); v2 != j; j = std::_Rb_tree_increment(j) )
  {
    v8 = *(_QWORD *)(j + 32);
    v9 = *(_QWORD *)(v1 + 1704);
    v14 = *(_QWORD *)(j + 40);
    sub_7BE7C0(v1 + 1616, v9, v8, &v14, 8, 65);
  }
  sub_7BF370(v1 + 1720, *(_QWORD *)(v1 + 1808), 65);
  for ( k = *(_QWORD *)(v1 + 1760); v1 + 1744 != k; k = std::_Rb_tree_increment(k) )
  {
    v11 = *(_QWORD *)(k + 32);
    v12 = *(_QWORD *)(v1 + 1808);
    v14 = *(_QWORD *)(k + 40);
    sub_7BE7C0(v1 + 1720, v12, v11, &v14, 8, 65);
  }
  return v15 - __readfsqword(0x28u);
}
