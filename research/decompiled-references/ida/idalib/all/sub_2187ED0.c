void __fastcall sub_2187ED0(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 *v3; // rdi
  void *v4; // rdi

  if ( (a1[8] & 1) != 0 )
  {
    v1 = *a1;
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  }
  else
  {
    v3 = (__int64 *)a1[5];
    if ( v3 != a1 + 8 )
      free(v3);
    v4 = (void *)a1[2];
    if ( v4 )
      operator delete(v4);
  }
}
