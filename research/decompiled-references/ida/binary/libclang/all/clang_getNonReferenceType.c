__int64 __fastcall clang_getNonReferenceType(
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
  __int64 v10; // rsi
  __int64 v11; // rdi

  v10 = a8;
  v11 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 42 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
    && (v10 = a8, (v11 = sub_B0D320(v11)) != 0) )
  {
    while ( (*(_BYTE *)(v11 + 18) & 0x10) != 0 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 42 <= 1 )
          break;
        v11 = sub_B0D320(v11);
        if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
LABEL_5:
    v10 = *(_QWORD *)(v11 + 32);
  }
  sub_690DD0(a1, v10, a9);
  return a1;
}

