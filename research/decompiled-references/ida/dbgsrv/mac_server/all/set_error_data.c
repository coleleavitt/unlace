/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_data
// Address: 0x0000000100074330

//----- (0000000100074330) ----------------------------------------------------
void __fastcall set_error_data(unsigned int a1, const char *a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax

  if ( a1 >= 4 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x1E0u);
    set_error_string(0x1E0u, a2);
  }
  else
  {
    off_1000ACFB0();
    *(_QWORD *)(v3 + 8LL * v2) = a2;
  }
}
// 100074346: variable 'v3' is possibly undefined
// 100074344: variable 'v2' is possibly undefined
// 1000ACFB0: using guessed type void (*off_1000ACFB0)(void);
// 1000AE23D: using guessed type char under_debugger;
