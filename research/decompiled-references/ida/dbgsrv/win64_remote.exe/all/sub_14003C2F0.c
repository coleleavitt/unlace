/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003C2F0
// Address: 0x000000014003C2F0

//----- (000000014003C2F0) ----------------------------------------------------
char __fastcall sub_14003C2F0(__int64 a1)
{
  FILE *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax

  if ( !*(_QWORD *)(a1 + 280) )
    return 0;
  v2 = *(FILE **)(a1 + 296);
  if ( v2 )
    sub_1400643F0(v2);
  j_free(*(void **)(a1 + 304));
  *(_QWORD *)(a1 + 304) = 0;
  v3 = *(_QWORD *)(a1 + 272) + 40LL * *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 296) = *(_QWORD *)(v3 - 32);
  *(_DWORD *)(a1 + 312) = *(_DWORD *)(v3 - 8);
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(v3 - 40);
  *(_BYTE *)(a1 + 152) = *(_BYTE *)(v3 - 4);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(v3 - 24);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(v3 - 16);
  v4 = *(_QWORD *)(a1 + 280);
  if ( v4 )
    *(_QWORD *)(a1 + 280) = v4 - 1;
  return 1;
}
