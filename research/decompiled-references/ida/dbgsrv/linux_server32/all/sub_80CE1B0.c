/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE1B0
// Address: 0x080CE1B0

//----- (080CE1B0) --------------------------------------------------------
int __cdecl sub_80CE1B0(int a1, _DWORD *a2, char *name)
{
  int v3; // esi
  char v5; // ah
  int v6; // eax
  int v7; // ecx
  __int16 v8; // cx
  struct tm tp; // [esp+8h] [ebp-1098h] BYREF
  _BYTE v10[12]; // [esp+34h] [ebp-106Ch] BYREF
  int v11; // [esp+40h] [ebp-1060h]
  int v12; // [esp+58h] [ebp-1048h]
  int v13; // [esp+5Ch] [ebp-1044h]
  int v14; // [esp+74h] [ebp-102Ch]
  char v15[4096]; // [esp+80h] [ebp-1020h] BYREF
  unsigned int v16; // [esp+1080h] [ebp-20h]

  v16 = __readgsdword(0x14u);
  v3 = fnmatch((const char *)(a1 + 8216), name, 21);
  if ( !v3 )
  {
    sub_80CE680(v15, 4096, (char *)(a1 + 4120), name, 0);
    v3 = sub_80CEBF0((int)v15, (int)v10);
    if ( v3 || (v5 = BYTE1(v11), *(_DWORD *)a1 = v11, (*(_BYTE *)(a1 + 12313) & 0x40) == 0) && (v5 & 0x40) != 0 )
    {
      v3 = 1;
    }
    else
    {
      sub_80C74C0((_BYTE *)(a1 + 4), name, 4096);
      v6 = v12;
      v7 = v13;
      *(_DWORD *)(a1 + 4100) = v12;
      if ( a2 )
      {
        *a2 = v6;
        a2[1] = v7;
      }
      sub_80D0440(&tp, v14);
      v8 = LOWORD(tp.tm_mon) + 1;
      *(_WORD *)(a1 + 4106) = tp.tm_sec / 2 + 32 * LOWORD(tp.tm_min) + (LOWORD(tp.tm_hour) << 11);
      *(_WORD *)(a1 + 4104) = LOWORD(tp.tm_mday) + 32 * v8 + ((LOWORD(tp.tm_year) - 80) << 9);
    }
  }
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v3;
}
