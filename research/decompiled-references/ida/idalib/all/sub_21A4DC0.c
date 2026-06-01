void __fastcall sub_21A4DC0(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 i; // rbx
  int v7; // eax
  int v8; // edx
  __int64 v9; // r12
  __int64 v10; // rbx
  void *v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-40h]

  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::reserve");
  v2 = *a1;
  if ( a2 > (a1[2] - *a1) >> 6 )
  {
    v4 = a1[1];
    v5 = 0;
    v12 = v4 - v2;
    if ( a2 )
      v5 = operator new(a2 << 6);
    for ( i = v5; v4 != v2; *(_DWORD *)(i - 4) = *(_DWORD *)(v2 - 4) )
    {
      *(_DWORD *)(i + 8) = 0;
      *(_DWORD *)(i + 12) = 1;
      v8 = *(_DWORD *)(v2 + 8);
      *(_QWORD *)i = i + 16;
      if ( v8 )
        sub_2124860((void **)i, (char **)v2);
      *(_DWORD *)(i + 32) = 0;
      *(_QWORD *)(i + 24) = i + 40;
      *(_DWORD *)(i + 36) = 4;
      if ( *(_DWORD *)(v2 + 32) )
        sub_2124860((void **)(i + 24), (char **)(v2 + 24));
      v7 = *(_DWORD *)(v2 + 56);
      v2 += 64;
      i += 64;
      *(_DWORD *)(i - 8) = v7;
    }
    v9 = a1[1];
    v10 = *a1;
    if ( v9 != *a1 )
    {
      do
      {
        while ( 1 )
        {
          v11 = *(void **)(v10 + 24);
          if ( v11 != (void *)(v10 + 40) )
            free(v11);
          if ( *(_QWORD *)v10 == v10 + 16 )
            break;
          free(*(void **)v10);
          v10 += 64;
          if ( v9 == v10 )
            goto LABEL_17;
        }
        v10 += 64;
      }
      while ( v9 != v10 );
LABEL_17:
      v10 = *a1;
    }
    if ( v10 )
      operator delete((void *)v10);
    *a1 = v5;
    a1[1] = v5 + v12;
    a1[2] = (a2 << 6) + v5;
  }
}
