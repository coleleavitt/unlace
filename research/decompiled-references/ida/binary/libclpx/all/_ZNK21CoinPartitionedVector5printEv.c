void __fastcall CoinPartitionedVector::print(CoinPartitionedVector *this)
{
  const void *v1; // rbp
  unsigned __int64 v2; // rax
  size_t v3; // rbx
  const void *v4; // rbp
  size_t v5; // rbx
  int *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  char *v9; // r12
  char *v10; // rbp
  int v11; // [rsp+Ch] [rbp-4Ch]
  char *v12; // [rsp+10h] [rbp-48h]
  char *v13; // [rsp+18h] [rbp-40h]

  printf("Vector has %d elements (%d partitions)\n", *((_DWORD *)this + 4), *((_DWORD *)this + 25));
  if ( !*((_DWORD *)this + 25) )
  {
    CoinIndexedVector::print(this);
    return;
  }
  v1 = *((const void **)this + 1);
  v2 = *((int *)this + 5);
  if ( v1 )
  {
    if ( v2 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_25;
    v3 = 8 * v2;
    v13 = (char *)operator new[](8 * v2);
    memcpy(v13, v1, v3);
    v2 = *((int *)this + 5);
  }
  else
  {
    v13 = nullptr;
  }
  v4 = *(const void **)this;
  if ( !*(_QWORD *)this )
  {
    v12 = nullptr;
    goto LABEL_8;
  }
  if ( v2 > 0x1FFFFFFFFFFFFFFELL )
LABEL_25:
    __cxa_throw_bad_array_new_length();
  v5 = 4 * v2;
  v12 = (char *)operator new[](4 * v2);
  memcpy(v12, v4, v5);
LABEL_8:
  if ( *((int *)this + 25) > 0 )
  {
    v6 = (int *)((char *)this + 68);
    v11 = 0;
    do
    {
      v7 = 1;
      printf("Partition %d has %d elements\n", v11, *v6);
      v8 = *(v6 - 9);
      v9 = &v13[8 * v8];
      v10 = &v12[4 * v8];
      CoinSort_2<int,double>(v10, &v10[4 * *v6], v9);
      if ( *v6 > 0 )
      {
        while ( 1 )
        {
          printf(" (%d,%g)", *(_DWORD *)&v10[4 * v7 - 4], *(double *)&v9[8 * v7 - 8]);
          if ( *v6 <= (int)v7 )
            break;
          if ( 5 * ((int)v7 / 5) == (_DWORD)v7 )
            putchar(10);
          ++v7;
        }
      }
      ++v6;
      putchar(10);
      ++v11;
    }
    while ( *((_DWORD *)this + 25) > v11 );
  }
  if ( v13 )
    operator delete[](v13);
  if ( v12 )
    operator delete[](v12);
}

