/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_idcvs
// Address: 0x00045F60

//----- (00045F60) --------------------------------------------------------
int __fastcall swap_idcvs(void *a1, void *a2)
{
  _BYTE v5[24]; // [sp+Ch] [bp-1Ch] BYREF
  int v6; // [sp+24h] [bp-4h]

  if ( !a1 || !a2 )
  {
    if ( !under_debugger )
      interr(2657);
    __debugbreak();
  }
  qmemcpy(v5, a1, sizeof(v5));
  qmemcpy(a1, a2, 0x18u);
  qmemcpy(a2, v5, 0x18u);
  return _stack_chk_guard - v6;
}
// E0550: using guessed type char under_debugger;
