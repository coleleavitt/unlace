/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059430
// Address: 0x0000000100059430

//----- (0000000100059430) ----------------------------------------------------
bool __fastcall sub_100059430(__int64 a1, __int64 a2)
{
  const char *v3; // x0
  const char *v6; // x1
  const char *v7; // x0
  const char *v8; // x1

  if ( *(_QWORD *)a1 != *(_QWORD *)a2 || *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) )
    return 0;
  if ( *(_QWORD *)(a1 + 24) )
    v3 = *(const char **)(a1 + 16);
  else
    v3 = &byte_100075A30;
  if ( *(_QWORD *)(a2 + 24) )
    v6 = *(const char **)(a2 + 16);
  else
    v6 = &byte_100075A30;
  if ( !strcmp(v3, v6)
    && (!*(_QWORD *)(a1 + 48) ? (v7 = &byte_100075A30) : (v7 = *(const char **)(a1 + 40)),
        *(_QWORD *)(a2 + 48) ? (v8 = *(const char **)(a2 + 40)) : (v8 = &byte_100075A30),
        !strcmp(v7, v8)
     && *(_QWORD *)(a1 + 64) == *(_QWORD *)(a2 + 64)
     && *(unsigned __int8 *)(a1 + 72) == *(unsigned __int8 *)(a2 + 72)) )
  {
    return *(unsigned __int8 *)(a1 + 73) == *(unsigned __int8 *)(a2 + 73);
  }
  else
  {
    return 0;
  }
}
// 100075A30: using guessed type char byte_100075A30;
