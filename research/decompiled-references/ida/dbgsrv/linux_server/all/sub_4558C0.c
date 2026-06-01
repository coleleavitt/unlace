/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4558C0
// Address: 0x00000000004558C0

//----- (00000000004558C0) ----------------------------------------------------
void __fastcall sub_4558C0(__int64 a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi
  char *v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbx
  char *v11; // rax
  void *v12; // rdi
  void *v13; // rdi

  v2 = *(char **)(a1 + 72);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          j__free(v6);
          v2 = *(char **)(a1 + 72);
        }
      }
    }
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v2);
  }
  v7 = *(void **)(a1 + 48);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v7);
  }
  v8 = *(char **)(a1 + 24);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = &v8[24 * j];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          j__free(v12);
          v8 = *(char **)(a1 + 24);
        }
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v8);
  }
  v13 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v13);
  }
}
