void __fastcall sub_4D9060(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  if ( v3 )
  {
    a1[1] = 0;
    qfree(v3, a2);
  }
  *((_DWORD *)a1 + 11) = 80;
  *((_OWORD *)a1 + 1) = 0;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)((char *)a1 + 28) = 0;
}
