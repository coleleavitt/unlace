/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100034A30
// Address: 0x0000000100034A30

//----- (0000000100034A30) ----------------------------------------------------
__int64 sub_100034A30()
{
  pthread_mutex_t *v0; // rax
  _QWORD *v1; // r14
  void *lexer; // rax
  __int64 *v3; // rax
  char *v4; // rax
  char v5; // bl
  const char *v6; // rsi
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  _OWORD *v11; // rax
  __int128 v12; // [rsp+0h] [rbp-440h] BYREF
  __int64 v13; // [rsp+10h] [rbp-430h]
  char v14[1032]; // [rsp+20h] [rbp-420h] BYREF

  qatexit((__int64)sub_100034E30);
  qword_1000AD0F0 = (__int64)qmutex_create();
  v0 = qmutex_create();
  qword_1000AD0E8 = (__int64)v0;
  if ( qword_1000AD0F0 && v0 )
  {
    if ( (_BYTE)byte_1000AE2E8 )
      goto LABEL_4;
  }
  else
  {
    if ( under_debugger == 1 )
      goto LABEL_34;
    interr(0x1E6u);
  }
  if ( __cxa_guard_acquire(&byte_1000AE2E8) )
  {
    v8 = operator new(0x80u);
    *(_OWORD *)((char *)v8 + 109) = 0;
    v8[6] = 0;
    v8[5] = 0;
    v8[4] = 0;
    v8[3] = 0;
    v8[2] = 0;
    v8[1] = 0;
    *v8 = 0;
    qword_1000AE2E0 = (__int64)v8;
    __cxa_guard_release(&byte_1000AE2E8);
  }
LABEL_4:
  v1 = (_QWORD *)qword_1000AE2E0;
  lexer = create_lexer(nullptr, 0, 0, 0);
  v1[4] = lexer;
  sub_10004C5A0((__int64)lexer, (__int64)sub_1000260A0);
  v1[6] = qword_1000AC0E0;
  v1[5] = off_1000AC0E8;
  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
  {
    v9 = operator new(0x80u);
    *(_OWORD *)((char *)v9 + 109) = 0;
    v9[6] = 0;
    v9[5] = 0;
    v9[4] = 0;
    v9[3] = 0;
    v9[2] = 0;
    v9[1] = 0;
    *v9 = 0;
    qword_1000AE2E0 = (__int64)v9;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  sub_1000342A0((_QWORD *)qword_1000AE2E0, "object", 0);
  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
  {
    v10 = operator new(0x80u);
    *(_OWORD *)((char *)v10 + 109) = 0;
    v10[6] = 0;
    v10[5] = 0;
    v10[4] = 0;
    v10[3] = 0;
    v10[2] = 0;
    v10[1] = 0;
    *v10 = 0;
    qword_1000AE2E0 = (__int64)v10;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  sub_1000342A0((_QWORD *)qword_1000AE2E0, "typeinfo", 0);
  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
  {
    v11 = operator new(0x80u);
    *(_OWORD *)((char *)v11 + 109) = 0;
    v11[6] = 0;
    v11[5] = 0;
    v11[4] = 0;
    v11[3] = 0;
    v11[2] = 0;
    v11[1] = 0;
    *v11 = 0;
    qword_1000AE2E0 = (__int64)v11;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  sub_1000342A0((_QWORD *)qword_1000AE2E0, "exception", 0);
  if ( qword_1000AC100[0] )
    ((void (*)(void))qword_1000AC100[0])();
  if ( (_BYTE)qword_1000AE220 != 1 )
    goto LABEL_37;
  v3 = (__int64 *)off_1000AC140();
  v4 = sub_10004B830(v3, v14, 1024, (__int64)"idc.idc", nullptr, 0);
  if ( !v4 )
    goto LABEL_37;
  v12 = 0;
  v13 = 0;
  v5 = compile_idc_file(v4, (__int64)&v12, 0);
  if ( v5 )
  {
    v1[3] = sub_100046260(v1[4], (__int64)&v12);
  }
  else
  {
    v6 = *((_QWORD *)&v12 + 1) ? (const char *)v12 : _s1;
    sub_100010070((int)"%s", v6);
  }
  if ( (_QWORD)v12 )
  {
    *((_QWORD *)&v12 + 1) = 0;
    qfree((void *)v12);
  }
  if ( v5 )
  {
LABEL_37:
    if ( (unsigned int)install_extlang((__int64)qword_1000AC148) )
    {
      if ( under_debugger != 1 )
        interr(0x5A7u);
LABEL_34:
      BUG();
    }
  }
  return __stack_chk_guard;
}
// 1000AC0E0: using guessed type __int64 qword_1000AC0E0;
// 1000AC0E8: using guessed type char **off_1000AC0E8;
// 1000AC100: using guessed type __int64 qword_1000AC100[4];
// 1000AC140: using guessed type __int128 *(*off_1000AC140)();
// 1000AC148: using guessed type __int64 qword_1000AC148[2];
// 1000AD0E8: using guessed type __int64 qword_1000AD0E8;
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE220: using guessed type __int64 qword_1000AE220;
// 1000AE23D: using guessed type char under_debugger;
// 1000AE2E0: using guessed type __int64 qword_1000AE2E0;
