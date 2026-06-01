unsigned __int64 __fastcall sub_CCBBF0(_QWORD *a1)
{
  unsigned __int64 result; // rax

  result = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*a1 & 2) != 0 )
    return *a1 & 0xFFFFFFFFFFFFFFF8LL | 4;
  return result;
}

