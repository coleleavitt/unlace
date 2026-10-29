char __fastcall sub_81B6B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char result; // al

  v2 = a1 - 48;
  if ( *(_DWORD *)(a1 + 56) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 48) + 512LL))(v2);
    while ( (*(_DWORD *)(a1 + 56))-- != 1 );
  }
  result = sub_7E5030(v2, a2);
  if ( !result )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 48) + 528LL))(v2, a2);
  return result;
}

