__int64 __fastcall clang_Type_hasOwnVFPtr(
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
  __int64 v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rdi
  int v12; // eax

  if ( !a7 )
    return 0;
  if ( !a9 )
    BUG();
  v9 = *(_QWORD *)(*(_QWORD *)(a9 + 8) + 80LL);
  v10 = (__int64 *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v12 == 42 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v11 + 16) - 42) <= 1u )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( v12 == 43 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 42 <= 1 )
      goto LABEL_12;
LABEL_11:
    v11 = sub_B0D320(v11);
    if ( !v11 )
    {
LABEL_16:
      v11 = *v10;
      goto LABEL_5;
    }
LABEL_12:
    while ( (*(_BYTE *)(v11 + 18) & 0x10) != 0 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 42 <= 1 )
          break;
        v11 = sub_B0D320(v11);
        if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
          goto LABEL_15;
      }
    }
LABEL_15:
    v10 = (__int64 *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_16;
  }
LABEL_5:
  if ( (*(_BYTE *)(v11 + 17) & 4) == 0
    && ((unsigned int)*(unsigned __int8 *)(v11 + 16) - 16 > 1 || (*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF8LL) > 0xF) )
  {
    return (unsigned __int8)sub_6BF2A0(v9);
  }
  return 0;
}

