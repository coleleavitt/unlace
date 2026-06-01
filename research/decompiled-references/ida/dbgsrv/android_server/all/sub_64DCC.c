/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64DCC
// Address: 0x0000000000064DCC

//----- (0000000000064DCC) ----------------------------------------------------
__int64 __fastcall sub_64DCC(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  int v6; // w12
  const char *v8; // x1

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    v4 = sub_6A3F0(v3, *(const char **)(a1 + 40));
    if ( v4 )
      goto LABEL_3;
LABEL_8:
    if ( *(_QWORD *)(a1 + 48) )
      v8 = *(const char **)(a1 + 40);
    else
      v8 = &byte_F154B;
    set_error_string(nullptr, v8);
    return set_qerrno(0x600u);
  }
  v4 = sub_6A3F0(v3, &byte_F154B);
  if ( !v4 )
    goto LABEL_8;
LABEL_3:
  v5 = *(_QWORD *)(a1 + 184);
  v6 = *(_DWORD *)(v4 + 28);
  while ( 1 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * v6) + 24LL);
    if ( v6 == *(_DWORD *)(v5 + 28) )
      break;
    if ( !v6 )
    {
      *(_DWORD *)(v5 + 24) = *(_DWORD *)(v4 + 28);
      return 0;
    }
  }
  return set_qerrno(0x601u);
}
// F154B: using guessed type char byte_F154B;
