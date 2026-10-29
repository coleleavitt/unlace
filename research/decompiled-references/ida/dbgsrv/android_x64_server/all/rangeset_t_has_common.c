/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_has_common
// Address: 0x00000000000C9B40

//----- (00000000000C9B40) ----------------------------------------------------
bool __fastcall rangeset_t_has_common(__int64 *a1, unsigned __int64 *a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  bool result; // al

  v3 = 16 * a1[1];
  if ( !v3 )
    return 0;
  v4 = *a1;
  v5 = *a2;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + v6 + 8);
    if ( v7 > v5 )
      break;
    v6 += 16;
    if ( v3 == v6 )
      return 0;
  }
  v8 = *(_QWORD *)(v4 + v6);
  v9 = a2[1];
  if ( v8 < v9 && a3 )
    return v5 >= v8 && v9 <= v7;
  result = 1;
  if ( v8 >= v9 )
    return 0;
  return result;
}
