/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_ida_subdirs
// Address: 0x00000000000B756C

//----- (00000000000B756C) ----------------------------------------------------
__int64 __fastcall get_ida_subdirs(__int64 a1, char *a2, char a3)
{
  __int64 v6; // x23
  __int64 idp_name; // x22
  char *v8; // x0
  __int64 v9; // x26
  unsigned __int64 v10; // x27
  char *v11; // x0
  char *v12; // x0
  void *ptr; // [xsp+10h] [xbp-1080h] BYREF
  __int64 v15; // [xsp+18h] [xbp-1078h]
  __int64 v16; // [xsp+20h] [xbp-1070h]
  __int64 v17; // [xsp+1028h] [xbp-68h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (a3 & 1) != 0 )
  {
    idp_name = get_idp_name();
    if ( (a3 & 2) == 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  idp_name = 0;
  if ( (a3 & 2) != 0 )
  {
LABEL_5:
    v8 = idadir(a2);
    sub_B7C7C(a1, a3, v8, idp_name, 0);
  }
LABEL_6:
  sub_B7B68();
  if ( qword_167DB8 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( *(_QWORD *)(qword_167DB0 + v9 + 8) )
        sub_B7C7C(a1, a3, *(char **)(qword_167DB0 + v9), a2, idp_name, 0);
      else
        sub_B7C7C(a1, a3, &byte_F154B, a2, idp_name, 0);
      ++v10;
      v9 += 24;
    }
    while ( v10 < qword_167DB8 );
  }
  if ( a2 )
  {
    if ( !strcmp(a2, "sig") )
    {
      v11 = "IDASGN";
    }
    else if ( !strcmp(a2, "ids") )
    {
      v11 = "IDAIDS";
    }
    else if ( !strcmp(a2, "idc") )
    {
      v11 = "IDAIDC";
    }
    else
    {
      if ( strcmp(a2, "til") )
      {
        ptr = nullptr;
        v15 = 0;
        v16 = 0;
        goto LABEL_28;
      }
      v11 = "IDATIL";
    }
    ptr = nullptr;
    v15 = 0;
    v16 = 0;
    if ( (qgetenv(v11, (__int64)&ptr) & 1) != 0 )
    {
      if ( v15 )
        sub_B7C7C(a1, a3, (char *)ptr, idp_name, 0);
      else
        sub_B7C7C(a1, a3, &byte_F154B, idp_name, 0);
    }
    if ( ptr )
    {
      v15 = 0;
      qfree(ptr);
      ptr = nullptr;
      v16 = 0;
    }
  }
LABEL_28:
  if ( (a3 & 2) == 0 )
  {
    v12 = idadir(a2);
    sub_B7C7C(a1, a3, v12, idp_name, 0);
  }
  return (unsigned int)(*(_DWORD *)(a1 + 8) - v6);
}
// F154B: using guessed type char byte_F154B;
// 166D80: using guessed type __int64[512];
// 167DB0: using guessed type __int64 qword_167DB0;
// 167DB8: using guessed type __int64 qword_167DB8;
