/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BA30
// Address: 0x000000014002BA30

//----- (000000014002BA30) ----------------------------------------------------
bool __fastcall sub_14002BA30(__int64 a1, char *a2, char *a3)
{
  __int64 v5; // rax
  const char *v6; // rbx
  _QWORD *v7; // rax

  v5 = a1;
  if ( a1 && *(_BYTE *)a1 == 7 )
  {
    v6 = Str1;
    if ( *(_QWORD *)(a1 + 16) )
      v6 = *(const char **)(a1 + 8);
    v7 = sub_14002DA30();
    v5 = sub_14002D440((__int64)v7, v6);
  }
  return (unsigned int)sub_14002A890(v5, a2, a3, 0) == 0;
}
