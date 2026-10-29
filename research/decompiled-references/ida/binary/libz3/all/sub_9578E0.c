__int64 __fastcall sub_9578E0(void (***ptr)(void))
{
  __int64 result; // rax

  if ( ptr )
  {
    (**ptr)();
    return sub_186B220(ptr);
  }
  return result;
}

