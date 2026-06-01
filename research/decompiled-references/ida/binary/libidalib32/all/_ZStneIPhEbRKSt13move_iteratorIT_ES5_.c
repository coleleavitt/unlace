__int64 __fastcall std::operator!=<unsigned char *>(__int64 a1, __int64 a2)
{
  return (unsigned int)std::operator==<unsigned char *>(a1, a2) ^ 1;
}

