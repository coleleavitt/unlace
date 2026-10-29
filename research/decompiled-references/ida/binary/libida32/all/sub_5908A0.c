unsigned __int64 __fastcall sub_5908A0(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r14
  _QWORD *v7; // rbp
  size_t v8; // rax
  char *v9; // rsi
  __int64 v10; // rbx
  char *v11; // rbx
  _QWORD *v12; // r13
  __int64 v13; // rax
  char *v14; // rcx
  _QWORD *v15; // rsi
  char *v16; // rdi
  char v17; // al
  void *v18; // rdi
  void *v20; // rax
  const void *v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-60h]
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+10h] [rbp-50h]
  unsigned __int64 v25; // [rsp+20h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v25 = __readfsqword(0x28u);
  v24 = 0;
  ptr = nullptr;
  if ( v2 )
  {
    v20 = (void *)qalloc_or_throw(268 * v2, a2);
    v21 = *(const void **)a1;
    *((_QWORD *)&v24 + 1) = v2;
    ptr = v20;
    memcpy(v20, v21, 268 * v2);
    *(_QWORD *)&v24 = v2;
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v5 = 268 * v4;
    v6 = 0xF0B7672A07A44C6BLL * ((268 * v4) >> 2);
    if ( v6 )
    {
      v7 = *(_QWORD **)(a1 + 24);
      v8 = 0;
      v9 = (char *)ptr;
      v10 = 268 * v24;
      if ( *((_QWORD *)&v24 + 1) < v6 + (unsigned __int64)v24 )
      {
        v22 = v5;
        ptr = (void *)qvector_reserve(&ptr, ptr, v6 + v24, 268);
        v9 = (char *)ptr;
        v5 = v22;
        v8 = 268 * v24 - v10;
      }
      v11 = &v9[v10];
      v12 = (_QWORD *)((char *)v7 + v5);
      memmove(&v11[v5], v11, v8);
      while ( v12 != v7 )
      {
        v13 = *v7;
        v14 = v11;
        v15 = v7;
        v16 = (char *)((unsigned __int64)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        v7 = (_QWORD *)((char *)v7 + 268);
        v11 += 268;
        *(_QWORD *)(v11 - 268) = v13;
        *((_QWORD *)v11 - 1) = *(v7 - 1);
        qmemcpy(v16, (char *)v15 - (v14 - v16), 8LL * ((unsigned int)((_DWORD)v14 - (_DWORD)v16 + 268) >> 3));
      }
      *(_QWORD *)&v24 = v6 + v24;
    }
  }
  v17 = sub_788930(&ptr, a1 + 48);
  v18 = ptr;
  *(_BYTE *)(a1 + 88) = v17;
  if ( v18 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v18);
  }
  return v25 - __readfsqword(0x28u);
}

