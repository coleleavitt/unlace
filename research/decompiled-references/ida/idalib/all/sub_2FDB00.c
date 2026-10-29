char *__fastcall sub_2FDB00(_QWORD *a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v4; // rbx
  char *result; // rax
  char *v6; // r14

  v4 = a3 - a2;
  if ( (a3 - a2) >> 3 )
  {
    if ( (unsigned __int64)((a3 - a2) >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    result = (char *)operator new(v4);
  }
  else
  {
    result = nullptr;
  }
  v6 = &result[v4];
  *a1 = result;
  a1[2] = &result[v4];
  if ( a3 != a2 )
    result = (char *)memcpy(result, a2, v4);
  a1[1] = v6;
  return result;
}
