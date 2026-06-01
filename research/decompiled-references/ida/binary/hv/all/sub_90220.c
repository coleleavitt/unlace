char *__fastcall sub_90220(_BYTE *a1)
{
  int v1; // r9d
  char *v2; // r12
  char **v4; // rbx
  size_t v5; // rax
  size_t v6; // rbp
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-1080h] BYREF
  void *ptr; // [rsp+10h] [rbp-1078h]
  __int128 v12; // [rsp+18h] [rbp-1070h]
  Dl_info info; // [rsp+30h] [rbp-1058h] BYREF
  char s[4104]; // [rsp+50h] [rbp-1038h] BYREF
  unsigned __int64 v15; // [rsp+1058h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_98430(&v10);
  if ( buf )
    goto LABEL_8;
  ptr = nullptr;
  v12 = 0;
  if ( !(_BYTE)qword_1659C0 )
    goto LABEL_3;
  if ( !(unsigned __int8)sub_98D10("IDADIR") )
  {
    if ( (_BYTE)qword_1659C0 )
    {
      memset(&info, 0, sizeof(info));
      if ( dladdr(sub_90220, &info) )
      {
        sub_976E0(&buf, info.dli_fname, 4096);
LABEL_4:
        if ( !(unsigned __int8)sub_95600(&buf) )
          sub_94D70(&buf);
        goto LABEL_6;
      }
    }
LABEL_3:
    sub_901D0(&buf, 0x1000u);
    goto LABEL_4;
  }
  sub_976E0(&buf, ptr, 4096);
LABEL_6:
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    j__free(ptr);
  }
LABEL_8:
  v2 = &buf;
  if ( a1 && *a1 )
  {
    sub_94CC0((unsigned int)s, 4096, (unsigned int)&buf, (_DWORD)a1, 0, v1);
    v4 = (char **)sub_8FA80();
    v5 = strlen(s);
    v6 = v5;
    if ( v5 )
    {
      v7 = *v4;
      v8 = v5 + 1;
      if ( (unsigned __int64)v4[2] < v5 + 1 )
      {
        v9 = sub_96080(v4, *v4, v5 + 1, 1);
        *v4 = (char *)v9;
        v7 = (void *)v9;
      }
      v4[1] = (char *)v8;
      memmove(v7, s, v6);
      (*v4)[v6] = 0;
    }
    else
    {
      v4[1] = nullptr;
    }
    v2 = *v4;
  }
  sub_98450(v10);
  return v2;
}

