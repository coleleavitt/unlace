unsigned __int64 __fastcall sub_216180(int **a1, int *a2)
{
  int *v2; // rbp
  __int128 i; // xmm0
  int *v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  size_t v9; // r15
  int *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  int *v14; // rbp
  __int64 v15; // rdi
  bool v16; // cc
  void *v17; // rax
  int v18; // [rsp+0h] [rbp-88h] BYREF
  void *src; // [rsp+8h] [rbp-80h]
  size_t n[2]; // [rsp+10h] [rbp-78h]
  int v21; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v24 - __readfsqword(0x28u);
  *(_QWORD *)&i = 0;
  v5 = a2;
  v18 = -2;
  src = (void *)-1LL;
  *(_OWORD *)n = 0;
  if ( a2 < v2 )
  {
    v11 = a2;
    do
    {
      v12 = (__int64)&(*a1)[8 * (_QWORD)v11];
      if ( *(int *)v12 >= -1 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
        {
          *(_QWORD *)(v12 + 16) = 0;
          *(double *)&i = qfree(v13, (const char *)a2);
        }
      }
      v11 = (int *)((char *)v11 + 1);
    }
    while ( v2 != v11 );
  }
  else
  {
    a2 = *a1;
    v6 = (unsigned __int64)a1[2];
    if ( &v18 >= *a1 && &v18 < &a2[8 * v6] )
    {
      a2 = &v18;
      v21 = -2;
      v22 = 0;
      v23 = 0;
      sub_20BB80((__int64)&v21, (__int64)&v18);
      if ( a1[2] < v5 )
      {
        a2 = *a1;
        *a1 = (int *)qvector_reserve(a1, *a1, v5, 32);
      }
      v14 = a1[1];
      if ( v14 < v5 )
      {
        do
        {
          a2 = &v21;
          v15 = (__int64)&(*a1)[8 * (_QWORD)v14];
          *(_DWORD *)v15 = -2;
          *(_QWORD *)(v15 + 24) = 0;
          *(_OWORD *)(v15 + 8) = 0;
          sub_20BB80(v15, (__int64)&v21);
          v14 = (int *)((char *)v14 + 1);
        }
        while ( v5 != v14 );
      }
      v16 = v21 < -1;
      a1[1] = v5;
      if ( !v16 && (_QWORD)v22 )
      {
        *((_QWORD *)&v22 + 1) = 0;
        *(double *)&i = qfree(v22, (const char *)a2);
      }
      goto LABEL_14;
    }
    if ( v6 < (unsigned __int64)v5 )
    {
      *a1 = (int *)qvector_reserve(a1, a2, v5, 32);
      v2 = a1[1];
    }
    for ( i = 0; v2 < v5; v2 = (int *)((char *)v2 + 1) )
    {
      v7 = (__int64)&(*a1)[8 * (_QWORD)v2];
      *(_DWORD *)v7 = -2;
      *(_QWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 8) = i;
      if ( (int *)v7 != &v18 )
      {
        v8 = v18;
        if ( v18 < -1 )
        {
          *(_QWORD *)(v7 + 8) = src;
        }
        else
        {
          *(_QWORD *)(v7 + 8) = 0;
          *(_OWORD *)(v7 + 16) = 0;
          v9 = n[0];
          if ( n[0] )
          {
            v17 = (void *)qalloc_or_throw(n[0]);
            *(_QWORD *)(v7 + 8) = v17;
            a2 = (int *)src;
            *(_QWORD *)(v7 + 24) = v9;
            memcpy(v17, a2, v9);
            *(_QWORD *)(v7 + 16) = v9;
            v8 = v18;
            i = 0;
          }
        }
        *(_DWORD *)v7 = v8;
      }
    }
  }
  a1[1] = v5;
LABEL_14:
  if ( v18 >= -1 && src )
  {
    n[0] = 0;
    qfree(src, (const char *)a2, *(double *)&i);
  }
  return v24 - __readfsqword(0x28u);
}
