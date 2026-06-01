/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002FBFC
// Address: 0x000000010002FBFC

//----- (000000010002FBFC) ----------------------------------------------------
void sub_10002FBFC()
{
  atomic_uchar *v0; // x21
  pthread_mutex_t *v1; // x0
  bool v2; // zf
  _QWORD *v3; // x20
  void *lexer; // x0
  __int64 v5; // x8
  char *v6; // x0
  __int128 *v7; // x0
  char *v8; // x0
  int v9; // w19
  _OWORD *v10; // x0
  _OWORD *v11; // x0
  _OWORD *v12; // x0
  _OWORD *v13; // x0
  void *v14; // [xsp+10h] [xbp-450h] BYREF
  __int64 v15; // [xsp+18h] [xbp-448h]
  __int64 v16; // [xsp+20h] [xbp-440h]
  char v17[1024]; // [xsp+28h] [xbp-438h] BYREF

  qatexit((__int64)sub_10002FFA8);
  qword_1000A57C0 = (__int64)qmutex_create();
  v1 = qmutex_create();
  qword_1000A57B8 = (__int64)v1;
  if ( qword_1000A57C0 )
    v2 = v1 == nullptr;
  else
    v2 = 1;
  if ( v2 )
  {
    if ( under_debugger == 1 )
      goto LABEL_32;
    interr(486);
  }
  else
  {
    v0 = (atomic_uchar *)&qword_1000A59B0;
    if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1000A59B0, memory_order_acquire) & 1) != 0 )
      goto LABEL_6;
  }
  if ( __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v10 = operator new(0x80u);
    *(_OWORD *)((char *)v10 + 109) = 0u;
    v10[5] = 0u;
    v10[6] = 0u;
    v10[3] = 0u;
    v10[4] = 0u;
    v10[1] = 0u;
    v10[2] = 0u;
    *v10 = 0u;
    qword_1000A59A8 = (__int64)v10;
    __cxa_guard_release(&qword_1000A59B0);
  }
LABEL_6:
  v3 = (_QWORD *)qword_1000A59A8;
  lexer = create_lexer(nullptr, 0, 0, 0);
  v3[4] = lexer;
  sub_100046720((__int64)lexer, (__int64)sub_100022F50);
  v5 = qword_1000A4A00;
  v3[5] = off_1000A4A08;
  v3[6] = v5;
  if ( (atomic_load_explicit(v0, memory_order_acquire) & 1) == 0 && __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v11 = operator new(0x80u);
    *(_OWORD *)((char *)v11 + 109) = 0u;
    v11[5] = 0u;
    v11[6] = 0u;
    v11[3] = 0u;
    v11[4] = 0u;
    v11[1] = 0u;
    v11[2] = 0u;
    *v11 = 0u;
    qword_1000A59A8 = (__int64)v11;
    __cxa_guard_release(&qword_1000A59B0);
  }
  sub_10002F4A4((_QWORD *)qword_1000A59A8, "object", 0);
  if ( (atomic_load_explicit(v0, memory_order_acquire) & 1) == 0 && __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v12 = operator new(0x80u);
    *(_OWORD *)((char *)v12 + 109) = 0u;
    v12[5] = 0u;
    v12[6] = 0u;
    v12[3] = 0u;
    v12[4] = 0u;
    v12[1] = 0u;
    v12[2] = 0u;
    *v12 = 0u;
    qword_1000A59A8 = (__int64)v12;
    __cxa_guard_release(&qword_1000A59B0);
  }
  sub_10002F4A4((_QWORD *)qword_1000A59A8, "typeinfo", 0);
  if ( (atomic_load_explicit(v0, memory_order_acquire) & 1) == 0 && __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v13 = operator new(0x80u);
    *(_OWORD *)((char *)v13 + 109) = 0u;
    v13[5] = 0u;
    v13[6] = 0u;
    v13[3] = 0u;
    v13[4] = 0u;
    v13[1] = 0u;
    v13[2] = 0u;
    *v13 = 0u;
    qword_1000A59A8 = (__int64)v13;
    __cxa_guard_release(&qword_1000A59B0);
  }
  v6 = sub_10002F4A4((_QWORD *)qword_1000A59A8, "exception", 0);
  if ( off_1000A4A20 )
    ((void (__fastcall *)(char *))off_1000A4A20)(v6);
  if ( byte_1000A58F0 != 1 )
    goto LABEL_36;
  v7 = off_1000A4A60();
  v8 = sub_100045ADC(v7, v17, 1024, "idc.idc", nullptr, 0);
  if ( !v8 )
    goto LABEL_36;
  v14 = nullptr;
  v15 = 0;
  v16 = 0;
  v9 = compile_idc_file((__int64)v8, (__int64)&v14, 0);
  if ( (v9 & 1) != 0 )
    v3[3] = sub_100040934(v3[4]);
  else
    sub_10000F540();
  if ( v14 )
  {
    v15 = 0;
    qfree(v14);
  }
  if ( v9 )
  {
LABEL_36:
    if ( (unsigned int)install_extlang((__int64)qword_1000A4A68) )
    {
      if ( under_debugger != 1 )
        goto LABEL_33;
      while ( 1 )
      {
LABEL_32:
        __break(1u);
LABEL_33:
        interr(1447);
      }
    }
  }
}
// 10002FCBC: variable 'v0' is possibly undefined
// 1000A4A00: using guessed type __int64 qword_1000A4A00;
// 1000A4A08: using guessed type char **off_1000A4A08;
// 1000A4A20: using guessed type _UNKNOWN *off_1000A4A20;
// 1000A4A60: using guessed type __int128 *(*off_1000A4A60)();
// 1000A4A68: using guessed type __int64 qword_1000A4A68[2];
// 1000A57B8: using guessed type __int64 qword_1000A57B8;
// 1000A57C0: using guessed type __int64 qword_1000A57C0;
// 1000A58F0: using guessed type char byte_1000A58F0;
// 1000A590D: using guessed type char under_debugger;
// 1000A59A8: using guessed type __int64 qword_1000A59A8;
// 1000A59B0: using guessed type __int64 qword_1000A59B0;
