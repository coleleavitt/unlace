/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E7E0
// Address: 0x000000000042E7E0

//----- (000000000042E7E0) ----------------------------------------------------
void __fastcall sub_42E7E0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 i; // rbx
  __int64 v4; // rax
  void *v5; // rdi

  v1 = a1[1];
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v4 = *a1 + 24 * i;
      v5 = *(void **)v4;
      if ( *(_QWORD *)v4 )
      {
        *(_QWORD *)(v4 + 8) = 0;
        j__free(v5);
      }
    }
    a1[1] = 0;
  }
}
