__int64 __fastcall sub_846AC0(__int64 a1)
{
  void (__fastcall ***v1)(_QWORD); // rbx
  __int64 result; // rax

  v1 = *(void (__fastcall ****)(_QWORD))(a1 + 8);
  if ( v1 )
  {
    (**v1)(*(_QWORD *)(a1 + 8));
    return sub_186B220(v1);
  }
  return result;
}

