char *__fastcall sub_8E6310(void *a1, const void *a2, char *a3, __int64 a4)
{
  char *result; // rax

  if ( (unsigned int)(*(_DWORD *)(a4 + 24) - 1) > 1 )
    return (char *)memcpy(a1, a2, 4LL * (_QWORD)a3);
  result = nullptr;
  if ( a3 )
  {
    do
    {
      *((_DWORD *)a1 + (_QWORD)result) = *((_DWORD *)a2 + (_QWORD)result) >> 8;
      ++result;
    }
    while ( a3 != result );
  }
  return result;
}

