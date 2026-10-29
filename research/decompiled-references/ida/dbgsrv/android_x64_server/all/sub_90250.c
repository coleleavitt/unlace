/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90250
// Address: 0x0000000000090250

//----- (0000000000090250) ----------------------------------------------------
void __fastcall sub_90250(__int64 *a1)
{
  __int64 v2; // rdi
  char *v3; // r13
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r12
  __int64 i; // rbx
  void *v7; // rdi
  int v8; // ebx
  unsigned __int64 v9; // rax
  void *v10; // rdi
  char *v11; // r13
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 j; // rbx
  void *v15; // rdi

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0;
  }
  *(_OWORD *)(a1 + 11) = 0;
  *(_OWORD *)(a1 + 9) = 0;
  *(_OWORD *)(a1 + 7) = 0;
  *(_OWORD *)(a1 + 5) = 0;
  *(_OWORD *)(a1 + 3) = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v3 = (char *)a1[13];
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      v5 = 1;
      for ( i = 16; ; i += 120 )
      {
        v7 = *(void **)&v3[i];
        if ( v7 )
        {
          *(_QWORD *)&v3[i + 8] = 0;
          qfree(v7);
          *(_QWORD *)&v3[i] = 0;
          *(_QWORD *)&v3[i + 16] = 0;
        }
        if ( v5 >= v4 )
          break;
        v3 = (char *)a1[13];
        ++v5;
      }
      v3 = (char *)a1[13];
    }
    a1[14] = 0;
    qfree(v3);
    a1[13] = 0;
    a1[15] = 0;
  }
  if ( a1[30] )
  {
    v8 = 1;
    v9 = 0;
    do
    {
      qfree(*(void **)(a1[29] + 72 * v9 + 56));
      v9 = v8++;
    }
    while ( a1[30] > v9 );
  }
  v10 = (void *)a1[16];
  if ( v10 )
  {
    a1[17] = 0;
    qfree(v10);
    a1[16] = 0;
    a1[18] = 0;
  }
  v11 = (char *)a1[32];
  if ( v11 )
  {
    v12 = a1[33];
    if ( v12 )
    {
      v13 = 1;
      for ( j = 0; ; j += 24 )
      {
        v15 = *(void **)&v11[j];
        if ( v15 )
        {
          *(_QWORD *)&v11[j + 8] = 0;
          qfree(v15);
          *(_QWORD *)&v11[j] = 0;
          *(_QWORD *)&v11[j + 16] = 0;
        }
        if ( v13 >= v12 )
          break;
        v11 = (char *)a1[32];
        ++v13;
      }
      v11 = (char *)a1[32];
    }
    a1[33] = 0;
    qfree(v11);
    a1[32] = 0;
    a1[34] = 0;
  }
}
