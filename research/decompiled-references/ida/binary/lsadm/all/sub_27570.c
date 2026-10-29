char *__fastcall sub_27570(_BYTE *a1)
{
  int v1; // r9d
  const char *dli_fname; // rsi
  char *v3; // r12
  char **v5; // rbx
  size_t v6; // rax
  size_t v7; // rbp
  void *v8; // rdi
  size_t v9; // r13
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-1080h] BYREF
  void *ptr; // [rsp+10h] [rbp-1078h]
  __int128 v13; // [rsp+18h] [rbp-1070h]
  Dl_info info; // [rsp+30h] [rbp-1058h] BYREF
  char s[4104]; // [rsp+50h] [rbp-1038h] BYREF
  unsigned __int64 v16; // [rsp+1058h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  sub_2B500(&v11);
  if ( buf )
    goto LABEL_8;
  ptr = nullptr;
  v13 = 0;
  if ( !byte_7AA38 )
    goto LABEL_3;
  if ( !(unsigned __int8)sub_2B550("IDADIR") )
  {
    if ( byte_7AA38 )
    {
      memset(&info, 0, sizeof(info));
      if ( dladdr(sub_27570, &info) )
      {
        dli_fname = info.dli_fname;
        sub_2ACE0(&buf, info.dli_fname, 4096);
LABEL_4:
        if ( !(unsigned __int8)sub_29A10(&buf, dli_fname) )
          sub_29370(&buf);
        goto LABEL_6;
      }
    }
LABEL_3:
    dli_fname = (_BYTE *)(qword_388 + 3192);
    sub_27520(&buf, 0x1000u);
    goto LABEL_4;
  }
  sub_2ACE0(&buf, ptr, 4096);
LABEL_6:
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    j__free(ptr);
  }
LABEL_8:
  v3 = &buf;
  if ( a1 && *a1 )
  {
    sub_292C0((unsigned int)s, 4096, (unsigned int)&buf, (_DWORD)a1, 0, v1);
    v5 = (char **)sub_27060();
    v6 = strlen(s);
    v7 = v6;
    if ( v6 )
    {
      v8 = *v5;
      v9 = v6 + 1;
      if ( (unsigned __int64)v5[2] < v6 + 1 )
      {
        v10 = sub_29E60(v5, *v5, v6 + 1, 1);
        *v5 = (char *)v10;
        v8 = (void *)v10;
      }
      v5[1] = (char *)v9;
      memmove(v8, s, v7);
      (*v5)[v7] = 0;
    }
    else
    {
      v5[1] = nullptr;
    }
    v3 = *v5;
  }
  sub_2B520(v11);
  return v3;
}

