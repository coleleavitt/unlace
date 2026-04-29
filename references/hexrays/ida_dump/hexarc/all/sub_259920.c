unsigned __int64 __fastcall sub_259920(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char *v6; // r15
  char *v7; // rax
  char *v8; // r12
  char v9; // dl
  int v10; // eax
  char *v11; // rdx
  int v12; // eax
  char *v13; // rdi
  char *v15; // rcx
  char v16; // [rsp+Fh] [rbp-61h]
  int v17; // [rsp+10h] [rbp-60h]
  char *haystack; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+28h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  sub_259120((__int64 *)&haystack, a1, a2, 0);
  if ( *(_QWORD *)(a2 + 64) <= 1u )
  {
    v15 = (char *)s1;
    if ( v19 )
      v15 = haystack;
    (**(void (***)(__int64, _QWORD, const char *, ...))a4)(a4, a3, "%s\n", v15);
    v12 = *(_DWORD *)(a4 + 32) + 1;
  }
  else
  {
    v6 = haystack;
    v7 = strstr(haystack, "//");
    v8 = v7;
    if ( !v7 )
    {
      if ( !under_debugger )
        sub_37B760(50118);
      BUG();
    }
    v9 = *v7;
    *v7 = 0;
    v16 = v9;
    v17 = tag_strlen(v6);
    *v8 = v16;
    v10 = tag_strlen(v6) + 1;
    v11 = (char *)s1;
    if ( *(_QWORD *)(a2 + 64) )
      v11 = *(char **)(a2 + 56);
    v12 = *(_DWORD *)(a4 + 32)
        + sub_258660(
            0,
            0,
            a3,
            (void (__fastcall ***)(_QWORD, _QWORD, void *, __int64))a4,
            (__int64 *)&haystack,
            v17,
            v10,
            v11);
  }
  v13 = haystack;
  *(_DWORD *)(a4 + 32) = v12;
  if ( v13 )
  {
    v19 = 0;
    qfree(v13);
  }
  return v20 - __readfsqword(0x28u);
}
