__int64 __fastcall sub_32E840(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // rax

  result = is_numop(*((_QWORD *)&xmmword_8CC820 + 1), a1);
  if ( !(_BYTE)result )
  {
    result = is_enum(*((_QWORD *)&xmmword_8CC820 + 1), a1);
    if ( !(_BYTE)result )
    {
      result = is_stroff(*((_QWORD *)&xmmword_8CC820 + 1), a1);
      if ( !(_BYTE)result )
      {
        result = is_char(*((_QWORD *)&xmmword_8CC820 + 1), a1);
        if ( !(_BYTE)result )
        {
          v2 = xmmword_8CC810;
          v3 = num_flag();
          return set_op_type(v2, v3, a1);
        }
      }
    }
  }
  return result;
}
