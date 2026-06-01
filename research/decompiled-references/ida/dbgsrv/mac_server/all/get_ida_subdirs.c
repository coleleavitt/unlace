/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_ida_subdirs
// Address: 0x00000001000792A0

//----- (00000001000792A0) ----------------------------------------------------
__int64 __fastcall get_ida_subdirs(__int64 a1, char *a2, char a3)
{
  char *v4; // rax
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  const char *v7; // rdx
  char *v8; // rdi
  char *v9; // rax
  __int64 v11; // [rsp+8h] [rbp-468h]
  __int64 idp_name; // [rsp+18h] [rbp-458h]
  __int128 v14; // [rsp+20h] [rbp-450h] BYREF
  __int64 v15; // [rsp+30h] [rbp-440h]

  v11 = *(_QWORD *)(a1 + 8);
  if ( (a3 & 1) != 0 )
    idp_name = get_idp_name();
  else
    idp_name = 0;
  if ( (a3 & 2) != 0 )
  {
    v4 = idadir(a2);
    sub_100079A40((char **)a1, a3, (__int64)v4, idp_name, 0);
  }
  sub_100079880();
  if ( *((_QWORD *)&xmmword_1000AE8C0 + 1) )
  {
    v5 = 8;
    v6 = 0;
    do
    {
      v7 = _s1;
      if ( *(_QWORD *)(xmmword_1000AE8C0 + v5) )
        v7 = *(const char **)(xmmword_1000AE8C0 + v5 - 8);
      sub_100079A40((char **)a1, a3, (__int64)v7, a2, idp_name, 0);
      ++v6;
      v5 += 24;
    }
    while ( v6 < *((_QWORD *)&xmmword_1000AE8C0 + 1) );
  }
  if ( a2 )
  {
    if ( !strcmp(a2, "sig") )
    {
      v8 = "IDASGN";
    }
    else if ( !strcmp(a2, "ids") )
    {
      v8 = "IDAIDS";
    }
    else if ( !strcmp(a2, "idc") )
    {
      v8 = "IDAIDC";
    }
    else
    {
      if ( strcmp(a2, "til") )
        goto LABEL_26;
      v8 = "IDATIL";
    }
    v14 = 0;
    v15 = 0;
    if ( (unsigned __int8)qgetenv(v8, (__int64)&v14) )
    {
      if ( *((_QWORD *)&v14 + 1) )
        sub_100079A40((char **)a1, a3, v14, idp_name, 0);
      else
        sub_100079A40((char **)a1, a3, (__int64)_s1, idp_name, 0);
    }
    if ( (_QWORD)v14 )
    {
      *((_QWORD *)&v14 + 1) = 0;
      qfree((void *)v14);
    }
  }
LABEL_26:
  if ( (a3 & 2) == 0 )
  {
    v9 = idadir(a2);
    sub_100079A40((char **)a1, a3, (__int64)v9, idp_name, 0);
  }
  return (unsigned int)(*(_DWORD *)(a1 + 8) - v11);
}
// 1000AE8C0: using guessed type __int128 xmmword_1000AE8C0;
