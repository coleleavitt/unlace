__int64 sub_179740()
{
  __int64 fchunk; // rdx
  __int64 result; // rax

  fchunk = get_fchunk(xmmword_8CC810);
  result = 7;
  if ( fchunk )
    return (*(_QWORD *)(fchunk + 16) & 0x8000LL) == 0 ? 7 : 3;
  return result;
}
