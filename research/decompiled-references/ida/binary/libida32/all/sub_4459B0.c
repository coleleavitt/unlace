unsigned __int64 __fastcall sub_4459B0(__int64 *a1, _QWORD *a2)
{
  unsigned int **v2; // rcx
  __int64 v3; // rbx
  __int64 v5; // r12
  __int64 v6; // r8
  unsigned int **v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // ebp
  _QWORD *v10; // rax
  unsigned int *v11; // rsi
  unsigned int v12; // ebx
  unsigned __int64 i; // rax
  unsigned int **v14; // rcx
  unsigned int *j; // rdx
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v22; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v2 = nullptr;
  v3 = a2[1];
  v25 = __readfsqword(0x28u);
  ptr = nullptr;
  v24 = 0;
  if ( (_DWORD)v3 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, (int)v3, 8);
    memset((char *)ptr + 8 * v24, 0, 8 * ((int)v3 - (_QWORD)v24));
    *(_QWORD *)&v24 = (int)v3;
    if ( (int)v3 > 0 )
    {
      v22 = 0;
      do
      {
        *(_QWORD *)((char *)ptr + v22) = *(_QWORD *)(*a2 + 3 * v22);
        v22 += 8;
      }
      while ( v22 != 8LL * (unsigned int)(v3 - 1) + 8 );
    }
    v2 = (unsigned int **)ptr;
  }
  if ( (int)v3 > 0 )
  {
    v5 = 8LL * (unsigned int)(v3 - 1);
    while ( 1 )
    {
      v6 = *a2;
      v7 = v2;
      v8 = 0;
      v9 = -1;
      v10 = (_QWORD *)(*a2 + 8LL);
      do
      {
        v11 = *v7;
        if ( *v7 != (unsigned int *)(*(v10 - 1) + 8LL * *v10) && (v9 == -1 || *v11 < v9) )
        {
          v9 = *v11;
          v8 = v11[1];
        }
        ++v7;
        v10 += 3;
      }
      while ( &v2[(unsigned __int64)v5 / 8 + 1] != v7 );
      if ( v9 == -1 )
        break;
      while ( 1 )
      {
        v12 = v8;
        for ( i = 0; ; i += 8LL )
        {
          v14 = &v2[i / 8];
          for ( j = *v14;
                j != (unsigned int *)(*(_QWORD *)(v6 + 3 * i) + 8LL * *(_QWORD *)(v6 + 3 * i + 8));
                j = *(unsigned int **)((char *)ptr + i) )
          {
            v16 = j[1];
            if ( v9 >= v16 || *j >= v12 )
              break;
            if ( v12 < v16 )
              v12 = j[1];
            *v14 = j + 2;
            v6 = *a2;
            v14 = (unsigned int **)((char *)ptr + i);
          }
          if ( v5 == i )
            break;
          v2 = (unsigned int **)ptr;
        }
        if ( v8 == v12 )
          break;
        v2 = (unsigned int **)ptr;
        v8 = v12;
      }
      v17 = a1[1];
      v18 = *a1;
      if ( a1[2] < (unsigned __int64)(v17 + 1) )
      {
        v20 = qvector_reserve(a1, v18, v17 + 1, 8);
        *a1 = v20;
        v18 = v20;
        v17 = a1[1];
      }
      v19 = (unsigned int *)(v18 + 8 * v17);
      *v19 = v9;
      v19[1] = v12;
      v2 = (unsigned int **)ptr;
      ++a1[1];
    }
  }
  if ( v2 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v2);
  }
  return v25 - __readfsqword(0x28u);
}

