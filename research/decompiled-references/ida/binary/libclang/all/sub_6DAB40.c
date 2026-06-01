unsigned __int64 __fastcall sub_6DAB40(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax

  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 41 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
      return a2;
    v6 = sub_B0D320(v6);
    if ( !v6 )
      return a2;
  }
  v7 = *(_QWORD *)(v6 + 32);
  v8 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v8 & 8) == 0
    || (unsigned int)((*(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL))
                     | (unsigned __int64)(((unsigned __int8)v7 | (unsigned __int8)v8) & 7)) >> 9)
     - 16 > 2 )
  {
    return a2;
  }
  v9 = sub_6DA9D0(a1, v7, v8 & 0xFFFFFFFFFFFFFFF0LL, a4);
  return sub_6C4160((__int64)a1, v9);
}

