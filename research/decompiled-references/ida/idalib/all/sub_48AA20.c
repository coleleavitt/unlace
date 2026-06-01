unsigned __int64 __fastcall sub_48AA20(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned __int64 v3; // r15
  int *v7; // rsi
  __int64 v8; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  int *v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 *v17; // rax
  int v18; // ecx
  int *v19; // rsi
  __int64 *v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rdi
  char v25; // r9
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v33; // [rsp+8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+18h] [rbp-40h]

  v3 = a3;
  v34 = __readfsqword(0x28u);
  ptr = nullptr;
  v33 = 0;
  if ( a3 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, a3, 4);
    v7 = (int *)ptr;
    v8 = v33;
    if ( (unsigned __int64)v33 < v3 )
    {
      do
      {
        v7[v8++] = 0;
        v7 = (int *)ptr;
      }
      while ( v3 != v8 );
    }
    *(_QWORD *)&v33 = v3;
    if ( a3 > 0 )
    {
      v10 = v3;
LABEL_10:
      v11 = *a2;
      v12 = v7;
      v13 = 0;
      v14 = 0;
      v15 = (unsigned __int64 *)(*a2 + 8LL);
      do
      {
        v16 = *v12;
        if ( v16 < *v15 )
        {
          v17 = (unsigned __int64 *)(*(v15 - 1) + 16 * v16);
          if ( v14 >= v13 || *v17 < v14 )
          {
            v14 = *v17;
            v13 = v17[1];
          }
        }
        ++v12;
        v15 += 3;
      }
      while ( &v7[v10] != v12 );
      if ( v14 < v13 )
      {
        v18 = 0;
        while ( 1 )
        {
          v19 = &v7[v18];
          v20 = (__int64 *)(v11 + 24LL * v18);
          v21 = *v19;
          v22 = v20[1];
          v23 = *v19;
          if ( v21 >= v22 )
            goto LABEL_26;
          v24 = *v20;
          v25 = 0;
          do
          {
            v26 = (unsigned __int64 *)(v24 + 16 * v21);
            if ( *v26 >= v13 )
              break;
            v27 = v26[1];
            if ( v14 >= v27 )
              break;
            ++v23;
            if ( v13 < v27 )
            {
              v13 = v27;
              v25 = 1;
            }
            v21 = v23;
          }
          while ( v23 < v22 );
          *v19 = v23;
          if ( v25 )
          {
            v18 = 0;
          }
          else
          {
LABEL_26:
            if ( a3 <= ++v18 )
            {
              v28 = a1[20];
              v29 = a1[19];
              if ( a1[21] < (unsigned __int64)(v28 + 1) )
              {
                v31 = qvector_reserve(a1 + 19, v29, v28 + 1, 16);
                a1[19] = v31;
                v29 = v31;
                v28 = a1[20];
              }
              v30 = 16 * v28 + v29;
              *(_OWORD *)v30 = 0;
              ++a1[20];
              *(_QWORD *)v30 = v14;
              *(_QWORD *)(v30 + 8) = v13;
              v7 = (int *)ptr;
              goto LABEL_10;
            }
          }
          v7 = (int *)ptr;
          v11 = *a2;
        }
      }
    }
  }
  else
  {
    v7 = nullptr;
  }
  if ( v7 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v7);
  }
  return v34 - __readfsqword(0x28u);
}
