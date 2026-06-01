__int64 __fastcall sub_8D02C0(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rbp
  size_t v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // rbx
  __int64 v15; // r14
  const char *v16; // rsi
  __int128 v17; // xmm0
  size_t v18; // r13
  __int64 v19; // rdi
  void *v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // r15
  const char *v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-40h]

  result = 0xAAAAAAAAAAAAAAABLL;
  v5 = 24 * a1[1];
  v6 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 3);
  v25 = v6;
  if ( v6 )
  {
    v7 = a2[1];
    v8 = *a1;
    v9 = 0;
    v10 = *a2;
    v11 = 3 * v7;
    v12 = v6 + v7;
    v13 = 8 * v11;
    if ( a2[2] < v12 )
    {
      v24 = qvector_reserve(a2, v10, v12, 24);
      *a2 = v24;
      v10 = v24;
      v9 = 24 * a2[1] - v13;
    }
    v14 = (_QWORD *)(v10 + v13);
    v15 = v8 + v5;
    v16 = (const char *)v14;
    memmove(&v14[(unsigned __int64)v5 / 8], v14, v9);
    v17 = 0;
    if ( v8 != v8 + v5 )
    {
      do
      {
        while ( 1 )
        {
          *v14 = 0;
          *(_OWORD *)(v14 + 1) = v17;
          v18 = *(_QWORD *)(v8 + 8);
          if ( v18 )
            break;
          v8 += 24;
          v14 += 3;
          if ( v15 == v8 )
            goto LABEL_9;
        }
        v19 = *(_QWORD *)(v8 + 8);
        v8 += 24;
        v14 += 3;
        v20 = (void *)qalloc_or_throw(v19, v16);
        *(v14 - 1) = v18;
        *(v14 - 3) = v20;
        v16 = *(const char **)(v8 - 24);
        memcpy(v20, v16, v18);
        *(v14 - 2) = v18;
        v17 = 0;
      }
      while ( v15 != v8 );
    }
LABEL_9:
    result = v25;
    a2[1] += v25;
  }
  v21 = a1[6];
  v22 = a1 + 4;
  if ( v22 != (_QWORD *)v21 )
  {
    do
    {
      v23 = haystack;
      if ( *(_QWORD *)(v21 + 40) )
        v23 = *(const char **)(v21 + 32);
      sub_8CFE80(*(__int64 **)(v21 + 56), a2, v23);
      result = std::_Rb_tree_increment();
      v21 = result;
    }
    while ( v22 != (_QWORD *)result );
  }
  return result;
}

