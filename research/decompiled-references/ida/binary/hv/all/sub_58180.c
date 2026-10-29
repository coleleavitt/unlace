__int64 __fastcall sub_58180(__int64 a1, const char *a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r13
  size_t v7; // r12
  char *v8; // rsi
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // r12
  size_t v12; // rbp
  unsigned __int64 v13; // rbp
  size_t v14; // r13
  __int64 v16; // r12
  size_t v17; // r14
  __int64 v18; // rsi
  void *v19; // rax
  void *v20; // rsi
  __int64 v21; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    src = (void *)sub_96080(&src, 0, v4 + 1, 1);
    n[0] = v5;
    memmove(src, a2, v6);
    *((_BYTE *)src + v6) = 0;
    v7 = n[0];
    if ( n[0] > 1 )
    {
      v8 = (char *)src;
      if ( *((char *)src + n[0] - 2) != 47 )
      {
        if ( n[1] < n[0] + 1 )
        {
          src = (void *)sub_96080(&src, src, n[0] + 1, 1);
          v8 = (char *)src;
        }
        n[0] = v7 + 1;
        v8[v7 - 1] = 47;
        *((_BYTE *)src + v7) = 0;
      }
    }
  }
  ptr = nullptr;
  v25 = 0;
  if ( a3 )
  {
    v9 = strlen(a3);
    v10 = v9 + 1;
    v11 = v9;
    ptr = (void *)sub_96080(&ptr, 0, v9 + 1, 1);
    *(_QWORD *)&v25 = v10;
    memmove(ptr, a3, v11);
    *((_BYTE *)ptr + v11) = 0;
  }
  v12 = n[0];
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v12 )
  {
    v19 = (void *)sub_96030(v12);
    *(_QWORD *)a1 = v19;
    v20 = src;
    *(_QWORD *)(a1 + 16) = v12;
    memcpy(v19, v20, v12);
    *(_QWORD *)(a1 + 8) = v12;
  }
  v13 = v25;
  if ( (_QWORD)v25 )
  {
    v14 = v25 - 1;
    if ( (_QWORD)v25 != 1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v17 = v25 - 1;
      if ( v16 )
      {
        --v16;
        v17 = v14 + v16;
        v13 = v25 + v16;
      }
      v18 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v13 )
      {
        v21 = sub_96080(a1, v18, v13, 1);
        *(_QWORD *)a1 = v21;
        v18 = v21;
      }
      *(_QWORD *)(a1 + 8) = v13;
      *(_BYTE *)(v18 + v17) = 0;
      memcpy((void *)(v16 + *(_QWORD *)a1), ptr, v14);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v25 = 0;
    j__free(ptr);
  }
  if ( src )
  {
    n[0] = 0;
    j__free(src);
  }
  return a1;
}

