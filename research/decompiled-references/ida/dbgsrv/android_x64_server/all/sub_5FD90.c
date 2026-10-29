/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FD90
// Address: 0x000000000005FD90

//----- (000000000005FD90) ----------------------------------------------------
__int64 __fastcall sub_5FD90(__int64 a1, _BYTE *a2)
{
  const char *v2; // r14
  size_t v3; // rdx

  if ( !*(_QWORD *)(a1 + 16) )
  {
    v2 = s1;
    goto LABEL_5;
  }
  v2 = *(const char **)(a1 + 8);
  if ( v2 )
  {
LABEL_5:
    v3 = strlen(v2);
    goto LABEL_6;
  }
  v2 = nullptr;
  v3 = 0;
LABEL_6:
  *a2 = 7;
  sub_4ABC0((__int64)(a2 + 8), v2, v3);
  return 0;
}
