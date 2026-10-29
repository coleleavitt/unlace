/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DE50
// Address: 0x000000000045DE50

//----- (000000000045DE50) ----------------------------------------------------
void __fastcall sub_45DE50(__int64 *a1)
{
  __int64 v2; // rdi
  char *v3; // rdx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 i; // rbp
  void *v7; // rdi
  int v8; // ebp
  __int64 j; // rax
  void *v10; // rdi
  char *v11; // rdx
  __int64 v12; // r12
  __int64 k; // rbp
  char *v14; // rax
  void *v15; // rdi

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0;
  }
  a1[1] = 0;
  a1[12] = 0;
  memset(
    (void *)((unsigned __int64)(a1 + 2) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 16) & 0xFFFFFFF8) + 104) >> 3));
  v3 = (char *)a1[13];
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = *(void **)&v3[v5 + 16];
        if ( v7 )
        {
          *(_QWORD *)&v3[v5 + 24] = 0;
          j__free(v7);
          v3 = (char *)a1[13];
        }
        v5 += 120;
      }
    }
    a1[14] = 0;
    j__free(v3);
    a1[13] = 0;
    a1[15] = 0;
  }
  v8 = 0;
  for ( j = 0; v8 < (unsigned __int64)a1[30]; j = v8 )
  {
    ++v8;
    j__free(*(void **)(a1[29] + 72 * j + 56));
  }
  v10 = (void *)a1[16];
  if ( v10 )
  {
    a1[17] = 0;
    j__free(v10);
    a1[16] = 0;
    a1[18] = 0;
  }
  v11 = (char *)a1[32];
  if ( v11 )
  {
    v12 = a1[33];
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        v14 = &v11[24 * k];
        v15 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *((_QWORD *)v14 + 1) = 0;
          j__free(v15);
          v11 = (char *)a1[32];
        }
      }
    }
    a1[33] = 0;
    j__free(v11);
    a1[32] = 0;
    a1[34] = 0;
  }
}
