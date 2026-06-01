__int64 __fastcall sub_27F00(__int64 *a1, char *a2, char a3)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 *v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  const char *v10; // rdx
  char *v11; // rdi
  char *v13; // rax
  char *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-1080h]
  int v16; // [rsp+10h] [rbp-1078h]
  _BYTE v17[4104]; // [rsp+40h] [rbp-1048h] BYREF
  unsigned __int64 v18; // [rsp+1048h] [rbp-40h]

  v4 = a1[1];
  v18 = __readfsqword(0x28u);
  v6 = a3 & 1;
  v15 = 0;
  v16 = v4;
  if ( (_DWORD)v6 )
    v15 = sub_13380(v17, 4096, v6);
  if ( (a3 & 2) != 0 )
  {
    v13 = sub_27570(a2);
    sub_27250(a1, a3, (__int64)v13, v15, 0);
    v7 = sub_27CF0();
    if ( v7[1] )
      goto LABEL_5;
    if ( !a2 )
      return (unsigned int)a1[1] - v16;
  }
  else
  {
    v7 = sub_27CF0();
    if ( v7[1] )
    {
LABEL_5:
      v8 = 0;
      do
      {
        v9 = *v7 + 24 * v8;
        v10 = s1;
        if ( *(_QWORD *)(v9 + 8) )
          v10 = *(const char **)v9;
        ++v8;
        sub_27250(a1, a3, (__int64)v10, a2, v15, 0);
      }
      while ( v8 < v7[1] );
      if ( !a2 )
        goto LABEL_14;
      goto LABEL_10;
    }
    if ( !a2 )
      goto LABEL_24;
  }
LABEL_10:
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
      goto LABEL_14;
    v11 = "IDATIL";
  }
  if ( (unsigned __int8)sub_2B550(v11) )
    sub_27250(a1, a3, (__int64)s1, v15, 0);
LABEL_14:
  if ( (a3 & 2) == 0 )
  {
LABEL_24:
    v14 = sub_27570(a2);
    sub_27250(a1, a3, (__int64)v14, v15, 0);
  }
  return (unsigned int)a1[1] - v16;
}

