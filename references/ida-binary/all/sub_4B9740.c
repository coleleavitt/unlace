unsigned __int64 __fastcall sub_4B9740(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  double v4; // xmm0_8
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // r12
  const char *v8; // r15
  __int64 v9; // rax
  char *v10; // r14
  size_t v11; // r10
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rsi
  size_t v15; // rdx
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  char *v19; // r9
  char *v20; // r12
  __int64 v21; // rax
  const char *v22; // rax
  __int64 v24; // rax
  size_t v25; // r9
  __int64 v26; // rax
  size_t v27; // [rsp+0h] [rbp-78h]
  size_t v28; // [rsp+0h] [rbp-78h]
  size_t v29; // [rsp+8h] [rbp-70h]
  size_t v30; // [rsp+10h] [rbp-68h]
  void *v31; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v4 = 0.0;
  v34 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &unk_8941C8;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 32) = a3;
  src = nullptr;
  *(_OWORD *)(a1 + 16) = 0;
  v33 = 0;
  if ( a2 )
  {
    v5 = strlen(a2);
    v6 = v5 + 1;
    v7 = v5;
    src = (void *)qvector_reserve(&src, 0, v5 + 1, 1);
    *(_QWORD *)&v33 = v6;
    memmove(src, a2, v7);
    *((_BYTE *)src + v7) = 0;
    v8 = (const char *)src;
    v31 = (void *)(a1 + 8);
    v9 = v33;
    if ( (_QWORD)v33 )
    {
      v10 = (char *)src + v33 - 1;
      if ( src >= v10 )
        goto LABEL_17;
      do
      {
        v16 = strchr(v8, 33);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(_QWORD *)(a1 + 8);
        v19 = v16;
        v20 = v16;
        if ( !v16 )
          v19 = v10;
        v25 = v19 - v8;
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v17 + 1) )
        {
          v27 = v25;
          v21 = qvector_reserve(v31, v18, v17 + 1, 24);
          v17 = *(_QWORD *)(a1 + 16);
          v25 = v27;
          *(_QWORD *)(a1 + 8) = v21;
          v18 = v21;
        }
        v11 = v25;
        v12 = v18 + 24 * v17;
        *(_OWORD *)(v12 + 8) = 0;
        *(_QWORD *)v12 = 0;
        ++*(_QWORD *)(a1 + 16);
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
        {
          --v13;
          v11 = v25 + v13;
        }
        v14 = *(_QWORD *)v12;
        v15 = v11 + 1;
        if ( *(_QWORD *)(v12 + 16) < v11 + 1 )
        {
          v30 = v25;
          v29 = v11;
          v28 = v11 + 1;
          v24 = qvector_reserve(v12, v14, v15, 1);
          v25 = v30;
          v11 = v29;
          *(_QWORD *)v12 = v24;
          v14 = v24;
          v15 = v28;
        }
        *(_QWORD *)(v12 + 8) = v15;
        *(_BYTE *)(v14 + v11) = 0;
        a2 = v8;
        memmove((void *)(v13 + *(_QWORD *)v12), v8, v25);
        if ( !v20 )
          break;
        v8 = v20 + 1;
      }
      while ( v20 + 1 < v10 );
      v9 = v33;
      v8 = (const char *)src;
      if ( (_QWORD)v33 )
      {
LABEL_17:
        if ( v9 != 1 && v8[v9 - 2] == 33 )
        {
          a3 = *(_QWORD *)(a1 + 16);
          a2 = *(const char **)(a1 + 8);
          if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(a3 + 1) )
          {
            v26 = qvector_reserve(v31, a2, a3 + 1, 24);
            *(_QWORD *)(a1 + 8) = v26;
            a3 = *(_QWORD *)(a1 + 16);
            a2 = (const char *)v26;
          }
          v4 = 0.0;
          v22 = &a2[24 * a3];
          *(_QWORD *)v22 = 0;
          v8 = (const char *)src;
          *(_OWORD *)(v22 + 8) = 0;
          ++*(_QWORD *)(a1 + 16);
        }
      }
    }
    if ( v8 )
    {
      *(_QWORD *)&v33 = 0;
      v4 = qfree(v8, a2);
    }
  }
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( !under_debugger )
      interr(40611, a2, a3, a4, v4);
    BUG();
  }
  return v34 - __readfsqword(0x28u);
}
