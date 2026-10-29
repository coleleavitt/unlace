void __fastcall close_linput(void *a1)
{
  __int64 v2; // rdi

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 1);
    if ( *(int *)a1 <= 1 )
    {
      qfclose(v2);
      operator delete(a1, 0x38u);
    }
    else
    {
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      qfree(*((void **)a1 + 5));
      qfree(*((void **)a1 + 4));
      operator delete(a1, 0x38u);
    }
  }
}
