/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A97FC
// Address: 0x00000000000A97FC

//----- (00000000000A97FC) ----------------------------------------------------
void __fastcall sub_A97FC(const char *a1, const char *a2, char a3)
{
  int v5; // w8
  pthread_mutex_t *v7; // x0
  int v8; // w0
  int v9; // w0
  const char *v10; // x0
  const char *v11; // x19
  pthread_mutex_t *v12; // x20
  FILE *v13; // x0
  const char *v14; // x0
  _BYTE v15[80]; // [xsp+28h] [xbp-88h] BYREF
  __int64 v16; // [xsp+78h] [xbp-38h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a2 || !*a2 )
    sub_A9F00(0xFFFFFFFF, "Missing %s path\n", a1);
  v5 = a3 & 0xF;
  if ( v5 == 3 )
  {
    qstat(a2, (__int64)v15);
    if ( !v8 )
    {
      v7 = sub_A9F00(0xFFFFFFFF, "The %s path %s already exists", a1, a2);
      goto LABEL_19;
    }
  }
  else if ( v5 == 2 )
  {
    if ( !qisdir(a2) )
    {
      v7 = sub_A9F00(0xFFFFFFFF, "The %s directory \"%s\" does not exist\n", a1, a2);
      goto LABEL_19;
    }
  }
  else if ( v5 == 1 && !qfileexist(a2) )
  {
    v7 = sub_A9F00(0xFFFFFFFF, "The %s file \"%s\" does not exist\n", a1, a2);
    goto LABEL_19;
  }
  if ( (a3 & 0x10) == 0 )
    return;
  qstat(a2, (__int64)v15);
  if ( v9 )
  {
    v10 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_A9F00(0xFFFFFFFF, "The %s file \"%s\" could not be queried: %s\n", a1, a2, v10);
  }
  else if ( (v15[12] & 7) == 0 )
  {
    return;
  }
  v7 = sub_A9F00(0xFFFFFFFF, "The %s file \"%s\" is world-accessible; exiting\n", a1, a2);
LABEL_19:
  if ( (unsigned __int64)xmmword_166CF0 >= 2 )
  {
    v11 = (const char *)qword_166CE8;
    v12 = v7;
    v13 = fopenA((const char *)qword_166CE8);
    v12[4].__align = (__int64)v13;
    if ( v13 )
    {
      qword_166CC8 = (__int64)v13;
    }
    else
    {
      v14 = (const char *)qerrstr(0xFFFFFFFFLL);
      sub_A84C8("Cannot open log file \"%s\": %s\n", v11, v14);
    }
  }
}
// A9888: variable 'v8' is possibly undefined
// A989C: variable 'v9' is possibly undefined
// 166CC8: using guessed type __int64 qword_166CC8;
// 166CE8: using guessed type __int64 qword_166CE8;
// 166CF0: using guessed type __int128 xmmword_166CF0;
