__int64 __fastcall sub_47A7A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  void *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  void *v12; // r12
  __int64 v13; // rsi
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi

  v2 = a1[15];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[14];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[13];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[12];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[11];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 6);
  result = sub_182CBA0(v7, a1 + 8);
  v9 = a1[5];
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 - 4);
    if ( (_DWORD)v10 )
    {
      v11 = v9 + 32 * v10;
      do
      {
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v9);
        v13 = v9 + 16;
        v9 += 32;
        sub_182CBA0(v12, v13);
      }
      while ( v9 != v11 );
      v9 = a1[5];
    }
    result = sub_186B220((void *)(v9 - 8));
  }
  v14 = (__int64 *)a1[4];
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      return sub_186B220(v14 - 1);
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[3];
          if ( (*(_DWORD *)(v16 + 8))-- == 1 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_24;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_24:
    v14 = (__int64 *)a1[4];
    if ( v14 )
      return sub_186B220(v14 - 1);
  }
  return result;
}

