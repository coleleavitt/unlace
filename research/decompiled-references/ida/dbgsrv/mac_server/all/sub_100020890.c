/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020890
// Address: 0x0000000100020890

//----- (0000000100020890) ----------------------------------------------------
void __fastcall sub_100020890(__int64 a1)
{
  void *v1; // rax

  if ( *(int *)a1 >= -1 )
  {
    v1 = *(void **)(a1 + 8);
    if ( v1 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v1);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
}
