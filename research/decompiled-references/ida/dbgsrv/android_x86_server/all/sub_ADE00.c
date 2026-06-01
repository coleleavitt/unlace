/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ADE00
// Address: 0x000ADE00

//----- (000ADE00) --------------------------------------------------------
int __cdecl sub_ADE00(int a1, _DWORD *a2, char *name)
{
  int result; // eax
  __int16 v4; // ax
  int v5; // eax
  int v6; // ecx
  int v7[3]; // [esp+8h] [ebp-1094h] BYREF
  int v8; // [esp+14h] [ebp-1088h]
  int v9; // [esp+2Ch] [ebp-1070h]
  int v10; // [esp+30h] [ebp-106Ch]
  time_t v11; // [esp+48h] [ebp-1054h]
  struct tm tp; // [esp+58h] [ebp-1044h] BYREF
  char file[4096]; // [esp+88h] [ebp-1014h] BYREF
  unsigned int v14; // [esp+1088h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  result = fnmatch((const char *)(a1 + 8216), name, 22);
  if ( !result )
  {
    qmakepath(file, 4096, (const char *)(a1 + 4120), (int)name);
    if ( qstat(file, (int)v7) )
      return 1;
    v4 = v8;
    *(_DWORD *)a1 = v8;
    if ( (v4 & 0x4000) != 0 && (*(_DWORD *)(a1 + 12312) & 0x4000) == 0 )
    {
      return 1;
    }
    else
    {
      qustrncpy(a1 + 4, (int)name, 4096);
      v5 = v9;
      v6 = v10;
      *(_DWORD *)(a1 + 4100) = v9;
      if ( a2 )
      {
        *a2 = v5;
        a2[1] = v6;
      }
      qlocaltime(&tp, v11);
      *(_WORD *)(a1 + 4106) = (LOWORD(tp.tm_hour) << 11) + 32 * LOWORD(tp.tm_min) + tp.tm_sec / 2;
      *(_WORD *)(a1 + 4104) = LOWORD(tp.tm_mday) + (LOWORD(tp.tm_year) << 9) + 32 * LOWORD(tp.tm_mon) + 24608;
      return 0;
    }
  }
  return result;
}
