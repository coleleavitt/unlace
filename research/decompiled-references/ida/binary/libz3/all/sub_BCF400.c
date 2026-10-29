__int64 __fastcall sub_BCF400(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // r12
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // rdi

  v2 = a1[7];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[6];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[5];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = a1[4];
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  v7 = a1[3];
  if ( v7 )
    result = sub_186B220((void *)(v7 - 8));
  v8 = (__int64 *)a1[2];
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = &v8[4 * v9];
      do
      {
        while ( 1 )
        {
          v11 = *v8;
          if ( *v8 )
          {
            v12 = v8[1];
            if ( (*(_DWORD *)(v11 + 8))-- == 1 )
              break;
          }
          v8 += 4;
          if ( v8 == v10 )
            goto LABEL_18;
        }
        sub_15D7BC0(v12, v11);
        v8 += 4;
      }
      while ( v8 != v10 );
LABEL_18:
      v8 = (__int64 *)a1[2];
    }
    result = sub_186B220(v8 - 1);
  }
  v14 = a1[1];
  if ( v14 )
    return sub_186B220((void *)(v14 - 8));
  return result;
}

