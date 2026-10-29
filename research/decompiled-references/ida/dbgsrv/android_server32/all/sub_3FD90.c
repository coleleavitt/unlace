/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FD90
// Address: 0x0003FD90

//----- (0003FD90) --------------------------------------------------------
int __fastcall sub_3FD90(const char *a1, int a2)
{
  int v4; // r6
  _DWORD v7[2]; // [sp+Ch] [bp-Ch] BYREF

  callui(11, v7, callui);
  v7[1] = v7[0];
  v7[0] = &off_D9BC0;
  if ( !strstr(a1, "static ") )
    return eval_idc_snippet(0, a1, a2, (int)v7);
  v4 = 0;
  sub_3DA38("main", 0, &dword_B45AC, 7u);
  if ( compile_idc_text((int)a1, a2, (int)v7, 0) )
    return call_idc_func(0, "main", nullptr, 0, a2, (int)v7);
  return v4;
}
// B45AC: using guessed type int dword_B45AC;
// D9BC0: using guessed type _UNKNOWN *off_D9BC0;
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
