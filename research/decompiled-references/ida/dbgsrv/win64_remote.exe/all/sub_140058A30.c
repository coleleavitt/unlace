/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140058A30
// Address: 0x0000000140058A30

//----- (0000000140058A30) ----------------------------------------------------
__int64 __fastcall sub_140058A30(__int64 a1)
{
  if ( !strcmp(*(const char **)(a1 + 64), "irs") )
    return sub_1400543B0(*(_QWORD *)(a1 + 32));
  else
    return *(unsigned int *)(a1 + 72);
}
