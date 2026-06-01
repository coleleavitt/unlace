/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012C8C
// Address: 0x0000000100012C8C

//----- (0000000100012C8C) ----------------------------------------------------
__int64 __fastcall sub_100012C8C(__int64 a1)
{
  __int64 v2; // x0
  void *v3; // x0

  if ( *(_BYTE *)(a1 + 32) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return a1;
}
