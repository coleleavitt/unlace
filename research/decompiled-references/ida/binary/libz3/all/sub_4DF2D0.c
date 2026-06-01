_QWORD *__fastcall sub_4DF2D0(__int64 a1, unsigned int a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 8);
  if ( result && a2 < *((_DWORD *)result - 1) )
  {
    if ( result[a2] )
      return sub_4DF0F0(a1, a2, nullptr);
  }
  return result;
}

