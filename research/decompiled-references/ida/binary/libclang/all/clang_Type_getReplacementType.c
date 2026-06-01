__int64 __fastcall clang_Type_getReplacementType(
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
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v14; // rax

  v10 = a9;
  v11 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 45
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 45
    && (v14 = sub_B0D320(v11), v10 = a9, (v11 = v14) != 0) )
  {
    if ( (*(_BYTE *)(v11 + 18) & 8) != 0 )
      v12 = *(_QWORD *)(v11 + 48);
    else
      v12 = *(_QWORD *)(v11 + 8);
  }
  else
  {
    v12 = 0;
  }
  sub_690DD0(a1, v12, v10);
  return a1;
}

