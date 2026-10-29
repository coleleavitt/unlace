/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408F10
// Address: 0x0000000000408F10

//----- (0000000000408F10) ----------------------------------------------------
__int64 __fastcall sub_408F10(int a1)
{
  FILE *v1; // x0
  FILE *v2; // x20
  int v3; // w19
  __int64 v4; // x21
  char *v5; // x22
  unsigned int v6; // w19
  int v8; // w0
  unsigned __int8 *v9; // x22
  int v10; // t1
  char *s1; // [xsp+40h] [xbp-1020h] BYREF
  unsigned __int64 v12; // [xsp+48h] [xbp-1018h]
  __int64 v13; // [xsp+50h] [xbp-1010h]
  char v14[4096]; // [xsp+58h] [xbp-1008h] BYREF

  sub_49B748(v14, 0x1000u, "/proc/%u/status", a1);
  v1 = sub_48DE20(v14);
  if ( v1 )
  {
    v2 = v1;
    v3 = 3;
    s1 = nullptr;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v4 = sub_490E28((__int64)&s1, v2);
      if ( v4 < 0 )
        goto LABEL_7;
      if ( v12 > 6 )
      {
        v5 = s1;
        if ( !strncmp(s1, "State:", 6u) )
          break;
      }
      if ( !--v3 )
        goto LABEL_7;
    }
    v8 = (unsigned __int8)v5[6];
    v9 = (unsigned __int8 *)(v5 + 6);
    if ( !v8 )
    {
LABEL_7:
      sub_4906A0(v2);
      if ( (v4 & 0x8000000000000000LL) == 0 )
      {
        if ( !under_debugger )
          sub_492270(30060);
        __break(0x3E8u);
      }
      v6 = 32;
      goto LABEL_11;
    }
    while ( isspace(v8) )
    {
      v10 = *++v9;
      v8 = v10;
      if ( !v10 )
        goto LABEL_7;
    }
    sub_4906A0(v2);
    v6 = *v9;
LABEL_11:
    if ( s1 )
    {
      v12 = 0;
      j__free(s1);
    }
  }
  else
  {
    return 32;
  }
  return v6;
}
// 408F10: could not find valid save-restore pair for x21
// 408F10: could not find valid save-restore pair for x22
// 52451C: using guessed type char under_debugger;
