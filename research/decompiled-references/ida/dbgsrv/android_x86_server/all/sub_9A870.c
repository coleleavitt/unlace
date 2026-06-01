/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A870
// Address: 0x0009A870

//----- (0009A870) --------------------------------------------------------
unsigned int __cdecl sub_9A870(int a1, int a2, int a3)
{
  __suseconds_t v3; // eax
  time_t v4; // edx
  const char *v5; // eax
  FILE *v6; // eax
  FILE *v7; // esi
  const char *v8; // eax
  char v10[4096]; // [esp+8h] [ebp-2414h] BYREF
  char s[1024]; // [esp+1008h] [ebp-1414h] BYREF
  int v12[1029]; // [esp+1408h] [ebp-1014h] BYREF

  v12[1024] = __readgsdword(0x14u);
  v3 = qtime64();
  qstrftime64(s, 0x400u, "%Y-%m-%d_%H-%M-%S", v3, v4);
  if ( a3 < 0 )
    qsnprintf(v12, 4096, "exc-%s.raw", (int)s);
  else
    qsnprintf(v12, 4096, "interr-%d-%s.raw", a3);
  v5 = *(const char **)(a1 + 72);
  if ( v5 )
    qmakepath(v10, 4096, v5, (int)v12);
  else
    qstrncpy((unsigned int)v10, (int)v12, 4096);
  v6 = fopenWB(v10);
  if ( v6 )
  {
    v7 = v6;
    qfwrite(v6, *(void **)a2, *(_DWORD *)(a2 + 4));
    qfclose(v7);
  }
  else
  {
    v8 = qstrerror(0xFFFFFFFF);
    sub_98F70("WARNING: Failed to open file: \"%s\": %s\n", v10, v8);
  }
  return __readgsdword(0x14u);
}
// 9A8B9: variable 'v4' is possibly undefined
