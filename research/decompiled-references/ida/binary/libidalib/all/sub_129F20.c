char *__fastcall sub_129F20(__int64 a1, unsigned __int16 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  const char *v6; // r13
  size_t v7; // rbp
  char *v8; // rax
  signed __int64 v9; // rdx
  void *v10; // r13
  signed int v11; // ebp
  __int64 v12; // rax
  int i; // r12d
  void *v15; // rdi
  __int64 v16; // rax
  void *src; // [rsp+0h] [rbp-48h]
  size_t v18; // [rsp+8h] [rbp-40h]

  v3 = *(int *)(a1 + 144);
  if ( (int)v3 < 0 || (v2 = (_QWORD *)a1, (int)v3 >= *(_DWORD *)(a1 + 8)) )
  {
    if ( under_debugger )
      BUG();
    a1 = 40502;
    v3 = interr();
  }
  v4 = *(_QWORD *)a1 + 24 * v3;
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
    goto LABEL_15;
  v6 = *(const char **)v4;
  v7 = v5 - 1;
  v8 = strchr(*(const char **)v4, 45);
  v9 = v8 - v6;
  if ( v7 <= v8 - v6 )
    v9 = v7;
  if ( v8 )
    v7 = v9;
  if ( v7 )
  {
    src = (void *)qvector_reserve();
    v18 = v7 + 1;
    memmove(src, v6, v7);
    *((_BYTE *)src + v7) = 0;
    v10 = src;
    if ( v7 + 1 > 1 )
    {
      v15 = (void *)v2[12];
      if ( v2[14] < v18 )
      {
        v16 = qvector_reserve();
        v2[12] = v16;
        v15 = (void *)v16;
      }
      v2[13] = v18;
      memmove(v15, src, v7);
      *(_BYTE *)(v2[12] + v7) = 0;
      v10 = src;
    }
    else
    {
      v2[13] = 0;
    }
    if ( v10 )
      qfree();
  }
  else
  {
LABEL_15:
    v2[13] = 0;
  }
  v11 = 0;
  v12 = 0;
  for ( i = a2; (unsigned __int64)v11 < v2[10]; v12 = v11 )
  {
    while ( !_bittest(&i, v11) )
    {
      v12 = ++v11;
      if ( (unsigned __int64)v11 >= v2[10] )
        return sub_128BC0((__int64)v2);
    }
    ++v11;
    sub_1288C0(v2, *(_DWORD *)(v2[9] + 4 * v12));
  }
  return sub_128BC0((__int64)v2);
}

