/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001EEA0
// Address: 0x000000014001EEA0

//----- (000000014001EEA0) ----------------------------------------------------
__int64 __fastcall sub_14001EEA0(__int64 a1, __int64 a2)
{
  const char *v3; // rdx
  const char *v4; // rax
  const char *v5; // rbx

  v3 = Str1;
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  v4 = sub_14002A6C0(a1, v3);
  v5 = v4;
  if ( v4 )
    v4 = (const char *)strlen(v4);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v4 )
    sub_140001810(a2 + 8, v5, (size_t)v4);
  return 0;
}
