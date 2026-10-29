__int64 __fastcall sub_41D2B0(void *ptr)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( (*(_DWORD *)ptr)-- == 1 )
  {
    sub_3FCDD0(*((_QWORD *)ptr + 6), *((_QWORD *)ptr + 7));
    sub_41D1C0((void ***)ptr + 5);
    v3 = *((_QWORD *)ptr + 3);
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    sub_3FCDF0(*((_QWORD *)ptr + 1), *((_QWORD *)ptr + 2));
    return sub_186B220(ptr);
  }
  return result;
}

