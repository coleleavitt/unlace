void __fastcall sub_2062C80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbp
  __int64 v4; // r14
  __int64 *v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // rsi
  __int64 *v8; // rbp
  int v9; // ebp
  _QWORD v10[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 8, v10);
  v3 = *(__int64 **)a1;
  v4 = v2;
  v5 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  if ( *(__int64 **)a1 != v5 )
  {
    v6 = (_QWORD *)v2;
    do
    {
      v7 = *v3;
      *v6 = *v3;
      if ( v7 )
      {
        sub_20B3430(v3, v7, v6);
        *v3 = 0;
      }
      ++v3;
      ++v6;
    }
    while ( v5 != v3 );
    v8 = *(__int64 **)a1;
    v5 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
    if ( *(__int64 **)a1 != v5 )
    {
      do
      {
        while ( *--v5 )
        {
          sub_20A0850(v5);
          if ( v5 == v8 )
            goto LABEL_9;
        }
      }
      while ( v5 != v8 );
LABEL_9:
      v5 = *(__int64 **)a1;
    }
  }
  v9 = v10[0];
  if ( (__int64 *)(a1 + 16) != v5 )
    free(v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v9;
}
