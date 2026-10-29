unsigned __int64 __fastcall sub_1BA700(__int64 *a1, const QT::QObject *a2)
{
  __int64 *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rbp
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rdx
  size_t v14; // rax
  __int64 v15; // rbp
  _QWORD *v16; // rbp
  __int64 v17; // r13
  size_t v18; // r15
  void *v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+10h] [rbp-58h] BYREF
  __int128 v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v3 = &v29;
  v30 = 0;
  v29 = 0;
  sub_1BA130((__int64)a1, (const char *)&v29, a2);
  v4 = v30;
  if ( !(_QWORD)v30 )
  {
    v9 = v29;
    if ( !v29 )
      return v31 - __readfsqword(0x28u);
    goto LABEL_21;
  }
  v5 = a1[1];
  if ( v5 )
  {
    v3 = (__int64 *)*a1;
    if ( a1[2] < (unsigned __int64)(v5 + 1) )
    {
      v26 = qvector_reserve(a1, v3, v5 + 1, 24);
      *a1 = v26;
      v5 = a1[1];
      v3 = (__int64 *)v26;
    }
    v6 = &v3[3 * v5];
    *v6 = 0;
    *(_OWORD *)(v6 + 1) = 0;
    v5 = a1[1] + 1;
    v4 = v30;
    a1[1] = v5;
  }
  v7 = v29;
  v8 = 3 * v4;
  v9 = v29;
  v10 = 0xAAAAAAAAAAAAAAABLL * ((24 * v4) >> 3);
  if ( v10 )
  {
    v11 = 3 * v5;
    v12 = (_QWORD *)*a1;
    v13 = v10 + v5;
    v14 = 0;
    v15 = v11;
    if ( a1[2] < v13 )
    {
      v28 = v29;
      v25 = qvector_reserve(a1, v12, v13, 24);
      *a1 = v25;
      v12 = (_QWORD *)v25;
      v7 = v28;
      v14 = 24 * a1[1] - v15 * 8;
    }
    v16 = &v12[v15];
    v27 = v7;
    v17 = v7 + v8 * 8;
    v3 = v16;
    memmove(&v16[v8], v16, v14);
    if ( v27 != v17 )
    {
      do
      {
        while ( 1 )
        {
          *v16 = 0;
          *(_OWORD *)(v16 + 1) = 0;
          v18 = *(_QWORD *)(v9 + 8);
          if ( v18 )
            break;
          v9 += 24;
          v16 += 3;
          if ( v17 == v9 )
            goto LABEL_14;
        }
        v19 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 8));
        *v16 = v19;
        v9 += 24;
        v16[2] = v18;
        v3 = *(__int64 **)(v9 - 24);
        v16 += 3;
        memcpy(v19, v3, v18);
        *(v16 - 2) = v18;
      }
      while ( v17 != v9 );
    }
LABEL_14:
    a1[1] += v10;
    v7 = v29;
    v9 = v29;
  }
  if ( v7 )
  {
    v20 = v30;
    if ( (_QWORD)v30 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v7 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23, (const char *)v3);
          v7 = v29;
        }
        ++v21;
        v9 = v7;
      }
      while ( v20 != v21 );
    }
LABEL_21:
    *(_QWORD *)&v30 = 0;
    qfree(v9, (const char *)v3);
  }
  return v31 - __readfsqword(0x28u);
}
