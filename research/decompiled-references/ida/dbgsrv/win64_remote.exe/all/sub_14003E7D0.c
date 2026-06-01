/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003E7D0
// Address: 0x000000014003E7D0

//----- (000000014003E7D0) ----------------------------------------------------
__int64 __fastcall sub_14003E7D0(__int64 a1, char *a2)
{
  FILE *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  const CHAR *v8; // rax
  __int64 v10; // rax

  if ( *(_QWORD *)(a1 + 280) )
  {
    do
    {
      v4 = *(FILE **)(a1 + 296);
      if ( v4 )
        sub_1400643F0(v4);
      j_free(*(void **)(a1 + 304));
      *(_QWORD *)(a1 + 304) = 0;
      v5 = *(_QWORD *)(a1 + 280);
      v6 = *(_QWORD *)(a1 + 272) + 40 * v5;
      *(_QWORD *)(a1 + 296) = *(_QWORD *)(v6 - 32);
      *(_DWORD *)(a1 + 312) = *(_DWORD *)(v6 - 8);
      *(_QWORD *)(a1 + 304) = *(_QWORD *)(v6 - 40);
      *(_BYTE *)(a1 + 152) = *(_BYTE *)(v6 - 4);
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(v6 - 24);
      *(_QWORD *)(a1 + 232) = *(_QWORD *)(v6 - 16);
      if ( !v5 )
        break;
      v7 = v5 - 1;
      *(_QWORD *)(a1 + 280) = v7;
    }
    while ( v7 );
  }
  *(_QWORD *)(a1 + 232) = a1;
  *(_QWORD *)(a1 + 224) = sub_14003A240;
  *(_DWORD *)(a1 + 312) = 0;
  *(_BYTE *)(a1 + 344) = 0;
  *(_BYTE *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  if ( !a2 )
  {
    sub_1400640B0(1u);
    *errno() = 2;
  }
  j_free(*(void **)(a1 + 304));
  v8 = sub_14005AB50(a2);
  *(_QWORD *)(a1 + 304) = v8;
  if ( !v8 )
    return sub_140063DE0();
  v10 = sub_1400642F0(v8);
  *(_QWORD *)(a1 + 296) = v10;
  if ( !v10 )
    return sub_140063DE0();
  if ( *(_BYTE *)(a1 + 720) )
    return sub_14003B360(a1, 0, 0);
  return 0;
}
