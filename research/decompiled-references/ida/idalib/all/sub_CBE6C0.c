void __fastcall sub_CBE6C0(__int64 a1, __int64 a2)
{
  void **v2; // rbp
  __int64 v3; // r14
  void *v6; // rdi
  unsigned int v7; // r13d
  void *v8; // rsi
  int v9; // edx
  void **v10; // rbp
  void **v11; // rbx
  size_t v12; // rdx

  v2 = *(void ***)a1;
  v3 = *(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      *(_DWORD *)(a2 + 8) = 0;
      v6 = (void *)(a2 + 16);
      *(_DWORD *)(a2 + 12) = 8;
      v7 = *((_DWORD *)v2 + 2);
      *(_QWORD *)a2 = a2 + 16;
      if ( v7 && (void **)a2 != v2 )
      {
        v8 = *v2;
        if ( v2 + 2 == *v2 )
        {
          v12 = 16LL * v7;
          if ( v7 <= 8uLL
            || (sub_2237220(a2, a2 + 16, v7, 16),
                v6 = *(void **)a2,
                v8 = *v2,
                (v12 = 16LL * *((unsigned int *)v2 + 2)) != 0) )
          {
            memcpy(v6, v8, v12);
          }
          *(_DWORD *)(a2 + 8) = v7;
          *((_DWORD *)v2 + 2) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 8) = v7;
          v9 = *((_DWORD *)v2 + 3);
          *(_QWORD *)a2 = v8;
          *(_DWORD *)(a2 + 12) = v9;
          *v2 = v2 + 2;
          *((_DWORD *)v2 + 3) = 0;
          *((_DWORD *)v2 + 2) = 0;
        }
      }
      v2 += 18;
      a2 += 144;
    }
    while ( (void **)v3 != v2 );
    v10 = *(void ***)a1;
    v11 = (void **)(*(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8));
    while ( v11 != v10 )
    {
      while ( 1 )
      {
        v11 -= 18;
        if ( *v11 == v11 + 2 )
          break;
        free(*v11);
        if ( v11 == v10 )
          return;
      }
    }
  }
}
