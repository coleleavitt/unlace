_QWORD *__fastcall sub_F3F500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax

  result = sub_F3F480(a1, a2, a3, a4, a5, a6);
  if ( result )
  {
    if ( (*((_BYTE *)result + 28) & 0x7Fu) - 58 >= 4 )
      return nullptr;
  }
  return result;
}

