__int64 __fastcall clang_Type_getTemplateSpecializationDecl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  char v9; // al
  _BYTE *v10; // rbp
  char v11; // r9
  __int64 v12; // r14
  _BOOL4 v13; // r13d
  unsigned int v14; // eax
  _BYTE *v16; // [rsp+8h] [rbp-30h] BYREF

  v16 = nullptr;
  v9 = sub_B19120(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), &v16);
  v10 = v16;
  if ( v9 )
  {
    if ( !v16 )
      goto LABEL_9;
    if ( ((v16[28] + 71) & 0x7Fu) > 2 )
      goto LABEL_9;
    if ( (unsigned __int8)sub_79B8A0(v16 + 64) )
      goto LABEL_9;
    if ( (v10[28] & 0x7Fu) - 58 > 1 )
      goto LABEL_9;
    v11 = v10[180];
    if ( (v11 & 7) != 0 )
      goto LABEL_9;
    if ( !a9 )
      BUG();
    v12 = *(_QWORD *)(*(_QWORD *)(a9 + 8) + 232LL);
    v13 = (v11 & 8) != 0;
    v14 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( (unsigned __int8)sub_1C16400(v12, v14, v10, 1, 0, v13) )
      goto LABEL_9;
  }
  else if ( !v16 )
  {
LABEL_9:
    sub_638F50(a1, 71, 0);
    return a1;
  }
  sub_639160(a1, (__int64)v10, a9, 0, 1u);
  return a1;
}

