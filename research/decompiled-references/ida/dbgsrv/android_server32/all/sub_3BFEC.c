/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BFEC
// Address: 0x0003BFEC

//----- (0003BFEC) --------------------------------------------------------
int __fastcall sub_3BFEC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  const char *v5; // r1
  const char *v6; // r0
  const char *v8; // r1

  if ( a1[31] != 1 )
    return set_qerrno(47);
  v2 = *(_DWORD *)(a1[26] + 12);
  if ( !v2 )
    return set_qerrno(1586);
  v3 = *(_DWORD *)(*(_DWORD *)(a1[16] + 40) + 4 * v2);
  v4 = *(_DWORD *)(v3 + 24);
  v5 = &byte_B3CBE;
  v6 = &byte_B3CBE;
  if ( v4 )
    v6 = *(const char **)(v3 + 20);
  if ( a1[7] )
    v5 = (const char *)a1[6];
  if ( strcmp(v6, v5) )
    return set_qerrno(1586);
  if ( v4 )
    v8 = *(const char **)(v3 + 20);
  else
    v8 = &byte_B3CBE;
  return sub_3BC34(a1, v8);
}
// B3CBE: using guessed type char byte_B3CBE;
