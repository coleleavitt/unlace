/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idadir
// Address: 0x00000000000BCE70

//----- (00000000000BCE70) ----------------------------------------------------
char *__fastcall idadir(_BYTE *a1)
{
  ssize_t v1; // rax
  char *v2; // rbx
  char **v3; // rbx
  __int64 v4; // rax
  size_t v5; // r14
  __int64 v6; // r15
  char *v7; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-1048h] BYREF
  __int64 v10; // [rsp+10h] [rbp-1038h]
  pthread_mutex_t *v11; // [rsp+18h] [rbp-1030h] BYREF
  Dl_info info; // [rsp+20h] [rbp-1028h] BYREF
  unsigned __int64 v13; // [rsp+1028h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  sub_C5BE0(&v11);
  if ( buf )
    goto LABEL_15;
  *(_OWORD *)ptr = 0;
  v10 = 0;
  if ( !(_BYTE)qword_156AA8 )
    goto LABEL_8;
  if ( !(unsigned __int8)qgetenv("IDADIR", (__int64)ptr) )
  {
    if ( (_BYTE)qword_156AA8 )
    {
      memset(&info, 0, sizeof(info));
      if ( dladdr(idadir, &info) )
      {
        qstrncpy(&buf, (__int64)info.dli_fname, 4096);
LABEL_11:
        if ( !qisdir(&buf) )
          qdirname(&buf, 0x1000u, &buf);
        goto LABEL_13;
      }
    }
LABEL_8:
    v1 = readlink("/proc/self/exe", &buf, 0x1000u);
    if ( v1 <= 0 || (unsigned __int64)v1 >= 0x1000 )
    {
      if ( !(_BYTE)under_debugger )
        interr(1208);
      BUG();
    }
    *(&buf + v1) = 0;
    goto LABEL_11;
  }
  qstrncpy(&buf, (__int64)ptr[0], 4096);
LABEL_13:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v10 = 0;
  }
LABEL_15:
  v2 = &buf;
  if ( a1 && *a1 )
  {
    qmakepath((char *)&info, 4096, &buf, a1, 0);
    v3 = (char **)sub_B7230();
    v4 = __strlen_chk(&info, 4096);
    v5 = v4;
    if ( v4 )
    {
      v6 = v4 + 1;
      if ( (unsigned __int64)v3[2] >= v4 + 1 )
      {
        v7 = *v3;
      }
      else
      {
        v7 = (char *)qvector_reserve((__int64)v3, *v3, v4 + 1, 1u);
        *v3 = v7;
      }
      v3[1] = (char *)v6;
      memmove(v7, &info, v5);
      (*v3)[v5] = 0;
    }
    else
    {
      v3[1] = nullptr;
    }
    v2 = *v3;
  }
  qmutex_unlock(v11);
  return v2;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 156AA8: using guessed type __int64 qword_156AA8;
// 158B40: using guessed type __int64 under_debugger;
