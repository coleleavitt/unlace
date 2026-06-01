__int64 __fastcall clang_getTypeDeclaration(
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
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-10h] BYREF

  if ( !a7 )
    goto LABEL_6;
  v10 = a8;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    goto LABEL_6;
  while ( 2 )
  {
    v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    if ( !v11 )
    {
LABEL_6:
      sub_638F50(a1, 71, 0);
      return a1;
    }
LABEL_4:
    switch ( *(_BYTE *)(v11 + 16) )
    {
      case 0x10:
      case 0x11:
        v10 = *(_QWORD *)(v11 + 24);
        if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
          goto LABEL_6;
        continue;
      case 0x18:
        v16 = *(_QWORD *)(v11 + 40);
        goto LABEL_21;
      case 0x1C:
        v15 = sub_B14EC0(v11);
        goto LABEL_14;
      case 0x22:
        goto LABEL_11;
      case 0x23:
        goto LABEL_13;
      case 0x2D:
        if ( (*(_BYTE *)(v11 + 18) & 8) != 0 )
          v16 = *(_QWORD *)(v11 + 48);
        else
          v16 = *(_QWORD *)(v11 + 8);
LABEL_21:
        v11 = 0;
        if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
          v11 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_4;
      case 0x2E:
      case 0x2F:
        goto LABEL_18;
      case 0x30:
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_18:
          v15 = sub_B14A40(v11);
        }
        else
        {
          v17 = *(_QWORD *)(v11 + 32);
          v15 = sub_B03A00(&v17, 0);
        }
        goto LABEL_14;
      case 0x34:
        v15 = *(_QWORD *)(v11 + 32);
        goto LABEL_14;
      default:
        goto LABEL_6;
    }
  }
  do
  {
LABEL_11:
    v11 = *(_QWORD *)(*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(unsigned __int8 *)(v11 + 16);
    if ( (unsigned int)(v14 - 34) > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
        goto LABEL_6;
      v13 = sub_B0D320(v11);
      v11 = v13;
      if ( !v13 )
        goto LABEL_6;
      LOBYTE(v14) = *(_BYTE *)(v13 + 16);
    }
  }
  while ( (_BYTE)v14 != 35 );
LABEL_13:
  v15 = sub_B07AF0(v11);
LABEL_14:
  if ( !v15 )
    goto LABEL_6;
  sub_639160(a1, v15, a9, 0, 1u);
  return a1;
}

