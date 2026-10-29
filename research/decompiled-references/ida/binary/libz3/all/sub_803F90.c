__int64 __fastcall sub_803F90(__int64 a1, __int64 a2, double a3)
{
  if ( *(_DWORD *)(a1 + 56) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 48) + 512LL))(a1 - 48);
    while ( (*(_DWORD *)(a1 + 56))-- != 1 );
  }
  return sub_7E6250((_QWORD *)a1, *(_QWORD *)(a1 + 80), a2, 0, 0, a3);
}

