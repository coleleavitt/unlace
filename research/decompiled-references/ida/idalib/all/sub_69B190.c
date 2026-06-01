unsigned __int64 __fastcall sub_69B190(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // r12
  _QWORD *v6; // rdi

  result = *(unsigned __int8 *)(a2 + 97);
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 )
    {
      if ( v3 == 1 && (_BYTE)result == 1 && !*(_QWORD *)(a2 + 32) )
      {
        result = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(result + 4) != 13 )
          return sub_69A540((_QWORD *)a2, 1);
      }
      else
      {
        sub_69A540((_QWORD *)a2, 0);
        result = *(unsigned __int8 *)(a2 + 97);
        if ( (_BYTE)result == 2 )
        {
          result = *(_QWORD *)(a2 + 32);
          if ( (int)result > 0 )
          {
            v4 = 0;
            v5 = 56 * ((unsigned int)(result - 1) + 1LL);
            do
            {
              v6 = (_QWORD *)(v4 + *(_QWORD *)(a2 + 24));
              v4 += 56;
              result = sub_69A540(v6, 0);
            }
            while ( v4 != v5 );
          }
        }
        else if ( (_BYTE)result == 1 )
        {
          sub_69A540((_QWORD *)(a2 + 24), 0);
          return sub_69A540((_QWORD *)(a2 + 64), 0);
        }
      }
    }
  }
  return result;
}
