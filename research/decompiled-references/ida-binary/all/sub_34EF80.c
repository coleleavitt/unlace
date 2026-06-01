char *__fastcall sub_34EF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // rax
  int i; // r12d
  __int64 v8; // rax
  __int64 v9; // rbp
  const char *v10; // r13
  size_t v11; // rbp
  char *v12; // rax
  signed __int64 v13; // rdx
  const char *v14; // rsi
  __int64 v15; // rbp
  const char *v16; // r13
  signed int v17; // ebp
  __int64 v18; // rax
  void *v20; // rdi
  __int64 v21; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v6 = *(int *)(a1 + 144);
  if ( (int)v6 < 0 || (v5 = (_QWORD *)a1, (int)v6 >= *(_DWORD *)(a1 + 8)) )
  {
    if ( under_debugger )
      BUG();
    a1 = 40502;
    v6 = interr(40502, a2, a3, a4, a5);
  }
  LOWORD(i) = a2;
  v8 = *(_QWORD *)a1 + 24 * v6;
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 )
    goto LABEL_15;
  v10 = *(const char **)v8;
  v11 = v9 - 1;
  v12 = strchr(*(const char **)v8, 45);
  src = nullptr;
  v23 = 0;
  v13 = v12 - v10;
  if ( v11 <= v12 - v10 )
    v13 = v11;
  if ( v12 )
    v11 = v13;
  if ( v11 )
  {
    v14 = v10;
    src = (void *)qvector_reserve(&src, 0, v11 + 1, 1);
    *(_QWORD *)&v23 = v11 + 1;
    memmove(src, v10, v11);
    *((_BYTE *)src + v11) = 0;
    v15 = v23;
    v16 = (const char *)src;
    if ( (unsigned __int64)v23 > 1 )
    {
      v20 = (void *)v5[12];
      if ( v5[14] < (unsigned __int64)v23 )
      {
        v21 = qvector_reserve(v5 + 12, v5[12], v23, 1);
        v5[12] = v21;
        v20 = (void *)v21;
      }
      v5[13] = v15;
      v14 = v16;
      memmove(v20, v16, v15 - 1);
      *(_BYTE *)(v5[12] + v15 - 1) = 0;
      v16 = (const char *)src;
    }
    else
    {
      v5[13] = 0;
    }
    if ( v16 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v16, v14);
    }
  }
  else
  {
LABEL_15:
    v5[13] = 0;
  }
  v17 = 0;
  v18 = 0;
  for ( i = (unsigned __int16)i; (unsigned __int64)v17 < v5[10]; v18 = v17 )
  {
    while ( !_bittest(&i, v17) )
    {
      v18 = ++v17;
      if ( (unsigned __int64)v17 >= v5[10] )
        return sub_34DC20((__int64)v5);
    }
    ++v17;
    sub_34D910(v5, *(_DWORD *)(v5[9] + 4 * v18));
  }
  return sub_34DC20((__int64)v5);
}
