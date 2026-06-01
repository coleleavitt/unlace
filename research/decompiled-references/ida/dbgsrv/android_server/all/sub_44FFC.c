/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FFC
// Address: 0x0000000000044FFC

//----- (0000000000044FFC) ----------------------------------------------------
bool __fastcall sub_44FFC(__int64 a1)
{
  unsigned int v2; // w20
  _QWORD v4[2]; // [xsp+8h] [xbp-168h] BYREF
  _QWORD v5[2]; // [xsp+18h] [xbp-158h] BYREF
  _QWORD v6[35]; // [xsp+28h] [xbp-148h] BYREF

  v6[34] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) & 1) == 0 )
    return 0;
  if ( *(_BYTE *)(a1 + 896) )
  {
    v2 = *(_DWORD *)(a1 + 84);
    v4[0] = a1 + 88;
    v4[1] = 272;
    if ( dword_164020 < 0 )
    {
      v5[0] = v6;
      v5[1] = 272;
      dword_164020 = ptrace(PTRACE_GETREGSET, v2, 1, v5) == 0;
      if ( dword_164020 <= 0 )
        return 0;
    }
    else if ( dword_164020 <= 0 )
    {
      return 0;
    }
    if ( ptrace(PTRACE_GETREGSET, v2, 1, v4) )
      return 0;
  }
  if ( !*(_BYTE *)(a1 + 897) )
    return 1;
  v6[0] = a1 + 368;
  v6[1] = 528;
  return !ptrace(PTRACE_GETREGSET, *(unsigned int *)(a1 + 84), 2, v6);
}
// 164020: using guessed type int dword_164020;
