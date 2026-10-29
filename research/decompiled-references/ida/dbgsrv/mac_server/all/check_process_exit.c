/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: check_process_exit
// Address: 0x000000010007FE50

//----- (000000010007FE50) ----------------------------------------------------
__int64 __fastcall check_process_exit(pid_t a1, int *a2, unsigned int a3)
{
  unsigned int v3; // r15d
  void *v4; // rax
  int v5; // eax
  int v6; // ecx
  __int64 result; // rax
  int v8; // ecx
  int v9; // [rsp+Ch] [rbp-24h] BYREF

  v3 = -1;
  if ( a3 != 1 )
    v3 = a3;
  v4 = sub_10007E6B0();
  v5 = sub_10007E030((__int64)v4, &v9, a1, 0, v3);
  if ( !v5 )
    return 1;
  if ( v5 != -1 )
  {
    v8 = v9 & 0x7F;
    if ( (v9 & 0x7F) != 0 )
    {
      if ( v8 == 127 )
      {
        if ( under_debugger == 1 )
          BUG();
        interr(0x47Eu);
        return (__int64)qthread_self();
      }
      if ( a2 )
      {
        v6 = -v8;
LABEL_14:
        result = 0;
        goto LABEL_15;
      }
    }
    else if ( a2 )
    {
      v6 = BYTE1(v9);
      goto LABEL_14;
    }
    return 0;
  }
  if ( a2 )
  {
    v6 = *__error();
    result = 0xFFFFFFFFLL;
LABEL_15:
    *a2 = v6;
    return result;
  }
  return 0xFFFFFFFFLL;
}
// 1000AE23D: using guessed type char under_debugger;
