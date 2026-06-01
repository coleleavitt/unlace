__int64 __fastcall std::string::_M_set_length(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  a1[1] = a2;
  *(_BYTE *)(result + a2) = 0;
  return result;
}

