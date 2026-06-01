/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100079880
// Address: 0x0000000100079880

//----- (0000000100079880) ----------------------------------------------------
__int64 sub_100079880()
{
  size_t v0; // rbx
  void *v1; // r14
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int128 v4; // rax
  __int64 v5; // rcx
  size_t __n[2]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v8; // [rsp+10h] [rbp-40h]
  pthread_mutex_t *v9; // [rsp+18h] [rbp-38h] BYREF
  __int128 v10; // [rsp+20h] [rbp-30h]
  size_t v11; // [rsp+30h] [rbp-20h]

  sub_10007DDD0(&v9);
  if ( !*((_QWORD *)&xmmword_1000AE8C0 + 1) )
  {
    *(_OWORD *)__n = 0;
    v8 = 0;
    if ( (unsigned __int8)qgetenv("IDAUSR", (__int64)__n) )
      sub_100079C10((void **)&xmmword_1000AE8C0, (char *)__n[0]);
    if ( !*((_QWORD *)&xmmword_1000AE8C0 + 1) )
    {
      if ( (unsigned __int8)sub_100079680((__int64)__n) )
      {
        v10 = 0;
        v11 = 0;
        v0 = __n[1];
        if ( __n[1] )
        {
          v1 = qalloc_or_throw(__n[1]);
          *(_QWORD *)&v10 = v1;
          v11 = v0;
          memcpy(v1, (const void *)__n[0], v0);
          *((_QWORD *)&v10 + 1) = v0;
        }
        else
        {
          v1 = nullptr;
        }
        v3 = *((_QWORD *)&xmmword_1000AE8C0 + 1);
        v4 = xmmword_1000AE8C0 + __PAIR128__(1, 0);
        if ( qword_1000AE8D0 < (unsigned __int64)(*((_QWORD *)&xmmword_1000AE8C0 + 1) + 1LL) )
        {
          *(_QWORD *)&v4 = qvector_reserve(
                             (__int64)&xmmword_1000AE8C0,
                             (void *)xmmword_1000AE8C0,
                             *((unsigned __int64 *)&v4 + 1),
                             0x18u);
          *(_QWORD *)&xmmword_1000AE8C0 = v4;
          v3 = *((_QWORD *)&xmmword_1000AE8C0 + 1);
        }
        v5 = 3 * v3;
        *(_QWORD *)(v4 + 8 * v5) = v1;
        *(_QWORD *)(v4 + 8 * v5 + 8) = v0;
        *(_QWORD *)(v4 + 8 * v5 + 16) = v0;
        v2 = ++*((_QWORD *)&xmmword_1000AE8C0 + 1);
      }
      else
      {
        v2 = *((_QWORD *)&xmmword_1000AE8C0 + 1);
      }
      if ( !v2 )
      {
        sub_100033990(
          "IDA could not find a valid user directory.\n"
          "Please make sure that the HOME or IDAUSR environment variables are set.\n");
        BUG();
      }
    }
    if ( __n[0] )
    {
      __n[1] = 0;
      qfree((void *)__n[0]);
    }
  }
  qmutex_unlock(v9);
  return __stack_chk_guard;
}
// 1000AE8C0: using guessed type __int128 xmmword_1000AE8C0;
// 1000AE8D0: using guessed type __int64 qword_1000AE8D0;
