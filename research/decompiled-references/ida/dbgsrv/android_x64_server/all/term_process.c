/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: term_process
// Address: 0x00000000000C7ED0

//----- (00000000000C7ED0) ----------------------------------------------------
int __fastcall term_process(unsigned int a1)
{
  int result; // eax
  pthread_mutex_t *v2; // rax
  int v3; // eax
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  result = kill(a1, 9);
  if ( !result )
  {
    v2 = (pthread_mutex_t *)sub_C6650();
    v3 = sub_C5E00(v2, &v4, a1, 0, -1);
    if ( v3 )
    {
      if ( v3 == -1 )
      {
        return -1;
      }
      else
      {
        result = 0;
        if ( (v4 & 0x7F) != 0 && (((_BYTE)v4 + 1) & 0x7E) == 0 )
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
// 158B40: using guessed type __int64 under_debugger;
