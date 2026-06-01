/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: term_process
// Address: 0x00000000000C2FB8

//----- (00000000000C2FB8) ----------------------------------------------------
pthread_t __fastcall term_process(__pid_t a1)
{
  pthread_t result; // x0
  int v3; // w0
  int v4; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v5; // [xsp+8h] [xbp-28h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = kill(a1, 9);
  if ( !(_DWORD)result )
  {
    v3 = sub_C1968();
    result = sub_C10A4(v3, (int)&v4, a1);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != -1 )
      {
        if ( (v4 & 0x7F) != 0 && (((_BYTE)v4 + 1) & 0x7E) == 0 )
        {
          if ( !under_debugger )
            interr(1150);
          __break(1u);
          return qthread_self();
        }
        else
        {
          return 0;
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
// 168DF0: using guessed type char under_debugger;
