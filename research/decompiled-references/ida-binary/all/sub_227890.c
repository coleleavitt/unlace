void __fastcall sub_227890(__int64 a1, const char *a2)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v3, a2);
  }
  *(_DWORD *)a1 = -2;
}
