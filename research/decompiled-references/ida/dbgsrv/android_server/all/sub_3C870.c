/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C870
// Address: 0x000000000003C870

//----- (000000000003C870) ----------------------------------------------------
__int64 __fastcall sub_3C870(__int64 result, _BYTE *a2, unsigned int *a3)
{
  __int64 v4; // x20
  int v5; // w9
  int v6; // w8
  unsigned int v7; // w21
  _QWORD v8[2]; // [xsp+0h] [xbp-40h] BYREF

  v4 = result;
  v8[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
    *a2 = 0;
  v5 = a3[1];
  if ( (v5 & 0x7F) == 0x7F )
  {
    v6 = v5 >> 16;
    if ( v5 >> 16 )
    {
      if ( (v5 & 0xFF00) == 0x500 || v6 == 128 )
      {
        if ( v6 == 3 )
        {
          ptrace(PTRACE_GETEVENTMSG, *a3, 0, v8);
          v7 = v8[0];
          if ( (unsigned int)sub_3CDC0() )
            ptrace(PTRACE_SETOPTIONS, v7, 0, 8);
          result = sub_3C964(v4, v8[0], -1, 1);
          if ( a2 )
            *a2 = 1;
        }
        else if ( a2 && v6 == 128 )
        {
          *a2 = 1;
        }
      }
    }
  }
  return result;
}
