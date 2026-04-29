void __fastcall sub_6BB00(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v4; // r13d
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( a2[1] > 1u )
  {
    v2 = 1;
    v4 = 1;
    do
    {
      v5 = a1[12];
      v6 = *(_QWORD *)(*a2 + 8 * v2);
      v7 = a1[13];
      v8 = (_QWORD *)(v5 + 8 * v7);
      if ( (_QWORD *)v5 == v8 )
        goto LABEL_10;
      v9 = (_QWORD *)a1[12];
      while ( v6 != *v9 )
      {
        if ( v8 == ++v9 )
          goto LABEL_10;
      }
      if ( v9 == v8 )
      {
LABEL_10:
        v10 = v7 + 1;
        if ( a1[14] < v10 )
        {
          v11 = qvector_reserve((__int64)(a1 + 12), v5, v10, 8);
          v12 = a1[13];
          a1[12] = v11;
          v8 = (_QWORD *)(v11 + 8 * v12);
        }
        *v8 = v6;
        ++a1[13];
      }
      v2 = ++v4;
    }
    while ( (unsigned __int64)v4 < a2[1] );
  }
}
