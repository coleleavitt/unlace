__int64 __fastcall sub_7DAB40(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  return sub_7E6250((int)a1 + 48, *(_QWORD *)(a1 + 72), a2, 0, 0, a6);
}

