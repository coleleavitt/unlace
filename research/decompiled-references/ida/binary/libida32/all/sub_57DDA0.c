void __fastcall __noreturn sub_57DDA0(_QWORD *a1, const char *a2, double a3, double a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 free_disk_space; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  bool v11; // zf
  char *s; // [rsp+40h] [rbp-2170h]
  char v13[4096]; // [rsp+170h] [rbp-2040h] BYREF
  unsigned __int64 v14; // [rsp+2178h] [rbp-38h]

  s = (char *)a2;
  v14 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( !strlen(a2) )
      sub_375400();
  }
  else
  {
    if ( !*(_QWORD *)(*a1 + 32LL) )
    {
      s = (char *)haystack;
      if ( !a1[2] )
      {
LABEL_11:
        if ( a1[5] > 1u )
        {
          v10 = a1[7];
          if ( !v10 || (qfclose(v10), v11 = a1[5] == 0, a1[7] = 0, s = (char *)haystack, !v11) )
            s = (char *)a1[4];
        }
LABEL_5:
        sub_57A620(v13, 4096, s, "$$$");
        v5 = sub_57A430((__int64)a1) + 1024;
        free_disk_space = get_free_disk_space(v13, a3, a4);
        if ( free_disk_space >= v5 )
          sub_395C70((int)&unk_231D5B0, s, v7, v8, v9, free_disk_space);
        sub_57DAD0(
          (__int64)"%s enough disk space to %s (file %s)\n(wanted: %llu, available: %llu)",
          "Not",
          "pack database",
          v13,
          v5,
          free_disk_space);
      }
LABEL_15:
      if ( strcmp((const char *)a1[1], s) )
        goto LABEL_5;
      goto LABEL_11;
    }
    s = *(char **)(*a1 + 24LL);
  }
  if ( !a1[2] )
  {
    if ( strcmp(haystack, s) )
      goto LABEL_5;
    goto LABEL_11;
  }
  goto LABEL_15;
}

