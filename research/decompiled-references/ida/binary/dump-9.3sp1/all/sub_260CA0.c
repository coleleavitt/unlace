unsigned __int64 __fastcall sub_260CA0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char *v6; // rax
  char *v7; // r12
  char v8; // dl
  __int64 v9; // rax
  char *v10; // rdx
  int v11; // eax
  char *v12; // rdi
  char *v14; // rcx
  char v15; // [rsp+Fh] [rbp-61h]
  __int64 v16; // [rsp+10h] [rbp-60h]
  char *haystack; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  sub_2604A0((__int64)&haystack, a1, a2, 0);
  if ( *(_QWORD *)(a2 + 64) <= 1u )
  {
    v14 = (char *)s1;
    if ( v18 )
      v14 = haystack;
    (**(void (***)(__int64, _QWORD, const char *, ...))a4)(a4, a3, "%s\n", v14);
    v11 = *(_DWORD *)(a4 + 32) + 1;
  }
  else
  {
    v6 = strstr(haystack, "//");
    v7 = v6;
    if ( !v6 )
    {
      if ( !under_debugger )
        sub_383060(50118);
      BUG();
    }
    v8 = *v6;
    *v6 = 0;
    v15 = v8;
    v16 = tag_strlen();
    *v7 = v15;
    v9 = (unsigned int)tag_strlen() + 1;
    v10 = (char *)s1;
    if ( *(_QWORD *)(a2 + 64) )
      v10 = *(char **)(a2 + 56);
    v11 = *(_DWORD *)(a4 + 32)
        + sub_25F9E0(
            0,
            0,
            a3,
            (void (__fastcall ***)(_QWORD, _QWORD, void *, __int64))a4,
            (__int64 *)&haystack,
            v16,
            v9,
            v10);
  }
  v12 = haystack;
  *(_DWORD *)(a4 + 32) = v11;
  if ( v12 )
  {
    v18 = 0;
    qfree((__int64)v12);
  }
  return v19 - __readfsqword(0x28u);
}
