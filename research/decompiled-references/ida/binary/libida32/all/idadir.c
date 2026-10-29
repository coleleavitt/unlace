char *__fastcall idadir(_BYTE *a1)
{
  int v1; // r9d
  char *v2; // r12
  __int64 *v4; // rbx
  size_t v5; // rax
  size_t v6; // rbp
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rax
  char v10; // [rsp+0h] [rbp-1088h]
  __int64 v11; // [rsp+8h] [rbp-1080h] BYREF
  void *ptr; // [rsp+10h] [rbp-1078h]
  __int128 v13; // [rsp+18h] [rbp-1070h]
  Dl_info info; // [rsp+30h] [rbp-1058h] BYREF
  char s[4104]; // [rsp+50h] [rbp-1038h] BYREF
  unsigned __int64 v16; // [rsp+1058h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  sub_81F950(&v11);
  if ( buf )
    goto LABEL_8;
  ptr = nullptr;
  v13 = 0;
  if ( !unk_2C57908 )
    goto LABEL_3;
  if ( !(unsigned __int8)qgetenv("IDADIR") )
  {
    if ( unk_2C57908 )
    {
      memset(&info, 0, sizeof(info));
      if ( dladdr(idadir, &info) )
      {
        qstrncpy(&buf, info.dli_fname, 4096);
LABEL_4:
        if ( !(unsigned __int8)qisdir(&buf) )
          qdirname(&buf);
        goto LABEL_6;
      }
    }
LABEL_3:
    sub_810CE0(&buf, 0x1000u);
    goto LABEL_4;
  }
  qstrncpy(&buf, ptr, 4096);
LABEL_6:
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
LABEL_8:
  v2 = &buf;
  if ( a1 && *a1 )
  {
    qmakepath((int)s, 4096, (int)&buf, (int)a1, 0, v1, v10);
    v4 = (__int64 *)sub_80BD10();
    v5 = strlen(s);
    v6 = v5;
    if ( v5 )
    {
      v7 = (void *)*v4;
      v8 = v5 + 1;
      if ( v4[2] < v5 + 1 )
      {
        v9 = qvector_reserve(v4, *v4, v5 + 1, 1);
        *v4 = v9;
        v7 = (void *)v9;
      }
      v4[1] = v8;
      memmove(v7, s, v6);
      *(_BYTE *)(*v4 + v6) = 0;
    }
    else
    {
      v4[1] = 0;
    }
    v2 = (char *)*v4;
  }
  qmutex_unlock(v11);
  return v2;
}

