unsigned __int64 __fastcall sub_2294E0(__int64 a1)
{
  void **p_src; // rsi
  char *v2; // r14
  bool v3; // al
  char *v4; // rbp
  __int64 v5; // rdx
  char *v6; // rbx
  void **v7; // r12
  char *v8; // r15
  size_t v9; // r8
  size_t v10; // r9
  __int64 v11; // rsi
  void *v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // [rsp+0h] [rbp-80h]
  size_t v17; // [rsp+10h] [rbp-70h]
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  void *src; // [rsp+28h] [rbp-58h] BYREF
  __int128 v20; // [rsp+30h] [rbp-50h]
  unsigned __int64 v21; // [rsp+40h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v20 = 0;
  src = nullptr;
  netnode_check(&v18, "$ debugger application", 0, 0);
  p_src = &src;
  if ( netnode_qgetblob(v18, &src, 1, 0, 69) > 0 )
  {
    v2 = (char *)src;
    v3 = 0;
    v4 = (char *)src + v20;
    if ( src < (char *)src + (unsigned __int64)v20 )
    {
      v3 = *(_BYTE *)src != 0;
      v2 = (char *)src + 1;
    }
    *(_BYTE *)(a1 + 24) = v3;
LABEL_5:
    if ( v2 < v4 )
    {
      do
      {
        v5 = *(_QWORD *)(a1 + 8);
        p_src = *(void ***)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v5 + 1) )
        {
          v14 = qvector_reserve(a1, p_src, v5 + 1, 24);
          *(_QWORD *)a1 = v14;
          v5 = *(_QWORD *)(a1 + 8);
          p_src = (void **)v14;
        }
        v6 = v2;
        v7 = &p_src[3 * v5];
        *v7 = nullptr;
        *(_OWORD *)(v7 + 1) = 0;
        ++*(_QWORD *)(a1 + 8);
        while ( *v6++ )
        {
          if ( v4 == v6 )
            goto LABEL_5;
        }
        if ( v2 )
        {
          v8 = (char *)v7[1];
          v9 = v6 - v2 - 1;
          v10 = v9;
          if ( v8 )
          {
            --v8;
            v10 = (size_t)&v8[v9];
          }
          v11 = (__int64)*v7;
          v12 = (void *)(v10 + 1);
          if ( (unsigned __int64)v7[2] < v10 + 1 )
          {
            v17 = v10;
            v16 = v10 + 1;
            v15 = qvector_reserve(v7, v11, v12, 1);
            *v7 = (void *)v15;
            v10 = v17;
            v11 = v15;
            v9 = v6 - v2 - 1;
            v12 = (void *)v16;
          }
          v7[1] = v12;
          *(_BYTE *)(v11 + v10) = 0;
          p_src = (void **)v2;
          memmove((char *)*v7 + (_QWORD)v8, v2, v9);
        }
        v2 = v6;
      }
      while ( v6 < v4 );
    }
  }
  if ( src )
  {
    *(_QWORD *)&v20 = 0;
    qfree(src, (const char *)p_src);
  }
  return v21 - __readfsqword(0x28u);
}
