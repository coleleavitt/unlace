/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492140
// Address: 0x0000000000492140

//----- (0000000000492140) ----------------------------------------------------
void __fastcall sub_492140(unsigned __int8 a1, int status)
{
  unsigned __int8 *v4; // x19
  __int64 v5; // x0
  void *v6; // x0
  __int64 v7; // x1
  void (__fastcall *v8)(_BOOL8); // x20
  _BOOL8 v9; // x0
  void *v10; // x20
  int v11; // w0

  byte_524511 = 1;
  if ( qword_524508 )
  {
    if ( qword_524500 )
    {
      v4 = (unsigned __int8 *)sub_49E050(0x20u);
      *(_QWORD *)v4 = off_51CA28;
      *((_QWORD *)v4 + 1) = 0;
      *((_QWORD *)v4 + 2) = 0;
      *((_DWORD *)v4 + 6) = status;
      v4[28] = a1;
      if ( sub_494500() )
      {
        while ( 1 )
        {
          v10 = (void *)qword_524500;
          if ( !qword_524500 )
            break;
          v6 = *(void **)qword_524500;
          v7 = *(_QWORD *)(qword_524500 + 8);
          if ( !v7 )
          {
            if ( v6 )
              j__free(v6);
            j__free(v10);
            break;
          }
          v8 = *((void (__fastcall **)(_BOOL8))v6 + v7 - 1);
          v9 = sub_492038((__int64)v8);
          v8(v9);
        }
        v11 = v4[28];
        qword_524500 = 0;
        if ( v11 )
          exit(*((_DWORD *)v4 + 6));
      }
      else
      {
        callui(86, (int)v4, (char *)2);
      }
      if ( v4 )
      {
        v5 = *((_QWORD *)v4 + 2);
        *(_QWORD *)v4 = &off_51DC80;
        sub_493E90(v5);
        j_j__free_0(v4);
      }
    }
  }
  else if ( a1 )
  {
    exit(status);
  }
}
// 51CA28: using guessed type __int64 (__fastcall *off_51CA28[3])();
// 51DC80: using guessed type void (__fastcall __noreturn *off_51DC80)();
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
// 523500: using guessed type __int64 qword_523500[512];
// 524500: using guessed type __int64 qword_524500;
// 524508: using guessed type __int64 qword_524508;
// 524511: using guessed type char byte_524511;
