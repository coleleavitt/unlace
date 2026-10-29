unsigned __int64 __fastcall sub_5AAA60(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // r14
  _QWORD *v6; // rbp
  size_t v7; // rax
  char *v8; // rsi
  __int64 v9; // rbx
  char *v10; // rbx
  _QWORD *v11; // r13
  __int64 v12; // rax
  char *v13; // rcx
  _QWORD *v14; // rsi
  char *v15; // rdi
  char v16; // al
  void *v17; // rdi
  void *v19; // rax
  const void *v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-60h]
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v23; // [rsp+10h] [rbp-50h]
  unsigned __int64 v24; // [rsp+20h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v24 = __readfsqword(0x28u);
  v23 = 0;
  ptr = nullptr;
  if ( v1 )
  {
    v19 = (void *)qalloc_or_throw(268 * v1);
    v20 = *(const void **)a1;
    *((_QWORD *)&v23 + 1) = v1;
    ptr = v19;
    memcpy(v19, v20, 268 * v1);
    *(_QWORD *)&v23 = v1;
  }
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v4 = 268 * v3;
    v5 = 0xF0B7672A07A44C6BLL * ((268 * v3) >> 2);
    if ( v5 )
    {
      v6 = *(_QWORD **)(a1 + 24);
      v7 = 0;
      v8 = (char *)ptr;
      v9 = 268 * v23;
      if ( *((_QWORD *)&v23 + 1) < v5 + (unsigned __int64)v23 )
      {
        v21 = v4;
        ptr = (void *)qvector_reserve(&ptr, ptr, v5 + v23, 268);
        v8 = (char *)ptr;
        v4 = v21;
        v7 = 268 * v23 - v9;
      }
      v10 = &v8[v9];
      v11 = (_QWORD *)((char *)v6 + v4);
      memmove(&v10[v4], v10, v7);
      while ( v11 != v6 )
      {
        v12 = *v6;
        v13 = v10;
        v14 = v6;
        v15 = (char *)((unsigned __int64)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        v6 = (_QWORD *)((char *)v6 + 268);
        v10 += 268;
        *(_QWORD *)(v10 - 268) = v12;
        *((_QWORD *)v10 - 1) = *(v6 - 1);
        qmemcpy(v15, (char *)v14 - (v13 - v15), 8LL * ((unsigned int)((_DWORD)v13 - (_DWORD)v15 + 268) >> 3));
      }
      *(_QWORD *)&v23 = v5 + v23;
    }
  }
  v16 = sub_7A8C80(&ptr, a1 + 48);
  v17 = ptr;
  *(_BYTE *)(a1 + 88) = v16;
  if ( v17 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v17);
  }
  return v24 - __readfsqword(0x28u);
}
