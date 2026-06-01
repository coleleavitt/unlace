/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78A10
// Address: 0x00078A10

//----- (00078A10) --------------------------------------------------------
void __fastcall sub_78A10(int a1, int status)
{
  char v2; // r6
  char *v4; // r0
  char *v5; // r4
  int v6; // r0
  __int64 v7; // kr00_8
  void (__fastcall *v8)(pthread_mutex_t *); // r6
  pthread_mutex_t *v9; // r0
  void *v10; // r6
  int v11; // r3
  int savedregs; // [sp+0h] [bp+0h]

  v2 = a1;
  byte_D5BF5 = 1;
  if ( dword_D5BF0 )
  {
    if ( dword_D5BEC )
    {
      v4 = (char *)sub_805CC(0x14u);
      *((_DWORD *)v4 + 3) = status;
      v5 = v4;
      v4[16] = v2;
      *((_DWORD *)v4 + 2) = 0;
      *(_DWORD *)v4 = &off_D0D24;
      *((_DWORD *)v4 + 1) = 0;
      if ( sub_79F9C() )
      {
        while ( 1 )
        {
          v10 = (void *)dword_D5BEC;
          if ( !dword_D5BEC )
            break;
          v7 = *(_QWORD *)dword_D5BEC;
          if ( !*(_DWORD *)(dword_D5BEC + 4) )
          {
            if ( (_DWORD)v7 )
              sub_77E08((void *)v7);
            sub_77E08(v10);
            break;
          }
          v8 = *(void (__fastcall **)(pthread_mutex_t *))(v7 + 4 * (HIDWORD(v7) + 0x3FFFFFFF));
          v9 = sub_78948((int)v8);
          v8(v9);
        }
        v11 = (unsigned __int8)v5[16];
        dword_D5BEC = 0;
        if ( v11 )
          exit(*((_DWORD *)v5 + 3));
      }
      else
      {
        ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x56u, v5, 2, (int)callui, savedregs);
      }
      if ( v5 )
      {
        v6 = *((_DWORD *)v5 + 2);
        *(_DWORD *)v5 = &off_D17E4;
        sub_79BD4(v6);
        sub_8121C(v5);
      }
    }
  }
  else if ( a1 )
  {
    exit(status);
  }
}
// 78A64: variable 'savedregs' is possibly undefined
// D0D24: using guessed type _UNKNOWN *off_D0D24;
// D17E4: using guessed type _UNKNOWN *off_D17E4;
// D3924: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// D5BEC: using guessed type int dword_D5BEC;
// D5BF0: using guessed type int dword_D5BF0;
// D5BF5: using guessed type char byte_D5BF5;
