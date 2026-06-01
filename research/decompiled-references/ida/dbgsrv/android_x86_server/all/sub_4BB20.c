/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BB20
// Address: 0x0004BB20

//----- (0004BB20) --------------------------------------------------------
int __cdecl sub_4BB20(_DWORD *a1)
{
  int v1; // eax
  int v2; // edi
  const char *v3; // eax
  const char *v4; // ecx
  int v6; // [esp+8h] [ebp-14h]

  if ( a1[30] != 1 )
    return set_qerrno(47);
  v1 = *(_DWORD *)(a1[25] + 12);
  if ( !v1 )
    return set_qerrno(1586);
  v2 = *(_DWORD *)(*(_DWORD *)(a1[15] + 36) + 4 * v1);
  v3 = byte_EF875;
  v6 = *(_DWORD *)(v2 + 24);
  v4 = byte_EF875;
  if ( v6 )
    v4 = *(const char **)(v2 + 20);
  if ( a1[6] )
    v3 = (const char *)a1[5];
  if ( !strcmp(v4, v3) )
    return sub_4B510(a1);
  else
    return set_qerrno(1586);
}
