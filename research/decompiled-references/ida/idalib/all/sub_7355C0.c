__int64 __fastcall sub_7355C0(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rax

  if ( !*(_QWORD *)(a1 + 8) || (unsigned __int8)sub_7354B0((unsigned int *)a1) )
  {
    v3 = *(void **)(a1 + 4224);
    if ( v3 )
    {
      qfree(v3);
      *(_QWORD *)(a1 + 4224) = 0;
    }
    if ( !a2 )
      return 1;
    v4 = qstrdup(a2);
    *(_QWORD *)(a1 + 4224) = v4;
    if ( v4 )
      return 1;
    dword_2CCC510 = 2;
    qword_2CCC508(2, 0);
  }
  return 0;
}
