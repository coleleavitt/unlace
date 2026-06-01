__int64 __fastcall sub_7A9110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  const char *v7; // rbx
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  size_t v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v7 = haystack;
    goto LABEL_8;
  }
  v7 = *(const char **)(a1 + 40);
  if ( *v7 == 117 )
  {
    if ( (unsigned int)qsscanf(
                         *(_QWORD *)(a1 + 40),
                         (unsigned int)"u%X%n",
                         (unsigned int)&v19,
                         (unsigned int)&v18,
                         a5,
                         a6) != 1 )
      return set_qerrno(2003);
    v15 = strlen(v7);
    if ( v18 != v15 || v19 > 0x10FFFF )
      return set_qerrno(2003);
    v16 = sub_7A9010(a1);
    v8 = (unsigned int)sub_7A8A30(v16, v19);
    goto LABEL_28;
  }
  if ( strncmp(*(const char **)(a1 + 40), "Block_", 6u) )
  {
LABEL_8:
    if ( !strncmp(v7, "Category_", 9u) )
    {
      v8 = 2009;
      v12 = sub_8B6B20((char *)v7 + 9);
      if ( !v12 )
        return set_qerrno(v8);
      v13 = sub_7A9010(a1);
      if ( *(_BYTE *)(v13 + 265) )
        v13 += 132;
      if ( !*(_DWORD *)v13 )
      {
        *(_DWORD *)v13 = 3;
        *(_DWORD *)(v13 + 4) = v12;
        return 0;
      }
      v8 = (unsigned int)set_qerrno(2006);
      goto LABEL_28;
    }
    if ( !strncmp(v7, "Culture_", 8u) )
    {
      v17 = sub_7A9010(a1);
      v8 = (unsigned int)sub_7A8AA0(v17, v7 + 8);
      goto LABEL_28;
    }
    v8 = 2013;
    if ( strcmp(v7, "CURRENT_CULTURE") )
      return set_qerrno(v8);
    v11 = sub_7A9010(a1);
    if ( *(_BYTE *)(v11 + 265) )
      goto LABEL_30;
    if ( !*(_DWORD *)v11 )
    {
      *(_DWORD *)v11 = 6;
      return 0;
    }
    v8 = (unsigned int)set_qerrno(2015);
LABEL_28:
    if ( (_DWORD)v8 )
      return set_qerrno(v8);
    return 0;
  }
  v8 = 2008;
  v9 = sub_8B6AD0((char *)v7 + 6);
  if ( v9 )
  {
    v14 = sub_7A9010(a1);
    if ( !*(_BYTE *)(v14 + 265) )
    {
      if ( !*(_DWORD *)v14 )
      {
        *(_DWORD *)v14 = 4;
        *(_DWORD *)(v14 + 4) = v9;
        return 0;
      }
      v8 = (unsigned int)set_qerrno(2007);
      goto LABEL_28;
    }
LABEL_30:
    v8 = (unsigned int)set_qerrno(2012);
    goto LABEL_28;
  }
  return set_qerrno(v8);
}
