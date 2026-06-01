__int64 __fastcall sub_41CD50(_DWORD *ptr)
{
  __int64 result; // rax

  if ( (*ptr)-- == 1 )
  {
    sub_41CB00(ptr);
    return sub_186B220(ptr);
  }
  return result;
}

