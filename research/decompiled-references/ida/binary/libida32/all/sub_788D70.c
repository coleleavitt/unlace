__int64 __fastcall sub_788D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  const char *v7; // rbx
  const char *v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  unsigned int *v15; // rax
  size_t v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 48) )
  {
    v7 = *(const char **)(a1 + 40);
    if ( *v7 == 117 )
    {
      v8 = "u%X%n";
      if ( (unsigned int)qsscanf(*(_QWORD *)(a1 + 40), (int)"u%X%n", (int)&v20, (int)&v19, a5, a6, v19) != 1
        || (v16 = strlen(v7), v19 != v16)
        || v20 > 0x10FFFF )
      {
        v9 = 2003;
        return set_qerrno(v9, v8);
      }
      v17 = sub_788C70(a1);
      v8 = (const char *)v20;
      v9 = (unsigned int)sub_788700(v17, v20);
      goto LABEL_27;
    }
    v8 = "Block_";
    if ( !strncmp(*(const char **)(a1 + 40), "Block_", 6u) )
    {
      v9 = 2008;
      v10 = sub_893150((char *)v7 + 6);
      if ( !v10 )
        return set_qerrno(v9, v8);
      v15 = (unsigned int *)sub_788C70(a1);
      if ( !*((_BYTE *)v15 + 265) )
      {
        v8 = (const char *)*v15;
        if ( !(_DWORD)v8 )
        {
          *v15 = 4;
          v15[1] = v10;
          return 0;
        }
        v9 = (unsigned int)set_qerrno(2007, v8);
        goto LABEL_27;
      }
LABEL_29:
      v9 = (unsigned int)set_qerrno(2012, v8);
      goto LABEL_27;
    }
  }
  else
  {
    v7 = haystack;
  }
  v8 = "Category_";
  if ( !strncmp(v7, "Category_", 9u) )
  {
    v9 = 2009;
    v13 = sub_8931A0((char *)v7 + 9);
    if ( !v13 )
      return set_qerrno(v9, v8);
    v14 = sub_788C70(a1);
    if ( *(_BYTE *)(v14 + 265) )
      v14 += 132;
    if ( !*(_DWORD *)v14 )
    {
      *(_DWORD *)v14 = 3;
      *(_DWORD *)(v14 + 4) = v13;
      return 0;
    }
    v9 = (unsigned int)set_qerrno(2006, "Category_");
    goto LABEL_27;
  }
  if ( !strncmp(v7, "Culture_", 8u) )
  {
    v18 = sub_788C70(a1);
    v8 = v7 + 8;
    v9 = (unsigned int)sub_788770(v18, v7 + 8);
    goto LABEL_27;
  }
  v8 = "CURRENT_CULTURE";
  v9 = 2013;
  if ( strcmp(v7, "CURRENT_CULTURE") )
    return set_qerrno(v9, v8);
  v12 = sub_788C70(a1);
  if ( *(_BYTE *)(v12 + 265) )
    goto LABEL_29;
  if ( !*(_DWORD *)v12 )
  {
    *(_DWORD *)v12 = 6;
    return 0;
  }
  v9 = (unsigned int)set_qerrno(2015, "CURRENT_CULTURE");
LABEL_27:
  if ( (_DWORD)v9 )
    return set_qerrno(v9, v8);
  return 0;
}

