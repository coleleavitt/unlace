char __fastcall lineslist_idaplace_t__::vfunc_0(__int64 a1)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 48) != -1 )
    return *(_QWORD *)(a1 + 48) == (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 128LL))(*(_QWORD *)(a1 + 24));
  result = *(_BYTE *)(a1 + 16);
  if ( result )
    *(_BYTE *)(a1 + 16) = 0;
  return result;
}
