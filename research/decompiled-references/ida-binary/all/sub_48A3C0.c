void __fastcall sub_48A3C0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 v4; // r12
  __int64 v6; // rdi
  const char *v7; // rsi
  __int64 v8; // rax
  char *v9; // rbx
  __int64 v10; // rax

  v3 = *(_QWORD **)a3;
  v4 = *(_QWORD *)a3 + 16LL * *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a3 != v4 )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(const char **)a1;
      v8 = *(_QWORD *)a1 + 40 * v6;
      if ( *(_QWORD *)a1 != v8 )
      {
        v9 = *(char **)a1;
        while ( *((_QWORD *)v9 + 4) != v3[1] || *((_QWORD *)v9 + 3) != *v3 )
        {
          v9 += 40;
          if ( (char *)v8 == v9 )
            goto LABEL_11;
        }
        if ( v9 )
        {
          v10 = *(_QWORD *)v9;
          if ( *(_QWORD *)v9 )
          {
            *((_QWORD *)v9 + 1) = 0;
            qfree(v10, v7);
            v7 = *(const char **)a1;
            v6 = *(_QWORD *)(a1 + 8);
          }
          memmove(v9, v9 + 40, &v7[40 * v6] - v9 - 40);
          --*(_QWORD *)(a1 + 8);
        }
      }
LABEL_11:
      v3 += 2;
    }
    while ( (_QWORD *)v4 != v3 );
  }
}
