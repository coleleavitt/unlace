__int64 __fastcall sub_383CD0(_QWORD *a1)
{
  unsigned int v2; // ebp
  char *v3; // rsi
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v7; // rdi
  __int64 v8; // rax

  v2 = sub_383AF0((__int64)a1, (__int64)(a1 + 3));
  if ( (_BYTE)v2 )
    return v2;
  v3 = (char *)a1[3];
  v4 = a1[15];
  if ( v4 >= 2 )
  {
    v5 = a1[4];
    if ( v5 < v4 )
    {
      if ( a1[5] < v4 )
      {
        v8 = qvector_reserve(a1 + 3, v3, a1[15], 1);
        a1[3] = v8;
        v3 = (char *)v8;
        v5 = a1[4];
      }
      memset(&v3[v5], 0, v4 - v5);
      v7 = a1[3];
      a1[4] = v4;
      *(_BYTE *)(v7 + v4 - 1) = 0;
    }
    else
    {
      if ( v4 != v5 )
        a1[4] = v4;
      v3[v4 - 1] = 0;
    }
    return v2;
  }
  if ( !v3 )
    return v2;
  a1[4] = 0;
  qfree(v3);
  a1[3] = 0;
  a1[5] = 0;
  return v2;
}
