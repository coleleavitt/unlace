/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_633F8
// Address: 0x00000000000633F8

//----- (00000000000633F8) ----------------------------------------------------
__int64 __fastcall sub_633F8(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // x21
  const char *v5; // x0
  unsigned int v6; // w0
  const char *v7; // x1
  const char *v9; // x1

  if ( *(_DWORD *)(a1 + 216) != 1 )
  {
    v6 = 47;
    return set_qerrno(v6);
  }
  v2 = *(int *)(*(_QWORD *)(a1 + 184) + 24LL);
  if ( !(_DWORD)v2
    || ((v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v2), (v4 = *(_QWORD *)(v3 + 40)) == 0)
      ? (v5 = &byte_F154B)
      : (v5 = *(const char **)(v3 + 32)),
        *(_QWORD *)(a1 + 48) ? (v7 = *(const char **)(a1 + 40)) : (v7 = &byte_F154B),
        strcmp(v5, v7)) )
  {
    v6 = 1586;
    return set_qerrno(v6);
  }
  if ( v4 )
    v9 = *(const char **)(v3 + 32);
  else
    v9 = &byte_F154B;
  return sub_62DE4(a1, v9);
}
// F154B: using guessed type char byte_F154B;
