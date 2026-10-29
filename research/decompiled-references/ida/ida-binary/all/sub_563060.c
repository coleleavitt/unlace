char *__fastcall sub_563060(__int64 a1, unsigned __int16 a2)
{
  char *result; // rax
  unsigned int v3; // ecx

  result = "ERROR";
  if ( a2 != 0xFFFF )
  {
    result = "_ERROR";
    if ( a2 != 0xFFFE )
    {
      v3 = sub_562BF0(a1);
      result = nullptr;
      if ( a2 < v3 )
        return *(char **)(*(_QWORD *)(a1 + 72) + 8LL * a2);
    }
  }
  return result;
}
