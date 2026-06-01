/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AEC10
// Address: 0x00000000000AEC10

//----- (00000000000AEC10) ----------------------------------------------------
unsigned __int64 __fastcall sub_AEC10(__int64 a1, __int64 a2, int a3)
{
  __time_t v4; // rax
  const char *v5; // rdx
  FILE *v6; // rax
  FILE *v7; // rbx
  const char *v8; // rax
  char v10[4096]; // [rsp+0h] [rbp-2428h] BYREF
  char s[1024]; // [rsp+1000h] [rbp-1428h] BYREF
  char v12[4104]; // [rsp+1400h] [rbp-1028h] BYREF
  unsigned __int64 v13; // [rsp+2408h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v4 = qtime64();
  qstrftime64(s, 0x400u, "%Y-%m-%d_%H-%M-%S", v4);
  if ( a3 < 0 )
    qsnprintf(v12, 4096, "exc-%s.raw", s);
  else
    qsnprintf(v12, 4096, "interr-%d-%s.raw", a3, s);
  v5 = *(const char **)(a1 + 136);
  if ( v5 )
    qmakepath(v10, 4096, v5, v12, 0);
  else
    qstrncpy(v10, (__int64)v12, 4096);
  v6 = fopenWB(v10);
  if ( v6 )
  {
    v7 = v6;
    qfwrite(v6, *(void **)a2, *(_QWORD *)(a2 + 8));
    qfclose(v7);
  }
  else
  {
    v8 = qstrerror(0xFFFFFFFF);
    sub_AD470("WARNING: Failed to open file: \"%s\": %s\n", v10, v8);
  }
  return __readfsqword(0x28u);
}
