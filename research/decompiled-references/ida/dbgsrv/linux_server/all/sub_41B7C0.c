/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B7C0
// Address: 0x000000000041B7C0

//----- (000000000041B7C0) ----------------------------------------------------
__int64 __fastcall sub_41B7C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  int *v12; // r12
  const char *v13; // rax
  int v15; // eax
  double v16; // xmm4_8
  double v17; // xmm5_8

  if ( *(_BYTE *)(a1 + 1350) )
  {
    if ( (unsigned int)ptrace(PTRACE_SEIZE, a2, 0, 0) )
      goto LABEL_3;
    v15 = ptrace(PTRACE_INTERRUPT, (unsigned int)a2, 0, 0);
  }
  else
  {
    v15 = ptrace(PTRACE_ATTACH, a2, 0, 0);
  }
  if ( !v15 )
    return sub_41B160(a1, (unsigned int)a2, a3, 0, a4, a5, a6, a7, v16, v17, a10, a11);
LABEL_3:
  v12 = __errno_location();
  v13 = (const char *)sub_481FB0(*v12);
  sub_411B10(a1, "Attaching to %d thread: %s\n", a2, v13);
  if ( (*v12 & 0xFFFFFFFD) != 1 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(30197);
    BUG();
  }
  return 0;
}
// 41B846: variable 'v16' is possibly undefined
// 41B846: variable 'v17' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
