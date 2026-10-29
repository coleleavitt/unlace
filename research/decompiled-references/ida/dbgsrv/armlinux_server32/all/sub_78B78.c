/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78B78
// Address: 0x00078B78

//----- (00078B78) --------------------------------------------------------
void __fastcall sub_78B78(int a1, int status)
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
  byte_D6C15 = 1;
  if ( dword_D6C10 )
  {
    if ( dword_D6C0C )
    {
      v4 = (char *)sub_808A4(0x14u);
      *((_DWORD *)v4 + 3) = status;
      v5 = v4;
      v4[16] = v2;
      *((_DWORD *)v4 + 2) = 0;
      *(_DWORD *)v4 = &off_D1D24;
      *((_DWORD *)v4 + 1) = 0;
      if ( sub_7A104() )
      {
        while ( 1 )
        {
          v10 = (void *)dword_D6C0C;
          if ( !dword_D6C0C )
            break;
          v7 = *(_QWORD *)dword_D6C0C;
          if ( !*(_DWORD *)(dword_D6C0C + 4) )
          {
            if ( (_DWORD)v7 )
              sub_77F70((void *)v7);
            sub_77F70(v10);
            break;
          }
          v8 = *(void (__fastcall **)(pthread_mutex_t *))(v7 + 4 * (HIDWORD(v7) + 0x3FFFFFFF));
          v9 = sub_78AB0((int)v8);
          v8(v9);
        }
        v11 = (unsigned __int8)v5[16];
        dword_D6C0C = 0;
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
        *(_DWORD *)v5 = &off_D27E4;
        sub_79D3C(v6);
        sub_808A0(v5);
      }
    }
  }
  else if ( a1 )
  {
    exit(status);
  }
}
// 78BCC: variable 'savedregs' is possibly undefined
// D1D24: using guessed type _UNKNOWN *off_D1D24;
// D27E4: using guessed type _UNKNOWN *off_D27E4;
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// D6C0C: using guessed type int dword_D6C0C;
// D6C10: using guessed type int dword_D6C10;
// D6C15: using guessed type char byte_D6C15;
