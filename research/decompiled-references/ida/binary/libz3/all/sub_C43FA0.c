__int64 __fastcall sub_C43FA0(_QWORD *a1)
{
  void *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  void *v7; // r12
  __int64 v8; // rsi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi

  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 7);
  result = sub_182CBA0(v2, a1 + 9);
  v4 = a1[6];
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 32 * v5;
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4);
        v8 = v4 + 16;
        v4 += 32;
        sub_182CBA0(v7, v8);
      }
      while ( v4 != v6 );
      v4 = a1[6];
    }
    result = sub_186B220((void *)(v4 - 8));
  }
  v9 = (__int64 *)a1[5];
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      return sub_186B220(v9 - 1);
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[4];
          if ( (*(_DWORD *)(v11 + 8))-- == 1 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_14;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_14:
    v9 = (__int64 *)a1[5];
    if ( v9 )
      return sub_186B220(v9 - 1);
  }
  return result;
}

