__int64 __fastcall hintplace_t__::vfunc_11(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned int a7)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // r15
  __int128 i; // xmm0
  size_t v16; // r13
  __int64 v17; // rdi
  void *v18; // rax
  __int64 v20; // rax
  unsigned int v21; // [rsp+Ch] [rbp-4Ch]
  __int64 v23; // [rsp+18h] [rbp-40h]

  v7 = (int)a7;
  v8 = a6[1];
  v21 = a7;
  if ( v8 < (int)a7 )
  {
    v21 = a6[1];
    v7 = (int)v8;
  }
  v9 = 24 * v7;
  v10 = 0xAAAAAAAAAAAAAAABLL * ((24 * v7) >> 3);
  if ( v10 )
  {
    v11 = a2[1];
    v12 = *a6;
    v13 = (_QWORD *)*a2;
    if ( a2[2] < v10 + v11 )
    {
      v23 = v9;
      v20 = qvector_reserve(a2, *a2, v10 + v11, 24);
      v9 = v23;
      *a2 = v20;
      v13 = (_QWORD *)v20;
      v11 = a2[1];
    }
    v14 = v12 + v9;
    memmove((char *)v13 + v9, v13, 24 * v11);
    for ( i = 0; v14 != v12; i = 0 )
    {
      while ( 1 )
      {
        *v13 = 0;
        *(_OWORD *)(v13 + 1) = i;
        v16 = *(_QWORD *)(v12 + 8);
        if ( v16 )
          break;
        v12 += 24;
        v13 += 3;
        if ( v14 == v12 )
          goto LABEL_11;
      }
      v17 = *(_QWORD *)(v12 + 8);
      v12 += 24;
      v13 += 3;
      v18 = (void *)qalloc_or_throw(v17);
      *(v13 - 1) = v16;
      *(v13 - 3) = v18;
      memcpy(v18, *(const void **)(v12 - 24), v16);
      *(v13 - 2) = v16;
    }
LABEL_11:
    a2[1] += v10;
  }
  *a3 = 0;
  return v21;
}
