/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403B4
// Address: 0x00000000000403B4

//----- (00000000000403B4) ----------------------------------------------------
bool __fastcall sub_403B4(__int64 a1, unsigned int a2)
{
  _BYTE *v4; // [xsp+8h] [xbp-278h] BYREF
  __int64 v5; // [xsp+10h] [xbp-270h]
  _BYTE *v6; // [xsp+18h] [xbp-268h] BYREF
  __int64 v7; // [xsp+20h] [xbp-260h]
  _BYTE v8[240]; // [xsp+28h] [xbp-258h] BYREF
  __int64 v9; // [xsp+118h] [xbp-168h]
  __int64 v10; // [xsp+128h] [xbp-158h]
  _BYTE v11[272]; // [xsp+138h] [xbp-148h] BYREF
  __int64 v12; // [xsp+248h] [xbp-38h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = v8;
  v5 = 272;
  if ( dword_164020 < 0 )
  {
    v6 = v11;
    v7 = 272;
    dword_164020 = ptrace(PTRACE_GETREGSET, a2, 1, &v6) == 0;
    if ( dword_164020 <= 0 )
      return 0;
  }
  else if ( dword_164020 <= 0 )
  {
    return 0;
  }
  if ( !ptrace(PTRACE_GETREGSET, a2, 1, &v4) )
  {
    v4 = v8;
    v5 = 272;
    v10 = v9;
    if ( dword_164020 < 0 )
    {
      v6 = v11;
      v7 = 272;
      dword_164020 = ptrace(PTRACE_GETREGSET, a2, 1, &v6) == 0;
      if ( dword_164020 < 1 )
        return 0;
    }
    else if ( dword_164020 < 1 )
    {
      return 0;
    }
    return ptrace(PTRACE_SETREGSET, a2, 1, &v4) == 0;
  }
  return 0;
}
// 164020: using guessed type int dword_164020;
