/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EC50
// Address: 0x000000000006EC50

//----- (000000000006EC50) ----------------------------------------------------
unsigned __int64 __fastcall sub_6EC50(double a1, __m128 a2)
{
  __int64 v2; // rbx
  void *lexer; // rax
  __int64 *v4; // rax
  char *v5; // rax
  int v6; // ebx
  void *v7; // rsi
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  _OWORD *v11; // rax
  _OWORD *v12; // rax
  void *ptr[2]; // [rsp+0h] [rbp-1038h] BYREF
  __int64 v14; // [rsp+10h] [rbp-1028h]
  char v15[4096]; // [rsp+20h] [rbp-1018h] BYREF
  unsigned __int64 v16; // [rsp+1020h] [rbp-18h]

  v16 = __readfsqword(0x28u);
  qatexit((__int64)sub_6F080);
  qword_1557E8 = qmutex_create();
  qword_1557C0 = (__int64)qmutex_create();
  if ( !qword_1557C0 || !qword_1557E8 )
  {
    if ( !(_BYTE)under_debugger )
      interr(486);
LABEL_34:
    BUG();
  }
  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
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
    qword_155820 = (__int64)v9;
    _cxa_guard_release(&byte_155828);
  }
  v2 = qword_155820;
  lexer = create_lexer(nullptr, 0, 0, 0);
  *(_QWORD *)(v2 + 32) = lexer;
  sub_8B630((__int64)lexer, (__int64)sub_60DC0);
  *(__m128i *)(v2 + 40) = _mm_shuffle_epi32(_mm_loadu_si128((const __m128i *)&off_154A20), 78);
  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
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
    qword_155820 = (__int64)v10;
    _cxa_guard_release(&byte_155828);
  }
  sub_6D7B0(qword_155820, "object", 0);
  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
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
    qword_155820 = (__int64)v11;
    _cxa_guard_release(&byte_155828);
  }
  sub_6D7B0(qword_155820, "typeinfo", 0);
  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
  {
    v12 = operator new(0x80u);
    *(_OWORD *)((char *)v12 + 109) = 0;
    v12[6] = 0;
    v12[5] = 0;
    v12[4] = 0;
    v12[3] = 0;
    v12[2] = 0;
    v12[1] = 0;
    *v12 = 0;
    qword_155820 = (__int64)v12;
    _cxa_guard_release(&byte_155828);
  }
  sub_6D7B0(qword_155820, "exception", 0);
  if ( qword_154A40[0] )
    ((void (*)(void))qword_154A40[0])();
  if ( !(_BYTE)qword_156AA8 )
    goto LABEL_37;
  v4 = (__int64 *)off_154A80();
  v5 = sub_8A9B0(v4, v15, 4096, (__int64)"idc.idc", nullptr, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_OWORD *)ptr = 0;
  v14 = 0;
  if ( (unsigned __int8)compile_idc_file((__int64)v5, (__int64)ptr, 0, 0.0, a2) )
  {
    *(_QWORD *)(v2 + 24) = sub_83ED0(*(_QWORD *)(v2 + 32));
    v6 = 0;
  }
  else
  {
    v7 = ptr[1] ? ptr[0] : (void *)s1;
    v6 = 1;
    sub_4FCD0((int)"%s", v7);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v14 = 0;
  }
  if ( !v6 )
  {
LABEL_37:
    if ( (unsigned int)install_extlang((__int64)qword_154A88) )
    {
      if ( !(_BYTE)under_debugger )
        interr(1447);
      goto LABEL_34;
    }
  }
  return __readfsqword(0x28u);
}
// 154A20: using guessed type int *off_154A20;
// 154A40: using guessed type __int64 qword_154A40[4];
// 154A80: using guessed type __int128 *(*off_154A80)();
// 154A88: using guessed type __int64 qword_154A88[2];
// 1557C0: using guessed type __int64 qword_1557C0;
// 155820: using guessed type __int64 qword_155820;
// 156AA8: using guessed type __int64 qword_156AA8;
// 158B40: using guessed type __int64 under_debugger;
