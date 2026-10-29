__int64 __fastcall sub_2EB850(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  void (__fastcall ***v3)(_QWORD); // rbx
  void *ptr; // [rsp+8h] [rbp-10h] BYREF

  ptr = a2;
  if ( a2 )
    ++a2[4];
  result = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)(a1 - 80) + 168LL))(a1 - 80, &ptr);
  v3 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 4))-- == 1 )
    {
      (**v3)(v3);
      return sub_186B220(v3);
    }
  }
  return result;
}

