/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: start
// Address: 0x0000000100059ACC

//----- (0000000100059ACC) ----------------------------------------------------
__int64 __fastcall start(int a1, const char **a2)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  size_t v18; // x21
  void *v20; // x22
  void *v21; // x1
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  char v26; // [xsp+0h] [xbp-C0h]
  void *__src; // [xsp+18h] [xbp-A8h] BYREF
  unsigned __int64 v28; // [xsp+20h] [xbp-A0h]
  __int64 v29; // [xsp+28h] [xbp-98h]
  void *v30[2]; // [xsp+30h] [xbp-90h] BYREF
  __int128 v31; // [xsp+40h] [xbp-80h]
  __int128 v32; // [xsp+50h] [xbp-70h]
  __int128 v33; // [xsp+60h] [xbp-60h]
  __int64 v34; // [xsp+70h] [xbp-50h]
  __int64 (__fastcall *v35)(char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, char); // [xsp+78h] [xbp-48h]
  char v36; // [xsp+80h] [xbp-40h]

  sub_10002E800();
  qword_10009DAA8 = (__int64)qmutex_create();
  if ( qword_10009DAA8 && (sub_10001E484() & 1) != 0 )
  {
    __src = nullptr;
    v28 = 0;
    v29 = 0;
    if ( (unsigned int)qgetenv("IDA_DBGSRV_PASSWD", &__src) )
    {
      if ( v28 )
        v18 = v28 - 1;
      else
        v18 = 0;
      if ( v28 >= 2 )
      {
        v20 = __src;
        v21 = (void *)qword_10009D858;
        if ( qword_10009D868 <= v18 )
        {
          v21 = qvector_reserve(&qword_10009D858, (_QWORD *)qword_10009D858, v18 + 1, 1u);
          qword_10009D858 = (__int64)v21;
        }
        qword_10009D860 = v18 + 1;
        memmove(v21, v20, v18);
        *(_BYTE *)(qword_10009D858 + v18) = 0;
      }
      else
      {
        qword_10009D860 = 0;
      }
    }
    sub_100060EB4(
      "IDA Mac OS X 64-bit remote debug server(MT) v%d.%d.%d. Hex-Rays (c) 2004-2026\n",
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      9);
    byte_10009D870 = byte_10009D7E0;
    v32 = 0u;
    v33 = 0u;
    *(_OWORD *)v30 = 0u;
    v31 = 0u;
    v34 = 0;
    v35 = sub_100060EB4;
    v36 = 1;
    sub_10005D620((__int64)&qword_10009D7E8, v30, 1);
    cliopts_t_add(v30, (__int128 *)&qword_10009B4B8, 1);
    if ( byte_10009D870 == 1 )
      cliopts_t_add(v30, (__int128 *)&qword_10009B4E0, 2);
    cliopts_t_apply((__int64 *)v30, a1, a2, (__int64)&qword_10009D7E8, v22, v23, v24, v25);
    sub_10005D844((__int64)&qword_10009D7E8);
    sub_10005D890((__int64)&qword_10009D7E8);
    if ( (_QWORD)v33 )
    {
      *((_QWORD *)&v33 + 1) = 0;
      qfree((void *)v33);
      *(_QWORD *)&v33 = 0;
      v34 = 0;
    }
    if ( *((_QWORD *)&v31 + 1) )
    {
      *(_QWORD *)&v32 = 0;
      qfree(*((void **)&v31 + 1));
      *((_QWORD *)&v31 + 1) = 0;
      *((_QWORD *)&v32 + 1) = 0;
    }
    if ( v30[0] )
    {
      v30[1] = nullptr;
      qfree(v30[0]);
    }
    if ( __src )
    {
      v28 = 0;
      qfree(__src);
    }
    return 0;
  }
  else
  {
    sub_100060EB4("Could not initialize subsystem!", v4, v5, v6, v7, v8, v9, v10, v26);
    return 0xFFFFFFFFLL;
  }
}
// 100059B5C: variable 'v4' is possibly undefined
// 100059B5C: variable 'v5' is possibly undefined
// 100059B5C: variable 'v6' is possibly undefined
// 100059B5C: variable 'v7' is possibly undefined
// 100059B5C: variable 'v8' is possibly undefined
// 100059B5C: variable 'v9' is possibly undefined
// 100059B5C: variable 'v10' is possibly undefined
// 100059B5C: variable 'v26' is possibly undefined
// 100059BE0: variable 'v11' is possibly undefined
// 100059BE0: variable 'v12' is possibly undefined
// 100059BE0: variable 'v13' is possibly undefined
// 100059BE0: variable 'v14' is possibly undefined
// 100059BE0: variable 'v15' is possibly undefined
// 100059BE0: variable 'v16' is possibly undefined
// 100059BE0: variable 'v17' is possibly undefined
// 100059C74: variable 'v22' is possibly undefined
// 100059C74: variable 'v23' is possibly undefined
// 100059C74: variable 'v24' is possibly undefined
// 100059C74: variable 'v25' is possibly undefined
// 10009B4B8: using guessed type __int64 qword_10009B4B8;
// 10009B4E0: using guessed type __int64 qword_10009B4E0;
// 10009D7E0: using guessed type char byte_10009D7E0;
// 10009D7E8: using guessed type __int64 qword_10009D7E8;
// 10009D858: using guessed type __int64 qword_10009D858;
// 10009D860: using guessed type __int64 qword_10009D860;
// 10009D868: using guessed type __int64 qword_10009D868;
// 10009D870: using guessed type char byte_10009D870;
// 10009DAA8: using guessed type __int64 qword_10009DAA8;
