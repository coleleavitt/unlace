__int64 __fastcall sub_81A090(__int64 a1, _QWORD *a2, const char *a3)
{
  unsigned int v4; // ebx
  int v5; // r9d
  char v7; // ah
  __int64 v8; // rax
  __int16 v9; // dx
  struct tm v10; // [rsp+0h] [rbp-10C8h] BYREF
  int v11; // [rsp+4Ch] [rbp-107Ch]
  __int64 v12; // [rsp+68h] [rbp-1060h]
  char filename[4104]; // [rsp+90h] [rbp-1038h] BYREF
  unsigned __int64 v14; // [rsp+1098h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v4 = fnmatch((const char *)(a1 + 8224), a3, 21);
  if ( !v4 )
  {
    qmakepath((int)filename, 4096, a1 + 4128, (int)a3, 0, v5, v10.tm_sec);
    v4 = qstat(filename);
    if ( v4 )
      return 1;
    v7 = BYTE1(v11);
    *(_DWORD *)a1 = v11;
    if ( (*(_BYTE *)(a1 + 12321) & 0x40) == 0 && (v7 & 0x40) != 0 )
    {
      return 1;
    }
    else
    {
      qustrncpy(a1 + 4, a3, 4096);
      v8 = v12;
      *(_DWORD *)(a1 + 4100) = v12;
      if ( a2 )
        *a2 = v8;
      qlocaltime(&v10);
      v9 = LOWORD(v10.tm_mon) + 1;
      *(_WORD *)(a1 + 4106) = v10.tm_sec / 2 + 32 * LOWORD(v10.tm_min) + (LOWORD(v10.tm_hour) << 11);
      *(_WORD *)(a1 + 4104) = LOWORD(v10.tm_mday) + 32 * v9 + ((LOWORD(v10.tm_year) - 80) << 9);
    }
  }
  return v4;
}

