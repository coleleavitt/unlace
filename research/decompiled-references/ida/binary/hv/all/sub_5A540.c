__int64 __fastcall sub_5A540(__int64 *a1, __int64 *a2)
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
  __int128 v16; // xmm0
  size_t v17; // r13
  __int64 v18; // rdi
  void *v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // r15
  const char *v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  result = 0xAAAAAAAAAAAAAAABLL;
  v5 = 24 * a1[1];
  v6 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 3);
  v24 = v6;
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
      v23 = sub_96080(a2, v10, v12, 24);
      *a2 = v23;
      v10 = v23;
      v9 = 24 * a2[1] - v13;
    }
    v14 = (_QWORD *)(v10 + v13);
    v15 = v8 + v5;
    memmove(&v14[(unsigned __int64)v5 / 8], v14, v9);
    v16 = 0;
    if ( v8 != v8 + v5 )
    {
      do
      {
        while ( 1 )
        {
          *v14 = 0;
          *(_OWORD *)(v14 + 1) = v16;
          v17 = *(_QWORD *)(v8 + 8);
          if ( v17 )
            break;
          v8 += 24;
          v14 += 3;
          if ( v15 == v8 )
            goto LABEL_9;
        }
        v18 = *(_QWORD *)(v8 + 8);
        v8 += 24;
        v14 += 3;
        v19 = (void *)sub_96030(v18);
        *(v14 - 1) = v17;
        *(v14 - 3) = v19;
        memcpy(v19, *(const void **)(v8 - 24), v17);
        *(v14 - 2) = v17;
        v16 = 0;
      }
      while ( v15 != v8 );
    }
LABEL_9:
    result = v24;
    a2[1] += v24;
  }
  v20 = a1[6];
  v21 = a1 + 4;
  if ( v21 != (_QWORD *)v20 )
  {
    do
    {
      v22 = haystack;
      if ( *(_QWORD *)(v20 + 40) )
        v22 = *(const char **)(v20 + 32);
      sub_5A130(*(__int64 **)(v20 + 56), a2, v22);
      result = std::_Rb_tree_increment();
      v20 = result;
    }
    while ( v21 != (_QWORD *)result );
  }
  return result;
}

