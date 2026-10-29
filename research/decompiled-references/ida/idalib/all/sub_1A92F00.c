__int64 __fastcall sub_1A92F00(__int16 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = 2;
  if ( (a1 & 0x430) == 0 )
  {
    result = 3;
    if ( (a1 & 0x200) == 0 )
    {
      result = 1;
      if ( (a1 & 0x800) == 0 )
      {
        result = 0;
        if ( (a1 & 4) != 0 )
          return (unsigned __int8)sub_F6AE00(
                                    *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL),
                                    a2 & 0xFFFFFFFFFFFFFFF0LL,
                                    a3,
                                    a4,
                                    a5);
      }
    }
  }
  return result;
}
