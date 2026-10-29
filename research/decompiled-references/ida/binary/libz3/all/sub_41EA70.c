__int64 __fastcall sub_41EA70(void (***ptr)(void))
{
  __int64 result; // rax

  if ( ptr )
  {
    (**ptr)();
    return sub_186B220(ptr);
  }
  return result;
}

