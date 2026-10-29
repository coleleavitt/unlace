/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2051C
// Address: 0x0002051C

//----- (0002051C) --------------------------------------------------------
bool __fastcall sub_2051C(int a1, int a2)
{
  unsigned int v3; // r0
  _BYTE v5[56]; // [sp+0h] [bp-4Ch] BYREF
  int v6; // [sp+38h] [bp-14h]
  unsigned int v7; // [sp+3Ch] [bp-10h]
  unsigned int v8; // [sp+40h] [bp-Ch]

  ptrace(PTRACE_GETREGS, a2, 0, v5);
  v7 = v6 & 0xFFFFFFFE;
  v3 = v8 & 0xFFFFFFDF;
  if ( v6 << 31 )
    v3 = v8 | 0x20;
  v8 = v3;
  return ptrace(PTRACE_SETREGS, a2, 0, v5) == 0;
}
