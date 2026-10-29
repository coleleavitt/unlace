/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100079680
// Address: 0x0000000100079680

//----- (0000000100079680) ----------------------------------------------------
__int64 __fastcall sub_100079680(__int64 a1)
{
  size_t v1; // r14
  unsigned __int64 v2; // r15
  const char *v3; // rax
  size_t v4; // rax
  void *v5; // r15
  void *v6; // rax
  const void *v7; // r13
  void *v8; // rax
  pthread_mutex_t *v10; // [rsp+8h] [rbp-438h] BYREF
  char __s[1024]; // [rsp+10h] [rbp-430h] BYREF

  sub_10007DDD0(&v10);
  v2 = (unsigned __int64)*(&xmmword_1000AE8A8 + 1);
  if ( (unsigned __int64)*(&xmmword_1000AE8A8 + 1) <= 1 )
  {
    v3 = sub_100079520();
    qstrncpy(__s, (__int64)v3, 1024);
    if ( __s[0] )
    {
      qmakepath(__s, 1024, (__int64)__s, ".idapro", 0);
      if ( !qfileexist(__s) )
        qmkdir(__s, 0x1FFu);
      v4 = strlen(__s);
      if ( !v4 )
      {
        *(&xmmword_1000AE8A8 + 1) = nullptr;
        goto LABEL_15;
      }
      v1 = v4;
      v5 = (void *)(v4 + 1);
      v6 = xmmword_1000AE8A8;
      if ( qword_1000AE8B8 < (unsigned __int64)v5 )
      {
        v6 = qvector_reserve((__int64)&xmmword_1000AE8A8, xmmword_1000AE8A8, (unsigned __int64)v5, 1u);
        xmmword_1000AE8A8 = v6;
      }
      *(&xmmword_1000AE8A8 + 1) = v5;
      memmove(v6, __s, v1);
      *((_BYTE *)xmmword_1000AE8A8 + v1) = 0;
    }
    v2 = (unsigned __int64)*(&xmmword_1000AE8A8 + 1);
    if ( (unsigned __int64)*(&xmmword_1000AE8A8 + 1) >= 2 )
      goto LABEL_10;
LABEL_15:
    LODWORD(v1) = 0;
    goto LABEL_16;
  }
LABEL_10:
  LOBYTE(v1) = 1;
  if ( (void **)a1 != &xmmword_1000AE8A8 )
  {
    v7 = xmmword_1000AE8A8;
    v8 = *(void **)a1;
    if ( *(_QWORD *)(a1 + 16) <= v2 - 1 )
    {
      v8 = qvector_reserve(a1, *(void **)a1, v2, 1u);
      *(_QWORD *)a1 = v8;
    }
    *(_QWORD *)(a1 + 8) = v2;
    memmove(v8, v7, v2 - 1);
    *(_BYTE *)(*(_QWORD *)a1 + v2 - 1) = 0;
  }
LABEL_16:
  qmutex_unlock(v10);
  return (unsigned int)v1;
}
// 100079825: variable 'v1' is possibly undefined
// 1000AE8B8: using guessed type __int64 qword_1000AE8B8;
