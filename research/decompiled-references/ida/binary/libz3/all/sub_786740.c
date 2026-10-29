__int64 __fastcall sub_786740(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD); // rbx
  __int64 result; // rax

  v1 = (void (__fastcall ***)(_QWORD))*a1;
  if ( *a1 )
  {
    (**v1)(*a1);
    return sub_186B220(v1);
  }
  return result;
}

