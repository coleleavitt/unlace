/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: term_process
// Address: 0x000B60C0

//----- (000B60C0) --------------------------------------------------------
int __cdecl term_process(__pid_t pid)
{
  int result; // eax
  void *v2; // eax
  int v3; // eax
  __time_t v4[4]; // [esp+8h] [ebp-10h] BYREF

  v4[1] = __readgsdword(0x14u);
  result = kill(pid, 9);
  if ( !result )
  {
    v2 = (void *)sub_B4700();
    v3 = sub_B3D90(v2, v4, pid, 0, -1);
    if ( v3 )
    {
      if ( v3 == -1 )
      {
        return -1;
      }
      else
      {
        result = 0;
        if ( (v4[0] & 0x7F) != 0 && ((LOBYTE(v4[0]) + 1) & 0x7E) == 0 )
        {
          if ( !(_BYTE)under_debugger )
            interr(1150);
          BUG();
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
