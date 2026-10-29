__int64 __fastcall sub_C13B0(void (__fastcall ***ptr)(_QWORD))
{
  __int64 result; // rax

  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 4))-- == 1 )
    {
      (**ptr)(ptr);
      return sub_186B220(ptr);
    }
  }
  return result;
}

