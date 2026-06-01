void __fastcall sub_92380(void *a1)
{
  __int64 v2; // rdi

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 1);
    if ( *(int *)a1 <= 1 )
    {
      sub_959E0(v2);
      operator delete(a1, 0x38u);
    }
    else
    {
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      j__free(*((void **)a1 + 5));
      j__free(*((void **)a1 + 4));
      operator delete(a1, 0x38u);
    }
  }
}

