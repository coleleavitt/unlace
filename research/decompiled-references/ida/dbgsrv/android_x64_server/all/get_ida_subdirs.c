/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_ida_subdirs
// Address: 0x00000000000BD3C0

//----- (00000000000BD3C0) ----------------------------------------------------
__int64 __fastcall get_ida_subdirs(__int64 *a1, char *a2, char a3)
{
  __int64 idp_name; // rax
  char *v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  const char *v9; // rdx
  char *v10; // rdi
  char *v11; // rax
  __int64 v13; // [rsp+0h] [rbp-1068h]
  __int64 v14; // [rsp+8h] [rbp-1060h]
  void *ptr[2]; // [rsp+10h] [rbp-1058h] BYREF
  __int64 v16; // [rsp+20h] [rbp-1048h]
  unsigned __int64 v17; // [rsp+1030h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v14 = a1[1];
  if ( (a3 & 1) != 0 )
    idp_name = get_idp_name();
  else
    idp_name = 0;
  v13 = idp_name;
  if ( (a3 & 2) != 0 )
  {
    v6 = idadir(a2);
    sub_BDB10(a1, a3, v6, v13, 0);
  }
  sub_BD9C0();
  if ( *((_QWORD *)&xmmword_157B00 + 1) )
  {
    v7 = 8;
    v8 = 0;
    do
    {
      v9 = s1;
      if ( *(_QWORD *)(xmmword_157B00 + v7) )
        v9 = *(const char **)(xmmword_157B00 + v7 - 8);
      sub_BDB10(a1, a3, v9, a2, v13, 0, v13);
      ++v8;
      v7 += 24;
    }
    while ( v8 < *((_QWORD *)&xmmword_157B00 + 1) );
  }
  if ( a2 )
  {
    if ( !strcmp(a2, "sig") )
    {
      v10 = "IDASGN";
    }
    else if ( !strcmp(a2, "ids") )
    {
      v10 = "IDAIDS";
    }
    else if ( !strcmp(a2, "idc") )
    {
      v10 = "IDAIDC";
    }
    else
    {
      if ( strcmp(a2, "til") )
      {
        *(_OWORD *)ptr = 0;
        v16 = 0;
LABEL_25:
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v16 = 0;
        }
        goto LABEL_27;
      }
      v10 = "IDATIL";
    }
    *(_OWORD *)ptr = 0;
    v16 = 0;
    if ( (unsigned __int8)qgetenv(v10, (__int64)ptr) )
    {
      if ( ptr[1] )
        sub_BDB10(a1, a3, (const char *)ptr[0], v13, 0);
      else
        sub_BDB10(a1, a3, s1, v13, 0);
    }
    goto LABEL_25;
  }
LABEL_27:
  if ( (a3 & 2) == 0 )
  {
    v11 = idadir(a2);
    sub_BDB10(a1, a3, v11, v13, 0);
  }
  return (unsigned int)(*((_DWORD *)a1 + 2) - v14);
}
// BD488: variable 'v13' is possibly undefined
// 157B00: using guessed type __int128 xmmword_157B00;
