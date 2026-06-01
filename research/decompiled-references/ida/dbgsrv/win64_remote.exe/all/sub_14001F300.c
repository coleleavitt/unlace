/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F300
// Address: 0x000000014001F300

//----- (000000014001F300) ----------------------------------------------------
__int64 __fastcall sub_14001F300(__int64 a1, __int64 a2)
{
  const char *v3; // rbx
  size_t v4; // rax

  if ( !*(_QWORD *)(a1 + 16) )
  {
    v3 = Str1;
LABEL_3:
    v4 = strlen(v3);
    goto LABEL_4;
  }
  v3 = *(const char **)(a1 + 8);
  if ( v3 )
    goto LABEL_3;
  v4 = 0;
LABEL_4:
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v4 )
    sub_140001810(a2 + 8, v3, v4);
  return 0;
}
