__int64 __fastcall sub_622890(_QWORD *a1, const char *a2, const char *a3)
{
  unsigned __int64 v4; // rdi
  void *v6; // rax
  void *v7; // r13
  void *v8; // rax

  v4 = (unsigned __int64)(a1 + 1);
  *(_QWORD *)(v4 - 8) = 0;
  *(_QWORD *)(v4 + 72) = 0;
  memset((void *)(v4 & 0xFFFFFFFFFFFFFFF8LL), 0, 8 * (((unsigned int)a1 - (v4 & 0xFFFFFFF8) + 88) >> 3));
  v6 = dlopen(a2, 2);
  if ( !v6 )
  {
    dlerror();
    sub_365330();
  }
  v7 = v6;
  if ( a3 )
  {
    v8 = dlsym(v6, a3);
    a1[10] = v8;
    if ( !v8 )
    {
      dlerror();
      sub_365330();
    }
    *a1 = v7;
    return 0;
  }
  else
  {
    dlclose(v6);
    return 2;
  }
}

