/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: start
// Address: 0x0000000100064D20

//----- (0000000100064D20) ----------------------------------------------------
__int64 __fastcall start(int a1, const char **a2)
{
  char *v2; // r15
  const void *v4; // r12
  void *v5; // rax
  void *__src[2]; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+10h] [rbp-A0h]
  __int128 v8; // [rsp+20h] [rbp-90h] BYREF
  __int128 v9; // [rsp+30h] [rbp-80h]
  __int128 v10; // [rsp+40h] [rbp-70h]
  __int128 v11; // [rsp+50h] [rbp-60h]
  __int64 v12; // [rsp+60h] [rbp-50h]
  __int64 (*v13)(char *, ...); // [rsp+68h] [rbp-48h]
  char v14; // [rsp+70h] [rbp-40h]

  sub_100034A30();
  qword_1000AE3E0 = (__int64)qmutex_create();
  if ( qword_1000AE3E0 && sub_1000236B0() )
  {
    *(_OWORD *)__src = 0;
    v7 = 0;
    if ( (unsigned __int8)qgetenv("IDA_DBGSRV_PASSWD", (__int64)__src) )
    {
      v2 = nullptr;
      if ( __src[1] )
        v2 = (char *)__src[1] - 1;
      if ( __src[1] > (void *)1 )
      {
        v4 = __src[0];
        v5 = _dst;
        if ( qword_1000AD198 <= (unsigned __int64)v2 )
        {
          v5 = qvector_reserve((__int64)&_dst, _dst, (unsigned __int64)(v2 + 1), 1u);
          _dst = v5;
        }
        *(&_dst + 1) = v2 + 1;
        memmove(v5, v4, (size_t)v2);
        v2[(_QWORD)_dst] = 0;
      }
      else
      {
        *(&_dst + 1) = nullptr;
      }
    }
    sub_10006D810("IDA Mac OS X 64-bit remote debug server(MT) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    byte_1000AD1A0 = qword_1000AD110;
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v12 = 0;
    v13 = sub_10006D810;
    v14 = 1;
    sub_100069C30((__int64)&qword_1000AD118, (__int64)&v8, 1);
    cliopts_t_add((__int64)&v8, (__int128 *)&qword_1000A9D80, 1);
    if ( byte_1000AD1A0 == 1 )
      cliopts_t_add((__int64)&v8, (__int128 *)&qword_1000A9DB0, 2);
    cliopts_t_apply((__int64)&v8, a1, a2, (__int64)&qword_1000AD118);
    sub_100069E70((__int64)&qword_1000AD118);
    sub_100069EC0((__int64)&qword_1000AD118);
    if ( (_QWORD)v11 )
    {
      *((_QWORD *)&v11 + 1) = 0;
      qfree((void *)v11);
      *(_QWORD *)&v11 = 0;
      v12 = 0;
    }
    if ( *((_QWORD *)&v9 + 1) )
    {
      *(_QWORD *)&v10 = 0;
      qfree(*((void **)&v9 + 1));
      *((_QWORD *)&v9 + 1) = 0;
      *((_QWORD *)&v10 + 1) = 0;
    }
    if ( (_QWORD)v8 )
    {
      *((_QWORD *)&v8 + 1) = 0;
      qfree((void *)v8);
    }
    if ( __src[0] )
    {
      __src[1] = nullptr;
      qfree(__src[0]);
    }
    return 0;
  }
  else
  {
    sub_10006D810("Could not initialize subsystem!");
    return 0xFFFFFFFFLL;
  }
}
// 1000A9D80: using guessed type __int64 qword_1000A9D80;
// 1000A9DB0: using guessed type __int64 qword_1000A9DB0;
// 1000AD110: using guessed type __int64 qword_1000AD110;
// 1000AD118: using guessed type __int64 qword_1000AD118;
// 1000AD198: using guessed type __int64 qword_1000AD198;
// 1000AD1A0: using guessed type char byte_1000AD1A0;
// 1000AE3E0: using guessed type __int64 qword_1000AE3E0;
