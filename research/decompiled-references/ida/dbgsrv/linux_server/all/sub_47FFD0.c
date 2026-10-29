/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FFD0
// Address: 0x000000000047FFD0

//----- (000000000047FFD0) ----------------------------------------------------
__int64 __fastcall sub_47FFD0(__int64 a1, _QWORD *a2, char *a3)
{
  unsigned int v4; // ebx
  char v6; // ah
  __int64 v7; // rax
  __int16 v8; // dx
  struct tm v9; // [rsp+0h] [rbp-10C8h] BYREF
  _BYTE v10[12]; // [rsp+40h] [rbp-1088h] BYREF
  int v11; // [rsp+4Ch] [rbp-107Ch]
  __int64 v12; // [rsp+68h] [rbp-1060h]
  unsigned int v13; // [rsp+84h] [rbp-1044h]
  char filename[4104]; // [rsp+90h] [rbp-1038h] BYREF
  unsigned __int64 v15; // [rsp+1098h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v4 = fnmatch((const char *)(a1 + 8224), a3, 21);
  if ( !v4 )
  {
    sub_480480(filename, 4096, (unsigned __int8 *)(a1 + 4128), a3, 0);
    v4 = sub_4809B0(filename, (__int64)v10);
    if ( v4 )
      return 1;
    v6 = BYTE1(v11);
    *(_DWORD *)a1 = v11;
    if ( (*(_BYTE *)(a1 + 12321) & 0x40) == 0 && (v6 & 0x40) != 0 )
    {
      return 1;
    }
    else
    {
      sub_479A40((unsigned __int8 *)(a1 + 4), (unsigned __int8 *)a3, 4096);
      v7 = v12;
      *(_DWORD *)(a1 + 4100) = v12;
      if ( a2 )
        *a2 = v7;
      sub_481F10(&v9, v13);
      v8 = LOWORD(v9.tm_mon) + 1;
      *(_WORD *)(a1 + 4106) = v9.tm_sec / 2 + 32 * LOWORD(v9.tm_min) + (LOWORD(v9.tm_hour) << 11);
      *(_WORD *)(a1 + 4104) = LOWORD(v9.tm_mday) + 32 * v8 + ((LOWORD(v9.tm_year) - 80) << 9);
    }
  }
  return v4;
}
