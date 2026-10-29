/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgets
// Address: 0x000000010007CB40

//----- (000000010007CB40) ----------------------------------------------------
int __fastcall qfgets(char *a1, FILE *a2, FILE *a3)
{
  const char *v3; // rax
  char v4; // bl
  char *v5; // r14
  const char *v6; // rcx

  if ( (__int64)a2 >= 0 )
  {
    if ( a3 )
    {
      v3 = fgets(a1, (int)a2, a3);
      if ( v3 )
      {
        v4 = *v3;
        if ( *v3 )
        {
          v5 = (char *)v3;
          v3 = (const char *)strlen(v3);
          if ( (unsigned __int64)v3 < 2 )
          {
            LODWORD(v3) = (_DWORD)v5;
          }
          else
          {
            v6 = v3;
            LODWORD(v3) = (_DWORD)v5;
            if ( v6[(_QWORD)v5 - 2] == 13 && v6[(_QWORD)v5 - 1] == 10 )
            {
              *(_WORD *)&v6[(_QWORD)v5 - 2] = 10;
              v4 = *v5;
            }
          }
          if ( v4 == 26 )
            LODWORD(v3) = 0;
        }
        return (int)v3;
      }
    }
    else
    {
      set_qerrno();
      *__error() = 9;
      set_qerrno();
    }
    LODWORD(v3) = 0;
    return (int)v3;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x4C9u);
  LODWORD(v3) = qfputs((const char *)0x4C9, a2);
  return (int)v3;
}
// 1000AE23D: using guessed type char under_debugger;
