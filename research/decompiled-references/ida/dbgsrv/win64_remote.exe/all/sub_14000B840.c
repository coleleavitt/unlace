/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B840
// Address: 0x000000014000B840

//----- (000000014000B840) ----------------------------------------------------
int __fastcall sub_14000B840(_QWORD *a1)
{
  __int64 v1; // rax
  void *v2; // rcx

  v1 = *a1;
  if ( *(_BYTE *)(*a1 + 56LL) )
  {
    v2 = (void *)a1[1];
    if ( v2 != (void *)-1LL )
      LODWORD(v1) = CloseHandle(v2);
  }
  return v1;
}
