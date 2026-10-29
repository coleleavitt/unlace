__int64 __fastcall sub_F04E60(_QWORD *a1)
{
  __int64 result; // rax

  result = 0;
  if ( (*a1 & 0x1000LL) != 0 )
    return a1[((*a1 & 0x4000) != 0) + 4 + (unsigned int)((*a1 & 0x2000) != 0)];
  return result;
}
