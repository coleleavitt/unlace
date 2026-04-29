_BYTE *__fastcall std::string::clear(__int64 a1)
{
  _BYTE *result; // rax

  result = *(_BYTE **)a1;
  *(_QWORD *)(a1 + 8) = 0;
  *result = 0;
  return result;
}
