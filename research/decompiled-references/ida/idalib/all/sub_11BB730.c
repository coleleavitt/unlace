__int64 __fastcall sub_11BB730(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( a2 == 9 )
  {
    if ( *(_QWORD *)a1 == 0x2D6672617764672DLL && *(_BYTE *)(a1 + 8) == 50 )
    {
      return 2;
    }
    else if ( *(_QWORD *)a1 == 0x2D6672617764672DLL && *(_BYTE *)(a1 + 8) == 51 )
    {
      return 3;
    }
    else if ( *(_QWORD *)a1 == 0x2D6672617764672DLL && *(_BYTE *)(a1 + 8) == 52 )
    {
      return 4;
    }
    else if ( *(_QWORD *)a1 == 0x2D6672617764672DLL && *(_BYTE *)(a1 + 8) == 53 )
    {
      return 5;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
