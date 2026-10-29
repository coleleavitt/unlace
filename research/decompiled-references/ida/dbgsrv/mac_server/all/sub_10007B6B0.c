/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007B6B0
// Address: 0x000000010007B6B0

//----- (000000010007B6B0) ----------------------------------------------------
int __fastcall sub_10007B6B0(__int64 a1, _QWORD *a2, char *a3)
{
  int result; // eax
  __int16 v5; // ax
  __int64 v6; // rax
  _BYTE v7[12]; // [rsp+8h] [rbp-4B8h] BYREF
  int v8; // [rsp+14h] [rbp-4ACh]
  __int64 v9; // [rsp+30h] [rbp-490h]
  unsigned int v10; // [rsp+4Ch] [rbp-474h]
  tm v11; // [rsp+58h] [rbp-468h] BYREF
  char v12[1032]; // [rsp+90h] [rbp-430h] BYREF

  result = fnmatch((const char *)(a1 + 2080), a3, 22);
  if ( !result )
  {
    qmakepath(v12, 1024, a1 + 1056, a3, 0);
    if ( qstat(v12, (__int64)v7) )
      return 1;
    v5 = v8;
    *(_DWORD *)a1 = v8;
    if ( (v5 & 0x4000) != 0 && (*(_BYTE *)(a1 + 3105) & 0x40) == 0 )
    {
      return 1;
    }
    else
    {
      qustrncpy(a1 + 4, a3, 1024);
      v6 = v9;
      *(_DWORD *)(a1 + 1028) = v9;
      if ( a2 )
        *a2 = v6;
      qlocaltime(&v11, v10);
      *(_WORD *)(a1 + 1034) = (LOWORD(v11.tm_hour) << 11) + 32 * LOWORD(v11.tm_min) + v11.tm_sec / 2;
      *(_WORD *)(a1 + 1032) = LOWORD(v11.tm_mday) + (LOWORD(v11.tm_year) << 9) + 32 * LOWORD(v11.tm_mon) + 24608;
      return 0;
    }
  }
  return result;
}
