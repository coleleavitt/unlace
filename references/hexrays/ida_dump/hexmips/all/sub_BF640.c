unsigned __int64 __fastcall sub_BF640(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 *v7; // rbp
  __int64 v8; // r15
  void *v9; // rax
  unsigned __int64 v11; // rbp
  _QWORD *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 n; // [rsp+0h] [rbp-A8h]
  __int64 v21; // [rsp+8h] [rbp-A0h]
  _QWORD v22[2]; // [rsp+10h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-88h]
  __int128 v24; // [rsp+28h] [rbp-80h]
  __int64 v25[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v26; // [rsp+50h] [rbp-58h]
  __int128 v27; // [rsp+58h] [rbp-50h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v28 - __readfsqword(0x28u);
  v22[0] = 0;
  v22[1] = 0;
  src = nullptr;
  v24 = 0;
  if ( a2 < v2 )
  {
    v11 = a2;
    do
    {
      v12 = (_QWORD *)(*a1 + 40 * v11);
      v13 = v12[2];
      if ( v13 )
      {
        v12[3] = 0;
        qfree(v13);
      }
      ++v11;
      qfree(*v12);
    }
    while ( v2 != v11 );
  }
  else
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)v22 >= *a1 && (unsigned __int64)v22 < v5 + 40 * v6 )
    {
      sub_5FE00(v25, (__int64)v22);
      v14 = v24;
      v26 = nullptr;
      v27 = 0;
      if ( (_QWORD)v24 )
      {
        v26 = (void *)qalloc_or_throw(16 * v24);
        *((_QWORD *)&v27 + 1) = v14;
        memcpy(v26, src, 16 * v14);
        *(_QWORD *)&v27 = v14;
      }
      if ( a1[2] < a2 )
        *a1 = qvector_reserve(a1, *a1, a2, 40);
      v15 = a1[1];
      if ( v15 < a2 )
      {
        do
        {
          v18 = *a1 + 40 * v15;
          sub_5FE00((__int64 *)v18, (__int64)v25);
          *(_QWORD *)(v18 + 16) = 0;
          *(_OWORD *)(v18 + 24) = 0;
          v19 = v27;
          if ( (_QWORD)v27 )
          {
            v21 = 16 * v27;
            v17 = (void *)qalloc_or_throw(16 * v27);
            *(_QWORD *)(v18 + 16) = v17;
            *(_QWORD *)(v18 + 32) = v19;
            memcpy(v17, v26, v21);
            *(_QWORD *)(v18 + 24) = v19;
          }
          ++v15;
        }
        while ( a2 != v15 );
      }
      v16 = v26;
      a1[1] = a2;
      if ( v16 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v16);
      }
      qfree(v25[0]);
      goto LABEL_12;
    }
    if ( v6 < a2 )
    {
      *a1 = qvector_reserve(a1, v5, a2, 40);
      v2 = a1[1];
    }
    for ( ; v2 < a2; v7[3] = v8 )
    {
      while ( 1 )
      {
        v7 = (__int64 *)(*a1 + 40 * v2);
        sub_5FE00(v7, (__int64)v22);
        v7[2] = 0;
        *(_OWORD *)(v7 + 3) = 0;
        v8 = v24;
        if ( (_QWORD)v24 )
          break;
        if ( ++v2 >= a2 )
          goto LABEL_11;
      }
      n = 16 * v24;
      v9 = (void *)qalloc_or_throw(16 * v24);
      v7[2] = (__int64)v9;
      ++v2;
      v7[4] = v8;
      memcpy(v9, src, n);
    }
  }
LABEL_11:
  a1[1] = a2;
LABEL_12:
  if ( src )
  {
    *(_QWORD *)&v24 = 0;
    qfree(src);
  }
  qfree(v22[0]);
  return v28 - __readfsqword(0x28u);
}
