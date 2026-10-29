unsigned __int64 __fastcall sub_E8FB30(
        _QWORD *a1,
        int a2,
        int a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        void *src,
        __int64 a8)
{
  __int64 v12; // rax
  const void *v13; // r8
  size_t v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  void *v17; // rcx
  __int64 v19; // rax
  int v20; // [rsp+0h] [rbp-48h]
  int v21; // [rsp+4h] [rbp-44h]

  v12 = a1[294];
  v13 = src;
  v14 = 8 * a8;
  v15 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v16 = 8 * a8 + a5 + 40;
  a1[304] += v16;
  if ( a1[295] >= v16 + v15 && v12 )
  {
    a1[294] = v16 + v15;
  }
  else
  {
    v21 = a6;
    v20 = a2;
    v19 = sub_962430((__int64)(a1 + 294), v16, v16, 3, (__int64)src, a6);
    v13 = src;
    LODWORD(a6) = v21;
    v15 = v19;
    a2 = v20;
  }
  *(_BYTE *)(v15 + 8) = 29;
  v17 = (void *)(v15 + 40);
  *(_DWORD *)(v15 + 12) = a2;
  *(_DWORD *)(v15 + 16) = a6;
  *(_DWORD *)(v15 + 20) = a3;
  *(_QWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 32) = 0;
  *(_QWORD *)v15 = off_2B21DC0;
  if ( v14 )
    v17 = memmove((void *)(v15 + 40), v13, v14);
  *(_QWORD *)(v15 + 24) = v17;
  *(_QWORD *)(v15 + 32) = a8;
  if ( a5 )
    memmove((void *)(v15 + 8LL * (unsigned int)a8 + 40), a4, a5);
  return v15;
}

