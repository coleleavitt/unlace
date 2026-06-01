/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: verror
// Address: 0x00000000000BEAC0

//----- (00000000000BEAC0) ----------------------------------------------------
FILE *__fastcall verror(char *a1, _OWORD *a2)
{
  __int128 v2; // q0
  __int64 v3; // x30
  __pid_t v4; // w0
  FILE *result; // x0
  FILE *v6; // x19
  int v7; // w22
  bool v8; // w20
  char filename[10]; // [xsp+8h] [xbp-488h] BYREF
  char v10[1014]; // [xsp+12h] [xbp-47Eh] BYREF
  __int64 v11; // [xsp+408h] [xbp-88h]
  __int64 v12; // [xsp+438h] [xbp-58h]
  _OWORD v13[4]; // [xsp+440h] [xbp-50h] BYREF

  if ( a1 )
  {
    v2 = a2[1];
    if ( callui )
    {
      v13[2] = *a2;
      v13[3] = v2;
      callui(24, 3, a1);
    }
    else
    {
      v13[0] = *a2;
      v13[1] = v2;
      qveprintf(a1, v13);
      qfputc(10, (FILE *)((char *)&_sF + 304));
    }
  }
  ++errorexit;
  qexit((pthread_mutex_t *)((char *)&dword_0 + 1), a2);
  v12 = v3;
  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = getpid();
  qsnprintf((pthread_mutex_t *)filename, 1024, "/proc/%d/status", v4);
  result = fopen(filename, "r");
  if ( result )
  {
    v6 = result;
    v7 = 0;
    while ( 1 )
    {
      if ( !__fgets_chk(filename, 1024, v6, 1024) )
      {
LABEL_10:
        v8 = 0;
        goto LABEL_13;
      }
      if ( !memcmp(filename, "TracerPid:", 0xAu) )
        break;
      if ( (unsigned int)++v7 > 0xF )
        goto LABEL_10;
    }
    v8 = (unsigned int)atol(v10) != 0;
LABEL_13:
    result = (FILE *)fclose(v6);
  }
  else
  {
    v8 = 0;
  }
  under_debugger = v8;
  return result;
}
// BEB3C: variable 'a2' is possibly undefined
// BEB48: variable 'v3' is possibly undefined
// 0: using guessed type int dword_0;
// 37280: using guessed type __int64 __fastcall __fgets_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
// 168DD8: using guessed type int errorexit;
// 168DF0: using guessed type char under_debugger;
// 169790: using guessed type FILE _sF;
