/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: check_process_exit
// Address: 0x000000010007794C

//----- (000000010007794C) ----------------------------------------------------
__int64 __fastcall check_process_exit(pid_t a1, int *a2, int a3)
{
  int v5; // w21
  __int64 v6; // x0
  int v7; // w0
  int v8; // w8
  __int64 result; // x0
  unsigned int v10; // w8
  unsigned int v11; // [xsp+4h] [xbp-2Ch] BYREF

  if ( a3 == 1 )
    v5 = -1;
  else
    v5 = a3;
  v6 = sub_1000760CC();
  v7 = sub_10007596C(v6, &v11, a1, 0, v5);
  if ( !v7 )
    return 1;
  if ( v7 == -1 )
  {
    if ( a2 )
    {
      v8 = *__error();
      result = 0xFFFFFFFFLL;
LABEL_15:
      *a2 = v8;
      return result;
    }
    return 0xFFFFFFFFLL;
  }
  else
  {
    v10 = v11 & 0x7F;
    if ( (v11 & 0x7F) != 0 )
    {
      if ( v10 == 127 )
      {
        if ( under_debugger == 1 )
          __break(1u);
        interr(1150);
        return (__int64)qthread_self();
      }
      else
      {
        result = 0;
        if ( a2 )
        {
          v8 = -v10;
          goto LABEL_15;
        }
      }
    }
    else
    {
      result = 0;
      if ( a2 )
      {
        v8 = BYTE1(v11);
        goto LABEL_15;
      }
    }
  }
  return result;
}
// 1000A590D: using guessed type char under_debugger;
