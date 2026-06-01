/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17D50
// Address: 0x00017D50

//----- (00017D50) --------------------------------------------------------
bool __fastcall sub_17D50(int a1, int a2)
{
  unsigned int v3; // r3
  _BYTE v5[56]; // [sp+4h] [bp-50h] BYREF
  int v6; // [sp+3Ch] [bp-18h]
  unsigned int v7; // [sp+40h] [bp-14h]
  unsigned int v8; // [sp+44h] [bp-10h]

  ptrace(PTRACE_GETREGS, a2, 0, v5);
  v7 = v6 & 0xFFFFFFFE;
  if ( (v6 & 1) != 0 )
    v3 = v8 | 0x20;
  else
    v3 = v8 & 0xFFFFFFDF;
  v8 = v3;
  return ptrace(PTRACE_SETREGS, a2, 0, v5) == 0;
}
