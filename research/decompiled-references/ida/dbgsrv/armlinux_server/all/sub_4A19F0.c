/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A19F0
// Address: 0x00000000004A19F0

//----- (00000000004A19F0) ----------------------------------------------------
void __fastcall sub_4A19F0(void *ptr)
{
  unsigned int *v1; // x3
  int v2; // w2
  int v3; // w2

  if ( !&_pthread_key_create )
  {
    v3 = *((_DWORD *)ptr + 4);
    *((_DWORD *)ptr + 4) = v3 - 1;
    if ( v3 > 0 )
      return;
LABEL_7:
    j_j__free_0_0(ptr);
    return;
  }
  v1 = (unsigned int *)((char *)ptr + 16);
  do
    v2 = __ldaxr(v1);
  while ( __stlxr(v2 - 1, v1) );
  if ( v2 <= 0 )
    goto LABEL_7;
}
