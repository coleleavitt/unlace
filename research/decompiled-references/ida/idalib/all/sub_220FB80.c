__int64 __fastcall sub_220FB80(__int64 a1)
{
  __int64 result; // rax

  if ( !(_BYTE)byte_2D0A678 && __cxa_guard_acquire(&byte_2D0A678) )
    __cxa_guard_release(&byte_2D0A678);
  result = (unsigned int)_InterlockedExchangeAdd(&dword_2D0A680, 1u);
  if ( (unsigned int)result <= 0xF )
  {
    result = (unsigned int)result;
    qword_2D0A6A0[(unsigned int)result] = a1;
  }
  return result;
}
