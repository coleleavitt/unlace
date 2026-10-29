__int64 __fastcall std::operator!=<MDMemoryDescriptor *>(__int64 a1, __int64 a2)
{
  return (unsigned int)std::operator==<MDMemoryDescriptor *>(a1, a2) ^ 1;
}

