/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_877B0
// Address: 0x00000000000877B0

//----- (00000000000877B0) ----------------------------------------------------
char __fastcall sub_877B0(__int64 a1)
{
  FILE *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  char result; // al

  if ( !*(_QWORD *)(a1 + 256) )
    return 0;
  v2 = *(FILE **)(a1 + 272);
  if ( v2 )
    qfclose(v2);
  qfree(*(void **)(a1 + 280));
  *(_QWORD *)(a1 + 280) = 0;
  v3 = *(_QWORD *)(a1 + 248);
  v4 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(v3 + 40 * (v4 - 1) + 8);
  *(_DWORD *)(a1 + 288) = *(_DWORD *)(v3 + 40 * (v4 - 1) + 32);
  *(_QWORD *)(a1 + 280) = *(_QWORD *)(v3 + 40 * (v4 - 1));
  *(_BYTE *)(a1 + 128) = *(_BYTE *)(v3 + 40 * (v4 - 1) + 36);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(v3 + 40 * (v4 - 1) + 16);
  *(_QWORD *)(a1 + 208) = *(_QWORD *)(v3 + 40 * (v4 - 1) + 24);
  result = 1;
  if ( v4 )
    *(_QWORD *)(a1 + 256) = v4 - 1;
  return result;
}
