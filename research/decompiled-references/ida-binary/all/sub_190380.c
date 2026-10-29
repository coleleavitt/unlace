unsigned __int64 __fastcall sub_190380(__int64 *a1, char a2)
{
  const char *v3; // rsi
  unsigned int v4; // r12d
  unsigned int v5; // eax
  __int16 v6; // dx
  void *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  void *ptr[4]; // [rsp+0h] [rbp+0h] BYREF
  char *vars20; // [rsp+20h] [rbp+20h] BYREF
  __int128 vars28; // [rsp+28h] [rbp+28h]
  __int64 vars40; // [rsp+40h] [rbp+40h] BYREF
  __int64 vars48; // [rsp+48h] [rbp+48h]
  void *vars60; // [rsp+60h] [rbp+60h] BYREF
  void *vars68; // [rsp+68h] [rbp+68h]
  unsigned __int64 vars78; // [rsp+78h] [rbp+78h]

  vars78 = __readfsqword(0x28u);
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  if ( ((void *)a1[13] != ptr[2]
     || (unsigned __int8)QT::QtPrivate::equalStrings(a1[13], ptr[1], a1[13], a1[12]) != 1
     || a2)
    && ((unsigned __int8)segtype(a1[9]) != 1
     || (unsigned int)sub_1698A0(
                        0,
                        (int)"AUTOHIDE DATABASE\nHIDECANCEL\nYou are going to rename an imported name. Proceed?") == 1) )
  {
    vars28 = 0;
    vars20 = nullptr;
    vars20 = (char *)qvector_reserve(&vars20, 0, 15, 1);
    *(_QWORD *)&vars28 = 15;
    strcpy(vars20, "Rename address");
    v3 = vars20;
    if ( !(_QWORD)vars28 )
      v3 = &s1;
    sub_17DEF0((__int64)&vars40, v3, v3);
    sub_1C7660(vars40, vars48);
    v4 = *((unsigned __int16 *)a1 + 40);
    v5 = word_8CABC0 - v4;
    v6 = *((_WORD *)a1 + 40);
    if ( (int)(v4 - word_8CABC0) >= 0 )
      v5 = v4 - word_8CABC0;
    if ( v5 == 512 )
    {
      set_name(a1[9], &unk_5C2F25, (unsigned __int8)((v6 & 0x200) == 0) << 9);
      v4 = *((unsigned __int16 *)a1 + 40);
      v6 = *((_WORD *)a1 + 40);
    }
    HIBYTE(v6) |= 1u;
    word_8CABC0 = v6;
    QT::QString::toUtf8_helper((QT::QString *)&vars60, (const QT::QString *)ptr);
    v7 = vars68;
    if ( !vars68 )
      v7 = &QT::QByteArray::_empty;
    set_name(a1[9], v7, v4);
    if ( vars60 && !_InterlockedSub((volatile signed __int32 *)vars60, 1u) )
      free(vars60);
    mark_builtin_widgets(-1, -1, 1);
    v8 = *a1;
    *((_BYTE *)a1 + 112) = 0;
    (*(void (__fastcall **)(__int64 *))(v8 + 424))(a1);
    v12 = vars40;
    *((_BYTE *)a1 + 112) = 1;
    if ( v12 )
    {
      vars48 = 0;
      qfree(v12, -1, v9, v10, v11);
    }
    if ( vars20 )
    {
      *(_QWORD *)&vars28 = 0;
      qfree(vars20, -1, v9, v10, v11);
    }
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return vars78 - __readfsqword(0x28u);
}
