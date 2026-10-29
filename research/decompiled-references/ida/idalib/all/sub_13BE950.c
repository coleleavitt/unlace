const char *__fastcall sub_13BE950(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(**(_QWORD **)a1 + 16LL);
  if ( (char *)v1 == (char *)sub_FC62B0 )
    return "Unknown buffer";
  else
    return (const char *)v1();
}
