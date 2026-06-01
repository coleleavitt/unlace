/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DAF0
// Address: 0x0001DAF0

//----- (0001DAF0) --------------------------------------------------------
int __fastcall sub_1DAF0(int a1, _BYTE *a2, _DWORD *a3)
{
  int v5; // r1
  int v6; // r0
  int v8; // [sp+Ch] [bp-8h]
  int v9; // [sp+10h] [bp-4h]

  if ( a2 )
    *a2 = 0;
  v5 = a3[1];
  v6 = v5 >> 16;
  if ( (v5 & 0x7F) == 0x7F && v6 && ((v5 & 0xFF00) == 0x500 || v6 == 128) )
  {
    if ( v6 == 3 )
    {
      ptrace(PTRACE_GETEVENTMSG, *a3);
      if ( sub_1DE70() )
        ptrace(PTRACE_SETOPTIONS, v8, 0, 8);
      sub_1DB90(a1, v8, -1, 1);
      if ( !a2 )
        return _stack_chk_guard - v9;
    }
    else if ( !a2 || v6 != 128 )
    {
      return _stack_chk_guard - v9;
    }
    *a2 = 1;
  }
  return _stack_chk_guard - v9;
}
// 1DB56: variable 'v8' is possibly undefined
// 1DB7E: variable 'v9' is possibly undefined
