/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007FC00
// Address: 0x000000010007FC00

//----- (000000010007FC00) ----------------------------------------------------
void __fastcall sub_10007FC00(char *a1, char **__argv, unsigned int a3, char a4)
{
  int v6; // eax
  const char *v7; // rax
  char **v8; // r9
  int v9; // eax
  const char *v10; // r15
  const char *v11; // rax
  cpu_type_t v12; // [rsp+4h] [rbp-3Ch] BYREF
  posix_spawnattr_t v13; // [rsp+8h] [rbp-38h] BYREF
  size_t v14; // [rsp+10h] [rbp-30h] BYREF

  if ( posix_spawnattr_init(&v13) )
  {
    if ( under_debugger != 1 )
      interr(0x27Au);
    goto LABEL_17;
  }
  if ( (a3 & 0x30) != 0 )
  {
    v12 = ((a3 & 0x20) << 19) | 7;
    v6 = posix_spawnattr_setbinpref_np(&v13, 1u, &v12, &v14);
    if ( v6 )
    {
      v7 = (const char *)winerr(v6);
      sub_1000746B0("posix_spawnattr_setbinpref_np: %s\n", v7);
      return;
    }
  }
  if ( !posix_spawnattr_setflags(&v13, ((a3 >> 2) & 0x80) + 4 * (a3 & 0x40) + 64) )
  {
    v8 = *_NSGetEnviron();
    if ( a4 )
    {
      v9 = posix_spawnp(nullptr, a1, nullptr, &v13, __argv, v8);
      if ( !v9 )
        goto LABEL_13;
    }
    else
    {
      v9 = posix_spawn(nullptr, a1, nullptr, &v13, __argv, v8);
      if ( !v9 )
      {
LABEL_13:
        posix_spawnattr_destroy(&v13);
        return;
      }
    }
    v10 = &_s;
    if ( a4 )
      v10 = "p";
    v11 = (const char *)winerr(v9);
    sub_1000746B0("posix_spawn%s(%s): %s\n", v10, a1, v11);
    goto LABEL_13;
  }
  if ( under_debugger == 1 )
LABEL_17:
    BUG();
  interr(0x27Bu);
  sub_10007FD70((char **)0x27B);
}
// 1000AE23D: using guessed type char under_debugger;
