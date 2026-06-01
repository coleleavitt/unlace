void __fastcall sub_591020(_QWORD *a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  bool v6; // zf
  const char *v7; // rbp
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  if ( !a1 )
    return;
  if ( a1[9] <= 1u || (qunlink(a1[8]), (v10 = (void *)a1[8]) == nullptr) )
  {
    v3 = (void *)a1[27];
    if ( !v3 )
      goto LABEL_5;
    goto LABEL_4;
  }
  a1[9] = 0;
  qfree(v10);
  v3 = (void *)a1[27];
  a1[8] = 0;
  a1[10] = 0;
  if ( v3 )
  {
LABEL_4:
    a1[28] = 0;
    qfree(v3);
  }
LABEL_5:
  v4 = (void *)a1[8];
  if ( v4 )
  {
    a1[9] = 0;
    qfree(v4);
  }
  v5 = a1[7];
  if ( !v5 )
    goto LABEL_10;
  qfclose(v5);
  v6 = a1[5] == 0;
  a1[7] = 0;
  v7 = haystack;
  if ( !v6 )
  {
    v7 = (const char *)a1[4];
    if ( !(unsigned __int8)qfileexist(v7, a2) )
      goto LABEL_10;
LABEL_20:
    if ( !qfilesize(v7) )
      qunlink(v7);
    goto LABEL_10;
  }
  if ( (unsigned __int8)qfileexist(haystack, a2) )
    goto LABEL_20;
LABEL_10:
  v8 = (void *)a1[4];
  if ( v8 )
  {
    a1[5] = 0;
    qfree(v8);
  }
  v9 = (void *)a1[1];
  if ( v9 )
  {
    a1[2] = 0;
    qfree(v9);
  }
  operator delete(a1, 0x110u);
}
