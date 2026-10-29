_QWORD *__fastcall sub_6CFB80(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // r15
  _QWORD *v9; // r14
  const char *v10; // rsi
  const char *v12; // rdi
  char *v13; // rdx
  unsigned __int64 v14; // rax
  char *v15; // rsi
  __int64 v16; // rcx

  v4 = *(_QWORD **)(a1 + 8 * a3);
  if ( v4 )
  {
    v5 = (_QWORD *)*v4;
    v6 = *(_QWORD *)(a4 + 8);
    if ( *(_QWORD *)(*v4 + 16LL) )
    {
      v9 = *(_QWORD **)(a1 + 8 * a3);
      goto LABEL_6;
    }
LABEL_3:
    v9 = v4;
    v10 = haystack;
    if ( v6 )
    {
LABEL_7:
      v12 = *(const char **)a4;
      v4 = v9;
      v9 = v5;
      while ( strcmp(v12, v10) )
      {
        v5 = (_QWORD *)*v5;
        if ( !v5 )
          return nullptr;
        v13 = (char *)v5[1];
        v14 = 0xCBF29CE484222325LL;
        v15 = &v13[v5[2]];
        if ( v13 == v15 )
        {
          if ( a3 == 0xCBF29CE484222325LL % a2 )
          {
            v4 = v9;
            goto LABEL_3;
          }
          return nullptr;
        }
        do
        {
          v16 = *v13++;
          v14 = 0x100000001B3LL * (v16 ^ v14);
        }
        while ( v15 != v13 );
        if ( a3 != v14 % a2 )
          return nullptr;
LABEL_6:
        v10 = (const char *)v5[1];
        v12 = haystack;
        if ( v6 )
          goto LABEL_7;
        v4 = v9;
        v9 = v5;
      }
    }
  }
  return v4;
}

