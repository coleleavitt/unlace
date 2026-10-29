bool __fastcall sub_503DF0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  bool result; // al

  v3 = *(_QWORD *)(a1 + 32);
  result = 0;
  if ( v3 )
  {
    if ( a2 )
      return sub_506F10(v3, *a2) != **(_QWORD **)(a1 + 32) + 16LL * *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  }
  return result;
}
