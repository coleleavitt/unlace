__int64 __fastcall sub_7DACD0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  if ( *(_DWORD *)(a1 + 56) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 48) + 512LL))(a1 - 48);
    while ( (*(_DWORD *)(a1 + 56))-- != 1 );
  }
  return sub_7E6250(a1, *(_QWORD *)(a1 + 24), a2, 0, 0, a6);
}

