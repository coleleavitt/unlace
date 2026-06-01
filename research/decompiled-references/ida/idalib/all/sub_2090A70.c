__int64 __fastcall sub_2090A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v4; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // rsi
  int v10; // edx

  result = a1;
  if ( a3 )
  {
    v4 = (_QWORD *)(a2 + 8);
    v5 = (_QWORD *)(a2 + 8 * a3);
    v6 = a1;
    if ( (_QWORD *)(a2 + 8) != v5 )
    {
      do
      {
        v7 = *(unsigned __int8 *)(v6 + 8);
        v8 = *v4;
        if ( (_BYTE)v7 == 15 )
        {
          if ( !(unsigned __int8)sub_20C32A0(v6, *v4) )
            return 0;
          v6 = sub_20C3270(v6, v8);
        }
        else
        {
          v9 = *(_QWORD *)(v8 + 8);
          v10 = *(unsigned __int8 *)(v9 + 8);
          if ( (unsigned int)(v10 - 17) <= 1 )
            LOBYTE(v10) = *(_BYTE *)(**(_QWORD **)(v9 + 16) + 8LL);
          if ( (_BYTE)v10 != 12 || (_BYTE)v7 != 16 && (unsigned int)(v7 - 17) > 1 )
            return 0;
          v6 = *(_QWORD *)(v6 + 24);
        }
        if ( !v6 )
          return 0;
        ++v4;
      }
      while ( v5 != v4 );
      return v6;
    }
  }
  return result;
}
