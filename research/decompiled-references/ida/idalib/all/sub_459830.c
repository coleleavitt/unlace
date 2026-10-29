unsigned __int64 __fastcall sub_459830(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  unsigned __int64 **v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r8
  unsigned __int64 **v8; // rcx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rdx
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 **v15; // rsi
  unsigned __int64 *j; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v25; // [rsp+8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v3 = a2[1];
  v26 = __readfsqword(0x28u);
  ptr = nullptr;
  v5 = nullptr;
  v25 = 0;
  if ( (_DWORD)v3 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, (int)v3, 8);
    memset((char *)ptr + 8 * v25, 0, 8 * ((int)v3 - (_QWORD)v25));
    *(_QWORD *)&v25 = (int)v3;
    if ( (int)v3 > 0 )
    {
      v23 = 0;
      do
      {
        *(_QWORD *)((char *)ptr + v23) = *(_QWORD *)(*a2 + 3 * v23);
        v23 += 8;
      }
      while ( v23 != 8LL * (unsigned int)(v3 - 1) + 8 );
    }
    v5 = (unsigned __int64 **)ptr;
  }
  if ( (int)v3 > 0 )
  {
    v6 = 8LL * (unsigned int)(v3 - 1);
    while ( 1 )
    {
      v7 = *a2;
      v8 = v5;
      v9 = 0;
      v10 = -1;
      v11 = (_QWORD *)(*a2 + 8LL);
      do
      {
        v12 = *v8;
        if ( *v8 != (unsigned __int64 *)(*(v11 - 1) + 16LL * *v11) && (v10 == -1 || *v12 < v10) )
        {
          v10 = *v12;
          v9 = v12[1];
        }
        ++v8;
        v11 += 3;
      }
      while ( &v5[(unsigned __int64)v6 / 8 + 1] != v8 );
      if ( v10 == -1 )
        break;
      while ( 1 )
      {
        v13 = v9;
        for ( i = 0; ; i += 8LL )
        {
          v15 = &v5[i / 8];
          for ( j = *v15;
                j != (unsigned __int64 *)(*(_QWORD *)(v7 + 3 * i) + 16LL * *(_QWORD *)(v7 + 3 * i + 8));
                j = *(unsigned __int64 **)((char *)ptr + i) )
          {
            v17 = j[1];
            if ( v10 >= v17 || *j >= v13 )
              break;
            if ( v13 < v17 )
              v13 = j[1];
            *v15 = j + 2;
            v7 = *a2;
            v15 = (unsigned __int64 **)((char *)ptr + i);
          }
          if ( v6 == i )
            break;
          v5 = (unsigned __int64 **)ptr;
        }
        if ( v9 == v13 )
          break;
        v5 = (unsigned __int64 **)ptr;
        v9 = v13;
      }
      v18 = a1[1];
      v19 = *a1;
      if ( a1[2] < (unsigned __int64)(v18 + 1) )
      {
        v21 = qvector_reserve(a1, v19, v18 + 1, 16);
        *a1 = v21;
        v19 = v21;
        v18 = a1[1];
      }
      v20 = (unsigned __int64 *)(v19 + 16 * v18);
      *v20 = v10;
      v5 = (unsigned __int64 **)ptr;
      v20[1] = v13;
      ++a1[1];
    }
  }
  if ( v5 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v5);
  }
  return v26 - __readfsqword(0x28u);
}
