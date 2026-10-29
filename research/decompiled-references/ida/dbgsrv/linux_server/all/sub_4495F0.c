/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4495F0
// Address: 0x00000000004495F0

//----- (00000000004495F0) ----------------------------------------------------
void __fastcall sub_4495F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  char **v5; // r12
  char *v6; // rdx
  char *v7; // rbp
  char *i; // rbx
  char *v9; // rax
  void *v10; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = v2 + 56 * v1 - 56;
  *(_QWORD *)a1 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(v3 + 32);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(v3 + 48);
  if ( v1 )
  {
    v4 = v1 - 1;
    v5 = (char **)(v2 + 56 * v4);
    *(_QWORD *)(a1 + 64) = v4;
    v6 = *v5;
    if ( *v5 )
    {
      v7 = v5[1];
      if ( v7 )
      {
        for ( i = nullptr; i != v7; ++i )
        {
          v9 = &v6[24 * (_QWORD)i];
          v10 = *(void **)v9;
          if ( *(_QWORD *)v9 )
          {
            *((_QWORD *)v9 + 1) = 0;
            j__free(v10);
            v6 = *v5;
          }
        }
      }
      v5[1] = nullptr;
      j__free(v6);
    }
  }
}
