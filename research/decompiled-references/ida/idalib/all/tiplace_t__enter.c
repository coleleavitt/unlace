__int64 __fastcall tiplace_t__enter(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v1 == (char *)j__tiplace_t__clone )
    return tiplace_t__clone(a1);
  else
    return v1();
}
