/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55370
// Address: 0x00055370

//----- (00055370) --------------------------------------------------------
unsigned int sub_55370()
{
  _DWORD *v0; // esi
  void *lexer; // eax
  int *v2; // eax
  char *v3; // eax
  int v4; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  void *v10; // [esp+28h] [ebp-1024h] BYREF
  int v11; // [esp+2Ch] [ebp-1020h]
  int v12; // [esp+30h] [ebp-101Ch]
  int v13[1029]; // [esp+38h] [ebp-1014h] BYREF

  v13[1024] = __readgsdword(0x14u);
  qatexit((int)sub_55960);
  dword_13BD5C = (int)qmutex_create();
  dword_13BD48 = (int)qmutex_create();
  if ( !dword_13BD48 || !dword_13BD5C )
  {
    if ( !(_BYTE)under_debugger )
      interr(486);
LABEL_31:
    BUG();
  }
  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v6 = operator new(0x48u);
    v6[1] = 0;
    *v6 = 0;
    v6[3] = 0;
    v6[2] = 0;
    v6[5] = 0;
    v6[4] = 0;
    v6[7] = 0;
    v6[6] = 0;
    v6[9] = 0;
    v6[8] = 0;
    v6[11] = 0;
    v6[10] = 0;
    v6[13] = 0;
    v6[12] = 0;
    v6[15] = 0;
    v6[14] = 0;
    *(_DWORD *)((char *)v6 + 65) = 0;
    *(_DWORD *)((char *)v6 + 61) = 0;
    dword_13BD78 = (int)v6;
    _cxa_guard_release((__guard *)&byte_13BD7C);
  }
  v0 = (_DWORD *)dword_13BD78;
  lexer = create_lexer(nullptr, 0, 0, 0);
  v0[4] = lexer;
  sub_74F50((int)lexer, (int)sub_46590);
  v0[6] = off_13B614;
  v0[5] = off_13B618;
  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v7 = operator new(0x48u);
    v7[1] = 0;
    *v7 = 0;
    v7[3] = 0;
    v7[2] = 0;
    v7[5] = 0;
    v7[4] = 0;
    v7[7] = 0;
    v7[6] = 0;
    v7[9] = 0;
    v7[8] = 0;
    v7[11] = 0;
    v7[10] = 0;
    v7[13] = 0;
    v7[12] = 0;
    v7[15] = 0;
    v7[14] = 0;
    *(_DWORD *)((char *)v7 + 65) = 0;
    *(_DWORD *)((char *)v7 + 61) = 0;
    dword_13BD78 = (int)v7;
    _cxa_guard_release((__guard *)&byte_13BD7C);
  }
  sub_53CB0((_DWORD *)dword_13BD78, "object", 0);
  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v8 = operator new(0x48u);
    v8[1] = 0;
    *v8 = 0;
    v8[3] = 0;
    v8[2] = 0;
    v8[5] = 0;
    v8[4] = 0;
    v8[7] = 0;
    v8[6] = 0;
    v8[9] = 0;
    v8[8] = 0;
    v8[11] = 0;
    v8[10] = 0;
    v8[13] = 0;
    v8[12] = 0;
    v8[15] = 0;
    v8[14] = 0;
    *(_DWORD *)((char *)v8 + 65) = 0;
    *(_DWORD *)((char *)v8 + 61) = 0;
    dword_13BD78 = (int)v8;
    _cxa_guard_release((__guard *)&byte_13BD7C);
  }
  sub_53CB0((_DWORD *)dword_13BD78, "typeinfo", 0);
  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v9 = operator new(0x48u);
    v9[1] = 0;
    *v9 = 0;
    v9[3] = 0;
    v9[2] = 0;
    v9[5] = 0;
    v9[4] = 0;
    v9[7] = 0;
    v9[6] = 0;
    v9[9] = 0;
    v9[8] = 0;
    v9[11] = 0;
    v9[10] = 0;
    v9[13] = 0;
    v9[12] = 0;
    v9[15] = 0;
    v9[14] = 0;
    *(_DWORD *)((char *)v9 + 65) = 0;
    *(_DWORD *)((char *)v9 + 61) = 0;
    dword_13BD78 = (int)v9;
    _cxa_guard_release((__guard *)&byte_13BD7C);
  }
  sub_53CB0((_DWORD *)dword_13BD78, "exception", 0);
  if ( dword_13B624[0] )
    ((void (*)(void))dword_13B624[0])();
  if ( !(_BYTE)dword_13C2FC )
    goto LABEL_34;
  v2 = (int *)off_13B64C();
  v3 = sub_742B0(v2, (char *)v13, 4096, (int)"idc.idc", nullptr, 0);
  if ( !v3 )
    goto LABEL_34;
  v10 = nullptr;
  v11 = 0;
  v12 = 0;
  if ( (unsigned __int8)compile_idc_file(v3, (int)&v10, 0) )
  {
    v0[3] = sub_6C580(v0[4]);
    v4 = 0;
  }
  else
  {
    v4 = 1;
    sub_333F0();
  }
  if ( v10 )
  {
    v11 = 0;
    qfree(v10);
    v10 = nullptr;
    v12 = 0;
  }
  if ( !v4 )
  {
LABEL_34:
    if ( install_extlang((int)dword_13B650) )
    {
      if ( !(_BYTE)under_debugger )
        interr(1447);
      goto LABEL_31;
    }
  }
  return __readgsdword(0x14u);
}
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
// 13B624: using guessed type int dword_13B624[4];
// 13B64C: using guessed type int (*off_13B64C)();
// 13B650: using guessed type int dword_13B650[3];
// 13BD48: using guessed type int dword_13BD48;
// 13BD5C: using guessed type int dword_13BD5C;
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
// 13C2FC: using guessed type int dword_13C2FC;
// 13E34C: using guessed type int under_debugger;
