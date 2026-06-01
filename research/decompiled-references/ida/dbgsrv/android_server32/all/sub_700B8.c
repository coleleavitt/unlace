/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_700B8
// Address: 0x000700B8

//----- (000700B8) --------------------------------------------------------
int __fastcall sub_700B8(int a1, int a2, int a3)
{
  __suseconds_t v5; // r0
  time_t v6; // r1
  int v7; // r3
  const char *v8; // r2
  char *v9; // r2
  FILE *v10; // r0
  FILE *v11; // r5
  const char *v12; // r0
  char v15[4096]; // [sp+1Ch] [bp-2404h] BYREF
  char v16[1024]; // [sp+101Ch] [bp-1404h] BYREF
  unsigned __int8 v17[4100]; // [sp+141Ch] [bp-1004h] BYREF

  v5 = qtime64();
  qstrftime64(v16, 0x400u, "%Y-%m-%d_%H-%M-%S", v7, v5, v6);
  if ( a3 < 0 )
    v8 = "exc-%s.raw";
  else
    v8 = "interr-%d-%s.raw";
  qsnprintf(v17, 4096, v8);
  v9 = *(char **)(a1 + 72);
  if ( v9 )
    qmakepath(v15, 4096, v9);
  else
    qstrncpy((unsigned int)v15, v17, 4096);
  v10 = fopenWB(v15);
  if ( v10 )
  {
    v11 = v10;
    qfwrite(v10, *(void **)a2, *(_DWORD *)(a2 + 4));
    qfclose(v11);
  }
  else
  {
    v12 = qstrerror(0xFFFFFFFF);
    sub_6F20C("WARNING: Failed to open file: \"%s\": %s\n", v15, v12);
  }
  return 9244;
}
// 700E8: variable 'v7' is possibly undefined
// 700E8: variable 'v6' is possibly undefined
