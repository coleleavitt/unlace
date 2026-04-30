void *__fastcall sub_55D020(__int64 a1, __int64 a2, unsigned int a3)
{
  size_t v4; // rsi
  void *result; // rax

  v4 = a2 * a3;
  if ( *(_QWORD *)a1 )
    result = (void *)off_8C52A8();
  else
    result = off_8C52B8(v4);
  *(_DWORD *)(a1 + 12) = a3;
  *(_QWORD *)a1 = result;
  return result;
}
