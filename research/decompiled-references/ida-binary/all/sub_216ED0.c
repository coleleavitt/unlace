unsigned __int64 __fastcall sub_216ED0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  size_t v12; // r8
  int v13; // eax
  size_t v14; // rbp
  __int64 v15; // rdx
  char *v16; // rsi
  int *v17; // rbp
  int v18; // eax
  void *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // rax
  void *v25; // rax
  const void *v26; // rsi
  size_t n; // [rsp+0h] [rbp-80h]
  size_t na; // [rsp+0h] [rbp-80h]
  __int64 v29; // [rsp+10h] [rbp-70h] BYREF
  int v30; // [rsp+18h] [rbp-68h] BYREF
  void *src; // [rsp+20h] [rbp-60h]
  __int128 v32; // [rsp+28h] [rbp-58h]
  unsigned __int64 v33; // [rsp+40h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  v6 = dbg;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  LODWORD(v6) = *(_DWORD *)(v6 + 64);
  v7 = v6 + 14;
  v8 = v6 + 7;
  if ( v8 >= 0 )
    v7 = v8;
  v9 = v7 >> 3;
  if ( v9 )
  {
    v10 = qvector_reserve(a1, 0, v9, 1);
    v11 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v10;
    v12 = v10;
    if ( v11 < v9 )
    {
      n = v10;
      memset((void *)(v10 + v11), 0, v9 - v11);
      v12 = n;
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  else
  {
    v12 = 0;
  }
  *(_BYTE *)(v12 + ((unsigned __int64)a2 >> 3)) |= 1 << (a2 & 7);
  v13 = *(_DWORD *)a3;
  v30 = -2;
  v32 = 0;
  if ( v13 < -1 )
  {
    src = *(void **)(a3 + 8);
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 16);
    src = nullptr;
    v32 = 0;
    if ( v14 )
    {
      v25 = (void *)qalloc_or_throw(v14);
      v26 = *(const void **)(a3 + 8);
      src = v25;
      *((_QWORD *)&v32 + 1) = v14;
      memcpy(v25, v26, v14);
      *(_QWORD *)&v32 = v14;
      v13 = *(_DWORD *)a3;
    }
  }
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(char **)(a1 + 24);
  v30 = v13;
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v15 + 1) )
  {
    v24 = qvector_reserve(a1 + 24, v16, v15 + 1, 32);
    *(_QWORD *)(a1 + 24) = v24;
    v15 = *(_QWORD *)(a1 + 32);
    v16 = (char *)v24;
  }
  v17 = (int *)&v16[32 * v15];
  *v17 = -2;
  *((_QWORD *)v17 + 3) = 0;
  *(_OWORD *)(v17 + 2) = 0;
  if ( v17 != &v30 )
  {
    v18 = v30;
    if ( v30 < -1 )
    {
      *((_QWORD *)v17 + 1) = src;
    }
    else
    {
      *((_QWORD *)v17 + 1) = 0;
      *((_OWORD *)v17 + 1) = 0;
      if ( (_QWORD)v32 )
      {
        na = v32;
        v19 = (void *)qalloc_or_throw(v32);
        *((_QWORD *)v17 + 1) = v19;
        v16 = (char *)src;
        *((_QWORD *)v17 + 3) = na;
        memcpy(v19, v16, na);
        v18 = v30;
        *((_QWORD *)v17 + 2) = na;
      }
    }
    *v17 = v18;
  }
  ++*(_QWORD *)(a1 + 32);
  if ( v30 >= -1 && src )
  {
    *(_QWORD *)&v32 = 0;
    qfree(src, v16);
  }
  if ( (a2 & 0x80000000) == 0 && a2 < (unsigned __int64)xmmword_8CC398 )
  {
    v20 = qword_8CC390 + 56LL * a2;
    if ( v20 )
    {
      v21 = *(int *)(v20 + 44);
      if ( (int)v21 < *(_DWORD *)(dbg + 64) )
      {
        v22 = *(_QWORD *)(dbg + 56) + 32 * v21;
        if ( (*(_BYTE *)(v22 + 9) & 1) == 0 )
        {
          if ( *(_QWORD *)(v22 + 16) )
          {
            v29 = sub_235E50(v20);
            sub_216980((__int64 *)(a1 + 48), &v29);
          }
        }
      }
    }
  }
  return v33 - __readfsqword(0x28u);
}
