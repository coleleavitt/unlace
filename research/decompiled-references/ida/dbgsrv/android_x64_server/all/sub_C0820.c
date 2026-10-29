/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0820
// Address: 0x00000000000C0820

//----- (00000000000C0820) ----------------------------------------------------
int __fastcall sub_C0820(__int64 a1, _QWORD *a2, const char *a3)
{
  int result; // eax
  __int16 v5; // ax
  __int64 v6; // rax
  _BYTE v7[12]; // [rsp+8h] [rbp-10B0h] BYREF
  int v8; // [rsp+14h] [rbp-10A4h]
  __int64 v9; // [rsp+30h] [rbp-1088h]
  unsigned int v10; // [rsp+4Ch] [rbp-106Ch]
  struct tm tp; // [rsp+58h] [rbp-1060h] BYREF
  char v12[4096]; // [rsp+90h] [rbp-1028h] BYREF
  unsigned __int64 v13; // [rsp+1090h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  result = fnmatch((const char *)(a1 + 8224), a3, 22);
  if ( !result )
  {
    qmakepath(v12, 4096, (const char *)(a1 + 4128), a3, 0);
    if ( (unsigned int)qstat(v12, (__int64)v7) )
      return 1;
    v5 = v8;
    *(_DWORD *)a1 = v8;
    if ( (v5 & 0x4000) != 0 && (*(_DWORD *)(a1 + 12320) & 0x4000) == 0 )
    {
      return 1;
    }
    else
    {
      qustrncpy(a1 + 4, (__int64)a3, 4096);
      v6 = v9;
      *(_DWORD *)(a1 + 4100) = v9;
      if ( a2 )
        *a2 = v6;
      qlocaltime(&tp, v10);
      *(_WORD *)(a1 + 4106) = (LOWORD(tp.tm_hour) << 11) + 32 * LOWORD(tp.tm_min) + tp.tm_sec / 2;
      *(_WORD *)(a1 + 4104) = LOWORD(tp.tm_mday) + (LOWORD(tp.tm_year) << 9) + 32 * LOWORD(tp.tm_mon) + 24608;
      return 0;
    }
  }
  return result;
}
