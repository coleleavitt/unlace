/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: check_process_exit
// Address: 0x00000000000C7E00

//----- (00000000000C7E00) ----------------------------------------------------
__int64 __fastcall check_process_exit(unsigned int a1, int *a2, int a3)
{
  int v4; // ebx
  pthread_mutex_t *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebp
  int v8; // eax
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v4 = -1;
  if ( a3 != 1 )
    v4 = a3;
  v5 = (pthread_mutex_t *)sub_C6650();
  v6 = sub_C5E00(v5, &v10, a1, 0, v4);
  if ( v6 )
  {
    if ( v6 == -1 )
    {
      v7 = -1;
      if ( a2 )
      {
        v8 = *(_DWORD *)__errno(v5);
LABEL_14:
        *a2 = v8;
      }
    }
    else if ( (v10 & 0x7F) != 0 )
    {
      if ( (((_BYTE)v10 + 1) & 0x7E) == 0 )
      {
        if ( !(_BYTE)under_debugger )
          interr(1150);
        BUG();
      }
      v7 = 0;
      if ( a2 )
      {
        v8 = -(v10 & 0x7F);
        goto LABEL_14;
      }
    }
    else
    {
      v7 = 0;
      if ( a2 )
      {
        v8 = BYTE1(v10);
        goto LABEL_14;
      }
    }
  }
  else
  {
    return 1;
  }
  return v7;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
