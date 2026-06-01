bool __fastcall sub_4EC900(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdi
  bool result; // al

  v3 = *(_QWORD *)(a1 + 24);
  result = 0;
  if ( v3 )
  {
    if ( a2 )
      return sub_4EF930(v3, *a2) != **(_QWORD **)(a1 + 24) + 16LL * *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  }
  return result;
}

