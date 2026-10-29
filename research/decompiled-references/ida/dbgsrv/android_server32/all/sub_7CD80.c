/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CD80
// Address: 0x0007CD80

//----- (0007CD80) --------------------------------------------------------
int __fastcall sub_7CD80(int a1, _DWORD *a2, const char *a3)
{
  int result; // r0
  __int16 v6; // r1
  int v7; // r0
  int v8; // r1
  _DWORD v10[3]; // [sp+1Ch] [bp-1084h] BYREF
  int v11; // [sp+28h] [bp-1078h]
  int v12; // [sp+44h] [bp-105Ch]
  int v13; // [sp+48h] [bp-1058h]
  int v14; // [sp+60h] [bp-1040h]
  struct tm tp; // [sp+6Ch] [bp-1034h] BYREF
  char v16[4104]; // [sp+98h] [bp-1008h] BYREF

  result = fnmatch((const char *)(a1 + 8216), a3, 22);
  if ( !result )
  {
    qmakepath(v16, 4096, (char *)(a1 + 4120));
    if ( qstat(v16, v10) )
      return 1;
    v6 = v11;
    *(_DWORD *)a1 = v11;
    if ( (v6 & 0x4000) != 0 && (*(_DWORD *)(a1 + 12312) & 0x4000) == 0 )
    {
      return 1;
    }
    else
    {
      qustrncpy(a1 + 4, (int)a3, 4096);
      v7 = v13;
      v8 = v12;
      *(_DWORD *)(a1 + 4100) = v12;
      if ( a2 )
      {
        *a2 = v8;
        a2[1] = v7;
      }
      qlocaltime(&tp, v14);
      *(_WORD *)(a1 + 4106) = 32 * LOWORD(tp.tm_min) + (LOWORD(tp.tm_hour) << 11) + tp.tm_sec / 2;
      *(_WORD *)(a1 + 4104) = (LOWORD(tp.tm_year) << 9) + 32 * LOWORD(tp.tm_mon) + LOWORD(tp.tm_mday) + 24608;
      return 0;
    }
  }
  return result;
}
