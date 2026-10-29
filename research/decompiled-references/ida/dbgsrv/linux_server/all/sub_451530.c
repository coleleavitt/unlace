/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451530
// Address: 0x0000000000451530

//----- (0000000000451530) ----------------------------------------------------
__int64 __fastcall sub_451530(__int64 a1, char *a2)
{
  const char *v2; // rax
  FILE *v3; // rax

  while ( *(_QWORD *)(a1 + 272) )
    sub_448BF0(a1);
  *(_QWORD *)(a1 + 224) = a1;
  *(_QWORD *)(a1 + 216) = sub_4492A0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 340) = 0;
  if ( !a2 )
  {
    sub_479EB0(1u);
    *__errno_location() = 2;
  }
  j__free(*(void **)(a1 + 296));
  v2 = sub_481490(a2);
  *(_QWORD *)(a1 + 296) = v2;
  if ( !v2 )
    return sub_479E90();
  v3 = sub_47FA20(v2);
  *(_QWORD *)(a1 + 288) = v3;
  if ( !v3 )
    return sub_479E90();
  if ( *(_BYTE *)(a1 + 648) )
    return sub_450E00(a1, 0, 0);
  return 0;
}
