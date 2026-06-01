__int64 __fastcall sub_22A85B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // rbp
  size_t v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  size_t v9; // r12
  size_t v10; // rdx
  int v11; // eax

  v3 = a2 - a1;
  v4 = a1;
  v5 = v3 >> 5;
  if ( v3 > 0 )
  {
    v6 = *(_QWORD *)(a3 + 8);
    do
    {
      while ( 1 )
      {
        v7 = v5 >> 1;
        v8 = v4 + 32 * (v5 >> 1);
        v9 = *(_QWORD *)(v8 + 8);
        v10 = v9;
        if ( v6 <= v9 )
          v10 = v6;
        if ( !v10 )
          break;
        v11 = memcmp(*(const void **)a3, *(const void **)v8, v10);
        if ( !v11 )
          break;
        if ( v11 >= 0 )
        {
          v4 = v8 + 32;
          v5 = v5 - v7 - 1;
          goto LABEL_11;
        }
LABEL_3:
        v5 >>= 1;
        if ( v7 <= 0 )
          return v4;
      }
      if ( v6 != v9 && v6 < v9 )
        goto LABEL_3;
      v4 = v8 + 32;
      v5 = v5 - v7 - 1;
LABEL_11:
      ;
    }
    while ( v5 > 0 );
  }
  return v4;
}
