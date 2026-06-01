const char *__fastcall sub_971A10(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 7) != 0 )
    return &byte_22CD811;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 )
    return &byte_22CD811;
  else
    return (const char *)(*(_QWORD *)(v2 + 16) + 16LL);
}

