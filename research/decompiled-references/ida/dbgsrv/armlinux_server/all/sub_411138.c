/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411138
// Address: 0x0000000000411138

//----- (0000000000411138) ----------------------------------------------------
__int64 __fastcall sub_411138(__int64 a1, _BYTE *a2, unsigned int *a3)
{
  int v5; // w0
  int v6; // w1
  int v9; // w0
  unsigned int v12; // [xsp+20h] [xbp-10h] BYREF
  __int64 v13; // [xsp+28h] [xbp-8h]

  if ( a2 )
    *a2 = 0;
  v5 = a3[1];
  v6 = v5 >> 16;
  if ( (unsigned __int8)v5 == 127 && v6 != 0 )
  {
    v9 = BYTE1(v5);
    if ( v6 == 128 || v9 == 5 )
    {
      if ( v6 == 3 )
      {
        ptrace(PTRACE_GETEVENTMSG, *a3, 0, &v12);
        sub_40AAA0(v12);
        sub_410DB0(a1, v12, -1, 1u);
        if ( !a2 )
          return v13 ^ _stack_chk_guard;
      }
      else if ( v6 != 128 || a2 == nullptr )
      {
        return v13 ^ _stack_chk_guard;
      }
      *a2 = 1;
    }
  }
  return v13 ^ _stack_chk_guard;
}
