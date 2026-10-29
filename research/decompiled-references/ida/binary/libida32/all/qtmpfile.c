FILE *__fastcall qtmpfile(__int64 a1, __int64 a2)
{
  FILE *result; // rax

  result = tmpfile64();
  if ( !result )
  {
    set_qerrno(1, a2);
    return nullptr;
  }
  return result;
}

