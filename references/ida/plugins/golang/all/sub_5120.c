__int64 __fastcall sub_5120(__int64 a1, char a2)
{
  __int64 result; // rax

  result = validate_name();
  if ( (_BYTE)result )
  {
    if ( a2 )
      return validate_name();
  }
  return result;
}
