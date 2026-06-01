__int64 __fastcall clang_Type_isTransparentTagTypedef(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi

  result = 0;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v9 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 16) == 52 )
      {
        v10 = *(_QWORD *)(v9 + 32);
        if ( v10 )
        {
          if ( (*(_QWORD *)(v10 + 80) & 3) != 0 )
            LOBYTE(result) = (*(_QWORD *)(v10 + 80) & 2LL) != 0;
          else
            LOBYTE(result) = sub_784D70();
          return (unsigned __int8)result;
        }
      }
    }
  }
  return result;
}

