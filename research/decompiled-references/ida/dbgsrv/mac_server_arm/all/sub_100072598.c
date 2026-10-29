/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100072598
// Address: 0x0000000100072598

//----- (0000000100072598) ----------------------------------------------------
char **__fastcall sub_100072598(const char *a1, char *const *a2, unsigned int a3, int a4)
{
  cpu_type_t v8; // w8
  int v9; // w0
  char v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  __int16 v19; // w8
  char **v20; // x5
  int v21; // w0
  char *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  char **v30; // x0
  cpu_type_t v31; // [xsp+24h] [xbp-3Ch] BYREF
  posix_spawnattr_t v32; // [xsp+28h] [xbp-38h] BYREF
  size_t v33; // [xsp+30h] [xbp-30h] BYREF

  if ( posix_spawnattr_init(&v32) )
  {
    if ( under_debugger != 1 )
      interr(634);
LABEL_24:
    __break(1u);
    goto LABEL_25;
  }
  if ( (a3 & 0x30) != 0 )
  {
    v8 = (a3 & 0x20) != 0 ? 16777228 : 12;
    v31 = v8;
    v9 = posix_spawnattr_setbinpref_np(&v32, 1u, &v31, &v33);
    if ( v9 )
    {
      v10 = (unsigned __int8)winerr(v9);
      return (char **)sub_10006757C("posix_spawnattr_setbinpref_np: %s\n", v11, v12, v13, v14, v15, v16, v17, v10);
    }
  }
  if ( (a3 & 0x40) != 0 )
    v19 = 320;
  else
    v19 = 64;
  if ( !posix_spawnattr_setflags(&v32, v19 | (a3 >> 2) & 0x80) )
  {
    v20 = *_NSGetEnviron();
    if ( a4 )
    {
      v21 = posix_spawnp(nullptr, a1, nullptr, &v32, a2, v20);
      if ( !v21 )
        return (char **)posix_spawnattr_destroy(&v32);
    }
    else
    {
      v21 = posix_spawn(nullptr, a1, nullptr, &v32, a2, v20);
      if ( !v21 )
        return (char **)posix_spawnattr_destroy(&v32);
    }
    if ( a4 )
      v22 = "p";
    else
      v22 = &byte_10008E2F5;
    winerr(v21);
    sub_10006757C("posix_spawn%s(%s): %s\n", v23, v24, v25, v26, v27, v28, v29, (char)v22);
    return (char **)posix_spawnattr_destroy(&v32);
  }
  if ( under_debugger == 1 )
    goto LABEL_24;
LABEL_25:
  interr(635);
  return sub_100072728(v30);
}
// 100072620: variable 'v11' is possibly undefined
// 100072620: variable 'v12' is possibly undefined
// 100072620: variable 'v13' is possibly undefined
// 100072620: variable 'v14' is possibly undefined
// 100072620: variable 'v15' is possibly undefined
// 100072620: variable 'v16' is possibly undefined
// 100072620: variable 'v17' is possibly undefined
// 1000726B0: variable 'v23' is possibly undefined
// 1000726B0: variable 'v24' is possibly undefined
// 1000726B0: variable 'v25' is possibly undefined
// 1000726B0: variable 'v26' is possibly undefined
// 1000726B0: variable 'v27' is possibly undefined
// 1000726B0: variable 'v28' is possibly undefined
// 1000726B0: variable 'v29' is possibly undefined
// 100072725: variable 'v30' is possibly undefined
// 10008E2F5: using guessed type char byte_10008E2F5;
// 10009D90D: using guessed type char under_debugger;
