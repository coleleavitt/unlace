__int64 __fastcall sub_85B760(__int64 a1, unsigned int *a2, __m128 a3)
{
  __int64 v3; // rbp

  v3 = a1 - 48;
  if ( *(_DWORD *)(a1 + 56) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 48) + 512LL))(v3);
    while ( (*(_DWORD *)(a1 + 56))-- != 1 );
  }
  if ( !*(_BYTE *)(a1 + 800) )
    sub_855310(v3);
  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 24), a2) )
    return sub_859CE0(v3, a2, a3);
  else
    return sub_85AE70(v3, a2);
}

