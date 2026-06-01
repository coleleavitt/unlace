/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_ida_subdirs
// Address: 0x000AA260

//----- (000AA260) --------------------------------------------------------
int __cdecl get_ida_subdirs(int *a1, char *s1, char a3)
{
  char v3; // dl
  int idp_name; // eax
  char *v5; // eax
  unsigned int v6; // edi
  int v7; // esi
  const char *v8; // eax
  bool v9; // zf
  char *v10; // eax
  char *v11; // eax
  int v13; // [esp+Ch] [ebp-1030h]
  int v14; // [esp+10h] [ebp-102Ch]
  int v15; // [esp+18h] [ebp-1024h] BYREF
  int v16; // [esp+1Ch] [ebp-1020h]
  int v17; // [esp+20h] [ebp-101Ch]
  unsigned int v18; // [esp+1028h] [ebp-14h]

  v3 = a3;
  v18 = __readgsdword(0x14u);
  v14 = a1[1];
  v13 = 0;
  if ( (a3 & 1) != 0 )
  {
    idp_name = get_idp_name();
    v3 = a3;
    v13 = idp_name;
  }
  if ( (v3 & 2) != 0 )
  {
    v5 = idadir(s1);
    sub_AAA20(a1, a3, v5, v13, 0);
  }
  sub_AA8B0();
  if ( dword_13D328 )
  {
    v6 = 0;
    v7 = 4;
    do
    {
      v8 = byte_EF875;
      if ( *(_DWORD *)(dword_13D324 + v7) )
        v8 = *(const char **)(dword_13D324 + v7 - 4);
      sub_AAA20(a1, a3, v8, s1, v13, 0);
      ++v6;
      v7 += 12;
    }
    while ( v6 < dword_13D328 );
  }
  if ( s1 )
  {
    if ( !strcmp(s1, "sig") )
    {
      v10 = "IDASGN";
    }
    else if ( !strcmp(s1, "ids") )
    {
      v10 = "IDAIDS";
    }
    else if ( !strcmp(s1, "idc") )
    {
      v10 = "IDAIDC";
    }
    else
    {
      v9 = strcmp(s1, "til") == 0;
      v10 = "IDATIL";
      if ( !v9 )
        v10 = nullptr;
    }
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( v10 && (unsigned __int8)qgetenv(v10, (int)&v15) )
    {
      if ( v16 )
        sub_AAA20(a1, a3, (const char *)v15, v13, 0);
      else
        sub_AAA20(a1, a3, byte_EF875, v13, 0);
    }
    if ( v15 )
    {
      v16 = 0;
      qfree((void *)v15);
      v15 = 0;
      v17 = 0;
    }
  }
  if ( (a3 & 2) == 0 )
  {
    v11 = idadir(s1);
    sub_AAA20(a1, a3, v11, v13, 0);
  }
  return a1[1] - v14;
}
// 13D324: using guessed type int dword_13D324;
// 13D328: using guessed type int dword_13D328;
