char __fastcall sub_1D36660(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  char v4; // di
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  char v8; // si
  char result; // al
  unsigned __int64 v10; // rsi

  v2 = *(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL];
  v3 = 0;
  if ( (v2 & 8) != 0 )
    v3 = *(__int64 *)((char *)&qword_18 + (v2 & 0xFFFFFFFFFFFFFFF0LL));
  v4 = v2 | a1;
  v5 = 0;
  v6 = v3 | v4 & 7;
  v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v7 & 8) != 0 )
    v5 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
  v8 = v7 | a2;
  result = 0;
  v10 = v5 | v8 & 7;
  if ( v10 != v6 )
  {
    if ( ((v10 >> 4) & 3) == ((v6 >> 4) & 3) || (result = 1, (v6 & 0x30) == 0) )
    {
      if ( (unsigned int)v10 >> 9 == (unsigned int)v6 >> 9 || (result = 1, (v6 & 0xFFFFFE00) == 0) )
      {
        if ( ((v10 >> 6) & 7) == ((v6 >> 6) & 7) )
          return ((unsigned __int8)v6 & (unsigned __int8)~(v10 & 7) & 7) != 0;
        result = 1;
        if ( (v6 & 0x1C0) == 0 )
          return ((unsigned __int8)v6 & (unsigned __int8)~(v10 & 7) & 7) != 0;
      }
    }
  }
  return result;
}
