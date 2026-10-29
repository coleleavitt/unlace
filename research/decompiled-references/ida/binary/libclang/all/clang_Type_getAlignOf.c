__int64 __fastcall clang_Type_getAlignOf(
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
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  int v13; // edx
  __int64 result; // rax
  char v15; // dl

  if ( !a7 )
    return -1;
  if ( !a9 )
    BUG();
  v9 = a8;
  v10 = *(_QWORD *)(*(_QWORD *)(a9 + 8) + 80LL);
  v11 = a8 & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v13 == 42 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v12 + 16) - 42) <= 1u )
      goto LABEL_12;
    goto LABEL_20;
  }
  if ( v13 == 43 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 42 <= 1 )
    {
LABEL_12:
      while ( (*(_BYTE *)(v12 + 18) & 0x10) != 0 )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 42 <= 1 )
            break;
          v12 = sub_B0D320(v12);
          if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
            goto LABEL_15;
        }
      }
LABEL_15:
      v9 = *(_QWORD *)(v12 + 32);
      v11 = v9 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_16:
      v12 = *(_QWORD *)v11;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
        goto LABEL_6;
      goto LABEL_17;
    }
LABEL_20:
    v12 = sub_B0D320(v12);
    if ( !v12 )
      goto LABEL_16;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
    goto LABEL_6;
LABEL_17:
  v15 = sub_B19120(v12, 0);
  result = -2;
  if ( v15 )
    return result;
  v12 = *(_QWORD *)v11;
LABEL_6:
  if ( (*(_BYTE *)(v12 + 17) & 4) != 0 )
    return -3;
  if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 16 <= 1 && (*(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return -6;
  return sub_70CFF0(v10, v9);
}

