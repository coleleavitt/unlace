void __fastcall sub_20BF220(__int64 a1, int *a2)
{
  int v2; // ebx

  v2 = *a2;
  if ( !(_BYTE)byte_2CFDA38 && __cxa_guard_acquire(&byte_2CFDA38) )
  {
    __cxa_atexit(nullsub_1297, &off_2C8EF10, &off_2B25620);
    __cxa_guard_release(&byte_2CFDA38);
  }
  dword_2C8EF18 = v2;
  dword_2C8EF1C = 0;
}
