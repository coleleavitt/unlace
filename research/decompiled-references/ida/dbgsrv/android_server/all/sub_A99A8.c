/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A99A8
// Address: 0x00000000000A99A8

//----- (00000000000A99A8) ----------------------------------------------------
__int64 __fastcall sub_A99A8(__int64 a1, __int64 a2, int a3)
{
  __time_t v6; // x0
  char *v7; // x2
  FILE *v8; // x0
  FILE *v9; // x20
  const char *v11; // x0
  pthread_mutex_t v12[102]; // [xsp+8h] [xbp-2438h] BYREF
  char v13[1024]; // [xsp+1008h] [xbp-1438h] BYREF
  pthread_mutex_t v14[102]; // [xsp+1408h] [xbp-1038h] BYREF
  __int64 v15; // [xsp+2408h] [xbp-38h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = qtime64();
  qstrftime64(v13, 0x400u, "%Y-%m-%d_%H-%M-%S", v6);
  if ( a3 < 0 )
  {
    qsnprintf(v14, 4096, "exc-%s.raw", v13);
    v7 = *(char **)(a1 + 136);
    if ( v7 )
      goto LABEL_3;
  }
  else
  {
    qsnprintf(v14, 4096, "interr-%d-%s.raw", a3, v13);
    v7 = *(char **)(a1 + 136);
    if ( v7 )
    {
LABEL_3:
      qmakepath((size_t)v12, 0x1000u, v7, v14, 0);
      goto LABEL_6;
    }
  }
  qstrncpy(v12, (char *)v14, 4096);
LABEL_6:
  v8 = fopenWB((const char *)v12);
  if ( v8 )
  {
    v9 = v8;
    qfwrite(v8, *(void **)a2, *(_QWORD *)(a2 + 8));
    return qfclose(v9);
  }
  else
  {
    v11 = qstrerror(0xFFFFFFFF);
    return sub_A84C8("WARNING: Failed to open file: \"%s\": %s\n", (const char *)v12, v11);
  }
}
