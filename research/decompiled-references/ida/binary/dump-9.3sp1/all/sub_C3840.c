unsigned __int64 __fastcall sub_C3840(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r15
  void *v10; // rax
  unsigned __int64 v12; // rbp
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  void *v19; // rdi
  void *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 n; // [rsp+0h] [rbp-A8h]
  __int64 v25; // [rsp+8h] [rbp-A0h]
  __int64 v26[2]; // [rsp+10h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-88h]
  __int128 v28; // [rsp+28h] [rbp-80h]
  __int64 v29[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v30; // [rsp+50h] [rbp-58h]
  __int128 v31; // [rsp+58h] [rbp-50h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v32 - __readfsqword(0x28u);
  v26[0] = 0;
  v26[1] = 0;
  src = nullptr;
  v28 = 0;
  if ( a2 < v2 )
  {
    v12 = a2;
    do
    {
      v13 = (__int64 *)(*a1 + 40 * v12);
      v14 = v13[2];
      if ( v14 )
      {
        v13[3] = 0;
        qfree(v14);
      }
      ++v12;
      qfree(*v13);
    }
    while ( v2 != v12 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)v26 >= *a1 && (unsigned __int64)v26 < v5 + 40 * v6 )
    {
      sub_64000(v29, (__int64)v26);
      v17 = v28;
      v30 = nullptr;
      v31 = 0;
      if ( (_QWORD)v28 )
      {
        v30 = (void *)qalloc_or_throw(16 * v28, (__int64)v26, v15, v16);
        *((_QWORD *)&v31 + 1) = v17;
        memcpy(v30, src, 16 * v17);
        *(_QWORD *)&v31 = v17;
      }
      if ( a1[2] < a2 )
        *a1 = qvector_reserve((__int64)a1, *a1, a2, 40);
      v18 = a1[1];
      if ( v18 < a2 )
      {
        do
        {
          v21 = *a1 + 40 * v18;
          sub_64000((__int64 *)v21, (__int64)v29);
          *(_QWORD *)(v21 + 16) = 0;
          *(_OWORD *)(v21 + 24) = 0;
          v23 = v31;
          if ( (_QWORD)v31 )
          {
            v25 = 16 * v31;
            v20 = (void *)qalloc_or_throw(16 * v31, (__int64)v29, 16 * v31, v22);
            *(_QWORD *)(v21 + 16) = v20;
            *(_QWORD *)(v21 + 32) = v23;
            memcpy(v20, v30, v25);
            *(_QWORD *)(v21 + 24) = v23;
          }
          ++v18;
        }
        while ( a2 != v18 );
      }
      v19 = v30;
      a1[1] = a2;
      if ( v19 )
      {
        *(_QWORD *)&v31 = 0;
        qfree((__int64)v19);
      }
      qfree(v29[0]);
      goto LABEL_12;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve((__int64)a1, v5, a2, 40);
      v2 = a1[1];
    }
    for ( ; v2 < a2; v7[3] = v9 )
    {
      while ( 1 )
      {
        v7 = (__int64 *)(*a1 + 40 * v2);
        sub_64000(v7, (__int64)v26);
        v7[2] = 0;
        *(_OWORD *)(v7 + 3) = 0;
        v9 = v28;
        if ( (_QWORD)v28 )
          break;
        if ( ++v2 >= a2 )
          goto LABEL_11;
      }
      n = 16 * v28;
      v10 = (void *)qalloc_or_throw(16 * v28, (__int64)v26, 16 * v28, v8);
      v7[2] = (__int64)v10;
      ++v2;
      v7[4] = v9;
      memcpy(v10, src, n);
    }
  }
LABEL_11:
  a1[1] = a2;
LABEL_12:
  if ( src )
  {
    *(_QWORD *)&v28 = 0;
    qfree((__int64)src);
  }
  qfree(v26[0]);
  return v32 - __readfsqword(0x28u);
}
