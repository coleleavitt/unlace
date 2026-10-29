unsigned __int64 __fastcall sub_1F3610(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r14
  void *v17; // rax
  __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r15
  unsigned __int64 v23; // rbp
  __int64 *v24; // r14
  __int64 v25; // rdi
  void *v26; // rdi
  void *v27; // rax
  const void *v28; // rsi
  __int64 n; // [rsp+8h] [rbp-70h]
  __int64 v30[2]; // [rsp+10h] [rbp-68h] BYREF
  void *src; // [rsp+20h] [rbp-58h]
  __int128 v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v4 = a1[1];
  v33 = __readfsqword(0x28u);
  if ( a2 < v4 )
  {
    v23 = a2;
    do
    {
      v24 = (__int64 *)(*a1 + 40 * v23);
      v25 = v24[2];
      if ( v25 )
      {
        v24[3] = 0;
        qfree(v25);
      }
      ++v23;
      qfree(*v24);
    }
    while ( v4 != v23 );
    a1[1] = a2;
  }
  else if ( v4 < a2 )
  {
    v7 = *a1;
    v8 = a1[2];
    if ( a3 < *a1 || a3 >= v7 + 40 * v8 )
    {
      if ( v8 >= a2 || (v18 = qvector_reserve((__int64)a1, v7, a2, 40), v4 = a1[1], *a1 = v18, v7 = v18, v4 < a2) )
      {
        while ( 1 )
        {
          v20 = v7 + 40 * v4;
          sub_64000((__int64 *)v20, a3);
          *(_QWORD *)(v20 + 16) = 0;
          *(_OWORD *)(v20 + 24) = 0;
          v22 = *(_QWORD *)(a3 + 24);
          if ( v22 )
          {
            v19 = (void *)qalloc_or_throw(16 * v22, a3, v21, 16 * v22);
            *(_QWORD *)(v20 + 16) = v19;
            *(_QWORD *)(v20 + 32) = v22;
            memcpy(v19, *(const void **)(a3 + 16), 16 * v22);
            *(_QWORD *)(v20 + 24) = v22;
          }
          if ( ++v4 >= a2 )
            break;
          v7 = *a1;
        }
      }
      a1[1] = a2;
    }
    else
    {
      sub_64000(v30, a3);
      v12 = *(_QWORD *)(a3 + 24);
      src = nullptr;
      v32 = 0;
      if ( v12 )
      {
        v27 = (void *)qalloc_or_throw(16 * v12, a3, v10, v11);
        v28 = *(const void **)(a3 + 16);
        src = v27;
        *((_QWORD *)&v32 + 1) = v12;
        memcpy(v27, v28, 16 * v12);
        *(_QWORD *)&v32 = v12;
      }
      if ( a1[2] < a2 )
        *a1 = qvector_reserve((__int64)a1, *a1, a2, 40);
      v13 = a1[1];
      if ( v13 < a2 )
      {
        do
        {
          v14 = *a1 + 40 * v13;
          sub_64000((__int64 *)v14, (__int64)v30);
          *(_QWORD *)(v14 + 16) = 0;
          *(_OWORD *)(v14 + 24) = 0;
          v16 = v32;
          if ( (_QWORD)v32 )
          {
            n = 16 * v32;
            v17 = (void *)qalloc_or_throw(16 * v32, (__int64)v30, 16 * v32, v15);
            *(_QWORD *)(v14 + 16) = v17;
            *(_QWORD *)(v14 + 32) = v16;
            memcpy(v17, src, n);
            *(_QWORD *)(v14 + 24) = v16;
          }
          ++v13;
        }
        while ( a2 != v13 );
      }
      v26 = src;
      a1[1] = a2;
      if ( v26 )
      {
        *(_QWORD *)&v32 = 0;
        qfree((__int64)v26);
      }
      qfree(v30[0]);
    }
  }
  return v33 - __readfsqword(0x28u);
}
