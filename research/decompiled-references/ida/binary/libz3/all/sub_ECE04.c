__int64 __fastcall sub_ECE04(void *ptr)
{
  __int64 result; // rax

  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 8))-- == 1 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
      return sub_186B220(ptr);
    }
  }
  return result;
}

