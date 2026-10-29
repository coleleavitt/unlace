/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E160
// Address: 0x000000000047E160

//----- (000000000047E160) ----------------------------------------------------
char *__fastcall sub_47E160(_BYTE *a1)
{
  char *v1; // r12
  unsigned __int64 v3; // rbx
  size_t v4; // rax
  size_t v5; // rbp
  void *v6; // rdi
  size_t v7; // r13
  void *v8; // rax
  pthread_mutex_t *v9; // [rsp+8h] [rbp-1080h] BYREF
  void *ptr; // [rsp+10h] [rbp-1078h] BYREF
  __int128 v11; // [rsp+18h] [rbp-1070h]
  Dl_info info; // [rsp+30h] [rbp-1058h] BYREF
  char s[4104]; // [rsp+50h] [rbp-1038h] BYREF
  unsigned __int64 v14; // [rsp+1058h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  sub_482EF0(&v9);
  if ( buf )
    goto LABEL_8;
  ptr = nullptr;
  v11 = 0;
  if ( !LOBYTE(qword_4C8430[0]) )
    goto LABEL_3;
  if ( !(unsigned __int8)sub_4837D0("IDADIR", (__int64)&ptr) )
  {
    if ( LOBYTE(qword_4C8430[0]) )
    {
      memset(&info, 0, sizeof(info));
      if ( dladdr(sub_47E160, &info) )
      {
        sub_4821A0(&buf, (char *)info.dli_fname, 4096);
LABEL_4:
        if ( !sub_480B50(&buf) )
          sub_480530(&buf, 0x1000u, &buf);
        goto LABEL_6;
      }
    }
LABEL_3:
    sub_47E110(&buf, 0x1000u);
    goto LABEL_4;
  }
  sub_4821A0(&buf, (char *)ptr, 4096);
LABEL_6:
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    j__free(ptr);
  }
LABEL_8:
  v1 = &buf;
  if ( a1 && *a1 )
  {
    sub_480480(s, 4096, (unsigned __int8 *)&buf, a1, 0);
    v3 = sub_47A160();
    v4 = strlen(s);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(void **)v3;
      v7 = v4 + 1;
      if ( *(_QWORD *)(v3 + 16) < v4 + 1 )
      {
        v8 = sub_481540(v3, *(void **)v3, v4 + 1, 1u);
        *(_QWORD *)v3 = v8;
        v6 = v8;
      }
      *(_QWORD *)(v3 + 8) = v7;
      memmove(v6, s, v5);
      *(_BYTE *)(*(_QWORD *)v3 + v5) = 0;
    }
    else
    {
      *(_QWORD *)(v3 + 8) = 0;
    }
    v1 = *(char **)v3;
  }
  sub_482F10(v9);
  return v1;
}
// 4C8430: using guessed type __int64 qword_4C8430[2];
