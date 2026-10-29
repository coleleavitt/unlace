/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003C1E0
// Address: 0x000000014003C1E0

//----- (000000014003C1E0) ----------------------------------------------------
__int64 __fastcall sub_14003C1E0(__int64 a1, int a2)
{
  FILE *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  FILE *v7; // rcx

  if ( a2 )
    sub_14003B360(a1, 0, 0);
  if ( *(_QWORD *)(a1 + 280) )
  {
    do
    {
      v3 = *(FILE **)(a1 + 296);
      if ( v3 )
        sub_1400643F0(v3);
      j_free(*(void **)(a1 + 304));
      *(_QWORD *)(a1 + 304) = 0;
      v4 = *(_QWORD *)(a1 + 280);
      v5 = *(_QWORD *)(a1 + 272) + 40 * v4;
      *(_QWORD *)(a1 + 296) = *(_QWORD *)(v5 - 32);
      *(_DWORD *)(a1 + 312) = *(_DWORD *)(v5 - 8);
      *(_QWORD *)(a1 + 304) = *(_QWORD *)(v5 - 40);
      *(_BYTE *)(a1 + 152) = *(_BYTE *)(v5 - 4);
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(v5 - 24);
      *(_QWORD *)(a1 + 232) = *(_QWORD *)(v5 - 16);
      if ( !v4 )
        break;
      v6 = v4 - 1;
      *(_QWORD *)(a1 + 280) = v6;
    }
    while ( v6 );
  }
  j_free(*(void **)(a1 + 304));
  v7 = *(FILE **)(a1 + 296);
  *(_QWORD *)(a1 + 304) = 0;
  if ( v7 )
    sub_1400643F0(v7);
  *(_QWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 312) = -1;
  *(_BYTE *)(a1 + 152) = 0;
  return sub_14003D910(a1);
}
