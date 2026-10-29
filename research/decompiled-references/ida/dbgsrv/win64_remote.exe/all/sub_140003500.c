/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003500
// Address: 0x0000000140003500

//----- (0000000140003500) ----------------------------------------------------
bool __fastcall sub_140003500(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  bool result; // al

  sub_14005D710(*(void **)(a1 + 288));
  *(_QWORD *)(a1 + 288) = 0;
  sub_140002CE0((struct __crt_locale_pointers *)"PDB: terminated session (%d)\n", *(_DWORD *)(a1 + 320));
  v2 = *(void **)(a1 + 296);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  v3 = *(void **)(a1 + 264);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 272) = 0;
    j_free(v3);
    *(_QWORD *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 280) = 0;
  }
  sub_1400016C0(a1 + 144);
  sub_1400035E0((_QWORD *)(a1 + 120));
  v4 = *(void **)(a1 + 88);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    j_free(v4);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  sub_14005D710(*(void **)(a1 + 32));
  result = sub_14005D710(*(void **)(a1 + 40));
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return result;
}
