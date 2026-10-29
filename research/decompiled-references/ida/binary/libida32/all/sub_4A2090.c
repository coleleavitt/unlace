__int64 __fastcall sub_4A2090(__int64 *a1, unsigned int a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rsi
  int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v4 = *((_DWORD *)a1 + 6);
  v5 = *a1;
  v9 = __readfsqword(0x28u);
  v8 = v4;
  if ( a2 >= (unsigned int)sub_79B3A0(&v8, v5, 1, 65) )
  {
    if ( !under_debugger )
      interr(1311);
    BUG();
  }
  return sub_79B440(a1 + 3, *a1, a2, a3, 0, 82);
}

