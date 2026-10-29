__int64 __fastcall sub_5A06D0(void *ptr)
{
  __int64 (*v1)(void); // rdx

  v1 = *(__int64 (**)(void))(*(_QWORD *)ptr + 16LL);
  if ( (char *)v1 != (char *)sub_4C9C10 )
    return v1();
  (**(void (***)(void))ptr)();
  return sub_186B220(ptr);
}

