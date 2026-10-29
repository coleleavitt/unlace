/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D388
// Address: 0x000000000047D388

//----- (000000000047D388) ----------------------------------------------------
__int64 __fastcall sub_47D388(__int64 a1, __int64 a2, int a3)
{
  __time_t v6; // x0
  unsigned __int8 *v7; // x2
  FILE *v8; // x0
  FILE *v9; // x21
  const char *v11; // x0
  char v12[1024]; // [xsp+48h] [xbp-2408h] BYREF
  unsigned __int8 v13[4096]; // [xsp+448h] [xbp-2008h] BYREF
  char v14[4096]; // [xsp+1448h] [xbp-1008h] BYREF
  __int64 v15; // [xsp+2448h] [xbp-8h]

  v6 = sub_4926B8();
  sub_492AB0(v12, 0x400u, "%Y-%m-%d_%H-%M-%S", v6);
  if ( (a3 & 0x80000000) == 0 )
  {
    sub_49B748((const char *)v13, 0x1000u, "interr-%d-%s.raw", a3, v12);
    v7 = *(unsigned __int8 **)(a1 + 136);
    if ( v7 )
      goto LABEL_3;
LABEL_7:
    sub_493350((unsigned __int64)v14, v13, 4096);
    v8 = sub_48DEA0(v14);
    v9 = v8;
    if ( v8 )
      goto LABEL_4;
LABEL_8:
    v11 = sub_493840(-1);
    sub_47B4D0("WARNING: Failed to open file: \"%s\": %s\n", v14, v11);
    return v15 ^ _stack_chk_guard;
  }
  sub_49B748((const char *)v13, 0x1000u, "exc-%s.raw", v12);
  v7 = *(unsigned __int8 **)(a1 + 136);
  if ( !v7 )
    goto LABEL_7;
LABEL_3:
  sub_48F278(v14, 4096, v7, v13, 0);
  v8 = sub_48DEA0(v14);
  v9 = v8;
  if ( !v8 )
    goto LABEL_8;
LABEL_4:
  sub_490560(v8, *(void **)a2, *(_QWORD *)(a2 + 8));
  sub_4906A0(v9);
  return v15 ^ _stack_chk_guard;
}
// 4C8FE0: using guessed type __int64 qword_4C8FE0[16];
