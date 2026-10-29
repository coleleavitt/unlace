/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64FD0
// Address: 0x0000000000064FD0

//----- (0000000000064FD0) ----------------------------------------------------
__int64 __fastcall sub_64FD0(__int64 a1)
{
  char *v2; // x1
  unsigned __int16 v3; // w0
  int v4; // w8
  __int64 v6; // x9
  const char *v7; // x1
  int v8; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v9; // [xsp+8h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = &byte_F154B;
  v3 = sub_62274((_QWORD *)a1, v2, &v8);
  if ( (unsigned int)(v8 - 1) >= 3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v7 = *(const char **)(a1 + 40);
    else
      v7 = &byte_F154B;
    set_error_string(nullptr, v7);
    return set_qerrno(0x37u);
  }
  else
  {
    v4 = v3;
    v6 = *(_QWORD *)(a1 + 368) + 16LL * *(_QWORD *)(a1 + 376);
    *(_DWORD *)(v6 - 4) = v4;
    *(_DWORD *)(v6 - 8) = v8;
    *(_DWORD *)(v6 - 12) = *(_DWORD *)(a1 + 208);
    return 0;
  }
}
// F154B: using guessed type char byte_F154B;
