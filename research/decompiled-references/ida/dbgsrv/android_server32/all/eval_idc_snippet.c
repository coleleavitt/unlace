/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_snippet
// Address: 0x0003FC94

//----- (0003FC94) --------------------------------------------------------
int __fastcall eval_idc_snippet(int a1, const char *a2, int a3, int a4)
{
  char v4; // r7
  int v5; // r5
  _DWORD *v7; // r4
  int v9; // [sp+Ch] [bp-28h]
  char v13[16]; // [sp+20h] [bp-14h] BYREF

  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v7 = operator new(0x50u);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v7[6] = 0;
    memset(v7 + 8, 0, 0x29u);
    dword_DE390 = (int)v7;
    _cxa_guard_release(&dword_DE394);
  }
  v9 = dword_DE390;
  v4 = sub_3F8E4(dword_DE390);
  qsnprintf(v13, 16, "___idcexec%d");
  v5 = 0;
  if ( compile_idc_snippet(v13, a2, a3, a4, 0) )
    v5 = call_idc_func(a1, v13, nullptr, 0, a3, a4);
  sub_3F968(v9, v4);
  return v5;
}
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
