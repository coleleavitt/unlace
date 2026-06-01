/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419450
// Address: 0x00419450

//----- (00419450) --------------------------------------------------------
char __cdecl sub_419450(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int *v4; // ebp
  unsigned int v5; // ecx
  unsigned __int8 v7; // bl
  int v8; // eax
  char v9; // al
  int v10; // edx
  int v11; // esi
  bool v12; // zf
  char v13; // al
  unsigned __int8 v14; // bl
  char v15; // [esp+Ch] [ebp-10h]
  int v16; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+14h] [ebp-8h] BYREF
  unsigned int v18; // [esp+18h] [ebp-4h]

  v4 = a1;
  v5 = *a1;
  v18 = v5;
  if ( (v5 & 0x100) != 0 )
    return 0;
  if ( (v5 & 8) != 0 )
  {
    v7 = 3;
  }
  else if ( (v5 & 0x80u) == 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      v13 = byte_48B504[v7];
      if ( v13 != -1 && ((unsigned __int8)v13 & (unsigned __int8)v5) != 0 )
        break;
      if ( ++v7 >= 8u )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(622);
      }
    }
  }
  else
  {
    v7 = 7;
  }
  v8 = (a2 >> 1) & 1 | 2;
  if ( (a2 & 1) == 0 )
    v8 = (a2 >> 1) & 1;
  v15 = v8;
  if ( (a2 & 8) != 0 )
  {
    v9 = v8 | 4;
    v15 = v9;
    if ( a3 == 1 )
      goto LABEL_34;
    v10 = 0;
    v11 = 0;
    v16 = 0;
    v17 = 0;
    if ( !dword_4B6A20 )
      goto LABEL_30;
    if ( byte_4B6ABC )
    {
      if ( VersionInformation.dwPlatformId == 2
        && VersionInformation.dwMajorVersion == 5
        && VersionInformation.dwMinorVersion == 1 )
      {
        goto LABEL_30;
      }
      if ( byte_4B6ABC )
      {
        if ( VersionInformation.dwMajorVersion == 10 )
        {
          v12 = VersionInformation.dwMinorVersion == 0;
        }
        else
        {
          if ( VersionInformation.dwMajorVersion != 6 )
            goto LABEL_28;
          if ( VersionInformation.dwMinorVersion == 3 )
            goto LABEL_30;
          v12 = VersionInformation.dwMinorVersion == 2;
        }
        if ( v12 )
          goto LABEL_30;
      }
    }
LABEL_28:
    if ( dword_4B6A20(a4, &v16, &v17) )
    {
      v10 = v16;
      v11 = v17;
      v9 = v15;
LABEL_30:
      if ( a3 == 2 && !v11 || !v10 )
        v15 = v9 | 1;
    }
LABEL_34:
    v4 = a1;
  }
  v14 = ~v15 & v7;
  if ( v14 == 2 || v14 == 6 )
    v14 = 0;
  *v4 = v18 & 0xFFFFFF00 | (unsigned __int8)byte_48B504[v14];
  return 1;
}
// 4B6A20: using guessed type int (__stdcall *dword_4B6A20)(_DWORD, _DWORD, _DWORD);
// 4B6ABC: using guessed type char byte_4B6ABC;
// 4B70F0: using guessed type char byte_4B70F0;
