__int64 __fastcall sub_85AF40(__int64 a1, unsigned int *a2, __m128 a3)
{
  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  if ( !*(_BYTE *)(a1 + 848) )
    sub_855310(a1);
  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 72), a2) )
    return sub_859CE0(a1, a2, a3);
  else
    return sub_85AE70(a1, a2);
}

