unsigned __int64 __fastcall sub_6C3BC0(_QWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx

  result = a2;
  v5 = a2 & 7;
  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)&byte_8[(v5 | *(_QWORD *)(v6 + 8)) & 0xFFFFFFFFFFFFFFF0LL];
  v8 = 0;
  if ( (v7 & 8) != 0 )
    v8 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
  if ( a3 != (unsigned int)(v8 >> 9) )
  {
    if ( (result & 8) != 0 )
      return sub_6C3980(
               a1,
               *(_QWORD *)v6,
               (*(_DWORD *)(v6 + 24) | (unsigned int)v5) & 0x1FF | (unsigned __int64)(unsigned int)(a3 << 9));
    else
      return sub_6C3980(a1, v6, v5 | (unsigned int)(a3 << 9));
  }
  return result;
}

