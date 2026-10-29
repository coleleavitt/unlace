__int64 __fastcall sub_BEA000(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  char v4; // dl

  result = 0;
  if ( a3 != 1 )
  {
    if ( a3 )
    {
      return 1;
    }
    else
    {
      result = 11;
      if ( (*(_BYTE *)(a1 + 1) & 8) != 0 )
      {
        v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL);
        result = 8;
        if ( v4 != 48 )
          return (unsigned __int8)(v4 - 2) < 5u ? 9 : 11;
      }
    }
  }
  return result;
}

