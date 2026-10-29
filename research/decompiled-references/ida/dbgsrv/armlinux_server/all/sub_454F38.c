/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454F38
// Address: 0x0000000000454F38

//----- (0000000000454F38) ----------------------------------------------------
__int64 __fastcall sub_454F38(__int64 a1, char *a2)
{
  const char *v4; // x0
  FILE *v5; // x0

  while ( *(_QWORD *)(a1 + 272) )
    sub_450440(a1);
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 216) = sub_450B50;
  *(_QWORD *)(a1 + 224) = a1;
  *(_DWORD *)(a1 + 304) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  if ( !a2 )
  {
    sub_4869C8(1);
    *__errno_location() = 2;
  }
  j__free(*(void **)(a1 + 296));
  v4 = (const char *)sub_4911C0(a2);
  *(_QWORD *)(a1 + 296) = v4;
  if ( !v4 )
    return sub_4869A0();
  v5 = sub_48DE20(v4);
  *(_QWORD *)(a1 + 288) = v5;
  if ( !v5 )
    return sub_4869A0();
  if ( *(_BYTE *)(a1 + 760) )
    return sub_454820(a1, 0, 0);
  return 0;
}
