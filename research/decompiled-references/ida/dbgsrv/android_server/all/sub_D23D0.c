/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D23D0
// Address: 0x00000000000D23D0

//----- (00000000000D23D0) ----------------------------------------------------
__int64 __fastcall sub_D23D0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x8

  if ( !a1 )
    return 4294967194LL;
  v1 = *(_QWORD *)(a1 + 320);
  if ( v1 )
  {
    free(*(void **)v1);
    v3 = *(_QWORD *)(v1 + 128);
    *(_QWORD *)v1 = 0;
    if ( v3 == 8 )
      sub_CE950((_QWORD *)(v1 + 8));
    free((void *)v1);
    *(_QWORD *)(a1 + 320) = 0;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 40))(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 96));
  free((void *)a1);
  return 0;
}
