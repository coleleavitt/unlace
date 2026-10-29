__int64 __fastcall sub_C8B520(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  void *v6; // r12
  __int64 v7; // rsi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v13; // rdi

  result = (__int64)&off_1C74810;
  v3 = a1[9];
  *a1 = &off_1C74810;
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + 32 * v4;
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3);
        v7 = v3 + 16;
        v3 += 32;
        sub_182CBA0(v6, v7);
      }
      while ( v3 != v5 );
      v3 = a1[9];
    }
    result = sub_186B220((void *)(v3 - 8));
  }
  v8 = (__int64 *)a1[8];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[7];
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_14;
      }
      result = sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_14:
    v8 = (__int64 *)a1[8];
    if ( v8 )
LABEL_15:
      result = sub_186B220(v8 - 1);
  }
  v13 = (void *)a1[4];
  if ( v13 )
    return sub_186B220(v13);
  return result;
}

