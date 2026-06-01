__int64 __fastcall sub_42B760(unsigned __int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax

  if ( a1 >= *(_QWORD *)(a6 + 16) )
    return 1;
  if ( a2 != 100 )
    return 0;
  v7 = sub_3BDE50(*(_QWORD **)a6, a1);
  v8 = v7;
  v9 = *(__int64 **)(a6 + 8);
  v10 = v9[1];
  v11 = *v9;
  if ( !v10 || v7 != *(_QWORD *)(v11 + 8 * v10 - 8) )
  {
    if ( v9[2] < (unsigned __int64)(v10 + 1) )
    {
      v12 = qvector_reserve(*(_QWORD *)(a6 + 8), v11, v10 + 1, 8);
      v10 = v9[1];
      *v9 = v12;
      v11 = v12;
    }
    *(_QWORD *)(v11 + 8 * v10) = v8;
    ++v9[1];
  }
  return 0;
}
