__int64 __fastcall sub_4D63E0(void *ptr)
{
  __int64 (*v1)(void); // rdx

  v1 = *(__int64 (**)(void))(*(_QWORD *)ptr + 16LL);
  if ( (char *)v1 != (char *)sub_4C9C30 )
    return v1();
  (**(void (***)(void))ptr)();
  return sub_186B220(ptr);
}

