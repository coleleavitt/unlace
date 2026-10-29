__int64 __fastcall sub_CAD170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 **v6; // rbx
  __int64 v7; // rbp
  unsigned __int16 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx

  v6 = (unsigned __int16 **)(a2 + 24);
  v7 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 4) - 8;
  if ( v7 != a2 + 24 )
  {
    do
    {
      v8 = *v6;
      v9 = *(unsigned __int16 *)(a2 + 6);
      v10 = **v6;
      LOWORD(v10) = v10 & 0x1FF;
      if ( (_WORD)v10 == 26 )
      {
        if ( (_WORD)v9 && v8 == *(unsigned __int16 **)(a2 + 8 * v9 + 16) )
          return 0;
        if ( (*(_QWORD *)v8 & 0x80000LL) == 0 )
        {
LABEL_6:
          if ( !(unsigned __int8)sub_CA37C0(a1, (unsigned __int64)v8, v10, a4, a5) )
            return 0;
        }
      }
      else
      {
        if ( !(_WORD)v9 || v8 != *(unsigned __int16 **)(a2 + 8 * v9 + 16) )
          goto LABEL_6;
        if ( !(unsigned __int8)sub_CA89D0(a1, (unsigned __int64)v8, v10, a4, a5) )
          return 0;
      }
      ++v6;
    }
    while ( (unsigned __int16 **)v7 != v6 );
  }
  return 1;
}

