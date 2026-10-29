__int64 __fastcall sub_41CE10(_QWORD *ptr)
{
  bool v1; // zf
  void (__fastcall ***v3)(void *); // rbp
  _DWORD *v4; // rdi
  __int64 result; // rax

  v1 = (*(_DWORD *)ptr)-- == 1;
  if ( v1 )
  {
    v3 = (void (__fastcall ***)(void *))ptr[11];
    if ( v3 )
    {
      v1 = (*((_DWORD *)v3 + 4))-- == 1;
      if ( v1 )
      {
        (**v3)(v3);
        sub_186B220(v3);
      }
    }
    v4 = (_DWORD *)ptr[10];
    if ( v4 )
      sub_41CD50(v4);
    sub_2B4F40(ptr + 8);
    sub_2B4F40(ptr + 6);
    sub_2334C0(ptr + 4);
    sub_3FCDF0(ptr[2], ptr[3]);
    return sub_186B220(ptr);
  }
  return result;
}

