__int64 __fastcall sub_340550(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  void *v5; // r13
  void *v6; // r13
  void *v7; // r13
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi

  result = a1[116];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v3 = a1[117];
  if ( v3 )
  {
    result = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)result )
    {
      v4 = v3 + 96 * result;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3 + 64);
        sub_182CBA0(v5, v3 + 80);
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3 + 32);
        sub_182CBA0(v6, v3 + 48);
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3);
        v8 = v3 + 16;
        v3 += 96;
        result = sub_182CBA0(v7, v8);
      }
      while ( v3 != v4 );
      v3 = a1[117];
    }
    *(_DWORD *)(v3 - 4) = 0;
  }
  v9 = (_QWORD *)a1[120];
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[119];
          if ( (*(_DWORD *)(v11 + 8))-- == 1 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_16;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_16:
    v9 = (_QWORD *)a1[120];
    if ( v9 )
LABEL_17:
      *((_DWORD *)v9 - 1) = 0;
  }
  return result;
}

