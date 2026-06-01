/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D2F8
// Address: 0x000000000005D2F8

//----- (000000000005D2F8) ----------------------------------------------------
__int64 __fastcall sub_5D2F8(__int64 a1, __int64 a2)
{
  const char *v3; // x20
  size_t v4; // x2

  if ( !*(_QWORD *)(a1 + 16) )
  {
    v3 = &byte_F154B;
    goto LABEL_5;
  }
  v3 = *(const char **)(a1 + 8);
  if ( v3 )
  {
LABEL_5:
    v4 = strlen(v3);
    goto LABEL_6;
  }
  v4 = 0;
LABEL_6:
  *(_BYTE *)a2 = 7;
  sub_4968C((pthread_mutex_t *)(a2 + 8), v3, v4);
  return 0;
}
// F154B: using guessed type char byte_F154B;
