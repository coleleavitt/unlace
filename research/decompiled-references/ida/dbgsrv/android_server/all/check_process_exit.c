/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: check_process_exit
// Address: 0x00000000000C2ECC

//----- (00000000000C2ECC) ----------------------------------------------------
pthread_t __fastcall check_process_exit(__pid_t a1, int *a2)
{
  int v4; // w0
  __int64 v5; // x0
  pthread_t result; // x0
  int v7; // w8
  _BYTE v8[4]; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v9; // [xsp+8h] [xbp-38h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = sub_C1968();
  v5 = sub_C10A4(v4, (int)v8, a1);
  if ( !(_DWORD)v5 )
    return 1;
  if ( (_DWORD)v5 == -1 )
  {
    if ( a2 )
      *a2 = *(_DWORD *)__errno(v5);
    return 0xFFFFFFFFLL;
  }
  if ( (v8[0] & 0x7F) == 0 )
  {
    result = 0;
    if ( !a2 )
      return result;
    v7 = v8[1];
    goto LABEL_13;
  }
  if ( ((v8[0] + 1) & 0x7E) != 0 )
  {
    result = 0;
    if ( !a2 )
      return result;
    v7 = -(v8[0] & 0x7F);
LABEL_13:
    *a2 = v7;
    return result;
  }
  if ( !under_debugger )
    LODWORD(v5) = (unsigned int)interr(1150);
  __break(1u);
  return term_process(v5);
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DF0: using guessed type char under_debugger;
