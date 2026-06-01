__int64 __fastcall sub_B15570(_QWORD *ptr)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( ptr )
  {
    v2 = ptr[1];
    if ( v2 )
      sub_186B220((void *)(v2 - 8));
    return sub_186B220(ptr);
  }
  return result;
}

