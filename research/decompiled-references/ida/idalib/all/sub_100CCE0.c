__int64 __fastcall sub_100CCE0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 *v9; // r13
  __int64 v10; // r14
  void **v11; // r15
  void **v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-48h]
  __int64 v16; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 72);
  v3 = v2 + 144LL * *(unsigned int *)(a1 + 80);
  while ( v2 != v3 )
  {
    while ( 1 )
    {
      v3 -= 144;
      v4 = *(void **)(v3 + 96);
      if ( v4 != (void *)(v3 + 112) )
        operator delete(v4);
      v5 = *(void **)(v3 + 64);
      if ( v5 != (void *)(v3 + 80) )
        operator delete(v5);
      v6 = *(void **)(v3 + 32);
      if ( v6 != (void *)(v3 + 48) )
        operator delete(v6);
      if ( *(_QWORD *)v3 == v3 + 16 )
        break;
      operator delete(*(void **)v3);
      if ( v2 == v3 )
        goto LABEL_11;
    }
  }
LABEL_11:
  result = *(unsigned int *)(a1 + 4708);
  *(_DWORD *)(a1 + 80) = 0;
  if ( (_DWORD)result )
  {
    result = *(unsigned int *)(a1 + 4704);
    if ( (_DWORD)result )
    {
      v8 = 0;
      result = 8LL * (unsigned int)(result - 1) + 8;
      v15 = result;
      do
      {
        v9 = (__int64 *)(v8 + *(_QWORD *)(a1 + 4696));
        v10 = *v9;
        if ( *v9 != -8 && v10 )
        {
          v11 = *(void ***)(v10 + 104);
          v12 = &v11[4 * *(unsigned int *)(v10 + 112)];
          v16 = *(_QWORD *)v10 + 249LL;
          if ( v11 != v12 )
          {
            do
            {
              while ( 1 )
              {
                v12 -= 4;
                if ( *v12 == v12 + 2 )
                  break;
                operator delete(*v12);
                if ( v11 == v12 )
                  goto LABEL_19;
              }
            }
            while ( v11 != v12 );
LABEL_19:
            v12 = *(void ***)(v10 + 104);
          }
          if ( v12 != (void **)(v10 + 120) )
            free(v12);
          v13 = *(void **)(v10 + 72);
          if ( v13 != (void *)(v10 + 88) )
            operator delete(v13);
          v14 = *(void **)(v10 + 32);
          if ( v14 != (void *)(v10 + 48) )
            operator delete(v14);
          result = operator delete(v10, v16, 8);
        }
        *v9 = 0;
        v8 += 8;
      }
      while ( v15 != v8 );
    }
    *(_QWORD *)(a1 + 4708) = 0;
  }
  return result;
}
