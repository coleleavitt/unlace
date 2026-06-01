unsigned __int64 __fastcall sub_7EC5C0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  int v7; // r13d
  size_t v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rax
  __int64 v17; // rbx
  void *src; // [rsp+8h] [rbp-90h]
  __int64 v19; // [rsp+10h] [rbp-88h] BYREF
  __int64 v20; // [rsp+18h] [rbp-80h] BYREF
  __int128 v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  void *v23; // [rsp+38h] [rbp-60h] BYREF
  size_t n[3]; // [rsp+40h] [rbp-58h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v25 - __readfsqword(0x28u);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( a2 < v2 )
  {
    v11 = a2;
    do
    {
      v12 = *a1 + 32 * v11;
      v13 = *(void **)(v12 + 8);
      if ( v13 )
      {
        *(_QWORD *)(v12 + 16) = 0;
        qfree(v13);
      }
      ++v11;
    }
    while ( v2 != v11 );
    goto LABEL_15;
  }
  v5 = *a1;
  v6 = a1[2];
  if ( (unsigned __int64)&v19 < *a1 || (unsigned __int64)&v19 >= v5 + 32 * v6 )
  {
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 32);
      v2 = a1[1];
    }
    if ( v2 < a2 )
    {
      do
      {
        v14 = v2++;
        v15 = *a1 + 32 * v14;
        *(_QWORD *)v15 = 0;
        *(_QWORD *)(v15 + 8) = 0;
        *(_OWORD *)(v15 + 16) = 0;
      }
      while ( a2 != v2 );
      a1[1] = a2;
      return v25 - __readfsqword(0x28u);
    }
LABEL_15:
    a1[1] = a2;
    return v25 - __readfsqword(0x28u);
  }
  v22 = 0;
  v23 = nullptr;
  *(_OWORD *)n = 0;
  sub_7DCF50(&v23, (__int64)&v20);
  v7 = v22;
  v8 = n[0];
  src = v23;
  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 32);
  v9 = a1[1];
  if ( v9 < a2 )
  {
    do
    {
      v17 = *a1 + 32 * v9;
      *(_DWORD *)v17 = v7;
      *(_QWORD *)(v17 + 8) = 0;
      *(_OWORD *)(v17 + 16) = 0;
      if ( v8 )
      {
        v16 = (void *)qalloc_or_throw(v8);
        *(_QWORD *)(v17 + 8) = v16;
        *(_QWORD *)(v17 + 24) = v8;
        memcpy(v16, src, v8);
        *(_QWORD *)(v17 + 16) = v8;
      }
      ++v9;
    }
    while ( a2 != v9 );
  }
  a1[1] = a2;
  if ( src )
    qfree(src);
  return v25 - __readfsqword(0x28u);
}
