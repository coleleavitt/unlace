void __fastcall __noreturn sub_5976A0(_QWORD *a1, const char *a2, double a3, double a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 free_disk_space; // rax
  __int64 v7; // rdi
  bool v8; // zf
  char *s; // [rsp+40h] [rbp-2170h]
  char v10[4096]; // [rsp+170h] [rbp-2040h] BYREF
  unsigned __int64 v11; // [rsp+2178h] [rbp-38h]

  s = (char *)a2;
  v11 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( !strlen(a2) )
      sub_378D50();
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
          v7 = a1[7];
          if ( !v7 || (qfclose(v7), v8 = a1[5] == 0, a1[7] = 0, s = (char *)haystack, !v8) )
            s = (char *)a1[4];
        }
LABEL_5:
        sub_593F40(v10, 4096, s, "$$$");
        v5 = sub_593D60((__int64)a1) + 1024;
        free_disk_space = get_free_disk_space(v10, a3, a4);
        if ( free_disk_space >= v5 )
          sub_387AC0();
        sub_5973D0(
          (__int64)"%s enough disk space to %s (file %s)\n(wanted: %llu, available: %llu)",
          "Not",
          "pack database",
          v10,
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
