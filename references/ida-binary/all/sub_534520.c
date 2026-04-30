void __fastcall sub_534520(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax

  if ( a1[2] < a3 )
  {
    *a1 = qvector_reserve(a1, *a1, a3, 8);
    goto LABEL_3;
  }
  if ( a3 )
  {
LABEL_3:
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(a2 + 8 * v5);
      if ( !v6 )
        goto LABEL_9;
      v7 = sub_534430(*(const char **)(a2 + 8 * v5));
      if ( v7 )
        break;
LABEL_5:
      if ( a3 == ++v5 )
        return;
    }
    v6 = *(_QWORD *)(v7 + 192);
LABEL_9:
    v8 = a1[1];
    v9 = *a1;
    if ( a1[2] < (unsigned __int64)(v8 + 1) )
    {
      v10 = qvector_reserve(a1, v9, v8 + 1, 8);
      *a1 = v10;
      v9 = v10;
      v8 = a1[1];
    }
    *(_QWORD *)(v9 + 8 * v8) = v6;
    ++a1[1];
    goto LABEL_5;
  }
}
