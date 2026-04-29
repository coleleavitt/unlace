void __fastcall sub_14CB10(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx

  v3 = *(_QWORD **)(a1 + 96);
  v4 = (_QWORD *)v3[133];
  v5 = v3[134];
  v6 = &v4[v5];
  if ( v4 == v6 )
    goto LABEL_6;
  v7 = (_QWORD *)v3[133];
  while ( a2 != *v7 )
  {
    if ( v6 == ++v7 )
      goto LABEL_6;
  }
  if ( v6 == v7 )
  {
LABEL_6:
    v8 = v5 + 1;
    if ( v3[135] < v8 )
    {
      v9 = qvector_reserve(v3 + 133, v4, v8, 8);
      v10 = v3[134];
      v3[133] = v9;
      v6 = (_QWORD *)(v9 + 8 * v10);
    }
    *v6 = a2;
    ++v3[134];
  }
}
