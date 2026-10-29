/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: term_process
// Address: 0x00081E24

//----- (00081E24) --------------------------------------------------------
int __fastcall term_process(__pid_t pid)
{
  int result; // r0
  int v3; // r0
  __pid_t v4; // r1
  __time_t v5; // [sp+4h] [bp-8h] BYREF

  result = kill(pid, 9);
  if ( !result )
  {
    v3 = sub_80DC4();
    v4 = sub_807A4(v3, &v5, pid, 0, -1);
    result = 1;
    if ( v4 )
    {
      result = -1;
      if ( v4 != -1 )
      {
        if ( v5 << 25 )
        {
          result = 0;
          if ( !((unsigned int)((v5 + 1) << 25) >> 26) )
          {
            if ( !under_debugger )
              interr(1150);
            __debugbreak();
          }
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return result;
}
// E0550: using guessed type char under_debugger;
