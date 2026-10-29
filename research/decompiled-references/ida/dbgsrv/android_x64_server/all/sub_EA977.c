/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA977
// Address: 0x00000000000EA977

//----- (00000000000EA977) ----------------------------------------------------
void __fastcall sub_EA977(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rax

  if ( *a1 )
  {
    --*a1;
    pthread_setspecific(dword_159314, a1);
  }
  else
  {
    v1 = 0;
    v2 = a1[1];
    while ( v1 != v2 )
    {
      v3 = a1[v1 + 2];
      if ( v3 )
        free(*(void **)(v3 - 8));
      ++v1;
    }
    free(a1);
  }
}
