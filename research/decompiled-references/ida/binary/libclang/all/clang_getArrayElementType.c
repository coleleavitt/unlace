__int64 __fastcall clang_getArrayElementType(
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
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int8 v11; // dl

  v9 = 0;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v10 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v10 )
    {
      v11 = *(_BYTE *)(v10 + 16);
      if ( v11 == 5 )
        goto LABEL_7;
      if ( v11 > 5u )
      {
        if ( v11 != 6 )
          goto LABEL_8;
        goto LABEL_7;
      }
      if ( v11 == 2 || v11 == 4 )
LABEL_7:
        v9 = *(_QWORD *)(v10 + 32);
    }
  }
LABEL_8:
  sub_690DD0(a1, v9, a9);
  return a1;
}

