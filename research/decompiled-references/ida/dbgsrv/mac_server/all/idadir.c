/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idadir
// Address: 0x0000000100078EE0

//----- (0000000100078EE0) ----------------------------------------------------
char *__fastcall idadir(_BYTE *a1)
{
  char v1; // al
  char *v2; // r14
  __int64 v3; // rbx
  size_t v4; // rax
  size_t v5; // r14
  unsigned __int64 v6; // r15
  void *v7; // rax
  __int128 v9; // [rsp+0h] [rbp-440h] BYREF
  __int64 v10; // [rsp+10h] [rbp-430h]
  pthread_mutex_t *v11; // [rsp+18h] [rbp-428h] BYREF
  Dl_info __src; // [rsp+20h] [rbp-420h] BYREF

  sub_10007DDD0(&v11);
  if ( buf )
    goto LABEL_14;
  v9 = 0;
  v10 = 0;
  v1 = qword_1000AE220;
  if ( (_BYTE)qword_1000AE220 != 1 )
    goto LABEL_6;
  if ( !(unsigned __int8)qgetenv("IDADIR", (__int64)&v9) )
  {
    v1 = qword_1000AE220;
LABEL_6:
    if ( (v1 & 1) != 0 && (memset(&__src, 0, sizeof(__src)), dladdr(idadir, &__src)) )
    {
      qstrncpy(&buf, (__int64)__src.dli_fname, 1024);
    }
    else
    {
      LODWORD(__src.dli_fname) = 1024;
      _NSGetExecutablePath(&buf, (uint32_t *)&__src);
    }
    if ( !qisdir(&buf) )
      qdirname(&buf, 0x400u, &buf);
    goto LABEL_12;
  }
  qstrncpy(&buf, v9, 1024);
LABEL_12:
  if ( (_QWORD)v9 )
  {
    *((_QWORD *)&v9 + 1) = 0;
    qfree((void *)v9);
  }
LABEL_14:
  v2 = &buf;
  if ( a1 && *a1 )
  {
    qmakepath((char *)&__src, 1024, (__int64)&buf, a1, 0);
    v3 = sub_100074540();
    v4 = strlen((const char *)&__src);
    if ( v4 )
    {
      v5 = v4;
      v6 = v4 + 1;
      v7 = *(void **)v3;
      if ( *(_QWORD *)(v3 + 16) < v6 )
      {
        v7 = qvector_reserve(v3, *(void **)v3, v6, 1u);
        *(_QWORD *)v3 = v7;
      }
      *(_QWORD *)(v3 + 8) = v6;
      memmove(v7, &__src, v5);
      *(_BYTE *)(*(_QWORD *)v3 + v5) = 0;
    }
    else
    {
      *(_QWORD *)(v3 + 8) = 0;
    }
    v2 = *(char **)v3;
  }
  qmutex_unlock(v11);
  return v2;
}
// 1000AE220: using guessed type __int64 qword_1000AE220;
