__int64 __fastcall sub_1A86570(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)a1 + 3032LL);
  if ( !result )
    result = *(_QWORD *)(*(_QWORD *)a1 + 544LL);
  if ( (*(_BYTE *)(result + 8) & 0x7F) == 0x17 )
  {
    if ( result == 48 )
    {
      return 48;
    }
    else
    {
      result = *(_QWORD *)(result + 40);
      if ( result )
        result += 48;
    }
  }
  return result;
}
