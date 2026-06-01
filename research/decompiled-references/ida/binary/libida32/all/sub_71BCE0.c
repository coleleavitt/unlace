__int64 __fastcall sub_71BCE0(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rax

  if ( !*(_QWORD *)(a1 + 8) || (unsigned __int8)sub_71BBD0((unsigned int *)a1) )
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
    dword_2CA2738 = 2;
    qword_2CA2730(2, 0);
  }
  return 0;
}

