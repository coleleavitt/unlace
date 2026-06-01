__int64 __fastcall sub_57EAD0(__int64 a1, const char *a2, char a3)
{
  int v4; // eax
  int v5; // ebp
  const char *v6; // rdi
  const char *file_ext; // rax
  const char *v8; // r13
  const char *v9; // rdi
  char v10; // dl
  __int64 result; // rax
  __int64 v12; // rcx
  const char *v13; // rdx
  const char *v14; // rdi
  char s[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v16; // [rsp+1018h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  sub_57A8B0((_QWORD *)a1, (__int64)a2, a3);
  if ( !(unsigned __int8)sub_5794C0(*(__m128i **)(a1 + 1352)) )
    return 2;
  if ( *(_QWORD *)(a1 + 56) )
  {
    v4 = sub_7970F0(*(_QWORD *)(a1 + 48));
    v5 = v4;
    if ( v4 != 2 )
      goto LABEL_4;
  }
  else
  {
    v4 = sub_7970F0(haystack);
    v5 = v4;
    if ( v4 != 2 )
    {
LABEL_4:
      if ( v4 == 3 )
      {
        if ( !(unsigned __int8)is_cvt64() )
        {
          v13 = haystack;
          if ( *(_QWORD *)(a1 + 56) )
            v13 = *(const char **)(a1 + 48);
          sub_577650(1, 17, (__int64)v13, v12);
        }
        sub_613030();
        if ( *(_QWORD *)(a1 + 56) )
        {
          sub_57A620(s, 4096, *(const char **)(a1 + 48), "$$$");
          qunlink(s);
          if ( v5 == 1 )
            sub_395C70((int)"HIDECANCEL\nRepairing the database");
        }
        else
        {
          sub_57A620(s, 4096, haystack, "$$$");
          qunlink(s);
        }
        sub_395C70((int)"HIDECANCEL\nUpgrading the database");
      }
      if ( v4 )
      {
        v6 = haystack;
        if ( *(_QWORD *)(a1 + 8) )
          v6 = *(const char **)a1;
        file_ext = (const char *)get_file_ext(v6);
        v8 = file_ext;
        if ( !file_ext || strcasecmp(file_ext, "idb") && (a2 = (const char *)sub_70AFD0(0), strcasecmp(v8, a2)) )
        {
          v14 = haystack;
          if ( *(_QWORD *)(a1 + 8) )
            v14 = *(const char **)a1;
          if ( (unsigned __int8)qfileexist(v14, a2) )
            sub_383E70();
        }
        sub_383E70();
      }
      return 1;
    }
  }
  if ( (unsigned int)get_qerrno() == 1 && *__errno_location() == 13 )
    sub_375400();
  v9 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v9 = *(const char **)(a1 + 48);
  v10 = qfileexist(v9, a2);
  result = 0;
  if ( v10 )
    sub_375400();
  return result;
}

